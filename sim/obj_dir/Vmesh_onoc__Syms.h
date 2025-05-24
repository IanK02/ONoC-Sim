// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VMESH_ONOC__SYMS_H_
#define VERILATED_VMESH_ONOC__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vmesh_onoc.h"

// INCLUDE MODULE CLASSES
#include "Vmesh_onoc___024root.h"
#include "Vmesh_onoc___024unit.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vmesh_onoc__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vmesh_onoc* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vmesh_onoc___024root           TOP;

    // CONSTRUCTORS
    Vmesh_onoc__Syms(VerilatedContext* contextp, const char* namep, Vmesh_onoc* modelp);
    ~Vmesh_onoc__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
