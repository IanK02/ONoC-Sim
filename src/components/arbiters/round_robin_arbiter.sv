// Round-robin arbiter for 2 routers with strict waveguide hold
module round_robin_arbiter #(parameter NUM_ROUTERS = 2, DELAY = 4)(
    input  logic clk,
    input  logic rst,
    input  logic [NUM_ROUTERS-1:0] request,
    output logic [NUM_ROUTERS-1:0] grant
);

    logic [$clog2(NUM_ROUTERS)-1:0] current_owner;
    logic [$clog2(DELAY+1)-1:0] hold_counter;
    logic waveguide_busy;

    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            current_owner <= 0;
            hold_counter <= 0;
            grant <= '0;
            waveguide_busy <= 0;
        end else if (waveguide_busy) begin
            // Waveguide is occupied; count down
            if (hold_counter > 0)
                hold_counter <= hold_counter - 1;

            if (hold_counter == 1) begin
                waveguide_busy <= 0;
            end

            grant <= '0;  // No grants while busy
        end else begin
            // Ready to arbitrate
            /* verilator lint_off WIDTHEXPAND */
            /* verilator lint_off WIDTHTRUNC */
            grant <= '0;
            for (int i = 0; i < NUM_ROUTERS; i++) begin
                int rr_idx = (current_owner + i) % NUM_ROUTERS;
                if (request[rr_idx]) begin
                    grant[rr_idx] <= 1;
                    current_owner <= (rr_idx + 1) % NUM_ROUTERS;
                    hold_counter <= DELAY;
                    waveguide_busy <= 1;
                    break;
                end
            end
            /* verilator lint_on WIDTHEXPAND */
            /* verilator lint_off WIDTHTRUNC */
        end

        $display("Requests [%b,%b]", request[0], request[1]);
        $display("Grants   [%b,%b]", grant[0], grant[1]);
        $display("Waveguide Busy: %b, Hold Counter: %d", waveguide_busy, hold_counter);
    end

endmodule
