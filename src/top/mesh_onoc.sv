import packet_pkg::packet_t;

module onoc_bus #(
    parameter int N = 2, // Mesh size: N x N
    parameter int NUM_ROUTERS = N * N,
    parameter int DELAY = 4
)(
    input  logic clk,
    input  logic rst,
    output logic [31:0] router_sent [0:NUM_ROUTERS-1]
);

    function automatic int get_x(input int id);
        return id % N;
    endfunction

    function automatic int get_y(input int id);
        return id / N;
    endfunction

    logic [NUM_ROUTERS-1:0] router_request, router_granted, packet_done;

    // Intermediate photonic signals
    packet_t modulator_to_waveguide [0:NUM_ROUTERS-1][0:3];
    logic    modulator_valid_to_waveguide [0:NUM_ROUTERS-1][0:3];
    packet_t waveguide_to_photodetector [0:NUM_ROUTERS-1][0:3];
    logic    waveguide_valid_to_photodetector [0:NUM_ROUTERS-1][0:3];
    packet_t photodetector_to_router [0:NUM_ROUTERS-1][0:3];
    logic    photodetector_valid_to_router [0:NUM_ROUTERS-1][0:3];
    packet_t router_to_modulator [0:NUM_ROUTERS-1][0:3];
    logic    router_valid_to_modulator [0:NUM_ROUTERS-1][0:3];

    // Intermediate electronic signals
    packet_t ip_to_router [0:NUM_ROUTERS-1];
    logic    ip_valid_to_router [0:NUM_ROUTERS-1];
    packet_t router_to_ip [0:NUM_ROUTERS-1];
    logic    router_valid_to_ip [0:NUM_ROUTERS-1];

    generate
        for (genvar r = 0; r < N; r++) begin : row
            for (genvar c = 0; c < N; c++) begin : col
                localparam int i = r * N + c;

                ip_block ip_inst (
                    .clk(clk),
                    .rst(rst),
                    .data_out(ip_to_router[i]),
                    .valid_out(ip_valid_to_router[i]),
                    .data_in(router_to_ip[i]),
                    .valid_in(router_valid_to_ip[i]),
                    .ip_id(16'(i)),
                    .generation_scheme(3'b010)
                );

                mesh_router #(
                    .ROUTER_ID(i),
                    .X(c),
                    .Y(r),
                    .N(N)
                ) um_router (
                    .clk(clk),
                    .rst(rst),

                    .data_in_local(photodetector_to_router[i][0]),
                    .valid_in_local(photodetector_valid_to_router[i][0]),
                    .data_out_local(router_to_modulator[i][0]),
                    .valid_out_local(router_valid_to_modulator[i][0]),

                    .data_in_north(photodetector_to_router[i][1]),
                    .valid_in_north(photodetector_valid_to_router[i][1]),
                    .data_out_north(router_to_modulator[i][1]),
                    .valid_out_north(router_valid_to_modulator[i][1]),

                    .data_in_south(photodetector_to_router[i][2]),
                    .valid_in_south(photodetector_valid_to_router[i][2]),
                    .data_out_south(router_to_modulator[i][2]),
                    .valid_out_south(router_valid_to_modulator[i][2]),

                    .data_in_east(photodetector_to_router[i][3]),
                    .valid_in_east(photodetector_valid_to_router[i][3]),
                    .data_out_east(router_to_modulator[i][3]),
                    .valid_out_east(router_valid_to_modulator[i][3]),

                    .data_in_west(photodetector_to_router[i][4]),
                    .valid_in_west(photodetector_valid_to_router[i][4]),
                    .data_out_west(router_to_modulator[i][4]),
                    .valid_out_west(router_valid_to_modulator[i][4]),

                    .permission_granted_send(router_granted[i]),
                    .request_to_send(router_request[i]),
                    .router_id(16'(i))
                );

                for (genvar d = 0; d < 4; d++) begin : photonics_per_dir
                    modulator u_mod (
                        .clk(clk),
                        .rst(rst),
                        .in_data(router_to_modulator[i][d]),
                        .in_valid(router_valid_to_modulator[i][d]),
                        .out_data(modulator_to_waveguide[i][d]),
                        .out_valid(modulator_valid_to_waveguide[i][d]),
                        .mod_id(i*4+d)
                    );

                    photodetector u_pd (
                        .clk(clk),
                        .rst(rst),
                        .in_data(waveguide_to_photodetector[i][d]),
                        .in_valid(waveguide_valid_to_photodetector[i][d]),
                        .out_data(photodetector_to_router[i][d]),
                        .out_valid(photodetector_valid_to_router[i][d])
                    );
                end

                assign router_sent[i] = |router_valid_to_modulator[i];
            end
        end
    endgenerate

    generate
        for (genvar i = 0; i < NUM_ROUTERS; i++) begin : wg_mesh
            for (genvar d = 0; d < 4; d++) begin : wg_link
                localparam int x = get_x(i);
                localparam int y = get_y(i);

                if (d == 0 && y > 0) begin // North
                    int nbr = i - N;
                    waveguide #(DELAY) wg (
                        .clk(clk), .rst(rst),
                        .data_in_lr(modulator_to_waveguide[i][0]),
                        .valid_in_lr(modulator_valid_to_waveguide[i][0]),
                        .data_in_rl(modulator_to_waveguide[nbr][1]),
                        .valid_in_rl(modulator_valid_to_waveguide[nbr][1]),
                        .data_out_left(waveguide_to_photodetector[nbr][1]),
                        .valid_out_left(waveguide_valid_to_photodetector[nbr][1]),
                        .data_out_right(waveguide_to_photodetector[i][0]),
                        .valid_out_right(waveguide_valid_to_photodetector[i][0]),
                        .packet_done(packet_done[i])
                    );
                end else if (d == 1 && y < N-1) begin // South
                    int nbr = i + N;
                    if (i < NUM_ROUTERS - N) begin
                        waveguide #(DELAY) wg (
                            .clk(clk), .rst(rst),
                            .data_in_lr(modulator_to_waveguide[i][1]),
                            .valid_in_lr(modulator_valid_to_waveguide[i][1]),
                            .data_in_rl(modulator_to_waveguide[nbr][0]),
                            .valid_in_rl(modulator_valid_to_waveguide[nbr][0]),
                            .data_out_left(waveguide_to_photodetector[nbr][0]),
                            .valid_out_left(waveguide_valid_to_photodetector[nbr][0]),
                            .data_out_right(waveguide_to_photodetector[i][1]),
                            .valid_out_right(waveguide_valid_to_photodetector[i][1]),
                            .packet_done(packet_done[i])
                        );
                    end
                end else if (d == 2 && x < N-1) begin // East
                    int nbr = i + 1;
                    waveguide #(DELAY) wg (
                        .clk(clk), .rst(rst),
                        .data_in_lr(modulator_to_waveguide[i][2]),
                        .valid_in_lr(modulator_valid_to_waveguide[i][2]),
                        .data_in_rl(modulator_to_waveguide[nbr][3]),
                        .valid_in_rl(modulator_valid_to_waveguide[nbr][3]),
                        .data_out_left(waveguide_to_photodetector[nbr][3]),
                        .valid_out_left(waveguide_valid_to_photodetector[nbr][3]),
                        .data_out_right(waveguide_to_photodetector[i][2]),
                        .valid_out_right(waveguide_valid_to_photodetector[i][2]),
                        .packet_done(packet_done[i])
                    );
                end else if (d == 3 && x > 0) begin // West
                    int nbr = i - 1;
                    waveguide #(DELAY) wg (
                        .clk(clk), .rst(rst),
                        .data_in_lr(modulator_to_waveguide[i][3]),
                        .valid_in_lr(modulator_valid_to_waveguide[i][3]),
                        .data_in_rl(modulator_to_waveguide[nbr][2]),
                        .valid_in_rl(modulator_valid_to_waveguide[nbr][2]),
                        .data_out_left(waveguide_to_photodetector[nbr][2]),
                        .valid_out_left(waveguide_valid_to_photodetector[nbr][2]),
                        .data_out_right(waveguide_to_photodetector[i][3]),
                        .valid_out_right(waveguide_valid_to_photodetector[i][3]),
                        .packet_done(packet_done[i])
                    );
                end
            end
        end
    endgenerate

    fixed_priority_arbiter #(.NUM_ROUTERS(NUM_ROUTERS)) arb (
        .clk(clk),
        .rst(rst),
        .request(router_request),
        .done(packet_done),
        .grant(router_granted)
    );

endmodule
