// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vonoc_bus__pch.h"

//============================================================
// Constructors

Vonoc_bus::Vonoc_bus(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vonoc_bus__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , ip_0_sent{vlSymsp->TOP.ip_0_sent}
    , ip_1_sent{vlSymsp->TOP.ip_1_sent}
    , ip_0_received{vlSymsp->TOP.ip_0_received}
    , ip_1_received{vlSymsp->TOP.ip_1_received}
    , router_0_sent{vlSymsp->TOP.router_0_sent}
    , router_1_sent{vlSymsp->TOP.router_1_sent}
    , ip_tx_packet_0_data{vlSymsp->TOP.ip_tx_packet_0_data}
    , ip_tx_packet_1_data{vlSymsp->TOP.ip_tx_packet_1_data}
    , ip_rx_packet_0_data{vlSymsp->TOP.ip_rx_packet_0_data}
    , ip_rx_packet_1_data{vlSymsp->TOP.ip_rx_packet_1_data}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vonoc_bus::Vonoc_bus(const char* _vcname__)
    : Vonoc_bus(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vonoc_bus::~Vonoc_bus() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vonoc_bus___024root___eval_debug_assertions(Vonoc_bus___024root* vlSelf);
#endif  // VL_DEBUG
void Vonoc_bus___024root___eval_static(Vonoc_bus___024root* vlSelf);
void Vonoc_bus___024root___eval_initial(Vonoc_bus___024root* vlSelf);
void Vonoc_bus___024root___eval_settle(Vonoc_bus___024root* vlSelf);
void Vonoc_bus___024root___eval(Vonoc_bus___024root* vlSelf);

void Vonoc_bus::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vonoc_bus::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vonoc_bus___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vonoc_bus___024root___eval_static(&(vlSymsp->TOP));
        Vonoc_bus___024root___eval_initial(&(vlSymsp->TOP));
        Vonoc_bus___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vonoc_bus___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vonoc_bus::eventsPending() { return false; }

uint64_t Vonoc_bus::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vonoc_bus::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vonoc_bus___024root___eval_final(Vonoc_bus___024root* vlSelf);

VL_ATTR_COLD void Vonoc_bus::final() {
    Vonoc_bus___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vonoc_bus::hierName() const { return vlSymsp->name(); }
const char* Vonoc_bus::modelName() const { return "Vonoc_bus"; }
unsigned Vonoc_bus::threads() const { return 1; }
void Vonoc_bus::prepareClone() const { contextp()->prepareClone(); }
void Vonoc_bus::atClone() const {
    contextp()->threadPoolpOnClone();
}
