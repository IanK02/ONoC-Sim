// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmesh_onoc.h for the primary calling header

#include "Vmesh_onoc__pch.h"
#include "Vmesh_onoc__Syms.h"
#include "Vmesh_onoc___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmesh_onoc___024root___dump_triggers__stl(Vmesh_onoc___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vmesh_onoc___024root___eval_triggers__stl(Vmesh_onoc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmesh_onoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmesh_onoc___024root___eval_triggers__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.set(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmesh_onoc___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
