import packet_pkg::packet_t;

module router #(
    parameter WIDTH = 32,
    /* verilator lint_off UNUSEDPARAM */
    parameter NUM_ROUTERS = 2
    /* verilator lint_on UNUSEDPARAM */
)(
    input  logic clk,
    input  logic rst,

    // From IP
    input  packet_t ip_data_in,
    input  logic             ip_valid_in,

    // To IP
    output packet_t ip_data_out,
    output logic             ip_valid_out,
    output logic             ip_ready_out,

    // To Modulator
    output packet_t mod_data_out,
    output logic    mod_valid_out,

    // From Photodetector
    /* verilator lint_off UNUSEDSIGNAL */
    input packet_t pd_data_in,
    /* verilator lint_on UNUSEDSIGNAL */
    input  logic   pd_valid_in,

    // Arbitration
    input  logic permission_granted_send,
    output logic request_to_send,
    input  logic [(WIDTH/2)-1:0] router_id
);

    //data buffers
    //logic [WIDTH-1:0] buffer;
    logic             pending_send_packet;
    packet_t outgoing_pkt_buffer;
    logic [31:0] current_cycle;
    logic [31:0] packet_id_counter;

    // IP output side
    assign ip_data_out  = pd_data_in;
    assign ip_valid_out = pd_valid_in;

    // IP input ready if buffer and waveguide are free
    assign ip_ready_out = !pending_send_packet;

    // Request to send is asserted if we have something in the buffer
    assign request_to_send = pending_send_packet;

    always_ff @(posedge clk or posedge rst) begin
        current_cycle <= rst ? 0 : current_cycle + 1;
        if (rst) begin
            //buffer         <= 0;
            pending_send_packet   <= 0;
            mod_data_out   <= 0;
            mod_valid_out  <= 0;
        end else begin
            // Receive data from IP if no packet in buffer
            if (ip_valid_in && !pending_send_packet) begin
                $display("Router %0d buffered packet ID %0d from IP", router_id, ip_data_in.data & 32'hFFFF);
                //$display("Router %0d buffered packet from IP %0d with ID %0d",
         //router_id, pd_data_in.data >> 16, pd_data_in.data & 32'hFFFF);
                //outgoing_pkt_buffer.src       <= router_id[8:0];
                //outgoing_pkt_buffer.dst       <= $urandom_range(0, NUM_ROUTERS-1)[8:0];
                //outgoing_pkt_buffer.data      <= ip_data_in;
                //outgoing_pkt_buffer.timestamp <= current_cycle;
                //outgoing_pkt_buffer.valid     <= 1'b1;
                /* verilator lint_off WIDTHTRUNC */
                //outgoing_pkt_buffer.id <= (ip_data_in & 32'hFFFF);
                /* verilator lint_on WIDTHTRUNC */
                //buffer               <= ip_data_in;
                outgoing_pkt_buffer <= ip_data_in;
                pending_send_packet  <= 1;

                packet_id_counter <= packet_id_counter + 1;
            end
            $display("Router %0d: ip_valid_in %0b: pending_send_packet %0b: permission_granted_send: %0b", router_id, ip_valid_in, pending_send_packet, permission_granted_send);

            // Send data to modulator if waveguide is free and we have data in buffer
            if (pending_send_packet && permission_granted_send) begin
                //$display("Router %0d sending packet #%d", router_id, outgoing_pkt_buffer.id);
                mod_data_out  <= outgoing_pkt_buffer;
                mod_valid_out <= 1;
                $display("Router %0d sends packet with timestamp %0d to modulator", router_id, outgoing_pkt_buffer.timestamp);
                pending_send_packet  <= 0; // clear buffer after sending
            end else begin
                mod_valid_out <= 0; // default: not sending
            end
        end
    end

    always_ff @(posedge clk or posedge rst) begin
        current_cycle <= rst ? 0 : current_cycle + 1;
        if (rst) begin
            current_cycle <= 0;
            packet_id_counter <= 0;
        end else begin
            current_cycle <= current_cycle + 1;
        end
    end
endmodule
