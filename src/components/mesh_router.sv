import packet_pkg::packet_t;

module mesh_router #(
    parameter int ROUTER_ID = 0,
    parameter int X = 0,
    parameter int Y = 0,
    parameter int N = 2
)(
    input  logic clk,
    input  logic rst,

    // Local port
    input  packet_t data_in_local,
    input  logic    valid_in_local,
    output packet_t data_out_local,
    output logic    valid_out_local,

    // North
    input  packet_t data_in_north,
    input  logic    valid_in_north,
    output packet_t data_out_north,
    output logic    valid_out_north,

    // South
    input  packet_t data_in_south,
    input  logic    valid_in_south,
    output packet_t data_out_south,
    output logic    valid_out_south,

    // East
    input  packet_t data_in_east,
    input  logic    valid_in_east,
    output packet_t data_out_east,
    output logic    valid_out_east,

    // West
    input  packet_t data_in_west,
    input  logic    valid_in_west,
    output packet_t data_out_west,
    output logic    valid_out_west,

    // Arbitration interface
    input  logic permission_granted_send,
    output logic request_to_send,
    input  logic [31:0] router_id
);

    // Combine inputs from all directions
    packet_t packet_data;
    logic    packet_valid;

    always_comb begin //and if >1 packet comes in at once? won't one be lost?
        packet_valid = 0;
        packet_data  = '0;
        if (valid_in_local) begin packet_valid = 1; packet_data = data_in_local; end
        else if (valid_in_north) begin packet_valid = 1; packet_data = data_in_north; end
        else if (valid_in_south) begin packet_valid = 1; packet_data = data_in_south; end
        else if (valid_in_east)  begin packet_valid = 1; packet_data = data_in_east; end
        else if (valid_in_west)  begin packet_valid = 1; packet_data = data_in_west; end
    end

    logic [7:0] dest_id;
    logic [7:0] dest_x, dest_y;

    assign dest_id = packet_data.dest;
    assign dest_x = dest_id % N;
    assign dest_y = dest_id / N;

    // XY Routing
    logic [4:0] out_dir;
    always_comb begin
        out_dir = 5'b00000; // [local north south east west]
        if (dest_x > X) out_dir[3] = 1; // east
        else if (dest_x < X) out_dir[4] = 1; // west
        else if (dest_y > Y) out_dir[1] = 1; // north
        else if (dest_y < Y) out_dir[2] = 1; // south
        else out_dir[0] = 1; // local
    end

    assign request_to_send = packet_valid;

    assign valid_out_local = packet_valid && out_dir[0] && permission_granted_send;
    assign data_out_local  = packet_data;

    assign valid_out_north = packet_valid && out_dir[1] && permission_granted_send;
    assign data_out_north  = packet_data;

    assign valid_out_south = packet_valid && out_dir[2] && permission_granted_send;
    assign data_out_south  = packet_data;

    assign valid_out_east = packet_valid && out_dir[3] && permission_granted_send;
    assign data_out_east  = packet_data;

    assign valid_out_west = packet_valid && out_dir[4] && permission_granted_send;
    assign data_out_west  = packet_data;

endmodule
