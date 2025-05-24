// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vmesh_onoc__pch.h"
#include "Vmesh_onoc.h"
#include "Vmesh_onoc___024root.h"
#include "Vmesh_onoc___024unit.h"

// FUNCTIONS
Vmesh_onoc__Syms::~Vmesh_onoc__Syms()
{
}

Vmesh_onoc__Syms::Vmesh_onoc__Syms(VerilatedContext* contextp, const char* namep, Vmesh_onoc* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(4862);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
