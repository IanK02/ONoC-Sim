// counter.sv
module counter (
    input logic clk,
    input logic rst,
    output logic [4:0] out
);

    logic [4:0] count;

    always_ff @(posedge clk or posedge rst) begin
        if (rst)
            count <= 5'd0;
        else
            count <= count + 5'd1;
        $write("%d\n", count);
    end

    assign out = count;

endmodule
