#include <iostream>
#include <fstream>
#include <filesystem>  // C++17 for directory operations
#include "Vmesh_onoc.h"
#include "verilated.h"

// Global output file
std::ofstream csv_file;

void write_header(int num_routers) {
    csv_file << "cycle";
    for (int i = 0; i < num_routers; ++i) csv_file << ",ip_valid_to_router" << i;
    for (int i = 0; i < num_routers; ++i) csv_file << ",router_valid_to_ip" << i;
    csv_file << std::endl;
}

void log_metrics(Vmesh_onoc* top, int cycle, int num_routers) {
    csv_file << cycle;

    // IP -> Router valid signals (assumed 1-bit each)
    for (int i = 0; i < num_routers; ++i)
        csv_file << "," << (int)top->ip_valid_to_router[i];

    // Router -> IP valid signals (now 4-bit each, count number of 1's)
    for (int i = 0; i < num_routers; ++i) {
        uint8_t bits = top->router_valid_to_ip[i];  // 4-bit signal packed in a byte
        int count = 0;
        for (int b = 0; b < 4; ++b)
            count += (bits >> b) & 1;
        csv_file << "," << count;
    }

    csv_file << std::endl;
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Vmesh_onoc* top = new Vmesh_onoc;

    const int CYCLES = 500;
    const int NUM_ROUTERS = 4;

    // Create mesh_dta directory if it doesn't exist
    std::filesystem::create_directory("mesh_data");

    // Open file inside the mesh_data folder
    csv_file.open("mesh_data/ip_sent_and_received.csv");
    write_header(NUM_ROUTERS);

    //apply reset for 2 cycles
    top->rst = 1;
    for (int i = 0; i < 2; ++i) {
        top->clk = 0;
        top->eval();
        top->clk = 1;
        top->eval();
    }
    top->rst = 0;

    for (int cycle = 0; cycle < CYCLES; ++cycle) {
        top->clk = 0;
        top->eval();
        top->clk = 1;
        top->eval();
        log_metrics(top, cycle, NUM_ROUTERS);
    }

    top->final();
    csv_file.close();
    delete top;
    return 0;
}
