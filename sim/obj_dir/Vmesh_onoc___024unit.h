// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmesh_onoc.h for the primary calling header

#ifndef VERILATED_VMESH_ONOC___024UNIT_H_
#define VERILATED_VMESH_ONOC___024UNIT_H_  // guard

#include "verilated.h"


class Vmesh_onoc__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vmesh_onoc___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vmesh_onoc__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmesh_onoc___024unit(Vmesh_onoc__Syms* symsp, const char* v__name);
    ~Vmesh_onoc___024unit();
    VL_UNCOPYABLE(Vmesh_onoc___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
