// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vonoc_bus.h for the primary calling header

#include "Vonoc_bus__pch.h"
#include "Vonoc_bus__Syms.h"
#include "Vonoc_bus___024unit.h"

void Vonoc_bus___024unit___ctor_var_reset(Vonoc_bus___024unit* vlSelf);

Vonoc_bus___024unit::Vonoc_bus___024unit(Vonoc_bus__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vonoc_bus___024unit___ctor_var_reset(this);
}

void Vonoc_bus___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vonoc_bus___024unit::~Vonoc_bus___024unit() {
}
