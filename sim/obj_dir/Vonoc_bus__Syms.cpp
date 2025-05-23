// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vonoc_bus__pch.h"
#include "Vonoc_bus.h"
#include "Vonoc_bus___024root.h"
#include "Vonoc_bus___024unit.h"

// FUNCTIONS
Vonoc_bus__Syms::~Vonoc_bus__Syms()
{
}

Vonoc_bus__Syms::Vonoc_bus__Syms(VerilatedContext* contextp, const char* namep, Vonoc_bus* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(762);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
