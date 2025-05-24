// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vmesh_onoc__pch.h"

//============================================================
// Constructors

Vmesh_onoc::Vmesh_onoc(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vmesh_onoc__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , router_sent{vlSymsp->TOP.router_sent}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vmesh_onoc::Vmesh_onoc(const char* _vcname__)
    : Vmesh_onoc(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vmesh_onoc::~Vmesh_onoc() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vmesh_onoc___024root___eval_debug_assertions(Vmesh_onoc___024root* vlSelf);
#endif  // VL_DEBUG
void Vmesh_onoc___024root___eval_static(Vmesh_onoc___024root* vlSelf);
void Vmesh_onoc___024root___eval_initial(Vmesh_onoc___024root* vlSelf);
void Vmesh_onoc___024root___eval_settle(Vmesh_onoc___024root* vlSelf);
void Vmesh_onoc___024root___eval(Vmesh_onoc___024root* vlSelf);

void Vmesh_onoc::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vmesh_onoc::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vmesh_onoc___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vmesh_onoc___024root___eval_static(&(vlSymsp->TOP));
        Vmesh_onoc___024root___eval_initial(&(vlSymsp->TOP));
        Vmesh_onoc___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vmesh_onoc___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vmesh_onoc::eventsPending() { return false; }

uint64_t Vmesh_onoc::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vmesh_onoc::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vmesh_onoc___024root___eval_final(Vmesh_onoc___024root* vlSelf);

VL_ATTR_COLD void Vmesh_onoc::final() {
    Vmesh_onoc___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vmesh_onoc::hierName() const { return vlSymsp->name(); }
const char* Vmesh_onoc::modelName() const { return "Vmesh_onoc"; }
unsigned Vmesh_onoc::threads() const { return 1; }
void Vmesh_onoc::prepareClone() const { contextp()->prepareClone(); }
void Vmesh_onoc::atClone() const {
    contextp()->threadPoolpOnClone();
}
