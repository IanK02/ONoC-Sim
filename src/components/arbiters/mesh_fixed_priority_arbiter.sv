module mesh_fixed_priority_arbiter #(
    /* verilator lint_off UNUSEDPARAM */
    parameter NUM_ROUTERS = 2,
    parameter HOLD_TIME = 3
    /* verilator lint_on UNUSEDPARAM */
)(
    /* verilator lint_off UNUSEDSIGNAL */
    input  logic clk,
    input  logic rst,
    input  logic [1:0] request,
    input  logic [1:0] done,
    input  logic [1:0] freeze_all_grants,
    output logic [1:0] grant,
    input  logic [$clog2(NUM_ROUTERS)-1:0] router_a,
    input  logic [$clog2(NUM_ROUTERS)-1:0] router_b,
    input  logic [1:0] dir_a,
    input  logic [1:0] dir_b
    /* verilator lint_on UNUSEDSIGNAL */
);

 
    logic [1:0] current_grant;
    int hold_counter;

    always_ff @(posedge clk) begin
        $display("Arb %0d,%0d to %0d,%0d Requests:%2b", router_a, dir_a, router_b, dir_b, request);

        if (rst) begin
            current_grant <= 2'b00;
            hold_counter  <= 0;
        end else begin
            if (hold_counter > 0) begin
                current_grant <= 2'b00;
                //$display("Holding for %0d more cycles", hold_counter);
                hold_counter <= hold_counter - 1;
            end else begin
                current_grant <= 2'b00;

                // Apply freeze logic
                if (freeze_all_grants[0]) begin
                    //$display("Froze grants from L");
                end
                if (freeze_all_grants[1]) begin
                    //$display("Froze grants from R");
                end

                // Grant if not frozen
                for (int i = 0; i < 2; i++) begin
                    if (request[i]) begin
                        current_grant[i] <= 1;
                        hold_counter <= HOLD_TIME;
                        //$display("Granted to %0d; entering hold", i);
                        break;
                    end
                end
            end
        end
    end

    assign grant = current_grant;

endmodule
