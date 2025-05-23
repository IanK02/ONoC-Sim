module fixed_priority_arbiter #(
    parameter NUM_ROUTERS = 2
)(
    input  logic clk,
    input  logic rst,
    input  logic [NUM_ROUTERS-1:0] request,
    input  logic [NUM_ROUTERS-1:0] done,
    output logic [NUM_ROUTERS-1:0] grant
);

    logic [NUM_ROUTERS-1:0] current_grant;
    logic waiting_for_done;

    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            current_grant     <= '0;
            waiting_for_done  <= 0;
        end else begin
            if (!waiting_for_done) begin
                // Check if current request is filled
                if ((current_grant & request) != 0) begin
                    current_grant    <= '0;      // Clear grant once request is accepted
                    waiting_for_done <= 1;       // Wait for done before issuing a new grant
                end else begin
                    // Search for highest-priority request
                    current_grant <= '0;
                    for (int i = 0; i < NUM_ROUTERS; i++) begin
                        if (request[i]) begin
                            current_grant[i] <= 1;
                            break;
                        end
                    end
                end
            end else begin
                // Wait for completion from previously granted router
                if ((done) != 0) begin
                    waiting_for_done <= 0;
                end
            end
        end
    end

    assign grant = current_grant;

    // Debug output
    always_ff @(posedge clk) begin
        $display("Fixed Priority Arbiter State:");
        $display("  request           = %b", request);
        $display("  done              = %b", done);
        $display("  grant             = %b", grant);
        $display("  waiting_for_done  = %b", waiting_for_done);
    end

endmodule
