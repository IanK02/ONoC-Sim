#include "Vmesh_onoc.h"
#include "verilated.h"

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Vmesh_onoc top;

    const int CYCLES = 500;

    // Apply reset for 2 cycles
    top.rst = 1;
    for (int i = 0; i < 2; ++i) {
        top.clk = 0;
        top.eval();
        top.clk = 1;
        top.eval();
    }
    top.rst = 0;

    // Run simulation for specified number of cycles
    for (int cycle = 0; cycle < CYCLES; ++cycle) {
        top.clk = 0;
        top.eval();
        top.clk = 1;
        top.eval();
    }

    top.final();
    return 0;
}
