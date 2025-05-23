import packet_pkg::packet_t;
module waveguide #(parameter DELAY = 4) (
    input  logic clk,
    input  logic rst,
    input  packet_t data_in_lr,
    input  logic    valid_in_lr,
    input  packet_t data_in_rl,
    input  logic    valid_in_rl,
    output packet_t data_out_left,
    output logic    valid_out_left,
    output packet_t data_out_right,
    output logic    valid_out_right,
    output logic [1:0] packet_done 
    //output logic valid_right[0:DELAY-1]
);
    packet_t buffer_left [0:DELAY-1];
    logic    valid_left  [0:DELAY-1];

    packet_t buffer_right[0:DELAY-1];
    logic    valid_right [0:DELAY-1];

    logic [31:0] current_cycle;
    integer i;
    assign packet_done[0] = valid_right[DELAY-2];
    assign packet_done[1] = valid_left[DELAY-2];

    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            for (i = 0; i < DELAY; i++) begin
                buffer_left[i]  <= '0;
                valid_left[i]   <= 0;
                buffer_right[i] <= '0;
                valid_right[i]  <= 0;
            end
        end else begin
            // Shift right-to-left delay buffer
            for (i = DELAY-1; i > 0; i--) begin
                buffer_left[i]  <= buffer_left[i-1];
                valid_left[i]   <= valid_left[i-1];
            end
            buffer_left[0] <= data_in_rl;
            valid_left[0]  <= valid_in_rl;

            // Shift left-to-right delay buffer
            for (i = DELAY-1; i > 0; i--) begin
                buffer_right[i]  <= buffer_right[i-1];
                valid_right[i]   <= valid_right[i-1];
            end
            buffer_right[0] <= data_in_lr;
            valid_right[0]  <= valid_in_lr;
        end
        $write("  L->R  ");
        for (i = 0; i < DELAY; i++) begin
            $write("[%0d:%s:%0d] ", i, valid_right[i] ? "V" : "", buffer_right[i].timestamp);
        end
        $write("\n");
        $write("  R->L  ");
        for (i = 0; i < DELAY; i++) begin
            $write("[%0d:%s:%0d] ", i, valid_left[i] ? "V" : "", buffer_left[i].timestamp);
        end
        $write("\n\n");
        $display("Cycle #%d", current_cycle);
        $display("---------------------------------------------------------------------------------------------------------------------");
    end

    always_ff @(posedge clk or posedge rst) begin
        current_cycle <= rst ? 0 : current_cycle + 1;
        if (rst) begin
            current_cycle <= 0;
        end else begin
            current_cycle <= current_cycle + 1;
        end
    end
    

    assign data_out_left   = buffer_left[DELAY-1];
    assign valid_out_left  = valid_left[DELAY-1];
    assign data_out_right  = buffer_right[DELAY-1];
    assign valid_out_right = valid_right[DELAY-1];
    always_ff @(posedge clk) begin
        if (valid_right[DELAY-1]) begin
            $display("Waveguide outputs packet ID %0d R-> at cycle %0t", buffer_right[DELAY-1].timestamp, $time);
        end
    end

endmodule
