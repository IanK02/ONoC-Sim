// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vonoc_bus.h for the primary calling header

#ifndef VERILATED_VONOC_BUS___024UNIT_H_
#define VERILATED_VONOC_BUS___024UNIT_H_  // guard

#include "verilated.h"


class Vonoc_bus__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vonoc_bus___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vonoc_bus__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vonoc_bus___024unit(Vonoc_bus__Syms* symsp, const char* v__name);
    ~Vonoc_bus___024unit();
    VL_UNCOPYABLE(Vonoc_bus___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
