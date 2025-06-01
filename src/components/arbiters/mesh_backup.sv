module mesh_router #(
     /* verilator lint_off UNUSEDPARAM */
    parameter int ROUTER_ID = 0,
     /* verilator lint_on UNUSEDPARAM */
    parameter int X = 0,
    parameter int Y = 0,
    parameter int N = 2,
    parameter int FIFO_DEPTH = 4
)(
    input  logic clk,
    input  logic rst,

    // Local interface
    input  packet_t data_in_local,
    input  logic    valid_in_local,
    output packet_t data_out_local,
    output logic    valid_out_local,
    output logic    ready_to_receive_local,

    // North direction
    input  packet_t data_in_north,
    input  logic    valid_in_north,
    output packet_t data_out_north,
    output logic    valid_out_north,
    output logic    ready_to_receive_north,

    // South direction
    input  packet_t data_in_south,
    input  logic    valid_in_south,
    output packet_t data_out_south,
    output logic    valid_out_south,
    output logic    ready_to_receive_south,

    // East direction
    input  packet_t data_in_east,
    input  logic    valid_in_east,
    output packet_t data_out_east,
    output logic    valid_out_east,
    output logic    ready_to_receive_east,

    // West direction
    input  packet_t data_in_west,
    input  logic    valid_in_west,
    output packet_t data_out_west,
    output logic    valid_out_west,
    output logic    ready_to_receive_west,

    // Arbitration control
    input  logic [3:0] permission_granted_send,
    output logic [3:0] request_to_send

    //input  logic [15:0] router_id
);

    // FIFO buffers per direction
    packet_t fifo_local [FIFO_DEPTH];
    logic [6:0] head_local, tail_local, count_local;

    packet_t fifo_north [FIFO_DEPTH];
    logic [$clog2(FIFO_DEPTH):0] head_north, tail_north, count_north;

    packet_t fifo_south [FIFO_DEPTH];
    logic [$clog2(FIFO_DEPTH):0] head_south, tail_south, count_south;

    packet_t fifo_east [FIFO_DEPTH];
    logic [$clog2(FIFO_DEPTH):0] head_east, tail_east, count_east;

    packet_t fifo_west [FIFO_DEPTH];
    logic [$clog2(FIFO_DEPTH):0] head_west, tail_west, count_west;

    // Valid output signals and data latches
    packet_t current_packet;
    logic current_valid;
    logic [1:0] route_dir;
    //logic valid_dir;

    typedef enum logic [2:0] {
        SRC_LOCAL = 3'd0,
        SRC_NORTH = 3'd1,
        SRC_SOUTH = 3'd2,
        SRC_EAST  = 3'd3,
        SRC_WEST  = 3'd4
    } src_t;

    //src_t current_src;

    // Accept inputs into FIFOs if space is available
    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            count_local <= 0;
            count_north <= 0;
            count_south <= 0;
            count_east  <= 0;
            count_west  <= 0;
        end else begin
            /* verilator lint_off WIDTHEXPAND */
            /* verilator lint_off WIDTHTRUNC */
            if (valid_in_local) begin
                $display("Router %0d Received packet from local", ROUTER_ID);
                fifo_local[tail_local] <= data_in_local;
                tail_local <= (tail_local + 1) % FIFO_DEPTH;
                count_local <= count_local + 1;
            end
            if (valid_in_north && count_north < FIFO_DEPTH) begin
                $display("Router %0d Received packet from north", ROUTER_ID);
                fifo_north[tail_north] <= data_in_north;
                tail_north <= (tail_north + 1) % FIFO_DEPTH;
                count_north <= count_north + 1;
            end
            if (valid_in_south && count_south < FIFO_DEPTH) begin
                $display("Router %0d Received packet from south", ROUTER_ID);
                fifo_south[tail_south] <= data_in_south;
                tail_south <= (tail_south + 1) % FIFO_DEPTH;
                count_south <= count_south + 1;
            end
            if (valid_in_east && count_east < FIFO_DEPTH) begin
                $display("Router %0d Received packet from east", ROUTER_ID);
                fifo_east[tail_east] <= data_in_east;
                tail_east <= (tail_east + 1) % FIFO_DEPTH;
                count_east <= count_east + 1;
            end
            if (valid_in_west && count_west < FIFO_DEPTH) begin
                $display("Router %0d Received packet from west", ROUTER_ID);
                fifo_west[tail_west] <= data_in_west;
                tail_west <= (tail_west + 1) % FIFO_DEPTH;
                count_west <= count_west + 1;
            end
            /* verilator lint_on WIDTHEXPAND */
            /* verilator lint_on WIDTHTRUNC */
        end
    end

    // Select one packet to process from non-empty buffers
    always_ff @(posedge clk or posedge rst) begin
        /*
        $display("Count Local %d", count_local);
        $display("Count north %d", count_north);
        $display("Count south %d", count_south);
        $display("Count east %d", count_east);
        $display("Count west %d", count_west);
        */
        if (rst) begin
            current_valid <= 0;
        end else if (!current_valid) begin
            /* verilator lint_off WIDTHEXPAND */
            /* verilator lint_off WIDTHTRUNC */
            valid_out_local <= 0;
            valid_out_north <= 0;
            valid_out_south <= 0;
            valid_out_east <= 0;
            valid_out_west <= 0;
            if (count_local > 0) begin
                current_packet <= fifo_local[head_local];
                head_local <= (head_local + 1) % FIFO_DEPTH;
                count_local <= count_local - 1;
                current_valid <= 1;
                $display("router %0d picking packet to process from local", ROUTER_ID);
                //current_src <= SRC_LOCAL;
            end else if (count_north > 0) begin
                current_packet <= fifo_north[head_north];
                head_north <= (head_north + 1) % FIFO_DEPTH;
                count_north <= count_north - 1;
                current_valid <= 1;
                $display("router %0d picking packet to process from north", ROUTER_ID);
                //current_src <= SRC_NORTH;
            end else if (count_south > 0) begin
                current_packet <= fifo_south[head_south];
                head_south <= (head_south + 1) % FIFO_DEPTH;
                count_south <= count_south - 1;
                current_valid <= 1;
                $display("router %0d picking packet to process from south", ROUTER_ID);
                //current_src <= SRC_SOUTH;
            end else if (count_east > 0) begin
                current_packet <= fifo_east[head_east];
                head_east <= (head_east + 1) % FIFO_DEPTH;
                count_east <= count_east - 1;
                current_valid <= 1;
                $display("router %0d picking packet to process from east", ROUTER_ID);
                //current_src <= SRC_EAST;
            end else if (count_west > 0) begin
                current_packet <= fifo_west[head_west];
                head_west <= (head_west + 1) % FIFO_DEPTH;
                count_west <= count_west - 1;
                current_valid <= 1;
                $display("router %0d picking packet to process from west", ROUTER_ID);
                //current_src <= SRC_WEST;
            end
        end else if (current_valid) begin
            int dest_x = current_packet.dst[15:8];
            int dest_y = current_packet.dst[7:0];
            $display("Router %d Current packet destination and router address: %1d%1d%1d%1d",ROUTER_ID,dest_x,dest_y,X,Y);
            $display("Router %d Current valid, waiting for permission", ROUTER_ID);
            valid_out_local <= 0;
            valid_out_north <= 0;
            valid_out_south <= 0;
            valid_out_east <= 0;
            valid_out_west <= 0;
            if (dest_x == X && dest_y == Y) begin
                $display("Router %d Packet at correct destination router", ROUTER_ID);
                data_out_local <= current_packet;
                valid_out_local <= 1;
                current_valid <= 0;
            end else if (permission_granted_send[route_dir]) begin
                $display("Router %d permission granted!", ROUTER_ID);
                case (route_dir)
                    2'd0: begin data_out_north <= current_packet; valid_out_north <= 1; end
                    2'd1: begin data_out_south <= current_packet; valid_out_south <= 1; end
                    2'd2: begin data_out_east  <= current_packet; valid_out_east  <= 1; end
                    2'd3: begin data_out_west  <= current_packet; valid_out_west  <= 1; end
                endcase
                current_valid <= 0; //set to 0 because we've sent the packet out
            end
            /* verilator lint_on WIDTHEXPAND */
            /* verilator lint_on WIDTHTRUNC */
        end
        //$display("ID: %d. X: %d, Y: %d", ROUTER_ID, X, Y);
    end

    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            route_dir <= 2'd0;
            request_to_send <= 4'b0000;
        end else if (current_valid) begin
            /* verilator lint_off WIDTHEXPAND */
            int dest_x = current_packet.dst[15:8];
            int dest_y = current_packet.dst[7:0];

            // Default no request
            request_to_send <= 4'b0000;

            // Determine direction
            if (dest_x > X) route_dir <= 2'd2;  // EAST
            else if (dest_x < X) route_dir <= 2'd3;  // WEST
            else if (dest_y > Y) route_dir <= 2'd1;  // SOUTH
            else if (dest_y < Y) route_dir <= 2'd0;  // NORTH

            // Gate request by physical router boundaries
            case (route_dir)
                2'd0: request_to_send[0] <= (Y > 0);      // NORTH
                2'd1: request_to_send[1] <= (Y < N-1);    // SOUTH
                2'd2: request_to_send[2] <= (X < N-1);    // EAST
                2'd3: request_to_send[3] <= (X > 0);      // WEST
            endcase
        end else begin
            request_to_send <= 4'b0000;
        end
       
    end

always_ff @(posedge clk) begin
    integer i;
    $display("Current Valid: %0b", current_valid);
    $display("Request: %4b Grants %4b", request_to_send, permission_granted_send);
    $display("==== [Router %0d] FIFO Packet Timestamps ====", ROUTER_ID);

    $write("Local FIFO c=%0d   : ", count_local);
    for (i = 0; i < FIFO_DEPTH; i++) begin
        if (i < count_local)
            $write("%0d ", fifo_local[(head_local + i) % FIFO_DEPTH].timestamp);
        else
            $write("x ");
    end
    $display("");

    $write("North FIFO c=%0d   : ", count_north);
    for (i = 0; i < FIFO_DEPTH; i++) begin
        if (i < count_north)
            $write("%0d ", fifo_north[(head_north + i) % FIFO_DEPTH].timestamp);
        else
            $write("x ");
    end
    $display("");

    $write("South FIFO c=%0d   : ", count_south);
    for (i = 0; i < FIFO_DEPTH; i++) begin
        if (i < count_south)
            $write("%0d ", fifo_south[(head_south + i) % FIFO_DEPTH].timestamp);
        else
            $write("x ");
    end
    $display("");

    $write("East FIFO c=%0d    : ", count_east);
    for (i = 0; i < FIFO_DEPTH; i++) begin
        if (i < count_east)
            $write("%0d ", fifo_east[(head_east + i) % FIFO_DEPTH].timestamp);
        else
            $write("x ");
    end
    $display("");
end

    assign ready_to_receive_local = (count_local < FIFO_DEPTH);
    assign ready_to_receive_north = (count_north < FIFO_DEPTH);
    assign ready_to_receive_south = (count_south < FIFO_DEPTH);
    assign ready_to_receive_east  = (count_east  < FIFO_DEPTH);
    assign ready_to_receive_west  = (count_west  < FIFO_DEPTH);
    /* verilator lint_on WIDTHEXPAND */