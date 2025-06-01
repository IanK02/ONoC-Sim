module fixed_priority_arbiter #(
    parameter int NUM_ROUTERS = 2
)(
    input  logic clk,
    input  logic rst,
    input  logic [NUM_ROUTERS-1:0] request,
    input  logic [NUM_ROUTERS-1:0] done,
    input  logic [1:0]             freeze_all_grants,
    output logic [NUM_ROUTERS-1:0] grant
);

    logic [NUM_ROUTERS-1:0] grant_reg;

    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            grant_reg <= '0;
        end else begin
            if (freeze_all_grants[0] || freeze_all_grants[1]) begin
                grant_reg <= '0;
            end else begin
                for (int i = 0; i < NUM_ROUTERS; i++) begin
                    if (request[i] && !done[i]) begin
                        //grant_reg <= '0;
                        grant_reg[i] <= 1;
                        break;
                    end
                end
            end
        end
        for(int i = 0; i < NUM_ROUTERS; i++) begin
            $write("%b|", request[i]);
        end
        $write("\n");
        grant_reg <= 2'b11;
    end
assign grant = grant_reg;

endmodule
