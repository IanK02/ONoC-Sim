import packet_pkg::packet_t;
module onoc_bus #(parameter WIDTH = 32, DELAY = 4, NUM_ROUTERS = 2) (
    input logic clk,
    input logic rst,
    output logic ip_0_sent,
    output logic ip_1_sent,
    output logic ip_0_received,
    output logic ip_1_received,
    output logic router_0_sent,
    output logic router_1_sent,
    output logic [WIDTH-1:0] ip_tx_packet_0_data, 
    output logic [WIDTH-1:0] ip_tx_packet_1_data,
    output logic [WIDTH-1:0] ip_rx_packet_0_data,
    output logic [WIDTH-1:0] ip_rx_packet_1_data
);

    // IP ↔ Router interfaces
    packet_t          ip_tx_data_0, ip_tx_data_1;
    logic             ip_tx_valid_0, ip_tx_valid_1;
    logic             router_ready_for_ip_0, router_ready_for_ip_1;

    packet_t          ip_rx_data_0, ip_rx_data_1;
    logic             ip_rx_valid_0, ip_rx_valid_1;

    // Router ↔ Modulator
    packet_t modulator_input_data_0, modulator_input_data_1;
    logic             modulator_input_valid_0, modulator_input_valid_1;
    //logic             modulator_input_direction_0, modulator_input_direction_1;
    //logic             modulator_output_direction_0, modulator_output_direction_1;

    // Modulator ↔ Waveguide
    packet_t optical_wave_input_0, optical_wave_input_1;
    logic             optical_wave_valid_0, optical_wave_valid_1;

    // Waveguide ↔ Photodetector
    packet_t optical_wave_output_0, optical_wave_output_1;
    logic             optical_wave_output_valid_0, optical_wave_output_valid_1;

    // Photodetector ↔ Router
    packet_t photodetector_output_data_0, photodetector_output_data_1;
    logic             photodetector_output_valid_0, photodetector_output_valid_1;

    // Arbitration
    //logic permission_granted_send;
    logic [NUM_ROUTERS-1:0] router_granted;
    logic [NUM_ROUTERS-1:0] router_request;
    logic [NUM_ROUTERS-1:0] packet_done;

    //logic valid_left [DELAY-1:0];
    //logic valid_right [DELAY-1:0];

    


    //Exposing internal signals as inputs/outputs to allow for verilator debugging
    assign ip_0_sent = ip_tx_valid_0;
    assign ip_1_sent = ip_tx_valid_1;
    assign ip_0_received = ip_rx_valid_0;
    assign ip_1_received = ip_rx_valid_1;
    assign router_0_sent = modulator_input_valid_0;
    assign router_1_sent = modulator_input_valid_1;
    assign ip_tx_packet_0_data = ip_tx_data_0.data;
    assign ip_tx_packet_1_data = ip_tx_data_1.data;
    assign ip_rx_packet_0_data = ip_rx_data_0.data;
    assign ip_rx_packet_1_data = ip_rx_data_1.data;
    

    // IP Blocks
    ip_block #(WIDTH, NUM_ROUTERS) ip_inst0 (
        .clk(clk),
        .rst(rst),
        .X(8'b0),
        .Y(8'b0),
        .packet_out(ip_tx_data_0),
        .valid_out(ip_tx_valid_0),
        .ready_in(router_ready_for_ip_0),
        .data_in(ip_rx_data_0),
        .valid_in(ip_rx_valid_0),
        .ip_id(16'd0),
        .generation_scheme(3'b010)
    );

    ip_block #(WIDTH, NUM_ROUTERS) ip_inst1 (
        .clk(clk),
        .rst(rst),
        .X(8'b1),
        .Y(8'b0),
        .packet_out(ip_tx_data_1),
        .valid_out(ip_tx_valid_1),
        .ready_in(router_ready_for_ip_1),
        .data_in(ip_rx_data_1),
        .valid_in(ip_rx_valid_1),
        .ip_id(16'd1),
        .generation_scheme(3'b010)
    );

    // Routers
    router #(WIDTH, NUM_ROUTERS) router0 (
        .clk(clk),
        .rst(rst),
        .ip_data_in(ip_tx_data_0),
        .ip_valid_in(ip_tx_valid_0),
        .ip_ready_out(router_ready_for_ip_0),
        .ip_data_out(ip_rx_data_0),
        .ip_valid_out(ip_rx_valid_0),
        .mod_data_out(modulator_input_data_0),
        .mod_valid_out(modulator_input_valid_0),
        .pd_data_in(photodetector_output_data_0),
        .pd_valid_in(photodetector_output_valid_0),
        .permission_granted_send(router_granted[0]),
        .request_to_send(router_request[0]),
        .router_id(16'd0)
    );

    router #(WIDTH, NUM_ROUTERS) router1 (
        .clk(clk),
        .rst(rst),
        .ip_data_in(ip_tx_data_1),
        .ip_valid_in(ip_tx_valid_1),
        .ip_ready_out(router_ready_for_ip_1),
        .ip_data_out(ip_rx_data_1),
        .ip_valid_out(ip_rx_valid_1),
        .mod_data_out(modulator_input_data_1),
        .mod_valid_out(modulator_input_valid_1),
        .pd_data_in(photodetector_output_data_1),
        .pd_valid_in(photodetector_output_valid_1),
        .permission_granted_send(router_granted[1]),
        .request_to_send(router_request[1]),
        .router_id(16'd1)
    );

    // Modulators
    modulator #() mod0 (
        .clk(clk),
        .rst(rst),
        .in_data(modulator_input_data_0),
        .in_valid(modulator_input_valid_0),
        .out_data(optical_wave_input_0),
        .out_valid(optical_wave_valid_0),
        .mod_id(0)
    );

    modulator #() mod1 (
        .clk(clk),
        .rst(rst),
        .in_data(modulator_input_data_1),
        .in_valid(modulator_input_valid_1),
        .out_data(optical_wave_input_1),
        .out_valid(optical_wave_valid_1),
        .mod_id(1)
    );

    // Waveguide
    waveguide #(DELAY) wg (
        .clk(clk),
        .rst(rst),
        .data_in_lr(optical_wave_input_0),
        .valid_in_lr(optical_wave_valid_0),
        .data_in_rl(optical_wave_input_1),
        .valid_in_rl(optical_wave_valid_1),
        .data_out_left(optical_wave_output_0),
        .valid_out_left(optical_wave_output_valid_0),
        .data_out_right(optical_wave_output_1),
        .valid_out_right(optical_wave_output_valid_1),
        .packet_done(packet_done)
        //.valid_right(valid_right)
    );

    // Arbiter
    /*
    round_robin_arbiter #() rr_arb (
        .clk(clk),
        .rst(rst),
        .request(router_request),
        .grant(router_granted)
    );
    */

    /*
    masked_round_robin_arbiter #() mrr_arb (
        .clk(clk),
        .rst(rst),
        .request(router_request),
        .done(packet_done),
        .grant(router_granted)
    );
    */

    fixed_priority_arbiter #() fp_arb (
        .clk(clk),
        .rst(rst),
        .request(router_request),
        .done(packet_done),
        .grant(router_granted)
    );

    // Photodetectors
    photodetector #() pd0 (
        .clk(clk),
        .rst(rst),
        .in_data(optical_wave_output_0),
        .in_valid(optical_wave_output_valid_0),
        .out_data(photodetector_output_data_0),
        .out_valid(photodetector_output_valid_0)
    );

    photodetector #() pd1 (
        .clk(clk),
        .rst(rst),
        .in_data(optical_wave_output_1),
        .in_valid(optical_wave_output_valid_1),
        .out_data(photodetector_output_data_1),
        .out_valid(photodetector_output_valid_1)
    );
    
endmodule
