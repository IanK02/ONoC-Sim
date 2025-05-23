#include "Vcounter.h"
#include "verilated.h"

#include <iostream>

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);

    Vcounter* top = new Vcounter;

    vluint64_t main_time = 0;
    const int MAX_CYCLES = 100;

    top->clk = 0;
    top->rst = 1;

    while (!Verilated::gotFinish() && main_time < MAX_CYCLES * 2) {
        // Apply reset for 2 cycles
        if (main_time < 4) {
            top->rst = 1;
        } else {
            top->rst = 0;
        }

        // Toggle clock
        top->clk = !top->clk;

        // Evaluate the model
        top->eval();

        // On rising edge, print the output
        /*
        if (top->clk) {
            std::cout << "Cycle: " << (main_time / 2)
                      << " | out: " << (int)top->out << std::endl;
        }
        */

        main_time++;
    }

    top->final();
    delete top;
    return 0;
}
