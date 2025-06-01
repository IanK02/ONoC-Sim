module mesh_router #(
     /* verilator lint_off UNUSEDPARAM */
    parameter int ROUTER_ID = 0,
    parameter int X = 0,
    parameter int Y = 0,
    parameter int N = 2,
    /* verilator lint_on UNUSEDPARAM */
    parameter int FIFO_DEPTH = 4
)(
    input  logic clk,
    input  logic rst,

    // Local interface
    input  packet_t data_in_local,
    input  logic    valid_in_local,
    output packet_t [3:0] data_out_local,
    output logic    [3:0] valid_out_local,
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
    logic [$clog2(FIFO_DEPTH):0] head_local, tail_local, count_local;

    packet_t fifo_north [FIFO_DEPTH];
    logic [$clog2(FIFO_DEPTH):0] head_north, tail_north, count_north;

    packet_t fifo_south [FIFO_DEPTH];
    logic [$clog2(FIFO_DEPTH):0] head_south, tail_south, count_south;

    packet_t fifo_east [FIFO_DEPTH];
    logic [$clog2(FIFO_DEPTH):0] head_east, tail_east, count_east;

    packet_t fifo_west [FIFO_DEPTH];
    logic [$clog2(FIFO_DEPTH):0] head_west, tail_west, count_west;



    typedef enum logic [2:0] {
        SRC_LOCAL = 3'd0,
        SRC_NORTH = 3'd1,
        SRC_SOUTH = 3'd2,
        SRC_EAST  = 3'd3,
        SRC_WEST  = 3'd4
    } src_t;

    //src_t current_src;

    // Accept inputs into FIFOs if space is available

    // get rid of packet
    always_ff @(posedge clk) begin
        if (rst) begin
            valid_out_local <= 4'b0000;
            request_to_send <= 4'b0000;
            valid_out_north <= 0;
            valid_out_south <= 0;
            valid_out_east  <= 0;
            valid_out_west  <= 0;
            head_local      <= 0;
            head_north     <= 0;
            head_south      <= 0;
            head_east     <= 0;
            head_west    <= 0;
            //been_sent_out_per_dir <= 4'b0000;
        end else begin
            /* verilator lint_off WIDTHEXPAND */
            /* verilator lint_off WIDTHTRUNC */
            logic [3:0] been_sent_out_per_dir;  // 0: N, 1: S, 2: E, 3: W  //used to check if we've sent data out on this direction in this clock cycle
            request_to_send <= 4'b0000;
            valid_out_local <= 4'b0000;
            valid_out_north <= 0;
            valid_out_south <= 0;
            valid_out_east <= 0;
            valid_out_west <= 0;
            been_sent_out_per_dir = 4'b0000;
            // Local FIFO
            if (count_local > 0) begin
                packet_t p = fifo_local[head_local];
            // logic [$clog2(FIFO_DEPTH):0] next_head_local;
                if (p.dst[15:8] == X && p.dst[7:0] == Y) begin
                    //this should NEVER HAPPEN
                    data_out_local[0] <= p;
                    valid_out_local[0] <= 1;
                    head_local <= (head_local + 1) % FIFO_DEPTH;
                    count_local <= count_local - 1;
                end else begin
                    int dir = route_for(p.dst[15:8], p.dst[7:0]);
                    if (dir >= 0) request_to_send[dir] <= 1;
                    if (permission_granted_send[dir] && !been_sent_out_per_dir[dir]) begin
                        been_sent_out_per_dir[dir] = 1;
                        $display("Router %0d Dequeueing packet", ROUTER_ID);
                        //if(valid_in_local && count_local < FIFO_DEPTH) $display("Local WR conflict");
                        send_packet_to_dir(p, dir);
                        head_local <= (head_local + 1) % FIFO_DEPTH;
                        count_local <= count_local - 1;
                    end
                end
            end
            // North FIFO
            if (count_north > 0) begin
                packet_t p = fifo_north[head_north];
                if (p.dst[15:8] == X && p.dst[7:0] == Y) begin
                    data_out_local[0] <= p;
                    valid_out_local[0] <= 1;
                    head_north <= (head_north + 1) % FIFO_DEPTH;
                    count_north <= count_north - 1;
                end else begin
                    int dir = route_for(p.dst[15:8], p.dst[7:0]);
                    if (dir >= 0) request_to_send[dir] <= 1;
                    if (permission_granted_send[dir] && !been_sent_out_per_dir[dir]) begin
                        been_sent_out_per_dir[dir] = 1;
                        //if (valid_in_north && count_north < FIFO_DEPTH) $display("North WR conflict");
                        send_packet_to_dir(p, dir);
                        head_north <= (head_north + 1) % FIFO_DEPTH;
                        count_north <= count_north - 1;
                    end
                end
            end
            // South FIFO
            if (count_south > 0) begin
                packet_t p = fifo_south[head_south];
                if (p.dst[15:8] == X && p.dst[7:0] == Y) begin
                    data_out_local[1] <= p;
                    valid_out_local[1] <= 1;
                    head_south <= (head_south + 1) % FIFO_DEPTH;
                    count_south <= count_south - 1;
                end else begin
                    int dir = route_for(p.dst[15:8], p.dst[7:0]);
                    if (dir >= 0) request_to_send[dir] <= 1;
                    if (permission_granted_send[dir] && !been_sent_out_per_dir[dir]) begin
                        been_sent_out_per_dir[dir] = 1;
                        //if((valid_in_south && count_south < FIFO_DEPTH)) $display("South WR conflict");
                        send_packet_to_dir(p, dir);
                        head_south <= (head_south + 1) % FIFO_DEPTH;
                        count_south <= count_south - 1;
                    end
                end
            end
            // East FIFO
            if (count_east > 0) begin
                packet_t p = fifo_east[head_east];
                if (p.dst[15:8] == X && p.dst[7:0] == Y) begin
                    data_out_local[2] <= p;
                    valid_out_local[2] <= 1;
                    head_east <= (head_east + 1) % FIFO_DEPTH;
                    count_east <= count_east - 1;
                end else begin
                    int dir = route_for(p.dst[15:8], p.dst[7:0]);
                    if (dir >= 0) request_to_send[dir] <= 1;
                    if (permission_granted_send[dir] && !been_sent_out_per_dir[dir]) begin
                        been_sent_out_per_dir[dir] = 1;
                        //if(valid_in_east && count_east < FIFO_DEPTH) $display("East WR conflict");
                        send_packet_to_dir(p, dir);
                        head_east <= (head_east + 1) % FIFO_DEPTH;
                        count_east <= count_east - 1;
                    end
                end
            end
            // West FIFO
            if (count_west > 0) begin
                packet_t p = fifo_west[head_west];
                if (p.dst[15:8] == X && p.dst[7:0] == Y) begin
                    data_out_local[3] <= p;
                    valid_out_local[3] <= 1;
                    head_west <= (head_west + 1) % FIFO_DEPTH;
                    count_west <= count_west - 1;
                end else begin
                    int dir = route_for(p.dst[15:8], p.dst[7:0]);
                    if (dir >= 0) request_to_send[dir] <= 1;
                    if (permission_granted_send[dir] && !been_sent_out_per_dir[dir]) begin
                        been_sent_out_per_dir[dir] = 1;
                        //if(valid_in_west && count_west < FIFO_DEPTH) $display("West WR conflict");
                        send_packet_to_dir(p, dir);
                        head_west <= (head_west + 1) % FIFO_DEPTH;
                        count_west <= count_west - 1;
                    end
                end
            end
        end
    end 

always_ff @(posedge clk) begin
    if(rst) begin
        count_local <= 0;
        count_north <= 0;
        count_south <= 0;
        count_east  <= 0;
        count_west  <= 0;
        tail_local  <= 0;
        tail_north  <= 0;
        tail_south  <= 0;
        tail_east  <= 0;
        tail_west  <= 0;
    end else begin
        //take in packet
        /* verilator lint_off WIDTHEXPAND */
        /* verilator lint_off WIDTHTRUNC */
        if (valid_in_local && count_local < FIFO_DEPTH) begin
            $display("Router %0d enqueueing %0d-%0d", ROUTER_ID, data_in_local.data[31:24], data_in_local.data[23:0]);
            fifo_local[tail_local] <= data_in_local;
            tail_local <= (tail_local + 1) % FIFO_DEPTH;
            count_local <= count_local + 1;
        end
        if (valid_in_north && count_north < FIFO_DEPTH) begin
            //$display("Router %0d Received packet from north", ROUTER_ID);
            fifo_north[tail_north] <= data_in_north;
            tail_north <= (tail_north + 1) % FIFO_DEPTH;
            count_north <= count_north + 1;
        end
        if (valid_in_south && count_south < FIFO_DEPTH) begin
            //$display("Router %0d Received packet from south", ROUTER_ID);
            fifo_south[tail_south] <= data_in_south;
            tail_south <= (tail_south + 1) % FIFO_DEPTH;
            count_south <= count_south + 1;
        end
        if (valid_in_east && count_east < FIFO_DEPTH) begin
            //$display("Router %0d Received packet from east", ROUTER_ID);
            fifo_east[tail_east] <= data_in_east;
            tail_east <= (tail_east + 1) % FIFO_DEPTH;
            count_east <= count_east + 1;
        end
        if (valid_in_west && count_west < FIFO_DEPTH) begin
            //$display("Router %0d Received packet from west", ROUTER_ID);
            fifo_west[tail_west] <= data_in_west;
            tail_west <= (tail_west + 1) % FIFO_DEPTH;
            count_west <= count_west + 1;
        end
        /* verilator lint_on WIDTHEXPAND */
        /* verilator lint_on WIDTHTRUNC */
    end
end


//debug printing
always_ff @(posedge clk) begin
    /* verilator lint_off WIDTHEXPAND */
    /* verilator lint_off WIDTHTRUNC */
    integer i;
    // Print direction summary
    $display("Router %0d wants_to_send: N=%0d S=%0d E=%0d W=%0d",
             ROUTER_ID, wants_to_go_north, wants_to_go_south,
             wants_to_go_east, wants_to_go_west);

    /* verilator lint_off UNUSEDSIGNAL */
    //$display("Current Valid: %0b", current_valid);
    $display("Request: %4b Grants %4b", request_to_send, permission_granted_send);
    $display("==== [Router %0d] FIFO Packet Timestamps ====", ROUTER_ID);

    $write("Local FIFO c=%0d h=%0d t=%0d  : ", count_local, head_local, tail_local);
    for (i = 0; i < FIFO_DEPTH; i++) begin
        if (i < count_local) begin
            packet_t pkt = fifo_local[(head_local + i) % FIFO_DEPTH];
            int d = route_for(pkt.dst[15:8], pkt.dst[7:0]);
            $write("%0d-%0d(d=%0d) ", pkt.data[31:24],pkt.data[23:0], d);
        end else
            $write("x ");
    end
    $display("");

    $write("North FIFO c=%0d h=%0d t=%0d   : ", count_north, head_north, tail_north);
    for (i = 0; i < FIFO_DEPTH; i++) begin
        if (i < count_north) begin
            packet_t pkt = fifo_north[(head_north + i) % FIFO_DEPTH];
            int d = route_for(pkt.dst[15:8], pkt.dst[7:0]);
            $write("%0d-%0d(d=%0d) ", pkt.data[31:24],pkt.data[23:0], d);
        end else
            $write("x ");
    end
    $display("");

    $write("South FIFO c=%0d h=%0d t=%0d   : ", count_south, head_south, tail_south);
    for (i = 0; i < FIFO_DEPTH; i++) begin
        if (i < count_south) begin
            packet_t pkt = fifo_south[(head_south + i) % FIFO_DEPTH];
            int d = route_for(pkt.dst[15:8], pkt.dst[7:0]);
            $write("%0d-%0d(d=%0d) ", pkt.data[31:24],pkt.data[23:0], d);
        end else
            $write("x ");
    end
    $display("");

    $write("East FIFO c=%0d h=%0d t=%0d   : ", count_east, head_east, tail_east);
    for (i = 0; i < FIFO_DEPTH; i++) begin
        if (i < count_east) begin
            packet_t pkt = fifo_east[(head_east + i) % FIFO_DEPTH];
            int d = route_for(pkt.dst[15:8], pkt.dst[7:0]);
            $write("%0d-%0d(d=%0d) ", pkt.data[31:24],pkt.data[23:0], d);
        end else
            $write("x ");
    end
    $display("");

    $write("West FIFO c=%0d h=%0d t=%0d   : ", count_west, head_west, tail_west);
    for (i = 0; i < FIFO_DEPTH; i++) begin
        if (i < count_west) begin
            packet_t pkt = fifo_west[(head_west + i) % FIFO_DEPTH];
            int d = route_for(pkt.dst[15:8], pkt.dst[7:0]);
            $write("%0d-%0d(d=%0d) ", pkt.data[31:24],pkt.data[23:0], d);
        end else
            $write("x ");
    end
    $display("");
    /* verilator lint_on UNUSEDSIGNAL */
    /* verilator lint_on WIDTHEXPAND */
    /* verilator lint_on WIDTHTRUNC */
end

int wants_to_go_north, wants_to_go_south, wants_to_go_east, wants_to_go_west;
/* verilator lint_off BLKSEQ */
always_ff @(posedge clk) begin
    /* verilator lint_off WIDTHEXPAND */
    /* verilator lint_off WIDTHTRUNC */
    integer i;
    int dir;

    // Reset direction counters
    wants_to_go_north = 0;
    wants_to_go_south = 0;
    wants_to_go_east  = 0;
    wants_to_go_west  = 0;

    // Check all FIFOs
    for (i = 0; i < count_local; i++) begin
        dir = route_for(fifo_local[(head_local + i) % FIFO_DEPTH].dst[15:8], fifo_local[(head_local + i) % FIFO_DEPTH].dst[7:0]);
        if (dir >= 0) begin
            case (dir)
                0: wants_to_go_north++;
                1: wants_to_go_south++;
                2: wants_to_go_east++;
                3: wants_to_go_west++;
            endcase
        end
    end
    for (i = 0; i < count_north; i++) begin
        dir = route_for(fifo_north[(head_north + i) % FIFO_DEPTH].dst[15:8], fifo_north[(head_north + i) % FIFO_DEPTH].dst[7:0]);
        if (dir >= 0) begin
            case (dir)
                0: wants_to_go_north++;
                1: wants_to_go_south++;
                2: wants_to_go_east++;
                3: wants_to_go_west++;
            endcase
        end
    end
    for (i = 0; i < count_south; i++) begin
        dir = route_for(fifo_south[(head_south + i) % FIFO_DEPTH].dst[15:8], fifo_south[(head_south + i) % FIFO_DEPTH].dst[7:0]);
        if (dir >= 0) begin
            case (dir)
                0: wants_to_go_north++;
                1: wants_to_go_south++;
                2: wants_to_go_east++;
                3: wants_to_go_west++;
            endcase
        end
    end
    for (i = 0; i < count_east; i++) begin
        dir = route_for(fifo_east[(head_east + i) % FIFO_DEPTH].dst[15:8], fifo_east[(head_east + i) % FIFO_DEPTH].dst[7:0]);
        if (dir >= 0) begin
            case (dir)
                0: wants_to_go_north++;
                1: wants_to_go_south++;
                2: wants_to_go_east++;
                3: wants_to_go_west++;
            endcase
        end
    end
    for (i = 0; i < count_west; i++) begin
        dir = route_for(fifo_west[(head_west + i) % FIFO_DEPTH].dst[15:8], fifo_west[(head_west + i) % FIFO_DEPTH].dst[7:0]);
        if (dir >= 0) begin
            case (dir)
                0: wants_to_go_north++;
                1: wants_to_go_south++;
                2: wants_to_go_east++;
                3: wants_to_go_west++;
            endcase
        end
    end
    /* verilator lint_on BLKSEQ */
end


    assign ready_to_receive_local = (count_local < FIFO_DEPTH);
    assign ready_to_receive_north = (count_north < FIFO_DEPTH);
    assign ready_to_receive_south = (count_south < FIFO_DEPTH);
    assign ready_to_receive_east  = (count_east  < FIFO_DEPTH);
    assign ready_to_receive_west  = (count_west  < FIFO_DEPTH);
    /* verilator lint_on WIDTHTRUNC */
    /* verilator lint_on WIDTHEXPAND */

    function automatic int route_for(input int dx, input int dy);
        if (dx > X) return 2; // EAST
        else if (dx < X) return 3; // WEST
        else if (dy > Y) return 1; // SOUTH
        else if (dy < Y) return 0; // NORTH
        else return -1; // LOCAL
    endfunction

    task automatic send_packet_to_dir(input packet_t pkt, input int dir);
    case (dir)
        0: begin data_out_north <= pkt; valid_out_north <= 1; end
        1: begin data_out_south <= pkt; valid_out_south <= 1; end
        2: begin data_out_east  <= pkt; valid_out_east  <= 1; end
        3: begin data_out_west  <= pkt; valid_out_west  <= 1; end
    endcase
    endtask

endmodule
