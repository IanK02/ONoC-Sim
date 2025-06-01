import packet_pkg::packet_t;

module photodetector #(parameter DELAY = 2) (
    /* verilator lint_off UNUSEDSIGNAL */
    input  logic clk,
    input  logic rst,
    input  packet_t in_data,
    input  logic             in_valid,
    output packet_t out_data,
    output logic             out_valid,
    input integer   router,
    input integer   direction
    /* verilator lint_on UNUSEDSIGNAL */
);

    packet_t         buffer    [0:DELAY-1];
    logic            valid_buf [0:DELAY-1];
    integer i;
    assign out_data = buffer[DELAY-1];
    assign out_valid = valid_buf[DELAY-1];

    always_ff @(posedge clk) begin
        if (rst) begin
            for (i = 0; i < DELAY; i++) begin
                buffer[i] <= 0;
                valid_buf[i] <= 0;
            end
        end else begin
            buffer[0] <= in_data;
            valid_buf[0] <= in_valid;
            for (i = 1; i < DELAY; i++) begin
                buffer[i] <= buffer[i-1];
                valid_buf[i] <= valid_buf[i-1];
            end
        end
        //$display("PD %0d,%0d valid_buf = %p", router, direction, valid_buf);
    end
endmodule
