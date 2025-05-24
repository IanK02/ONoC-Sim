// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmesh_onoc.h for the primary calling header

#include "Vmesh_onoc__pch.h"
#include "Vmesh_onoc___024root.h"

VL_ATTR_COLD void Vmesh_onoc___024root___eval_static(Vmesh_onoc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmesh_onoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmesh_onoc___024root___eval_static\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vmesh_onoc___024root___eval_initial(Vmesh_onoc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmesh_onoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmesh_onoc___024root___eval_initial\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst__0 = vlSelfRef.rst;
}

VL_ATTR_COLD void Vmesh_onoc___024root___eval_final(Vmesh_onoc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmesh_onoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmesh_onoc___024root___eval_final\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmesh_onoc___024root___dump_triggers__stl(Vmesh_onoc___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vmesh_onoc___024root___eval_phase__stl(Vmesh_onoc___024root* vlSelf);

VL_ATTR_COLD void Vmesh_onoc___024root___eval_settle(Vmesh_onoc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmesh_onoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmesh_onoc___024root___eval_settle\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vmesh_onoc___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("../src/../src/mesh_top/mesh_onoc.sv", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vmesh_onoc___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmesh_onoc___024root___dump_triggers__stl(Vmesh_onoc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmesh_onoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmesh_onoc___024root___dump_triggers__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vmesh_onoc___024root___stl_sequent__TOP__0(Vmesh_onoc___024root* vlSelf);

VL_ATTR_COLD void Vmesh_onoc___024root___eval_stl(Vmesh_onoc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmesh_onoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmesh_onoc___024root___eval_stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vmesh_onoc___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vmesh_onoc___024root___stl_sequent__TOP__0(Vmesh_onoc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmesh_onoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmesh_onoc___024root___stl_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide[0U][0U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf
        [1U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[0U][0U][0U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer
        [1U][0U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[0U][0U][1U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer
        [1U][1U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[0U][0U][2U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer
        [1U][2U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[0U][0U][3U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer
        [1U][3U];
    vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide[0U][1U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf
        [1U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[0U][1U][0U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer
        [1U][0U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[0U][1U][1U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer
        [1U][1U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[0U][1U][2U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer
        [1U][2U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[0U][1U][3U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer
        [1U][3U];
    vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide[0U][2U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf
        [1U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[0U][2U][0U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer
        [1U][0U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[0U][2U][1U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer
        [1U][1U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[0U][2U][2U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer
        [1U][2U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[0U][2U][3U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer
        [1U][3U];
    vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide[0U][3U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf
        [1U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[0U][3U][0U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer
        [1U][0U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[0U][3U][1U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer
        [1U][1U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[0U][3U][2U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer
        [1U][2U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[0U][3U][3U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer
        [1U][3U];
    vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide[1U][0U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf
        [1U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[1U][0U][0U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer
        [1U][0U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[1U][0U][1U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer
        [1U][1U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[1U][0U][2U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer
        [1U][2U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[1U][0U][3U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer
        [1U][3U];
    vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide[1U][1U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf
        [1U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[1U][1U][0U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer
        [1U][0U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[1U][1U][1U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer
        [1U][1U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[1U][1U][2U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer
        [1U][2U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[1U][1U][3U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer
        [1U][3U];
    vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide[1U][2U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf
        [1U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[1U][2U][0U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer
        [1U][0U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[1U][2U][1U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer
        [1U][1U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[1U][2U][2U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer
        [1U][2U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[1U][2U][3U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer
        [1U][3U];
    vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide[1U][3U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf
        [1U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[1U][3U][0U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer
        [1U][0U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[1U][3U][1U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer
        [1U][1U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[1U][3U][2U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer
        [1U][2U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[1U][3U][3U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer
        [1U][3U];
    vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide[2U][0U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf
        [1U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[2U][0U][0U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer
        [1U][0U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[2U][0U][1U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer
        [1U][1U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[2U][0U][2U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer
        [1U][2U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[2U][0U][3U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer
        [1U][3U];
    vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide[2U][1U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf
        [1U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[2U][1U][0U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer
        [1U][0U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[2U][1U][1U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer
        [1U][1U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[2U][1U][2U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer
        [1U][2U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[2U][1U][3U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer
        [1U][3U];
    vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide[2U][2U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf
        [1U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[2U][2U][0U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer
        [1U][0U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[2U][2U][1U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer
        [1U][1U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[2U][2U][2U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer
        [1U][2U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[2U][2U][3U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer
        [1U][3U];
    vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide[2U][3U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf
        [1U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[2U][3U][0U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer
        [1U][0U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[2U][3U][1U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer
        [1U][1U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[2U][3U][2U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer
        [1U][2U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[2U][3U][3U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer
        [1U][3U];
    vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide[3U][0U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf
        [1U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[3U][0U][0U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer
        [1U][0U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[3U][0U][1U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer
        [1U][1U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[3U][0U][2U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer
        [1U][2U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[3U][0U][3U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer
        [1U][3U];
    vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide[3U][1U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf
        [1U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[3U][1U][0U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer
        [1U][0U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[3U][1U][1U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer
        [1U][1U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[3U][1U][2U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer
        [1U][2U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[3U][1U][3U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer
        [1U][3U];
    vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide[3U][2U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf
        [1U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[3U][2U][0U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer
        [1U][0U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[3U][2U][1U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer
        [1U][1U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[3U][2U][2U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer
        [1U][2U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[3U][2U][3U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer
        [1U][3U];
    vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide[3U][3U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf
        [1U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[3U][3U][0U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer
        [1U][0U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[3U][3U][1U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer
        [1U][1U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[3U][3U][2U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer
        [1U][2U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[3U][3U][3U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer
        [1U][3U];
    vlSelfRef.mesh_onoc__DOT__waveguide_valid_to_photodetector[0U][1U] 
        = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_right
        [3U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[0U][1U][0U] 
        = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right
        [3U][0U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[0U][1U][1U] 
        = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right
        [3U][1U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[0U][1U][2U] 
        = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right
        [3U][2U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[0U][1U][3U] 
        = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right
        [3U][3U];
    vlSelfRef.mesh_onoc__DOT__waveguide_valid_to_photodetector[2U][0U] 
        = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_left
        [3U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[2U][0U][0U] 
        = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left
        [3U][0U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[2U][0U][1U] 
        = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left
        [3U][1U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[2U][0U][2U] 
        = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left
        [3U][2U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[2U][0U][3U] 
        = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left
        [3U][3U];
    vlSelfRef.mesh_onoc__DOT__waveguide_valid_to_photodetector[0U][2U] 
        = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_right
        [3U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[0U][2U][0U] 
        = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right
        [3U][0U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[0U][2U][1U] 
        = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right
        [3U][1U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[0U][2U][2U] 
        = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right
        [3U][2U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[0U][2U][3U] 
        = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right
        [3U][3U];
    vlSelfRef.mesh_onoc__DOT__waveguide_valid_to_photodetector[1U][3U] 
        = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_left
        [3U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[1U][3U][0U] 
        = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left
        [3U][0U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[1U][3U][1U] 
        = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left
        [3U][1U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[1U][3U][2U] 
        = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left
        [3U][2U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[1U][3U][3U] 
        = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left
        [3U][3U];
    vlSelfRef.mesh_onoc__DOT__waveguide_valid_to_photodetector[1U][1U] 
        = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_right
        [3U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[1U][1U][0U] 
        = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right
        [3U][0U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[1U][1U][1U] 
        = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right
        [3U][1U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[1U][1U][2U] 
        = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right
        [3U][2U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[1U][1U][3U] 
        = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right
        [3U][3U];
    vlSelfRef.mesh_onoc__DOT__waveguide_valid_to_photodetector[3U][0U] 
        = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_left
        [3U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[3U][0U][0U] 
        = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left
        [3U][0U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[3U][0U][1U] 
        = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left
        [3U][1U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[3U][0U][2U] 
        = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left
        [3U][2U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[3U][0U][3U] 
        = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left
        [3U][3U];
    vlSelfRef.mesh_onoc__DOT__waveguide_valid_to_photodetector[1U][3U] 
        = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_right
        [3U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[1U][3U][0U] 
        = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right
        [3U][0U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[1U][3U][1U] 
        = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right
        [3U][1U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[1U][3U][2U] 
        = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right
        [3U][2U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[1U][3U][3U] 
        = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right
        [3U][3U];
    vlSelfRef.mesh_onoc__DOT__waveguide_valid_to_photodetector[0U][2U] 
        = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_left
        [3U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[0U][2U][0U] 
        = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left
        [3U][0U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[0U][2U][1U] 
        = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left
        [3U][1U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[0U][2U][2U] 
        = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left
        [3U][2U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[0U][2U][3U] 
        = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left
        [3U][3U];
    vlSelfRef.mesh_onoc__DOT__waveguide_valid_to_photodetector[2U][0U] 
        = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_right
        [3U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[2U][0U][0U] 
        = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right
        [3U][0U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[2U][0U][1U] 
        = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right
        [3U][1U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[2U][0U][2U] 
        = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right
        [3U][2U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[2U][0U][3U] 
        = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right
        [3U][3U];
    vlSelfRef.mesh_onoc__DOT__waveguide_valid_to_photodetector[0U][1U] 
        = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_left
        [3U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[0U][1U][0U] 
        = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left
        [3U][0U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[0U][1U][1U] 
        = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left
        [3U][1U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[0U][1U][2U] 
        = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left
        [3U][2U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[0U][1U][3U] 
        = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left
        [3U][3U];
    vlSelfRef.mesh_onoc__DOT__waveguide_valid_to_photodetector[2U][2U] 
        = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_right
        [3U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[2U][2U][0U] 
        = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right
        [3U][0U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[2U][2U][1U] 
        = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right
        [3U][1U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[2U][2U][2U] 
        = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right
        [3U][2U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[2U][2U][3U] 
        = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right
        [3U][3U];
    vlSelfRef.mesh_onoc__DOT__waveguide_valid_to_photodetector[3U][3U] 
        = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_left
        [3U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[3U][3U][0U] 
        = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left
        [3U][0U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[3U][3U][1U] 
        = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left
        [3U][1U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[3U][3U][2U] 
        = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left
        [3U][2U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[3U][3U][3U] 
        = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left
        [3U][3U];
    vlSelfRef.mesh_onoc__DOT__waveguide_valid_to_photodetector[3U][0U] 
        = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_right
        [3U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[3U][0U][0U] 
        = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right
        [3U][0U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[3U][0U][1U] 
        = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right
        [3U][1U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[3U][0U][2U] 
        = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right
        [3U][2U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[3U][0U][3U] 
        = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right
        [3U][3U];
    vlSelfRef.mesh_onoc__DOT__waveguide_valid_to_photodetector[1U][1U] 
        = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_left
        [3U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[1U][1U][0U] 
        = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left
        [3U][0U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[1U][1U][1U] 
        = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left
        [3U][1U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[1U][1U][2U] 
        = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left
        [3U][2U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[1U][1U][3U] 
        = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left
        [3U][3U];
    vlSelfRef.mesh_onoc__DOT__waveguide_valid_to_photodetector[3U][3U] 
        = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_right
        [3U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[3U][3U][0U] 
        = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right
        [3U][0U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[3U][3U][1U] 
        = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right
        [3U][1U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[3U][3U][2U] 
        = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right
        [3U][2U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[3U][3U][3U] 
        = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right
        [3U][3U];
    vlSelfRef.mesh_onoc__DOT__waveguide_valid_to_photodetector[2U][2U] 
        = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_left
        [3U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[2U][2U][0U] 
        = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left
        [3U][0U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[2U][2U][1U] 
        = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left
        [3U][1U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[2U][2U][2U] 
        = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left
        [3U][2U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[2U][2U][3U] 
        = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left
        [3U][3U];
    vlSelfRef.mesh_onoc__DOT__wg_packet_done[0U][1U] 
        = ((vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_left
            [2U] << 1U) | vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_right
           [2U]);
    vlSelfRef.mesh_onoc__DOT__wg_packet_done[0U][2U] 
        = ((vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_left
            [2U] << 1U) | vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_right
           [2U]);
    vlSelfRef.mesh_onoc__DOT__wg_packet_done[1U][1U] 
        = ((vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_left
            [2U] << 1U) | vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_right
           [2U]);
    vlSelfRef.mesh_onoc__DOT__wg_packet_done[1U][3U] 
        = ((vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_left
            [2U] << 1U) | vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_right
           [2U]);
    vlSelfRef.mesh_onoc__DOT__wg_packet_done[2U][0U] 
        = ((vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_left
            [2U] << 1U) | vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_right
           [2U]);
    vlSelfRef.mesh_onoc__DOT__wg_packet_done[2U][2U] 
        = ((vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_left
            [2U] << 1U) | vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_right
           [2U]);
    vlSelfRef.mesh_onoc__DOT__wg_packet_done[3U][0U] 
        = ((vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_left
            [2U] << 1U) | vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_right
           [2U]);
    vlSelfRef.mesh_onoc__DOT__wg_packet_done[3U][3U] 
        = ((vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_left
            [2U] << 1U) | vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_right
           [2U]);
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[0U][0U][0U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer
        [1U][0U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[0U][0U][1U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer
        [1U][1U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[0U][0U][2U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer
        [1U][2U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[0U][0U][3U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer
        [1U][3U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[0U][1U][0U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer
        [1U][0U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[0U][1U][1U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer
        [1U][1U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[0U][1U][2U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer
        [1U][2U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[0U][1U][3U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer
        [1U][3U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[0U][2U][0U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer
        [1U][0U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[0U][2U][1U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer
        [1U][1U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[0U][2U][2U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer
        [1U][2U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[0U][2U][3U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer
        [1U][3U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[0U][3U][0U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer
        [1U][0U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[0U][3U][1U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer
        [1U][1U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[0U][3U][2U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer
        [1U][2U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[0U][3U][3U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer
        [1U][3U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[1U][0U][0U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer
        [1U][0U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[1U][0U][1U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer
        [1U][1U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[1U][0U][2U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer
        [1U][2U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[1U][0U][3U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer
        [1U][3U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[1U][1U][0U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer
        [1U][0U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[1U][1U][1U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer
        [1U][1U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[1U][1U][2U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer
        [1U][2U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[1U][1U][3U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer
        [1U][3U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[1U][2U][0U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer
        [1U][0U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[1U][2U][1U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer
        [1U][1U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[1U][2U][2U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer
        [1U][2U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[1U][2U][3U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer
        [1U][3U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[1U][3U][0U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer
        [1U][0U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[1U][3U][1U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer
        [1U][1U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[1U][3U][2U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer
        [1U][2U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[1U][3U][3U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer
        [1U][3U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[2U][0U][0U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer
        [1U][0U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[2U][0U][1U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer
        [1U][1U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[2U][0U][2U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer
        [1U][2U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[2U][0U][3U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer
        [1U][3U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[2U][1U][0U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer
        [1U][0U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[2U][1U][1U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer
        [1U][1U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[2U][1U][2U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer
        [1U][2U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[2U][1U][3U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer
        [1U][3U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[2U][2U][0U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer
        [1U][0U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[2U][2U][1U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer
        [1U][1U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[2U][2U][2U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer
        [1U][2U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[2U][2U][3U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer
        [1U][3U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[2U][3U][0U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer
        [1U][0U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[2U][3U][1U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer
        [1U][1U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[2U][3U][2U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer
        [1U][2U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[2U][3U][3U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer
        [1U][3U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[3U][0U][0U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer
        [1U][0U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[3U][0U][1U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer
        [1U][1U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[3U][0U][2U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer
        [1U][2U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[3U][0U][3U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer
        [1U][3U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[3U][1U][0U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer
        [1U][0U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[3U][1U][1U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer
        [1U][1U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[3U][1U][2U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer
        [1U][2U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[3U][1U][3U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer
        [1U][3U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[3U][2U][0U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer
        [1U][0U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[3U][2U][1U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer
        [1U][1U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[3U][2U][2U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer
        [1U][2U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[3U][2U][3U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer
        [1U][3U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[3U][3U][0U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer
        [1U][0U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[3U][3U][1U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer
        [1U][1U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[3U][3U][2U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer
        [1U][2U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[3U][3U][3U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer
        [1U][3U];
    vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router[0U][0U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf
        [1U];
    vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router[0U][1U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf
        [1U];
    vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router[0U][2U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf
        [1U];
    vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router[0U][3U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf
        [1U];
    vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router[1U][0U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf
        [1U];
    vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router[1U][1U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf
        [1U];
    vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router[1U][2U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf
        [1U];
    vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router[1U][3U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf
        [1U];
    vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router[2U][0U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf
        [1U];
    vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router[2U][1U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf
        [1U];
    vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router[2U][2U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf
        [1U];
    vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router[2U][3U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf
        [1U];
    vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router[3U][0U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf
        [1U];
    vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router[3U][1U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf
        [1U];
    vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router[3U][2U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf
        [1U];
    vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router[3U][3U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf
        [1U];
    vlSelfRef.mesh_onoc__DOT__packet_done_gen__BRA__0__KET____DOT__reduced 
        = ((0xeU & (IData)(vlSelfRef.mesh_onoc__DOT__packet_done_gen__BRA__0__KET____DOT__reduced)) 
           | (0U != vlSelfRef.mesh_onoc__DOT__wg_packet_done
              [0U][0U]));
    vlSelfRef.mesh_onoc__DOT__packet_done_gen__BRA__0__KET____DOT__reduced 
        = ((0xdU & (IData)(vlSelfRef.mesh_onoc__DOT__packet_done_gen__BRA__0__KET____DOT__reduced)) 
           | ((IData)((0U != vlSelfRef.mesh_onoc__DOT__wg_packet_done
                       [0U][1U])) << 1U));
    vlSelfRef.mesh_onoc__DOT__packet_done_gen__BRA__0__KET____DOT__reduced 
        = ((0xbU & (IData)(vlSelfRef.mesh_onoc__DOT__packet_done_gen__BRA__0__KET____DOT__reduced)) 
           | ((IData)((0U != vlSelfRef.mesh_onoc__DOT__wg_packet_done
                       [0U][2U])) << 2U));
    vlSelfRef.mesh_onoc__DOT__packet_done_gen__BRA__0__KET____DOT__reduced 
        = ((7U & (IData)(vlSelfRef.mesh_onoc__DOT__packet_done_gen__BRA__0__KET____DOT__reduced)) 
           | ((IData)((0U != vlSelfRef.mesh_onoc__DOT__wg_packet_done
                       [0U][3U])) << 3U));
    vlSelfRef.mesh_onoc__DOT__packet_done_gen__BRA__1__KET____DOT__reduced 
        = ((0xeU & (IData)(vlSelfRef.mesh_onoc__DOT__packet_done_gen__BRA__1__KET____DOT__reduced)) 
           | (0U != vlSelfRef.mesh_onoc__DOT__wg_packet_done
              [1U][0U]));
    vlSelfRef.mesh_onoc__DOT__packet_done_gen__BRA__1__KET____DOT__reduced 
        = ((0xdU & (IData)(vlSelfRef.mesh_onoc__DOT__packet_done_gen__BRA__1__KET____DOT__reduced)) 
           | ((IData)((0U != vlSelfRef.mesh_onoc__DOT__wg_packet_done
                       [1U][1U])) << 1U));
    vlSelfRef.mesh_onoc__DOT__packet_done_gen__BRA__1__KET____DOT__reduced 
        = ((0xbU & (IData)(vlSelfRef.mesh_onoc__DOT__packet_done_gen__BRA__1__KET____DOT__reduced)) 
           | ((IData)((0U != vlSelfRef.mesh_onoc__DOT__wg_packet_done
                       [1U][2U])) << 2U));
    vlSelfRef.mesh_onoc__DOT__packet_done_gen__BRA__1__KET____DOT__reduced 
        = ((7U & (IData)(vlSelfRef.mesh_onoc__DOT__packet_done_gen__BRA__1__KET____DOT__reduced)) 
           | ((IData)((0U != vlSelfRef.mesh_onoc__DOT__wg_packet_done
                       [1U][3U])) << 3U));
    vlSelfRef.mesh_onoc__DOT__packet_done_gen__BRA__2__KET____DOT__reduced 
        = ((0xeU & (IData)(vlSelfRef.mesh_onoc__DOT__packet_done_gen__BRA__2__KET____DOT__reduced)) 
           | (0U != vlSelfRef.mesh_onoc__DOT__wg_packet_done
              [2U][0U]));
    vlSelfRef.mesh_onoc__DOT__packet_done_gen__BRA__2__KET____DOT__reduced 
        = ((0xdU & (IData)(vlSelfRef.mesh_onoc__DOT__packet_done_gen__BRA__2__KET____DOT__reduced)) 
           | ((IData)((0U != vlSelfRef.mesh_onoc__DOT__wg_packet_done
                       [2U][1U])) << 1U));
    vlSelfRef.mesh_onoc__DOT__packet_done_gen__BRA__2__KET____DOT__reduced 
        = ((0xbU & (IData)(vlSelfRef.mesh_onoc__DOT__packet_done_gen__BRA__2__KET____DOT__reduced)) 
           | ((IData)((0U != vlSelfRef.mesh_onoc__DOT__wg_packet_done
                       [2U][2U])) << 2U));
    vlSelfRef.mesh_onoc__DOT__packet_done_gen__BRA__2__KET____DOT__reduced 
        = ((7U & (IData)(vlSelfRef.mesh_onoc__DOT__packet_done_gen__BRA__2__KET____DOT__reduced)) 
           | ((IData)((0U != vlSelfRef.mesh_onoc__DOT__wg_packet_done
                       [2U][3U])) << 3U));
    vlSelfRef.mesh_onoc__DOT__packet_done_gen__BRA__3__KET____DOT__reduced 
        = ((0xeU & (IData)(vlSelfRef.mesh_onoc__DOT__packet_done_gen__BRA__3__KET____DOT__reduced)) 
           | (0U != vlSelfRef.mesh_onoc__DOT__wg_packet_done
              [3U][0U]));
    vlSelfRef.mesh_onoc__DOT__packet_done_gen__BRA__3__KET____DOT__reduced 
        = ((0xdU & (IData)(vlSelfRef.mesh_onoc__DOT__packet_done_gen__BRA__3__KET____DOT__reduced)) 
           | ((IData)((0U != vlSelfRef.mesh_onoc__DOT__wg_packet_done
                       [3U][1U])) << 1U));
    vlSelfRef.mesh_onoc__DOT__packet_done_gen__BRA__3__KET____DOT__reduced 
        = ((0xbU & (IData)(vlSelfRef.mesh_onoc__DOT__packet_done_gen__BRA__3__KET____DOT__reduced)) 
           | ((IData)((0U != vlSelfRef.mesh_onoc__DOT__wg_packet_done
                       [3U][2U])) << 2U));
    vlSelfRef.mesh_onoc__DOT__packet_done_gen__BRA__3__KET____DOT__reduced 
        = ((7U & (IData)(vlSelfRef.mesh_onoc__DOT__packet_done_gen__BRA__3__KET____DOT__reduced)) 
           | ((IData)((0U != vlSelfRef.mesh_onoc__DOT__wg_packet_done
                       [3U][3U])) << 3U));
    vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_valid = 0U;
    vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_valid = 0U;
    vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_valid = 0U;
    vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_valid = 0U;
    vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_data[0U] = 0U;
    vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_data[1U] = 0U;
    vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_data[2U] = 0U;
    vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_data[3U] = 0U;
    if (vlSelfRef.mesh_onoc__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__ip_inst__valid_out) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_valid = 1U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_data[0U] 
            = vlSelfRef.mesh_onoc__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__ip_inst__packet_out[0U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_data[1U] 
            = vlSelfRef.mesh_onoc__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__ip_inst__packet_out[1U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_data[2U] 
            = vlSelfRef.mesh_onoc__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__ip_inst__packet_out[2U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_data[3U] 
            = vlSelfRef.mesh_onoc__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__ip_inst__packet_out[3U];
    } else if (vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router
               [0U][0U]) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_valid = 1U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_data[0U] 
            = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
            [0U][0U][0U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_data[1U] 
            = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
            [0U][0U][1U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_data[2U] 
            = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
            [0U][0U][2U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_data[3U] 
            = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
            [0U][0U][3U];
    } else if (vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router
               [0U][1U]) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_valid = 1U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_data[0U] 
            = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
            [0U][1U][0U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_data[1U] 
            = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
            [0U][1U][1U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_data[2U] 
            = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
            [0U][1U][2U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_data[3U] 
            = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
            [0U][1U][3U];
    } else if (vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router
               [0U][2U]) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_valid = 1U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_data[0U] 
            = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
            [0U][2U][0U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_data[1U] 
            = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
            [0U][2U][1U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_data[2U] 
            = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
            [0U][2U][2U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_data[3U] 
            = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
            [0U][2U][3U];
    } else if (vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router
               [0U][3U]) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_valid = 1U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_data[0U] 
            = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
            [0U][3U][0U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_data[1U] 
            = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
            [0U][3U][1U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_data[2U] 
            = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
            [0U][3U][2U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_data[3U] 
            = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
            [0U][3U][3U];
    }
    vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_data[0U] = 0U;
    vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_data[1U] = 0U;
    vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_data[2U] = 0U;
    vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_data[3U] = 0U;
    if (vlSelfRef.mesh_onoc__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__ip_inst__valid_out) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_valid = 1U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_data[0U] 
            = vlSelfRef.mesh_onoc__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__ip_inst__packet_out[0U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_data[1U] 
            = vlSelfRef.mesh_onoc__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__ip_inst__packet_out[1U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_data[2U] 
            = vlSelfRef.mesh_onoc__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__ip_inst__packet_out[2U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_data[3U] 
            = vlSelfRef.mesh_onoc__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__ip_inst__packet_out[3U];
    } else if (vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router
               [1U][0U]) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_valid = 1U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_data[0U] 
            = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
            [1U][0U][0U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_data[1U] 
            = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
            [1U][0U][1U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_data[2U] 
            = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
            [1U][0U][2U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_data[3U] 
            = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
            [1U][0U][3U];
    } else if (vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router
               [1U][1U]) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_valid = 1U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_data[0U] 
            = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
            [1U][1U][0U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_data[1U] 
            = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
            [1U][1U][1U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_data[2U] 
            = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
            [1U][1U][2U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_data[3U] 
            = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
            [1U][1U][3U];
    } else if (vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router
               [1U][2U]) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_valid = 1U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_data[0U] 
            = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
            [1U][2U][0U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_data[1U] 
            = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
            [1U][2U][1U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_data[2U] 
            = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
            [1U][2U][2U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_data[3U] 
            = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
            [1U][2U][3U];
    } else if (vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router
               [1U][3U]) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_valid = 1U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_data[0U] 
            = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
            [1U][3U][0U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_data[1U] 
            = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
            [1U][3U][1U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_data[2U] 
            = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
            [1U][3U][2U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_data[3U] 
            = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
            [1U][3U][3U];
    }
    vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_data[0U] = 0U;
    vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_data[1U] = 0U;
    vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_data[2U] = 0U;
    vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_data[3U] = 0U;
    if (vlSelfRef.mesh_onoc__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__ip_inst__valid_out) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_valid = 1U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_data[0U] 
            = vlSelfRef.mesh_onoc__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__ip_inst__packet_out[0U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_data[1U] 
            = vlSelfRef.mesh_onoc__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__ip_inst__packet_out[1U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_data[2U] 
            = vlSelfRef.mesh_onoc__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__ip_inst__packet_out[2U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_data[3U] 
            = vlSelfRef.mesh_onoc__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__ip_inst__packet_out[3U];
    } else if (vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router
               [2U][0U]) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_valid = 1U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_data[0U] 
            = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
            [2U][0U][0U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_data[1U] 
            = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
            [2U][0U][1U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_data[2U] 
            = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
            [2U][0U][2U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_data[3U] 
            = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
            [2U][0U][3U];
    } else if (vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router
               [2U][1U]) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_valid = 1U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_data[0U] 
            = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
            [2U][1U][0U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_data[1U] 
            = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
            [2U][1U][1U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_data[2U] 
            = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
            [2U][1U][2U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_data[3U] 
            = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
            [2U][1U][3U];
    } else if (vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router
               [2U][2U]) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_valid = 1U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_data[0U] 
            = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
            [2U][2U][0U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_data[1U] 
            = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
            [2U][2U][1U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_data[2U] 
            = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
            [2U][2U][2U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_data[3U] 
            = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
            [2U][2U][3U];
    } else if (vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router
               [2U][3U]) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_valid = 1U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_data[0U] 
            = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
            [2U][3U][0U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_data[1U] 
            = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
            [2U][3U][1U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_data[2U] 
            = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
            [2U][3U][2U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_data[3U] 
            = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
            [2U][3U][3U];
    }
    vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_data[0U] = 0U;
    vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_data[1U] = 0U;
    vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_data[2U] = 0U;
    vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_data[3U] = 0U;
    if (vlSelfRef.mesh_onoc__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__ip_inst__valid_out) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_valid = 1U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_data[0U] 
            = vlSelfRef.mesh_onoc__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__ip_inst__packet_out[0U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_data[1U] 
            = vlSelfRef.mesh_onoc__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__ip_inst__packet_out[1U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_data[2U] 
            = vlSelfRef.mesh_onoc__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__ip_inst__packet_out[2U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_data[3U] 
            = vlSelfRef.mesh_onoc__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__ip_inst__packet_out[3U];
    } else if (vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router
               [3U][0U]) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_valid = 1U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_data[0U] 
            = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
            [3U][0U][0U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_data[1U] 
            = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
            [3U][0U][1U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_data[2U] 
            = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
            [3U][0U][2U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_data[3U] 
            = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
            [3U][0U][3U];
    } else if (vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router
               [3U][1U]) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_valid = 1U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_data[0U] 
            = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
            [3U][1U][0U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_data[1U] 
            = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
            [3U][1U][1U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_data[2U] 
            = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
            [3U][1U][2U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_data[3U] 
            = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
            [3U][1U][3U];
    } else if (vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router
               [3U][2U]) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_valid = 1U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_data[0U] 
            = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
            [3U][2U][0U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_data[1U] 
            = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
            [3U][2U][1U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_data[2U] 
            = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
            [3U][2U][2U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_data[3U] 
            = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
            [3U][2U][3U];
    } else if (vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router
               [3U][3U]) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_valid = 1U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_data[0U] 
            = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
            [3U][3U][0U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_data[1U] 
            = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
            [3U][3U][1U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_data[2U] 
            = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
            [3U][3U][2U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_data[3U] 
            = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
            [3U][3U][3U];
    }
    vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__pending_send_packet 
        = ((~ (IData)(vlSelfRef.mesh_onoc__DOT__arb__DOT__current_grant)) 
           & (IData)(vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_valid));
    vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__pending_send_packet 
        = ((~ ((IData)(vlSelfRef.mesh_onoc__DOT__arb__DOT__current_grant) 
               >> 1U)) & (IData)(vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_valid));
    vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__pending_send_packet 
        = ((~ ((IData)(vlSelfRef.mesh_onoc__DOT__arb__DOT__current_grant) 
               >> 2U)) & (IData)(vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_valid));
    vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__pending_send_packet 
        = ((~ ((IData)(vlSelfRef.mesh_onoc__DOT__arb__DOT__current_grant) 
               >> 3U)) & (IData)(vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_valid));
    vlSelfRef.mesh_onoc__DOT__router_request = ((((IData)(vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_valid) 
                                                  << 3U) 
                                                 | ((IData)(vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_valid) 
                                                    << 2U)) 
                                                | (((IData)(vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_valid) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_valid)));
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[0U][3U][0U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_data[0U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[0U][3U][1U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_data[1U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[0U][3U][2U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_data[2U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[0U][3U][3U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_data[3U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[0U][2U][0U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_data[0U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[0U][2U][1U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_data[1U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[0U][2U][2U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_data[2U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[0U][2U][3U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_data[3U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[0U][1U][0U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_data[0U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[0U][1U][1U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_data[1U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[0U][1U][2U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_data[2U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[0U][1U][3U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_data[3U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[0U][0U][0U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_data[0U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[0U][0U][1U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_data[1U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[0U][0U][2U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_data[2U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[0U][0U][3U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_data[3U];
    vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__out_dir = 0U;
    vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__out_dir 
        = ((0U < (0xffU & (vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_data[2U] 
                           >> 9U))) ? (8U | (IData)(vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__out_dir))
            : ((0U < (0xffU & (vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_data[2U] 
                               >> 1U))) ? (2U | (IData)(vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__out_dir))
                : (1U | (IData)(vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__out_dir))));
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[1U][3U][0U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_data[0U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[1U][3U][1U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_data[1U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[1U][3U][2U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_data[2U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[1U][3U][3U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_data[3U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[1U][2U][0U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_data[0U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[1U][2U][1U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_data[1U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[1U][2U][2U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_data[2U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[1U][2U][3U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_data[3U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[1U][1U][0U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_data[0U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[1U][1U][1U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_data[1U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[1U][1U][2U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_data[2U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[1U][1U][3U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_data[3U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[1U][0U][0U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_data[0U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[1U][0U][1U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_data[1U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[1U][0U][2U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_data[2U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[1U][0U][3U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_data[3U];
    vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__out_dir = 0U;
    vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__out_dir 
        = ((1U < (0xffU & (vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_data[2U] 
                           >> 9U))) ? (8U | (IData)(vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__out_dir))
            : ((1U > (0xffU & (vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_data[2U] 
                               >> 9U))) ? (0x10U | (IData)(vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__out_dir))
                : ((0U < (0xffU & (vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_data[2U] 
                                   >> 1U))) ? (2U | (IData)(vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__out_dir))
                    : (1U | (IData)(vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__out_dir)))));
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[2U][3U][0U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_data[0U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[2U][3U][1U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_data[1U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[2U][3U][2U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_data[2U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[2U][3U][3U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_data[3U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[2U][2U][0U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_data[0U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[2U][2U][1U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_data[1U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[2U][2U][2U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_data[2U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[2U][2U][3U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_data[3U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[2U][1U][0U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_data[0U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[2U][1U][1U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_data[1U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[2U][1U][2U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_data[2U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[2U][1U][3U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_data[3U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[2U][0U][0U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_data[0U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[2U][0U][1U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_data[1U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[2U][0U][2U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_data[2U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[2U][0U][3U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_data[3U];
    vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__out_dir = 0U;
    vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__out_dir 
        = ((0U < (0xffU & (vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_data[2U] 
                           >> 9U))) ? (8U | (IData)(vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__out_dir))
            : ((1U < (0xffU & (vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_data[2U] 
                               >> 1U))) ? (2U | (IData)(vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__out_dir))
                : ((1U > (0xffU & (vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_data[2U] 
                                   >> 1U))) ? (4U | (IData)(vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__out_dir))
                    : (1U | (IData)(vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__out_dir)))));
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[3U][3U][0U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_data[0U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[3U][3U][1U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_data[1U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[3U][3U][2U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_data[2U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[3U][3U][3U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_data[3U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[3U][2U][0U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_data[0U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[3U][2U][1U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_data[1U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[3U][2U][2U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_data[2U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[3U][2U][3U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_data[3U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[3U][1U][0U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_data[0U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[3U][1U][1U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_data[1U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[3U][1U][2U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_data[2U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[3U][1U][3U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_data[3U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[3U][0U][0U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_data[0U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[3U][0U][1U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_data[1U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[3U][0U][2U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_data[2U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[3U][0U][3U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_data[3U];
    vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__out_dir = 0U;
    vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__out_dir 
        = ((1U < (0xffU & (vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_data[2U] 
                           >> 9U))) ? (8U | (IData)(vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__out_dir))
            : ((1U > (0xffU & (vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_data[2U] 
                               >> 9U))) ? (0x10U | (IData)(vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__out_dir))
                : ((1U < (0xffU & (vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_data[2U] 
                                   >> 1U))) ? (2U | (IData)(vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__out_dir))
                    : ((1U > (0xffU & (vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_data[2U] 
                                       >> 1U))) ? (4U 
                                                   | (IData)(vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__out_dir))
                        : (1U | (IData)(vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__out_dir))))));
    vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator[0U][3U] 
        = ((IData)(vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_valid) 
           & (((IData)(vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__out_dir) 
               >> 4U) & (IData)(vlSelfRef.mesh_onoc__DOT__arb__DOT__current_grant)));
    vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator[0U][2U] 
        = ((IData)(vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_valid) 
           & (((IData)(vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__out_dir) 
               >> 3U) & (IData)(vlSelfRef.mesh_onoc__DOT__arb__DOT__current_grant)));
    vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator[0U][1U] 
        = ((IData)(vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_valid) 
           & (((IData)(vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__out_dir) 
               >> 2U) & (IData)(vlSelfRef.mesh_onoc__DOT__arb__DOT__current_grant)));
    vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator[0U][0U] 
        = ((IData)(vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_valid) 
           & (((IData)(vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__out_dir) 
               >> 1U) & (IData)(vlSelfRef.mesh_onoc__DOT__arb__DOT__current_grant)));
    vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator[1U][3U] 
        = ((IData)(vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_valid) 
           & (((IData)(vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__out_dir) 
               >> 4U) & ((IData)(vlSelfRef.mesh_onoc__DOT__arb__DOT__current_grant) 
                         >> 1U)));
    vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator[1U][2U] 
        = ((IData)(vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_valid) 
           & (((IData)(vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__out_dir) 
               >> 3U) & ((IData)(vlSelfRef.mesh_onoc__DOT__arb__DOT__current_grant) 
                         >> 1U)));
    vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator[1U][1U] 
        = ((IData)(vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_valid) 
           & (((IData)(vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__out_dir) 
               >> 2U) & ((IData)(vlSelfRef.mesh_onoc__DOT__arb__DOT__current_grant) 
                         >> 1U)));
    vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator[1U][0U] 
        = ((IData)(vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_valid) 
           & (((IData)(vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__out_dir) 
               & (IData)(vlSelfRef.mesh_onoc__DOT__arb__DOT__current_grant)) 
              >> 1U));
    vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator[2U][3U] 
        = ((IData)(vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_valid) 
           & (((IData)(vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__out_dir) 
               >> 4U) & ((IData)(vlSelfRef.mesh_onoc__DOT__arb__DOT__current_grant) 
                         >> 2U)));
    vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator[2U][2U] 
        = ((IData)(vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_valid) 
           & (((IData)(vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__out_dir) 
               >> 3U) & ((IData)(vlSelfRef.mesh_onoc__DOT__arb__DOT__current_grant) 
                         >> 2U)));
    vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator[2U][1U] 
        = ((IData)(vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_valid) 
           & (((IData)(vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__out_dir) 
               & (IData)(vlSelfRef.mesh_onoc__DOT__arb__DOT__current_grant)) 
              >> 2U));
    vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator[2U][0U] 
        = ((IData)(vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_valid) 
           & (((IData)(vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__out_dir) 
               >> 1U) & ((IData)(vlSelfRef.mesh_onoc__DOT__arb__DOT__current_grant) 
                         >> 2U)));
    vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator[3U][3U] 
        = ((IData)(vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_valid) 
           & (((IData)(vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__out_dir) 
               >> 4U) & ((IData)(vlSelfRef.mesh_onoc__DOT__arb__DOT__current_grant) 
                         >> 3U)));
    vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator[3U][2U] 
        = ((IData)(vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_valid) 
           & (((IData)(vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__out_dir) 
               & (IData)(vlSelfRef.mesh_onoc__DOT__arb__DOT__current_grant)) 
              >> 3U));
    vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator[3U][1U] 
        = ((IData)(vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_valid) 
           & (((IData)(vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__out_dir) 
               >> 2U) & ((IData)(vlSelfRef.mesh_onoc__DOT__arb__DOT__current_grant) 
                         >> 3U)));
    vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator[3U][0U] 
        = ((IData)(vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_valid) 
           & (((IData)(vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__out_dir) 
               >> 1U) & ((IData)(vlSelfRef.mesh_onoc__DOT__arb__DOT__current_grant) 
                         >> 3U)));
    vlSelfRef.router_sent[0U] = vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator
        [0U];
    vlSelfRef.router_sent[1U] = vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator
        [1U];
    vlSelfRef.router_sent[2U] = vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator
        [2U];
    vlSelfRef.router_sent[3U] = vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator
        [3U];
}

VL_ATTR_COLD void Vmesh_onoc___024root___eval_triggers__stl(Vmesh_onoc___024root* vlSelf);

VL_ATTR_COLD bool Vmesh_onoc___024root___eval_phase__stl(Vmesh_onoc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmesh_onoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmesh_onoc___024root___eval_phase__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vmesh_onoc___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vmesh_onoc___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmesh_onoc___024root___dump_triggers__act(Vmesh_onoc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmesh_onoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmesh_onoc___024root___dump_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge rst)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmesh_onoc___024root___dump_triggers__nba(Vmesh_onoc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmesh_onoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmesh_onoc___024root___dump_triggers__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge rst)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vmesh_onoc___024root___ctor_var_reset(Vmesh_onoc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmesh_onoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmesh_onoc___024root___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->router_sent[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->mesh_onoc__DOT__router_request = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__modulator_to_waveguide[__Vi0][__Vi1]);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->mesh_onoc__DOT__modulator_valid_to_waveguide[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__waveguide_to_photodetector[__Vi0][__Vi1]);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->mesh_onoc__DOT__waveguide_valid_to_photodetector[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__photodetector_to_router[__Vi0][__Vi1]);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->mesh_onoc__DOT__photodetector_valid_to_router[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__router_to_modulator[__Vi0][__Vi1]);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->mesh_onoc__DOT__router_valid_to_modulator[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->mesh_onoc__DOT__wg_packet_done[__Vi0][__Vi1] = VL_RAND_RESET_I(2);
        }
    }
    vlSelf->mesh_onoc__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__ip_inst__valid_out = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__ip_inst__packet_out);
    vlSelf->mesh_onoc__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__ip_inst__valid_out = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__ip_inst__packet_out);
    vlSelf->mesh_onoc__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__ip_inst__valid_out = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__ip_inst__packet_out);
    vlSelf->mesh_onoc__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__ip_inst__valid_out = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__ip_inst__packet_out);
    vlSelf->mesh_onoc__DOT__packet_done_gen__BRA__0__KET____DOT__reduced = VL_RAND_RESET_I(4);
    vlSelf->mesh_onoc__DOT__packet_done_gen__BRA__1__KET____DOT__reduced = VL_RAND_RESET_I(4);
    vlSelf->mesh_onoc__DOT__packet_done_gen__BRA__2__KET____DOT__reduced = VL_RAND_RESET_I(4);
    vlSelf->mesh_onoc__DOT__packet_done_gen__BRA__3__KET____DOT__reduced = VL_RAND_RESET_I(4);
    vlSelf->mesh_onoc__DOT__arb__DOT__current_grant = VL_RAND_RESET_I(4);
    vlSelf->mesh_onoc__DOT__arb__DOT__waiting_for_done = VL_RAND_RESET_I(1);
    vlSelf->mesh_onoc__DOT__arb__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__payload = VL_RAND_RESET_I(32);
    vlSelf->mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__pkt_sent_last_cycle = VL_RAND_RESET_I(1);
    vlSelf->mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__cycle_counter = VL_RAND_RESET_I(32);
    vlSelf->mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__destination = VL_RAND_RESET_I(16);
    vlSelf->mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__unnamedblk1__DOT__send_now = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_data);
    vlSelf->mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_valid = VL_RAND_RESET_I(1);
    vlSelf->mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__pending_send_packet = VL_RAND_RESET_I(1);
    vlSelf->mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__out_dir = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__payload = VL_RAND_RESET_I(32);
    vlSelf->mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__pkt_sent_last_cycle = VL_RAND_RESET_I(1);
    vlSelf->mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__cycle_counter = VL_RAND_RESET_I(32);
    vlSelf->mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__destination = VL_RAND_RESET_I(16);
    vlSelf->mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__unnamedblk1__DOT__send_now = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_data);
    vlSelf->mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_valid = VL_RAND_RESET_I(1);
    vlSelf->mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__pending_send_packet = VL_RAND_RESET_I(1);
    vlSelf->mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__out_dir = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__payload = VL_RAND_RESET_I(32);
    vlSelf->mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__pkt_sent_last_cycle = VL_RAND_RESET_I(1);
    vlSelf->mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__cycle_counter = VL_RAND_RESET_I(32);
    vlSelf->mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__destination = VL_RAND_RESET_I(16);
    vlSelf->mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__unnamedblk1__DOT__send_now = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_data);
    vlSelf->mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_valid = VL_RAND_RESET_I(1);
    vlSelf->mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__pending_send_packet = VL_RAND_RESET_I(1);
    vlSelf->mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__out_dir = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__payload = VL_RAND_RESET_I(32);
    vlSelf->mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__pkt_sent_last_cycle = VL_RAND_RESET_I(1);
    vlSelf->mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__cycle_counter = VL_RAND_RESET_I(32);
    vlSelf->mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__destination = VL_RAND_RESET_I(16);
    vlSelf->mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__unnamedblk1__DOT__send_now = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_data);
    vlSelf->mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_valid = VL_RAND_RESET_I(1);
    vlSelf->mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__pending_send_packet = VL_RAND_RESET_I(1);
    vlSelf->mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__out_dir = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_left[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_right[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__current_cycle = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_left[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_right[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__current_cycle = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_left[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_right[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__current_cycle = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_left[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_right[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__current_cycle = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_left[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_right[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__current_cycle = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_left[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_right[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__current_cycle = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_left[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_right[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__current_cycle = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_left[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_right[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__current_cycle = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst__0 = VL_RAND_RESET_I(1);
}
