import packet_pkg::packet_t;

module ip_block #(
    parameter WIDTH = 32,
    parameter NUM_ROUTERS = 2
) (
    input  logic clk,
    input  logic rst,

    input logic [7:0] X,
    input logic [7:0] Y,

    // Output to router
    output packet_t packet_out,
    output logic             valid_out,
    input  logic             ready_in,

    // Input from router
    /* verilator lint_off UNUSEDSIGNAL */
    input  packet_t data_in,
    /* verilator lint_on UNUSEDSIGNAL */
    input  logic             valid_in,
    input  logic [(WIDTH/2)-1:0] ip_id,

    // Packet generation control
    input  logic [2:0] generation_scheme
);

    integer payload;
    logic pkt_sent_last_cycle;
    integer cycle_counter;
    logic [15:0] destination;

    function automatic logic [15:0] encode_xy(input logic [7:0] x, input logic [7:0] y);
        return {x, y};
    endfunction

    function automatic logic [15:0] get_random_destination(input logic [15:0] self_id);
        logic [15:0] random_id;
        logic [7:0] rand_x;
        logic [7:0] rand_y;
        logic [15:0] mesh_dim;
        mesh_dim = $rtoi($sqrt(NUM_ROUTERS))[15:0];

        do begin
            random_id = $urandom_range(0, NUM_ROUTERS - 1)[15:0];
        end while (random_id == self_id);

        /* verilator lint_off WIDTHTRUNC */
        rand_x = random_id % mesh_dim;
        rand_y = random_id / mesh_dim;
        /* verilator lint_on WIDTHTRUNC */
        return encode_xy(rand_x, rand_y);
    endfunction

    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            packet_out  <= 0;
            valid_out <= 0;
            packet_out   <= 0;
            pkt_sent_last_cycle <= 0;
            cycle_counter <= 0;
        end else begin
            logic send_now;
            send_now = 0;

            case (generation_scheme)
                3'b000: send_now = ($urandom_range(0, 9) < 1); // Random
                3'b001: send_now = (cycle_counter % 30 < 10);  // Bursty: 10 on, 20 off
                3'b010: send_now = ($urandom % 100 < (50 + 50 * $sin(2.0 * 3.14 * cycle_counter / 50.0))); // Sinusoidal
                3'b011: send_now = (cycle_counter % 5 == 0);    // Constant rate: every 5 cycles
                3'b100: send_now = (cycle_counter < 50);        // Initial burst
                3'b101: send_now = (cycle_counter % 2 == 0);    // Alternating
                3'b110: send_now = 1;                           // Always send
                3'b111: send_now = 0;                           // Never send
            endcase

            if (send_now && ready_in && !pkt_sent_last_cycle) begin
                destination <= get_random_destination(ip_id);
                valid_out <= 1;
                packet_out.data <= (ip_id << 16) | payload;
                packet_out.src <= encode_xy(X,Y);
                packet_out.dst <= destination;
                packet_out.timestamp <= cycle_counter;
                packet_out.valid <= 1'b1;
                pkt_sent_last_cycle <= 1;
                $display("IP %0d sending %d to dest %0d", ip_id, payload, destination);
                payload <= payload + 1;
            end else begin
                valid_out <= 0;
                pkt_sent_last_cycle <= 0;
            end

            cycle_counter <= cycle_counter + 1;
        end
    end

    always_ff @(posedge clk) begin
        if (valid_in) begin
            $display("IP block %0d received packet from IP %0d with ID %0d",
                ip_id, data_in.data >> 16, data_in.data & 32'hFFFF);
        end
    end

endmodule
