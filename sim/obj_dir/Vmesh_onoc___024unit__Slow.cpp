// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmesh_onoc.h for the primary calling header

#include "Vmesh_onoc__pch.h"
#include "Vmesh_onoc__Syms.h"
#include "Vmesh_onoc___024unit.h"

void Vmesh_onoc___024unit___ctor_var_reset(Vmesh_onoc___024unit* vlSelf);

Vmesh_onoc___024unit::Vmesh_onoc___024unit(Vmesh_onoc__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vmesh_onoc___024unit___ctor_var_reset(this);
}

void Vmesh_onoc___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vmesh_onoc___024unit::~Vmesh_onoc___024unit() {
}
