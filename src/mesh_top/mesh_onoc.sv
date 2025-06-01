import packet_pkg::packet_t;

module mesh_onoc #(
    parameter int N = 2, // Mesh size: N x N
    parameter int NUM_ROUTERS = N * N,
    parameter int WG_DELAY = 4,
    parameter int MOD_DELAY = 2,
    parameter int PD_DELAY = 2,
    parameter int FIFO_DEPTH = 4,
    parameter int WIDTH = 32
)(
    input  logic clk,
    input  logic rst,
    output logic ip_valid_to_router [0:NUM_ROUTERS-1],
    output logic [3:0] router_valid_to_ip [0:NUM_ROUTERS-1]
    //output logic [31:0] num_routers_visible
);

    /* verilator lint_off UNUSEDSIGNAL */
    //assign num_routers_visible = NUM_ROUTERS;
    /* verilator lint_on UNUSEDSIGNAL */

    function automatic int get_x(input int id);
        return id % N;
    endfunction

    function automatic int get_y(input int id);
        return id / N;
    endfunction

    // Intermediate photonic signals
    packet_t modulator_to_waveguide [0:NUM_ROUTERS-1][0:3];
    logic    modulator_valid_to_waveguide [0:NUM_ROUTERS-1][0:3];
    packet_t waveguide_to_photodetector [0:NUM_ROUTERS-1][0:3];
    logic    waveguide_valid_to_photodetector [0:NUM_ROUTERS-1][0:3];
    packet_t photodetector_to_router [0:NUM_ROUTERS-1][0:3];
    logic    photodetector_valid_to_router [0:NUM_ROUTERS-1][0:3];
    packet_t router_to_modulator [0:NUM_ROUTERS-1][0:3];
    logic    router_valid_to_modulator [0:NUM_ROUTERS-1][0:3]; // 0:N, 1:S, 2:E, 3:W

    // Intermediate electronic signals - ALL USED, SOME COMMENTED OUT TO EXPOSE TO VERILATOR
    packet_t ip_to_router [0:NUM_ROUTERS-1];
    //logic    ip_valid_to_router [0:NUM_ROUTERS-1];
    packet_t [3:0] router_to_ip [0:NUM_ROUTERS-1];
    //logic    router_valid_to_ip [0:NUM_ROUTERS-1];
    logic    router_ready_for_ip [0:NUM_ROUTERS-1];
    logic [1:0] wg_packet_done   [0:(2*N*(N-1))-1]; //2N(N-1) is number of waveguides
    logic    router_ready_to_receive [0:NUM_ROUTERS-1][0:3];
    logic [3:0]   router_request_to_send  [0:NUM_ROUTERS-1]; 
    logic [3:0] router_granted [NUM_ROUTERS-1:0];

    generate
        for (genvar r = 0; r < N; r++) begin : rows
            for (genvar c = 0; c < N; c++) begin : cols
                localparam int i = r * N + c;

                ip_block #(
                    .WIDTH(WIDTH),
                    .NUM_ROUTERS(NUM_ROUTERS)
                )ip_inst (
                    .clk(clk),
                    .rst(rst),
                    .X(8'(c)),
                    .Y(8'(r)),
                    .packet_out(ip_to_router[i]),
                    .valid_out(ip_valid_to_router[i]),
                    .ready_in(router_ready_for_ip[i]),
                    .data_in(router_to_ip[i]),
                    .valid_in(router_valid_to_ip[i]),
                    .ip_id(16'(i)),
                    .generation_scheme(3'b000)
                );

                mesh_router #(
                    .ROUTER_ID(i),
                    .X(c),
                    .Y(r),
                    .N(N),
                    .FIFO_DEPTH(FIFO_DEPTH)
                ) um_router (
                    .clk(clk),
                    .rst(rst),

                    .data_in_local(ip_to_router[i]),
                    .valid_in_local(ip_valid_to_router[i]),
                    .data_out_local(router_to_ip[i]),
                    .valid_out_local(router_valid_to_ip[i]),
                    .ready_to_receive_local(router_ready_for_ip[i]),

                    .data_in_north(photodetector_to_router[i][0]),
                    .valid_in_north(photodetector_valid_to_router[i][0]),
                    .data_out_north(router_to_modulator[i][0]),
                    .valid_out_north(router_valid_to_modulator[i][0]),
                    .ready_to_receive_north(router_ready_to_receive[i][0]),

                    .data_in_south(photodetector_to_router[i][1]),
                    .valid_in_south(photodetector_valid_to_router[i][1]),
                    .data_out_south(router_to_modulator[i][1]),
                    .valid_out_south(router_valid_to_modulator[i][1]),
                    .ready_to_receive_south(router_ready_to_receive[i][1]),

                    .data_in_east(photodetector_to_router[i][2]),
                    .valid_in_east(photodetector_valid_to_router[i][2]),
                    .data_out_east(router_to_modulator[i][2]),
                    .valid_out_east(router_valid_to_modulator[i][2]),
                    .ready_to_receive_east(router_ready_to_receive[i][2]),

                    .data_in_west(photodetector_to_router[i][3]),
                    .valid_in_west(photodetector_valid_to_router[i][3]),
                    .data_out_west(router_to_modulator[i][3]),
                    .valid_out_west(router_valid_to_modulator[i][3]),
                    .ready_to_receive_west(router_ready_to_receive[i][3]),
                    .permission_granted_send(router_granted[i]),
                    .request_to_send(router_request_to_send[i])
                );

                for (genvar d = 0; d < 4; d++) begin : photonics_per_dir
                    modulator #(
                        .DELAY(MOD_DELAY)
                    ) u_mod (
                        .clk(clk),
                        .rst(rst),
                        .in_data(router_to_modulator[i][d]),
                        .in_valid(router_valid_to_modulator[i][d]),
                        .out_data(modulator_to_waveguide[i][d]),
                        .out_valid(modulator_valid_to_waveguide[i][d]),
                        .mod_id(i),
                        .direction(d)
                    );

                    photodetector #(
                        .DELAY(PD_DELAY)
                       ) u_pd (
                        .clk(clk),
                        .rst(rst),
                        .in_data(waveguide_to_photodetector[i][d]),
                        .in_valid(waveguide_valid_to_photodetector[i][d]),
                        .out_data(photodetector_to_router[i][d]),
                        .out_valid(photodetector_valid_to_router[i][d]),
                        .router(i),
                        .direction(d)
                    );
                end

                //assign router_sent[i] = |router_valid_to_modulator[i];
            end
        end
    endgenerate

/* Waveguide Generation */
localparam int NUM_WAVEGUIDES = 2 * N * (N - 1);
generate
    for (genvar w = 0; w < NUM_WAVEGUIDES; w++) begin : wg_inst

        logic [$clog2(NUM_ROUTERS)-1:0] router_a, router_b;
        logic [1:0] dir_a, dir_b;

        if (w < N * (N - 1)) begin : wgs_east_west
            // Horizontal waveguides (East-West)
            // w = row * (N - 1) + col
            /* verilator lint_off WIDTHTRUNC */
            localparam int row = w / (N - 1);
            localparam int col = w % (N - 1);

            assign router_a = row * N + col;      // left router
            assign router_b = row * N + col + 1;  // right router
            assign dir_a = 2; // East
            assign dir_b = 3; // West
        end else begin : wgs_north_south
            // Vertical waveguides (North-South)
            // w - N*(N-1) = col * (N - 1) + row
            localparam int idx = w - N * (N - 1);
            localparam int col = idx / (N - 1);
            localparam int row = idx % (N - 1);

            assign router_a = row * N + col;      // top router
            assign router_b = (row + 1) * N + col;// bottom router
            assign dir_a = 1; // South
            assign dir_b = 0; // North
            /* verilator lint_on WIDTHTRUNC */
        end

        mesh_waveguide #(
            .DELAY(WG_DELAY),
            .MOD_DELAY(MOD_DELAY),
            .NUM_ROUTERS(NUM_ROUTERS)
        ) wg (
            .clk(clk), 
            .rst(rst),
            .data_in_lr(modulator_to_waveguide[router_a][dir_a]),
            .valid_in_lr(modulator_valid_to_waveguide[router_a][dir_a]),
            .data_in_rl(modulator_to_waveguide[router_b][dir_b]),
            .valid_in_rl(modulator_valid_to_waveguide[router_b][dir_b]),
            .data_out_left(waveguide_to_photodetector[router_a][dir_a]),
            .valid_out_left(waveguide_valid_to_photodetector[router_a][dir_a]),
            .data_out_right(waveguide_to_photodetector[router_b][dir_b]),
            .valid_out_right(waveguide_valid_to_photodetector[router_b][dir_b]),
            .packet_done(wg_packet_done[w]), 
            .router_a(router_a),
            .router_b(router_b),
            .dir_a(dir_a),
            .dir_b(dir_b)
        );

        mesh_fixed_priority_arbiter #(
            .NUM_ROUTERS(NUM_ROUTERS),
            .HOLD_TIME((WG_DELAY+MOD_DELAY)/2)
        ) fp_arb (
            .clk(clk),
            .rst(rst),
            .request({router_request_to_send[router_a][dir_a], router_request_to_send[router_b][dir_b]}),
            .done(wg_packet_done[w]),
            .freeze_all_grants({!router_ready_to_receive[router_a][dir_a],!router_ready_to_receive[router_b][dir_b]}),
            .grant({router_granted[router_a][dir_a], router_granted[router_b][dir_b]}),
            .router_a(router_a),
            .router_b(router_b),
            .dir_a(dir_a),
            .dir_b(dir_b)
        );
    end
endgenerate

always_ff @(posedge clk) begin
    $display("================================================================================");
end

endmodule
