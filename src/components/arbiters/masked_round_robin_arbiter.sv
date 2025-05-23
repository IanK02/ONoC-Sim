module masked_round_robin_arbiter #(
    parameter NUM_ROUTERS = 2
)(
    input  logic clk,
    input  logic rst,
    input  logic [NUM_ROUTERS-1:0] request,
    input  logic [NUM_ROUTERS-1:0] done,
    output logic [NUM_ROUTERS-1:0] grant
);

    logic [NUM_ROUTERS-1:0] mask;
    logic                   waiting_for_done;

    // Priority encoder
    function automatic logic [NUM_ROUTERS-1:0] priority_encode(input logic [NUM_ROUTERS-1:0] req);
        logic [NUM_ROUTERS-1:0] g;
        g = '0;
        for (int i = 0; i < NUM_ROUTERS; i++) begin
            if (req[i]) begin
                g[i] = 1;
                break;
            end
        end
        return g;
    endfunction

    // Grant control
    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            grant <= '0;
            mask <= '0;
            waiting_for_done <= 0;
        end else begin
            logic [NUM_ROUTERS-1:0] masked_req = request & ~mask;
            logic [NUM_ROUTERS-1:0] wrap_req   = request &  mask;

            logic [NUM_ROUTERS-1:0] masked_grant = priority_encode(masked_req);
            logic [NUM_ROUTERS-1:0] wrap_grant   = priority_encode(wrap_req);

            logic [NUM_ROUTERS-1:0] next_grant = (|masked_req) ? masked_grant : wrap_grant;

            if (!waiting_for_done) begin
                // If current grantee's request has been fulfilled, clear grant and wait for done
                if ((request & grant) != 0) begin
                    grant <= '0;
                    waiting_for_done <= 1;
                end else if (|next_grant) begin
                    grant <= next_grant;
                end
            end else begin
                if ((done) != 0) begin
                    mask <= grant;
                    waiting_for_done <= 0;

                    // Issue next grant immediately after done
                    if (|next_grant)
                        grant <= next_grant;
                    else
                        grant <= '0;
                end
            end
        end
    end

    // Debug
    always_ff @(posedge clk) begin
        $display("  request     = %b", request);
        $display("  done        = %b", done);
        $display("  grant       = %b", grant);
        $display("  mask        = %b", mask);
        $display("  waiting     = %b", waiting_for_done);
    end

endmodule
