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
    vlSelfRef.mesh_onoc__DOT____Vcellinp__wg_inst__BRA__0__KET____DOT__fp_arb__request 
        = ((2U & ((IData)(vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__request_to_send) 
                  >> 1U)) | (1U & ((IData)(vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__request_to_send) 
                                   >> 3U)));
    vlSelfRef.mesh_onoc__DOT____Vcellinp__wg_inst__BRA__1__KET____DOT__fp_arb__request 
        = ((2U & ((IData)(vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__request_to_send) 
                  >> 1U)) | (1U & ((IData)(vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__request_to_send) 
                                   >> 3U)));
    vlSelfRef.mesh_onoc__DOT____Vcellinp__wg_inst__BRA__2__KET____DOT__fp_arb__request 
        = ((2U & (IData)(vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__request_to_send)) 
           | (1U & (IData)(vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__request_to_send)));
    vlSelfRef.mesh_onoc__DOT____Vcellinp__wg_inst__BRA__3__KET____DOT__fp_arb__request 
        = ((2U & (IData)(vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__request_to_send)) 
           | (1U & (IData)(vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__request_to_send)));
    vlSelfRef.ip_valid_to_router[0U] = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__valid_out;
    vlSelfRef.ip_valid_to_router[1U] = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__valid_out;
    vlSelfRef.ip_valid_to_router[2U] = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__valid_out;
    vlSelfRef.ip_valid_to_router[3U] = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__valid_out;
    vlSelfRef.router_valid_to_ip[0U] = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__valid_out_local;
    vlSelfRef.router_valid_to_ip[1U] = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__valid_out_local;
    vlSelfRef.router_valid_to_ip[2U] = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__valid_out_local;
    vlSelfRef.router_valid_to_ip[3U] = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__valid_out_local;
    vlSelfRef.mesh_onoc__DOT__waveguide_valid_to_photodetector[1U][3U] 
        = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__valid_right
        [3U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[1U][3U][0U] 
        = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_right
        [3U][0U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[1U][3U][1U] 
        = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_right
        [3U][1U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[1U][3U][2U] 
        = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_right
        [3U][2U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[1U][3U][3U] 
        = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_right
        [3U][3U];
    vlSelfRef.mesh_onoc__DOT__waveguide_valid_to_photodetector[0U][2U] 
        = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__valid_left
        [3U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[0U][2U][0U] 
        = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_left
        [3U][0U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[0U][2U][1U] 
        = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_left
        [3U][1U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[0U][2U][2U] 
        = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_left
        [3U][2U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[0U][2U][3U] 
        = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_left
        [3U][3U];
    vlSelfRef.mesh_onoc__DOT__router_granted[0U] = 
        ((0xbU & vlSelfRef.mesh_onoc__DOT__router_granted
          [0U]) | (4U & ((IData)(vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__fp_arb__DOT__current_grant) 
                         << 1U)));
    vlSelfRef.mesh_onoc__DOT__router_granted[1U] = 
        ((7U & vlSelfRef.mesh_onoc__DOT__router_granted
          [1U]) | (8U & ((IData)(vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__fp_arb__DOT__current_grant) 
                         << 3U)));
    vlSelfRef.mesh_onoc__DOT__waveguide_valid_to_photodetector[3U][3U] 
        = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__valid_right
        [3U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[3U][3U][0U] 
        = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_right
        [3U][0U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[3U][3U][1U] 
        = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_right
        [3U][1U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[3U][3U][2U] 
        = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_right
        [3U][2U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[3U][3U][3U] 
        = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_right
        [3U][3U];
    vlSelfRef.mesh_onoc__DOT__waveguide_valid_to_photodetector[2U][2U] 
        = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__valid_left
        [3U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[2U][2U][0U] 
        = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_left
        [3U][0U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[2U][2U][1U] 
        = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_left
        [3U][1U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[2U][2U][2U] 
        = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_left
        [3U][2U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[2U][2U][3U] 
        = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_left
        [3U][3U];
    vlSelfRef.mesh_onoc__DOT__router_granted[2U] = 
        ((0xbU & vlSelfRef.mesh_onoc__DOT__router_granted
          [2U]) | (4U & ((IData)(vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__fp_arb__DOT__current_grant) 
                         << 1U)));
    vlSelfRef.mesh_onoc__DOT__router_granted[3U] = 
        ((7U & vlSelfRef.mesh_onoc__DOT__router_granted
          [3U]) | (8U & ((IData)(vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__fp_arb__DOT__current_grant) 
                         << 3U)));
    vlSelfRef.mesh_onoc__DOT__waveguide_valid_to_photodetector[2U][0U] 
        = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__valid_right
        [3U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[2U][0U][0U] 
        = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_right
        [3U][0U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[2U][0U][1U] 
        = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_right
        [3U][1U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[2U][0U][2U] 
        = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_right
        [3U][2U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[2U][0U][3U] 
        = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_right
        [3U][3U];
    vlSelfRef.mesh_onoc__DOT__waveguide_valid_to_photodetector[0U][1U] 
        = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__valid_left
        [3U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[0U][1U][0U] 
        = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_left
        [3U][0U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[0U][1U][1U] 
        = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_left
        [3U][1U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[0U][1U][2U] 
        = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_left
        [3U][2U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[0U][1U][3U] 
        = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_left
        [3U][3U];
    vlSelfRef.mesh_onoc__DOT__router_granted[0U] = 
        ((0xdU & vlSelfRef.mesh_onoc__DOT__router_granted
          [0U]) | (2U & (IData)(vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__fp_arb__DOT__current_grant)));
    vlSelfRef.mesh_onoc__DOT__router_granted[2U] = 
        ((0xeU & vlSelfRef.mesh_onoc__DOT__router_granted
          [2U]) | (1U & (IData)(vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__fp_arb__DOT__current_grant)));
    vlSelfRef.mesh_onoc__DOT__waveguide_valid_to_photodetector[3U][0U] 
        = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__valid_right
        [3U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[3U][0U][0U] 
        = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_right
        [3U][0U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[3U][0U][1U] 
        = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_right
        [3U][1U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[3U][0U][2U] 
        = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_right
        [3U][2U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[3U][0U][3U] 
        = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_right
        [3U][3U];
    vlSelfRef.mesh_onoc__DOT__waveguide_valid_to_photodetector[1U][1U] 
        = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__valid_left
        [3U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[1U][1U][0U] 
        = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_left
        [3U][0U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[1U][1U][1U] 
        = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_left
        [3U][1U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[1U][1U][2U] 
        = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_left
        [3U][2U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[1U][1U][3U] 
        = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_left
        [3U][3U];
    vlSelfRef.mesh_onoc__DOT__router_granted[1U] = 
        ((0xdU & vlSelfRef.mesh_onoc__DOT__router_granted
          [1U]) | (2U & (IData)(vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__fp_arb__DOT__current_grant)));
    vlSelfRef.mesh_onoc__DOT__router_granted[3U] = 
        ((0xeU & vlSelfRef.mesh_onoc__DOT__router_granted
          [3U]) | (1U & (IData)(vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__fp_arb__DOT__current_grant)));
    vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator[0U][3U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__valid_out_west;
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[0U][3U][0U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_west[0U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[0U][3U][1U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_west[1U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[0U][3U][2U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_west[2U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[0U][3U][3U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_west[3U];
    vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator[0U][2U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__valid_out_east;
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[0U][2U][0U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_east[0U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[0U][2U][1U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_east[1U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[0U][2U][2U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_east[2U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[0U][2U][3U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_east[3U];
    vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator[0U][1U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__valid_out_south;
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[0U][1U][0U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_south[0U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[0U][1U][1U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_south[1U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[0U][1U][2U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_south[2U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[0U][1U][3U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_south[3U];
    vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator[0U][0U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__valid_out_north;
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[0U][0U][0U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_north[0U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[0U][0U][1U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_north[1U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[0U][0U][2U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_north[2U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[0U][0U][3U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_north[3U];
    vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide[0U][0U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf
        [1U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[0U][0U][0U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer
        [1U][0U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[0U][0U][1U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer
        [1U][1U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[0U][0U][2U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer
        [1U][2U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[0U][0U][3U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer
        [1U][3U];
    vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router[0U][0U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf
        [1U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[0U][0U][0U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer
        [1U][0U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[0U][0U][1U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer
        [1U][1U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[0U][0U][2U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer
        [1U][2U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[0U][0U][3U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer
        [1U][3U];
    vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide[0U][1U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf
        [1U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[0U][1U][0U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer
        [1U][0U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[0U][1U][1U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer
        [1U][1U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[0U][1U][2U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer
        [1U][2U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[0U][1U][3U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer
        [1U][3U];
    vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router[0U][1U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf
        [1U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[0U][1U][0U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer
        [1U][0U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[0U][1U][1U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer
        [1U][1U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[0U][1U][2U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer
        [1U][2U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[0U][1U][3U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer
        [1U][3U];
    vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide[0U][2U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf
        [1U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[0U][2U][0U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer
        [1U][0U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[0U][2U][1U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer
        [1U][1U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[0U][2U][2U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer
        [1U][2U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[0U][2U][3U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer
        [1U][3U];
    vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router[0U][2U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf
        [1U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[0U][2U][0U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer
        [1U][0U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[0U][2U][1U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer
        [1U][1U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[0U][2U][2U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer
        [1U][2U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[0U][2U][3U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer
        [1U][3U];
    vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide[0U][3U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf
        [1U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[0U][3U][0U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer
        [1U][0U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[0U][3U][1U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer
        [1U][1U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[0U][3U][2U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer
        [1U][2U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[0U][3U][3U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer
        [1U][3U];
    vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router[0U][3U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf
        [1U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[0U][3U][0U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer
        [1U][0U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[0U][3U][1U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer
        [1U][1U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[0U][3U][2U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer
        [1U][2U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[0U][3U][3U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer
        [1U][3U];
    vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator[1U][3U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__valid_out_west;
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[1U][3U][0U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_west[0U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[1U][3U][1U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_west[1U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[1U][3U][2U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_west[2U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[1U][3U][3U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_west[3U];
    vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator[1U][2U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__valid_out_east;
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[1U][2U][0U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_east[0U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[1U][2U][1U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_east[1U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[1U][2U][2U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_east[2U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[1U][2U][3U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_east[3U];
    vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator[1U][1U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__valid_out_south;
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[1U][1U][0U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_south[0U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[1U][1U][1U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_south[1U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[1U][1U][2U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_south[2U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[1U][1U][3U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_south[3U];
    vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator[1U][0U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__valid_out_north;
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[1U][0U][0U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_north[0U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[1U][0U][1U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_north[1U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[1U][0U][2U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_north[2U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[1U][0U][3U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_north[3U];
    vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide[1U][0U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf
        [1U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[1U][0U][0U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer
        [1U][0U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[1U][0U][1U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer
        [1U][1U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[1U][0U][2U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer
        [1U][2U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[1U][0U][3U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer
        [1U][3U];
    vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router[1U][0U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf
        [1U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[1U][0U][0U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer
        [1U][0U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[1U][0U][1U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer
        [1U][1U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[1U][0U][2U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer
        [1U][2U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[1U][0U][3U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer
        [1U][3U];
    vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide[1U][1U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf
        [1U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[1U][1U][0U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer
        [1U][0U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[1U][1U][1U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer
        [1U][1U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[1U][1U][2U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer
        [1U][2U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[1U][1U][3U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer
        [1U][3U];
    vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router[1U][1U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf
        [1U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[1U][1U][0U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer
        [1U][0U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[1U][1U][1U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer
        [1U][1U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[1U][1U][2U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer
        [1U][2U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[1U][1U][3U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer
        [1U][3U];
    vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide[1U][2U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf
        [1U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[1U][2U][0U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer
        [1U][0U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[1U][2U][1U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer
        [1U][1U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[1U][2U][2U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer
        [1U][2U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[1U][2U][3U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer
        [1U][3U];
    vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router[1U][2U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf
        [1U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[1U][2U][0U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer
        [1U][0U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[1U][2U][1U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer
        [1U][1U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[1U][2U][2U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer
        [1U][2U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[1U][2U][3U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer
        [1U][3U];
    vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide[1U][3U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf
        [1U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[1U][3U][0U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer
        [1U][0U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[1U][3U][1U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer
        [1U][1U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[1U][3U][2U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer
        [1U][2U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[1U][3U][3U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer
        [1U][3U];
    vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router[1U][3U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf
        [1U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[1U][3U][0U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer
        [1U][0U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[1U][3U][1U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer
        [1U][1U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[1U][3U][2U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer
        [1U][2U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[1U][3U][3U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer
        [1U][3U];
    vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator[2U][3U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__valid_out_west;
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[2U][3U][0U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_west[0U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[2U][3U][1U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_west[1U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[2U][3U][2U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_west[2U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[2U][3U][3U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_west[3U];
    vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator[2U][2U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__valid_out_east;
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[2U][2U][0U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_east[0U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[2U][2U][1U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_east[1U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[2U][2U][2U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_east[2U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[2U][2U][3U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_east[3U];
    vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator[2U][1U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__valid_out_south;
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[2U][1U][0U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_south[0U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[2U][1U][1U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_south[1U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[2U][1U][2U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_south[2U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[2U][1U][3U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_south[3U];
    vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator[2U][0U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__valid_out_north;
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[2U][0U][0U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_north[0U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[2U][0U][1U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_north[1U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[2U][0U][2U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_north[2U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[2U][0U][3U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_north[3U];
    vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide[2U][0U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf
        [1U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[2U][0U][0U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer
        [1U][0U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[2U][0U][1U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer
        [1U][1U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[2U][0U][2U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer
        [1U][2U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[2U][0U][3U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer
        [1U][3U];
    vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router[2U][0U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf
        [1U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[2U][0U][0U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer
        [1U][0U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[2U][0U][1U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer
        [1U][1U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[2U][0U][2U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer
        [1U][2U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[2U][0U][3U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer
        [1U][3U];
    vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide[2U][1U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf
        [1U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[2U][1U][0U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer
        [1U][0U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[2U][1U][1U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer
        [1U][1U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[2U][1U][2U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer
        [1U][2U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[2U][1U][3U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer
        [1U][3U];
    vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router[2U][1U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf
        [1U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[2U][1U][0U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer
        [1U][0U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[2U][1U][1U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer
        [1U][1U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[2U][1U][2U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer
        [1U][2U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[2U][1U][3U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer
        [1U][3U];
    vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide[2U][2U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf
        [1U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[2U][2U][0U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer
        [1U][0U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[2U][2U][1U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer
        [1U][1U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[2U][2U][2U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer
        [1U][2U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[2U][2U][3U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer
        [1U][3U];
    vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router[2U][2U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf
        [1U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[2U][2U][0U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer
        [1U][0U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[2U][2U][1U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer
        [1U][1U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[2U][2U][2U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer
        [1U][2U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[2U][2U][3U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer
        [1U][3U];
    vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide[2U][3U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf
        [1U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[2U][3U][0U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer
        [1U][0U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[2U][3U][1U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer
        [1U][1U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[2U][3U][2U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer
        [1U][2U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[2U][3U][3U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer
        [1U][3U];
    vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router[2U][3U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf
        [1U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[2U][3U][0U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer
        [1U][0U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[2U][3U][1U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer
        [1U][1U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[2U][3U][2U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer
        [1U][2U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[2U][3U][3U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer
        [1U][3U];
    vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator[3U][3U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__valid_out_west;
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[3U][3U][0U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_west[0U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[3U][3U][1U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_west[1U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[3U][3U][2U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_west[2U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[3U][3U][3U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_west[3U];
    vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator[3U][2U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__valid_out_east;
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[3U][2U][0U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_east[0U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[3U][2U][1U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_east[1U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[3U][2U][2U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_east[2U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[3U][2U][3U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_east[3U];
    vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator[3U][1U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__valid_out_south;
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[3U][1U][0U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_south[0U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[3U][1U][1U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_south[1U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[3U][1U][2U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_south[2U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[3U][1U][3U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_south[3U];
    vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator[3U][0U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__valid_out_north;
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[3U][0U][0U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_north[0U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[3U][0U][1U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_north[1U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[3U][0U][2U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_north[2U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[3U][0U][3U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_north[3U];
    vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide[3U][0U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf
        [1U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[3U][0U][0U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer
        [1U][0U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[3U][0U][1U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer
        [1U][1U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[3U][0U][2U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer
        [1U][2U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[3U][0U][3U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer
        [1U][3U];
    vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router[3U][0U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf
        [1U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[3U][0U][0U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer
        [1U][0U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[3U][0U][1U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer
        [1U][1U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[3U][0U][2U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer
        [1U][2U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[3U][0U][3U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer
        [1U][3U];
    vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide[3U][1U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf
        [1U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[3U][1U][0U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer
        [1U][0U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[3U][1U][1U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer
        [1U][1U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[3U][1U][2U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer
        [1U][2U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[3U][1U][3U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer
        [1U][3U];
    vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router[3U][1U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf
        [1U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[3U][1U][0U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer
        [1U][0U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[3U][1U][1U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer
        [1U][1U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[3U][1U][2U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer
        [1U][2U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[3U][1U][3U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer
        [1U][3U];
    vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide[3U][2U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf
        [1U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[3U][2U][0U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer
        [1U][0U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[3U][2U][1U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer
        [1U][1U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[3U][2U][2U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer
        [1U][2U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[3U][2U][3U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer
        [1U][3U];
    vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router[3U][2U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf
        [1U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[3U][2U][0U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer
        [1U][0U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[3U][2U][1U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer
        [1U][1U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[3U][2U][2U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer
        [1U][2U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[3U][2U][3U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer
        [1U][3U];
    vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide[3U][3U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf
        [1U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[3U][3U][0U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer
        [1U][0U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[3U][3U][1U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer
        [1U][1U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[3U][3U][2U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer
        [1U][2U];
    vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide[3U][3U][3U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer
        [1U][3U];
    vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router[3U][3U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf
        [1U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[3U][3U][0U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer
        [1U][0U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[3U][3U][1U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer
        [1U][1U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[3U][3U][2U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer
        [1U][2U];
    vlSelfRef.mesh_onoc__DOT__photodetector_to_router[3U][3U][3U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer
        [1U][3U];
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
        vlSelf->ip_valid_to_router[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->router_valid_to_ip[__Vi0] = VL_RAND_RESET_I(4);
    }
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
        vlSelf->mesh_onoc__DOT__router_granted[__Vi0] = VL_RAND_RESET_I(4);
    }
    vlSelf->mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__valid_out = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__packet_out);
    vlSelf->mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__request_to_send = VL_RAND_RESET_I(4);
    vlSelf->mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__valid_out_west = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_west);
    vlSelf->mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__valid_out_east = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_east);
    vlSelf->mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__valid_out_south = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_south);
    vlSelf->mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__valid_out_north = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_north);
    vlSelf->mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__valid_out_local = VL_RAND_RESET_I(4);
    VL_RAND_RESET_W(388, vlSelf->mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_local);
    vlSelf->mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__valid_out = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__packet_out);
    vlSelf->mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__request_to_send = VL_RAND_RESET_I(4);
    vlSelf->mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__valid_out_west = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_west);
    vlSelf->mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__valid_out_east = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_east);
    vlSelf->mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__valid_out_south = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_south);
    vlSelf->mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__valid_out_north = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_north);
    vlSelf->mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__valid_out_local = VL_RAND_RESET_I(4);
    VL_RAND_RESET_W(388, vlSelf->mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_local);
    vlSelf->mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__valid_out = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__packet_out);
    vlSelf->mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__request_to_send = VL_RAND_RESET_I(4);
    vlSelf->mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__valid_out_west = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_west);
    vlSelf->mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__valid_out_east = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_east);
    vlSelf->mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__valid_out_south = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_south);
    vlSelf->mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__valid_out_north = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_north);
    vlSelf->mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__valid_out_local = VL_RAND_RESET_I(4);
    VL_RAND_RESET_W(388, vlSelf->mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_local);
    vlSelf->mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__valid_out = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__packet_out);
    vlSelf->mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__request_to_send = VL_RAND_RESET_I(4);
    vlSelf->mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__valid_out_west = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_west);
    vlSelf->mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__valid_out_east = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_east);
    vlSelf->mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__valid_out_south = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_south);
    vlSelf->mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__valid_out_north = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_north);
    vlSelf->mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__valid_out_local = VL_RAND_RESET_I(4);
    VL_RAND_RESET_W(388, vlSelf->mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_local);
    vlSelf->mesh_onoc__DOT____Vcellinp__wg_inst__BRA__0__KET____DOT__fp_arb__request = VL_RAND_RESET_I(2);
    vlSelf->mesh_onoc__DOT____Vcellinp__wg_inst__BRA__1__KET____DOT__fp_arb__request = VL_RAND_RESET_I(2);
    vlSelf->mesh_onoc__DOT____Vcellinp__wg_inst__BRA__2__KET____DOT__fp_arb__request = VL_RAND_RESET_I(2);
    vlSelf->mesh_onoc__DOT____Vcellinp__wg_inst__BRA__3__KET____DOT__fp_arb__request = VL_RAND_RESET_I(2);
    vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__payload = VL_RAND_RESET_I(32);
    vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__pkt_sent_last_cycle = VL_RAND_RESET_I(1);
    vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__cycle_counter = VL_RAND_RESET_I(32);
    vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__destination = VL_RAND_RESET_I(16);
    vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__unnamedblk1__DOT__send_now = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_local[__Vi0]);
    }
    vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_local = VL_RAND_RESET_I(3);
    vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__tail_local = VL_RAND_RESET_I(3);
    vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_local = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_north[__Vi0]);
    }
    vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_north = VL_RAND_RESET_I(3);
    vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__tail_north = VL_RAND_RESET_I(3);
    vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_north = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_south[__Vi0]);
    }
    vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_south = VL_RAND_RESET_I(3);
    vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__tail_south = VL_RAND_RESET_I(3);
    vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_south = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_east[__Vi0]);
    }
    vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_east = VL_RAND_RESET_I(3);
    vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__tail_east = VL_RAND_RESET_I(3);
    vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_east = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_west[__Vi0]);
    }
    vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_west = VL_RAND_RESET_I(3);
    vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__tail_west = VL_RAND_RESET_I(3);
    vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_west = VL_RAND_RESET_I(3);
    vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__unnamedblk1__DOT__been_sent_out_per_dir = VL_RAND_RESET_I(4);
    VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk2__DOT__p);
    vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__dir = 0;
    VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk4__DOT__p);
    vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT__dir = 0;
    VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk6__DOT__p);
    vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk6__DOT__unnamedblk7__DOT__dir = 0;
    VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk8__DOT__p);
    vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk8__DOT__unnamedblk9__DOT__dir = 0;
    VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk10__DOT__p);
    vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk10__DOT__unnamedblk11__DOT__dir = 0;
    VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__unnamedblk12__DOT__unnamedblk13__DOT__pkt);
    vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__unnamedblk12__DOT__unnamedblk13__DOT__d = 0;
    VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__unnamedblk12__DOT__unnamedblk14__DOT__pkt);
    vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__unnamedblk12__DOT__unnamedblk14__DOT__d = 0;
    VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__unnamedblk12__DOT__unnamedblk15__DOT__pkt);
    vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__unnamedblk12__DOT__unnamedblk15__DOT__d = 0;
    VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__unnamedblk12__DOT__unnamedblk16__DOT__pkt);
    vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__unnamedblk12__DOT__unnamedblk16__DOT__d = 0;
    VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__unnamedblk12__DOT__unnamedblk17__DOT__pkt);
    vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__unnamedblk12__DOT__unnamedblk17__DOT__d = 0;
    vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__unnamedblk18__DOT__dir = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__payload = VL_RAND_RESET_I(32);
    vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__pkt_sent_last_cycle = VL_RAND_RESET_I(1);
    vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__cycle_counter = VL_RAND_RESET_I(32);
    vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__destination = VL_RAND_RESET_I(16);
    vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__unnamedblk1__DOT__send_now = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_local[__Vi0]);
    }
    vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_local = VL_RAND_RESET_I(3);
    vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__tail_local = VL_RAND_RESET_I(3);
    vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_local = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_north[__Vi0]);
    }
    vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_north = VL_RAND_RESET_I(3);
    vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__tail_north = VL_RAND_RESET_I(3);
    vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_north = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_south[__Vi0]);
    }
    vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_south = VL_RAND_RESET_I(3);
    vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__tail_south = VL_RAND_RESET_I(3);
    vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_south = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_east[__Vi0]);
    }
    vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_east = VL_RAND_RESET_I(3);
    vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__tail_east = VL_RAND_RESET_I(3);
    vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_east = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_west[__Vi0]);
    }
    vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_west = VL_RAND_RESET_I(3);
    vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__tail_west = VL_RAND_RESET_I(3);
    vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_west = VL_RAND_RESET_I(3);
    vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__been_sent_out_per_dir = VL_RAND_RESET_I(4);
    VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk2__DOT__p);
    vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__dir = 0;
    VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk4__DOT__p);
    vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT__dir = 0;
    VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk6__DOT__p);
    vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk6__DOT__unnamedblk7__DOT__dir = 0;
    VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk8__DOT__p);
    vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk8__DOT__unnamedblk9__DOT__dir = 0;
    VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk10__DOT__p);
    vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk10__DOT__unnamedblk11__DOT__dir = 0;
    VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk12__DOT__unnamedblk13__DOT__pkt);
    vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk12__DOT__unnamedblk13__DOT__d = 0;
    VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk12__DOT__unnamedblk14__DOT__pkt);
    vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk12__DOT__unnamedblk14__DOT__d = 0;
    VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk12__DOT__unnamedblk15__DOT__pkt);
    vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk12__DOT__unnamedblk15__DOT__d = 0;
    VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk12__DOT__unnamedblk16__DOT__pkt);
    vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk12__DOT__unnamedblk16__DOT__d = 0;
    VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk12__DOT__unnamedblk17__DOT__pkt);
    vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk12__DOT__unnamedblk17__DOT__d = 0;
    vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk18__DOT__dir = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__payload = VL_RAND_RESET_I(32);
    vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__pkt_sent_last_cycle = VL_RAND_RESET_I(1);
    vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__cycle_counter = VL_RAND_RESET_I(32);
    vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__destination = VL_RAND_RESET_I(16);
    vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__unnamedblk1__DOT__send_now = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_local[__Vi0]);
    }
    vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_local = VL_RAND_RESET_I(3);
    vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__tail_local = VL_RAND_RESET_I(3);
    vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_local = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_north[__Vi0]);
    }
    vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_north = VL_RAND_RESET_I(3);
    vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__tail_north = VL_RAND_RESET_I(3);
    vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_north = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_south[__Vi0]);
    }
    vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_south = VL_RAND_RESET_I(3);
    vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__tail_south = VL_RAND_RESET_I(3);
    vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_south = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_east[__Vi0]);
    }
    vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_east = VL_RAND_RESET_I(3);
    vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__tail_east = VL_RAND_RESET_I(3);
    vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_east = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_west[__Vi0]);
    }
    vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_west = VL_RAND_RESET_I(3);
    vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__tail_west = VL_RAND_RESET_I(3);
    vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_west = VL_RAND_RESET_I(3);
    vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__unnamedblk1__DOT__been_sent_out_per_dir = VL_RAND_RESET_I(4);
    VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk2__DOT__p);
    vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__dir = 0;
    VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk4__DOT__p);
    vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT__dir = 0;
    VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk6__DOT__p);
    vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk6__DOT__unnamedblk7__DOT__dir = 0;
    VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk8__DOT__p);
    vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk8__DOT__unnamedblk9__DOT__dir = 0;
    VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk10__DOT__p);
    vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk10__DOT__unnamedblk11__DOT__dir = 0;
    VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__unnamedblk12__DOT__unnamedblk13__DOT__pkt);
    vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__unnamedblk12__DOT__unnamedblk13__DOT__d = 0;
    VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__unnamedblk12__DOT__unnamedblk14__DOT__pkt);
    vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__unnamedblk12__DOT__unnamedblk14__DOT__d = 0;
    VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__unnamedblk12__DOT__unnamedblk15__DOT__pkt);
    vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__unnamedblk12__DOT__unnamedblk15__DOT__d = 0;
    VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__unnamedblk12__DOT__unnamedblk16__DOT__pkt);
    vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__unnamedblk12__DOT__unnamedblk16__DOT__d = 0;
    VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__unnamedblk12__DOT__unnamedblk17__DOT__pkt);
    vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__unnamedblk12__DOT__unnamedblk17__DOT__d = 0;
    vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__unnamedblk18__DOT__dir = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__payload = VL_RAND_RESET_I(32);
    vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__pkt_sent_last_cycle = VL_RAND_RESET_I(1);
    vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__cycle_counter = VL_RAND_RESET_I(32);
    vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__destination = VL_RAND_RESET_I(16);
    vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__unnamedblk1__DOT__send_now = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_local[__Vi0]);
    }
    vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_local = VL_RAND_RESET_I(3);
    vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__tail_local = VL_RAND_RESET_I(3);
    vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_local = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_north[__Vi0]);
    }
    vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_north = VL_RAND_RESET_I(3);
    vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__tail_north = VL_RAND_RESET_I(3);
    vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_north = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_south[__Vi0]);
    }
    vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_south = VL_RAND_RESET_I(3);
    vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__tail_south = VL_RAND_RESET_I(3);
    vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_south = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_east[__Vi0]);
    }
    vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_east = VL_RAND_RESET_I(3);
    vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__tail_east = VL_RAND_RESET_I(3);
    vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_east = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_west[__Vi0]);
    }
    vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_west = VL_RAND_RESET_I(3);
    vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__tail_west = VL_RAND_RESET_I(3);
    vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_west = VL_RAND_RESET_I(3);
    vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__been_sent_out_per_dir = VL_RAND_RESET_I(4);
    VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk2__DOT__p);
    vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__dir = 0;
    VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk4__DOT__p);
    vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT__dir = 0;
    VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk6__DOT__p);
    vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk6__DOT__unnamedblk7__DOT__dir = 0;
    VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk8__DOT__p);
    vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk8__DOT__unnamedblk9__DOT__dir = 0;
    VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk10__DOT__p);
    vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk10__DOT__unnamedblk11__DOT__dir = 0;
    VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk12__DOT__unnamedblk13__DOT__pkt);
    vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk12__DOT__unnamedblk13__DOT__d = 0;
    VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk12__DOT__unnamedblk14__DOT__pkt);
    vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk12__DOT__unnamedblk14__DOT__d = 0;
    VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk12__DOT__unnamedblk15__DOT__pkt);
    vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk12__DOT__unnamedblk15__DOT__d = 0;
    VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk12__DOT__unnamedblk16__DOT__pkt);
    vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk12__DOT__unnamedblk16__DOT__d = 0;
    VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk12__DOT__unnamedblk17__DOT__pkt);
    vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk12__DOT__unnamedblk17__DOT__d = 0;
    vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk18__DOT__dir = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_left[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__valid_left[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_right[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__valid_right[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__fp_arb__DOT__current_grant = VL_RAND_RESET_I(2);
    vlSelf->mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__fp_arb__DOT__hold_counter = 0;
    vlSelf->mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__fp_arb__DOT__unnamedblk1__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_left[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__valid_left[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_right[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__valid_right[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__fp_arb__DOT__current_grant = VL_RAND_RESET_I(2);
    vlSelf->mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__fp_arb__DOT__hold_counter = 0;
    vlSelf->mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__fp_arb__DOT__unnamedblk1__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_left[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__valid_left[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_right[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__valid_right[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__fp_arb__DOT__current_grant = VL_RAND_RESET_I(2);
    vlSelf->mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__fp_arb__DOT__hold_counter = 0;
    vlSelf->mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__fp_arb__DOT__unnamedblk1__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_left[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__valid_left[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(97, vlSelf->mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_right[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__valid_right[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__fp_arb__DOT__current_grant = VL_RAND_RESET_I(2);
    vlSelf->mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__fp_arb__DOT__hold_counter = 0;
    vlSelf->mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__fp_arb__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__pkt_sent_last_cycle = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__cycle_counter = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__destination = VL_RAND_RESET_I(16);
    vlSelf->__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_local = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_north = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_south = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_east = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_west = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_local = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_north = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_south = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_east = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_west = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__tail_local = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__tail_north = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__tail_south = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__tail_east = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__tail_west = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__pkt_sent_last_cycle = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__cycle_counter = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__destination = VL_RAND_RESET_I(16);
    vlSelf->__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_local = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_north = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_south = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_east = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_west = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_local = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_north = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_south = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_east = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_west = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__tail_local = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__tail_north = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__tail_south = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__tail_east = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__tail_west = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__pkt_sent_last_cycle = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__cycle_counter = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__destination = VL_RAND_RESET_I(16);
    vlSelf->__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_local = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_north = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_south = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_east = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_west = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_local = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_north = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_south = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_east = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_west = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__tail_local = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__tail_north = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__tail_south = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__tail_east = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__tail_west = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__pkt_sent_last_cycle = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__cycle_counter = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__destination = VL_RAND_RESET_I(16);
    vlSelf->__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_local = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_north = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_south = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_east = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_west = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_local = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_north = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_south = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_east = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_west = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__tail_local = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__tail_north = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__tail_south = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__tail_east = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__tail_west = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(97, vlSelf->__VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_local__v0);
    vlSelf->__VdlyDim0__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_local__v0 = VL_RAND_RESET_I(2);
    vlSelf->__VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_local__v0 = 0;
    VL_RAND_RESET_W(97, vlSelf->__VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_north__v0);
    vlSelf->__VdlyDim0__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_north__v0 = VL_RAND_RESET_I(2);
    vlSelf->__VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_north__v0 = 0;
    VL_RAND_RESET_W(97, vlSelf->__VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_south__v0);
    vlSelf->__VdlyDim0__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_south__v0 = VL_RAND_RESET_I(2);
    vlSelf->__VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_south__v0 = 0;
    VL_RAND_RESET_W(97, vlSelf->__VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_east__v0);
    vlSelf->__VdlyDim0__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_east__v0 = VL_RAND_RESET_I(2);
    vlSelf->__VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_east__v0 = 0;
    VL_RAND_RESET_W(97, vlSelf->__VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_west__v0);
    vlSelf->__VdlyDim0__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_west__v0 = VL_RAND_RESET_I(2);
    vlSelf->__VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_west__v0 = 0;
    VL_RAND_RESET_W(97, vlSelf->__VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_local__v0);
    vlSelf->__VdlyDim0__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_local__v0 = VL_RAND_RESET_I(2);
    vlSelf->__VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_local__v0 = 0;
    VL_RAND_RESET_W(97, vlSelf->__VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_north__v0);
    vlSelf->__VdlyDim0__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_north__v0 = VL_RAND_RESET_I(2);
    vlSelf->__VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_north__v0 = 0;
    VL_RAND_RESET_W(97, vlSelf->__VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_south__v0);
    vlSelf->__VdlyDim0__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_south__v0 = VL_RAND_RESET_I(2);
    vlSelf->__VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_south__v0 = 0;
    VL_RAND_RESET_W(97, vlSelf->__VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_east__v0);
    vlSelf->__VdlyDim0__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_east__v0 = VL_RAND_RESET_I(2);
    vlSelf->__VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_east__v0 = 0;
    VL_RAND_RESET_W(97, vlSelf->__VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_west__v0);
    vlSelf->__VdlyDim0__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_west__v0 = VL_RAND_RESET_I(2);
    vlSelf->__VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_west__v0 = 0;
    VL_RAND_RESET_W(97, vlSelf->__VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_local__v0);
    vlSelf->__VdlyDim0__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_local__v0 = VL_RAND_RESET_I(2);
    vlSelf->__VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_local__v0 = 0;
    VL_RAND_RESET_W(97, vlSelf->__VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_north__v0);
    vlSelf->__VdlyDim0__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_north__v0 = VL_RAND_RESET_I(2);
    vlSelf->__VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_north__v0 = 0;
    VL_RAND_RESET_W(97, vlSelf->__VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_south__v0);
    vlSelf->__VdlyDim0__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_south__v0 = VL_RAND_RESET_I(2);
    vlSelf->__VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_south__v0 = 0;
    VL_RAND_RESET_W(97, vlSelf->__VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_east__v0);
    vlSelf->__VdlyDim0__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_east__v0 = VL_RAND_RESET_I(2);
    vlSelf->__VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_east__v0 = 0;
    VL_RAND_RESET_W(97, vlSelf->__VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_west__v0);
    vlSelf->__VdlyDim0__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_west__v0 = VL_RAND_RESET_I(2);
    vlSelf->__VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_west__v0 = 0;
    vlSelf->__VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_local__v0 = 0;
    vlSelf->__VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_north__v0 = 0;
    vlSelf->__VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_south__v0 = 0;
    vlSelf->__VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_east__v0 = 0;
    vlSelf->__VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_west__v0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
}
