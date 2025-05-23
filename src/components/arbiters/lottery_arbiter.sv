module lottery_arbiter #(parameter N = 4)(
    input  logic clk,
    input  logic rst,
    input  logic [N-1:0] request,
    output logic [N-1:0] grant
);
    logic [$clog2(N)-1:0] winner;

    always_ff @(posedge clk or posedge rst) begin
        if (rst)
            winner <= 0;
        else
            winner <= $urandom_range(0, N-1);
    end

    always_comb begin
        grant = '0;
        if (request[winner])
            grant[winner] = 1;
    end
endmodule