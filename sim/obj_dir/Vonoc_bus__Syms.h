// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VONOC_BUS__SYMS_H_
#define VERILATED_VONOC_BUS__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vonoc_bus.h"

// INCLUDE MODULE CLASSES
#include "Vonoc_bus___024root.h"
#include "Vonoc_bus___024unit.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vonoc_bus__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vonoc_bus* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vonoc_bus___024root            TOP;

    // CONSTRUCTORS
    Vonoc_bus__Syms(VerilatedContext* contextp, const char* namep, Vonoc_bus* modelp);
    ~Vonoc_bus__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
