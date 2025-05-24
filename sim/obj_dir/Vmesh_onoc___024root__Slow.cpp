// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmesh_onoc.h for the primary calling header

#include "Vmesh_onoc__pch.h"
#include "Vmesh_onoc__Syms.h"
#include "Vmesh_onoc___024root.h"

void Vmesh_onoc___024root___ctor_var_reset(Vmesh_onoc___024root* vlSelf);

Vmesh_onoc___024root::Vmesh_onoc___024root(Vmesh_onoc__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vmesh_onoc___024root___ctor_var_reset(this);
}

void Vmesh_onoc___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vmesh_onoc___024root::~Vmesh_onoc___024root() {
}
