// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vonoc_bus.h for the primary calling header

#include "Vonoc_bus__pch.h"
#include "Vonoc_bus__Syms.h"
#include "Vonoc_bus___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vonoc_bus___024root___dump_triggers__stl(Vonoc_bus___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vonoc_bus___024root___eval_triggers__stl(Vonoc_bus___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vonoc_bus__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vonoc_bus___024root___eval_triggers__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.set(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vonoc_bus___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
