module token_passing_arbiter #(parameter N = 4)(
    input  logic clk,
    input  logic rst,
    input  logic [N-1:0] request,
    input  logic [N-1:0] done,
    output logic [N-1:0] grant
);
    logic [$clog2(N)-1:0] token_owner;

    always_ff @(posedge clk or posedge rst) begin
        if (rst)
            token_owner <= 0;
        else if (done[token_owner])
            token_owner <= (token_owner + 1) % N;
    end

    always_comb begin
        grant = '0;
        grant[token_owner] = 1;
    end
endmodule