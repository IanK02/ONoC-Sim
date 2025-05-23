package packet_pkg;

  // Parameterized packet definition
  typedef struct packed {
    logic [15:0]  src;        // Source ID (supports up to 16 nodes)
    logic [15:0]  dst;        // Destination ID
    logic [31:0] data;       // Data payload
    logic [31:0] timestamp;  // Injection cycle (for latency calculation)
    logic        valid;      // Valid bit
  } packet_t;

endpackage
