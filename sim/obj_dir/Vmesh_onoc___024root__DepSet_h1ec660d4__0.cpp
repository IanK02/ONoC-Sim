// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmesh_onoc.h for the primary calling header

#include "Vmesh_onoc__pch.h"
#include "Vmesh_onoc___024root.h"

void Vmesh_onoc___024root___eval_act(Vmesh_onoc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmesh_onoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmesh_onoc___024root___eval_act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vmesh_onoc___024root___nba_sequent__TOP__0(Vmesh_onoc___024root* vlSelf);
void Vmesh_onoc___024root___nba_sequent__TOP__1(Vmesh_onoc___024root* vlSelf);

void Vmesh_onoc___024root___eval_nba(Vmesh_onoc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmesh_onoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmesh_onoc___024root___eval_nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vmesh_onoc___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vmesh_onoc___024root___nba_sequent__TOP__1(vlSelf);
    }
}

VL_INLINE_OPT void Vmesh_onoc___024root___nba_sequent__TOP__0(Vmesh_onoc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmesh_onoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmesh_onoc___024root___nba_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__valid_right
                    [3U])) {
        VL_WRITEF_NX("Waveguide outputs packet ID %0# R-> at cycle %0t\n",0,
                     32,((vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_right
                          [3U][1U] << 0x1fU) | (vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_right
                                                [3U][0U] 
                                                >> 1U)),
                     64,VL_TIME_UNITED_Q(1),-12);
    }
    if (VL_UNLIKELY(vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__valid_right
                    [3U])) {
        VL_WRITEF_NX("Waveguide outputs packet ID %0# R-> at cycle %0t\n",0,
                     32,((vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_right
                          [3U][1U] << 0x1fU) | (vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_right
                                                [3U][0U] 
                                                >> 1U)),
                     64,VL_TIME_UNITED_Q(1),-12);
    }
    if (VL_UNLIKELY(vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__valid_right
                    [3U])) {
        VL_WRITEF_NX("Waveguide outputs packet ID %0# R-> at cycle %0t\n",0,
                     32,((vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_right
                          [3U][1U] << 0x1fU) | (vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_right
                                                [3U][0U] 
                                                >> 1U)),
                     64,VL_TIME_UNITED_Q(1),-12);
    }
    if (VL_UNLIKELY(vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__valid_right
                    [3U])) {
        VL_WRITEF_NX("Waveguide outputs packet ID %0# R-> at cycle %0t\n",0,
                     32,((vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_right
                          [3U][1U] << 0x1fU) | (vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_right
                                                [3U][0U] 
                                                >> 1U)),
                     64,VL_TIME_UNITED_Q(1),-12);
    }
    if (VL_UNLIKELY(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf
                    [1U])) {
        VL_WRITEF_NX("Modulator 0 forwarding packet ID %0#\n",0,
                     32,((vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer
                          [1U][1U] << 0x1fU) | (vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer
                                                [1U][0U] 
                                                >> 1U)));
    }
    if (VL_UNLIKELY(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf
                    [1U])) {
        VL_WRITEF_NX("Modulator 1 forwarding packet ID %0#\n",0,
                     32,((vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer
                          [1U][1U] << 0x1fU) | (vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer
                                                [1U][0U] 
                                                >> 1U)));
    }
    if (VL_UNLIKELY(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf
                    [1U])) {
        VL_WRITEF_NX("Modulator 2 forwarding packet ID %0#\n",0,
                     32,((vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer
                          [1U][1U] << 0x1fU) | (vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer
                                                [1U][0U] 
                                                >> 1U)));
    }
    if (VL_UNLIKELY(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf
                    [1U])) {
        VL_WRITEF_NX("Modulator 3 forwarding packet ID %0#\n",0,
                     32,((vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer
                          [1U][1U] << 0x1fU) | (vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer
                                                [1U][0U] 
                                                >> 1U)));
    }
    if (VL_UNLIKELY(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf
                    [1U])) {
        VL_WRITEF_NX("Modulator 4 forwarding packet ID %0#\n",0,
                     32,((vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer
                          [1U][1U] << 0x1fU) | (vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer
                                                [1U][0U] 
                                                >> 1U)));
    }
    if (VL_UNLIKELY(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf
                    [1U])) {
        VL_WRITEF_NX("Modulator 5 forwarding packet ID %0#\n",0,
                     32,((vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer
                          [1U][1U] << 0x1fU) | (vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer
                                                [1U][0U] 
                                                >> 1U)));
    }
    if (VL_UNLIKELY(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf
                    [1U])) {
        VL_WRITEF_NX("Modulator 6 forwarding packet ID %0#\n",0,
                     32,((vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer
                          [1U][1U] << 0x1fU) | (vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer
                                                [1U][0U] 
                                                >> 1U)));
    }
    if (VL_UNLIKELY(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf
                    [1U])) {
        VL_WRITEF_NX("Modulator 7 forwarding packet ID %0#\n",0,
                     32,((vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer
                          [1U][1U] << 0x1fU) | (vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer
                                                [1U][0U] 
                                                >> 1U)));
    }
    if (VL_UNLIKELY(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf
                    [1U])) {
        VL_WRITEF_NX("Modulator 8 forwarding packet ID %0#\n",0,
                     32,((vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer
                          [1U][1U] << 0x1fU) | (vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer
                                                [1U][0U] 
                                                >> 1U)));
    }
    if (VL_UNLIKELY(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf
                    [1U])) {
        VL_WRITEF_NX("Modulator 9 forwarding packet ID %0#\n",0,
                     32,((vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer
                          [1U][1U] << 0x1fU) | (vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer
                                                [1U][0U] 
                                                >> 1U)));
    }
    if (VL_UNLIKELY(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf
                    [1U])) {
        VL_WRITEF_NX("Modulator 10 forwarding packet ID %0#\n",0,
                     32,((vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer
                          [1U][1U] << 0x1fU) | (vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer
                                                [1U][0U] 
                                                >> 1U)));
    }
    if (VL_UNLIKELY(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf
                    [1U])) {
        VL_WRITEF_NX("Modulator 11 forwarding packet ID %0#\n",0,
                     32,((vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer
                          [1U][1U] << 0x1fU) | (vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer
                                                [1U][0U] 
                                                >> 1U)));
    }
    if (VL_UNLIKELY(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf
                    [1U])) {
        VL_WRITEF_NX("Modulator 12 forwarding packet ID %0#\n",0,
                     32,((vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer
                          [1U][1U] << 0x1fU) | (vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer
                                                [1U][0U] 
                                                >> 1U)));
    }
    if (VL_UNLIKELY(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf
                    [1U])) {
        VL_WRITEF_NX("Modulator 13 forwarding packet ID %0#\n",0,
                     32,((vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer
                          [1U][1U] << 0x1fU) | (vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer
                                                [1U][0U] 
                                                >> 1U)));
    }
    if (VL_UNLIKELY(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf
                    [1U])) {
        VL_WRITEF_NX("Modulator 14 forwarding packet ID %0#\n",0,
                     32,((vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer
                          [1U][1U] << 0x1fU) | (vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer
                                                [1U][0U] 
                                                >> 1U)));
    }
    if (VL_UNLIKELY(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf
                    [1U])) {
        VL_WRITEF_NX("Modulator 15 forwarding packet ID %0#\n",0,
                     32,((vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer
                          [1U][1U] << 0x1fU) | (vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer
                                                [1U][0U] 
                                                >> 1U)));
    }
    VL_WRITEF_NX("\n==================================================\nONoC Mesh Debug View (Cycle):\n          \342\206\221%0#             \342\206\221%0#   \n   <-%0# [R0 Rq:%b Gr:%b] %0#->   <-%0# [R1 Rq:%b Gr:%b] %0#->\n          \342\206\223%0#             \342\206\223%0#   \n\n          \342\206\221%0#             \342\206\221%0#   \n   <-%0# [R2 Rq:%b Gr:%b] %0#->   <-%0# [R3 Rq:%b Gr:%b] %0#->\n          \342\206\223%0#             \342\206\223%0#   \n\nPhotodetector Status:\nRouter 0 Photodetector valid [N:%0b S:%0b E:%0b W:%0b]\nRouter 1 Photodetector valid [N:%0b S:%0b E:%0b W:%0b]\n",0,
                 1,vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide
                 [0U][0U],1,vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide
                 [1U][0U],1,vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide
                 [0U][3U],4,vlSelfRef.mesh_onoc__DOT__router_request_to_send
                 [0U],4,vlSelfRef.mesh_onoc__DOT__router_granted
                 [0U],1,vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide
                 [0U][2U],1,vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide
                 [1U][3U],4,vlSelfRef.mesh_onoc__DOT__router_request_to_send
                 [1U],4,vlSelfRef.mesh_onoc__DOT__router_granted
                 [1U],1,vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide
                 [1U][2U],1,vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide
                 [0U][1U],1,vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide
                 [1U][1U],1,vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide
                 [2U][0U],1,vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide
                 [3U][0U],1,vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide
                 [2U][3U],4,vlSelfRef.mesh_onoc__DOT__router_request_to_send
                 [2U],4,vlSelfRef.mesh_onoc__DOT__router_granted
                 [2U],1,vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide
                 [2U][2U],1,vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide
                 [3U][3U],4,vlSelfRef.mesh_onoc__DOT__router_request_to_send
                 [3U],4,vlSelfRef.mesh_onoc__DOT__router_granted
                 [3U],1,vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide
                 [3U][2U],1,vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide
                 [2U][1U],1,vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide
                 [3U][1U],1,vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router
                 [0U][0U],1,vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router
                 [0U][1U],1,vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router
                 [0U][2U],1,vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router
                 [0U][3U],1,vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router
                 [1U][0U],1,vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router
                 [1U][1U],1,vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router
                 [1U][2U],1,vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router
                 [1U][3U]);
    VL_WRITEF_NX("Router 2 Photodetector valid [N:%0b S:%0b E:%0b W:%0b]\nRouter 3 Photodetector valid [N:%0b S:%0b E:%0b W:%0b]\nWaveguide Done Flags:\nWaveguide 0: packet_done = %b\nWaveguide 1: packet_done = %b\nWaveguide 2: packet_done = %b\nWaveguide 3: packet_done = %b\n",0,
                 1,vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router
                 [2U][0U],1,vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router
                 [2U][1U],1,vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router
                 [2U][2U],1,vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router
                 [2U][3U],1,vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router
                 [3U][0U],1,vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router
                 [3U][1U],1,vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router
                 [3U][2U],1,vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router
                 [3U][3U],2,vlSelfRef.mesh_onoc__DOT__wg_packet_done
                 [0U],2,vlSelfRef.mesh_onoc__DOT__wg_packet_done
                 [1U],2,vlSelfRef.mesh_onoc__DOT__wg_packet_done
                 [2U],2,vlSelfRef.mesh_onoc__DOT__wg_packet_done
                 [3U]);
    if (VL_UNLIKELY(vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__valid_out_local)) {
        VL_WRITEF_NX("IP block 0 received packet from IP %0# with ID %0#\n",0,
                     32,VL_SHIFTR_III(32,32,32, ((vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_local[2U] 
                                                  << 0x1fU) 
                                                 | (vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_local[1U] 
                                                    >> 1U)), 0x10U),
                     32,(0xffffU & (vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_local[1U] 
                                    >> 1U)));
    }
    if (VL_UNLIKELY(vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__valid_out_local)) {
        VL_WRITEF_NX("IP block 1 received packet from IP %0# with ID %0#\n",0,
                     32,VL_SHIFTR_III(32,32,32, ((vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_local[2U] 
                                                  << 0x1fU) 
                                                 | (vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_local[1U] 
                                                    >> 1U)), 0x10U),
                     32,(0xffffU & (vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_local[1U] 
                                    >> 1U)));
    }
    if (VL_UNLIKELY(vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__valid_out_local)) {
        VL_WRITEF_NX("IP block 2 received packet from IP %0# with ID %0#\n",0,
                     32,VL_SHIFTR_III(32,32,32, ((vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_local[2U] 
                                                  << 0x1fU) 
                                                 | (vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_local[1U] 
                                                    >> 1U)), 0x10U),
                     32,(0xffffU & (vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_local[1U] 
                                    >> 1U)));
    }
    if (VL_UNLIKELY(vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__valid_out_local)) {
        VL_WRITEF_NX("IP block 3 received packet from IP %0# with ID %0#\n",0,
                     32,VL_SHIFTR_III(32,32,32, ((vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_local[2U] 
                                                  << 0x1fU) 
                                                 | (vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_local[1U] 
                                                    >> 1U)), 0x10U),
                     32,(0xffffU & (vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_local[1U] 
                                    >> 1U)));
    }
}

VL_INLINE_OPT void Vmesh_onoc___024root___nba_sequent__TOP__1(Vmesh_onoc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmesh_onoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmesh_onoc___024root___nba_sequent__TOP__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__unnamedblk2__DOT__dest_x;
    mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__unnamedblk2__DOT__dest_x = 0;
    IData/*31:0*/ mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__unnamedblk2__DOT__dest_y;
    mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__unnamedblk2__DOT__dest_y = 0;
    IData/*31:0*/ mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk2__DOT__dest_x;
    mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk2__DOT__dest_x = 0;
    IData/*31:0*/ mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk2__DOT__dest_y;
    mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk2__DOT__dest_y = 0;
    IData/*31:0*/ mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__unnamedblk2__DOT__dest_x;
    mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__unnamedblk2__DOT__dest_x = 0;
    IData/*31:0*/ mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__unnamedblk2__DOT__dest_y;
    mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__unnamedblk2__DOT__dest_y = 0;
    IData/*31:0*/ mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk2__DOT__dest_x;
    mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk2__DOT__dest_x = 0;
    IData/*31:0*/ mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk2__DOT__dest_y;
    mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk2__DOT__dest_y = 0;
    SData/*15:0*/ __Vfunc_mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__get_random_destination__0__Vfuncout;
    __Vfunc_mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__get_random_destination__0__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__get_random_destination__0__self_id;
    __Vfunc_mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__get_random_destination__0__self_id = 0;
    SData/*15:0*/ __Vfunc_mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__get_random_destination__0__random_id;
    __Vfunc_mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__get_random_destination__0__random_id = 0;
    CData/*7:0*/ __Vfunc_mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__get_random_destination__0__rand_y;
    __Vfunc_mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__get_random_destination__0__rand_y = 0;
    SData/*15:0*/ __Vfunc_mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__encode_xy__1__Vfuncout;
    __Vfunc_mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__encode_xy__1__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__encode_xy__1__y;
    __Vfunc_mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__encode_xy__1__y = 0;
    SData/*15:0*/ __Vfunc_mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__get_random_destination__3__Vfuncout;
    __Vfunc_mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__get_random_destination__3__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__get_random_destination__3__self_id;
    __Vfunc_mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__get_random_destination__3__self_id = 0;
    SData/*15:0*/ __Vfunc_mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__get_random_destination__3__random_id;
    __Vfunc_mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__get_random_destination__3__random_id = 0;
    CData/*7:0*/ __Vfunc_mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__get_random_destination__3__rand_y;
    __Vfunc_mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__get_random_destination__3__rand_y = 0;
    SData/*15:0*/ __Vfunc_mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__encode_xy__4__Vfuncout;
    __Vfunc_mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__encode_xy__4__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__encode_xy__4__y;
    __Vfunc_mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__encode_xy__4__y = 0;
    SData/*15:0*/ __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__get_random_destination__6__Vfuncout;
    __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__get_random_destination__6__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__get_random_destination__6__self_id;
    __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__get_random_destination__6__self_id = 0;
    SData/*15:0*/ __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__get_random_destination__6__random_id;
    __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__get_random_destination__6__random_id = 0;
    CData/*7:0*/ __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__get_random_destination__6__rand_y;
    __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__get_random_destination__6__rand_y = 0;
    SData/*15:0*/ __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__encode_xy__7__Vfuncout;
    __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__encode_xy__7__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__encode_xy__7__y;
    __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__encode_xy__7__y = 0;
    SData/*15:0*/ __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__get_random_destination__9__Vfuncout;
    __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__get_random_destination__9__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__get_random_destination__9__self_id;
    __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__get_random_destination__9__self_id = 0;
    SData/*15:0*/ __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__get_random_destination__9__random_id;
    __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__get_random_destination__9__random_id = 0;
    CData/*7:0*/ __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__get_random_destination__9__rand_y;
    __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__get_random_destination__9__rand_y = 0;
    SData/*15:0*/ __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__encode_xy__10__Vfuncout;
    __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__encode_xy__10__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__encode_xy__10__y;
    __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__encode_xy__10__y = 0;
    CData/*0:0*/ __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__pkt_sent_last_cycle;
    __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__pkt_sent_last_cycle = 0;
    IData/*31:0*/ __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__cycle_counter;
    __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__cycle_counter = 0;
    SData/*15:0*/ __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__destination;
    __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__destination = 0;
    CData/*0:0*/ __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_west;
    __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_west = 0;
    CData/*0:0*/ __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_south;
    __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_south = 0;
    CData/*0:0*/ __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_east;
    __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_east = 0;
    CData/*0:0*/ __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_north;
    __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_north = 0;
    CData/*0:0*/ __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_local;
    __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_local = 0;
    CData/*0:0*/ __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_valid;
    __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_valid = 0;
    CData/*0:0*/ __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__pkt_sent_last_cycle;
    __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__pkt_sent_last_cycle = 0;
    IData/*31:0*/ __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__cycle_counter;
    __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__cycle_counter = 0;
    SData/*15:0*/ __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__destination;
    __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__destination = 0;
    CData/*0:0*/ __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_west;
    __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_west = 0;
    CData/*0:0*/ __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_south;
    __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_south = 0;
    CData/*0:0*/ __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_east;
    __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_east = 0;
    CData/*0:0*/ __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_north;
    __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_north = 0;
    CData/*0:0*/ __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_local;
    __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_local = 0;
    CData/*0:0*/ __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_valid;
    __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_valid = 0;
    CData/*0:0*/ __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__pkt_sent_last_cycle;
    __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__pkt_sent_last_cycle = 0;
    IData/*31:0*/ __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__cycle_counter;
    __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__cycle_counter = 0;
    SData/*15:0*/ __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__destination;
    __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__destination = 0;
    CData/*0:0*/ __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_west;
    __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_west = 0;
    CData/*0:0*/ __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_south;
    __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_south = 0;
    CData/*0:0*/ __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_east;
    __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_east = 0;
    CData/*0:0*/ __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_north;
    __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_north = 0;
    CData/*0:0*/ __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_local;
    __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_local = 0;
    CData/*0:0*/ __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_valid;
    __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_valid = 0;
    CData/*0:0*/ __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__pkt_sent_last_cycle;
    __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__pkt_sent_last_cycle = 0;
    IData/*31:0*/ __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__cycle_counter;
    __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__cycle_counter = 0;
    SData/*15:0*/ __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__destination;
    __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__destination = 0;
    CData/*0:0*/ __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_west;
    __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_west = 0;
    CData/*0:0*/ __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_south;
    __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_south = 0;
    CData/*0:0*/ __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_east;
    __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_east = 0;
    CData/*0:0*/ __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_north;
    __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_north = 0;
    CData/*0:0*/ __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_local;
    __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_local = 0;
    CData/*0:0*/ __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_valid;
    __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_valid = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_north__v0;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_north__v0);
    CData/*0:0*/ __VdlyDim0__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_north__v0;
    __VdlyDim0__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_north__v0 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_north__v0;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_north__v0 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_local__v0;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_local__v0);
    CData/*0:0*/ __VdlyDim0__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_local__v0;
    __VdlyDim0__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_local__v0 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_local__v0;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_local__v0 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_south__v0;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_south__v0);
    CData/*0:0*/ __VdlyDim0__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_south__v0;
    __VdlyDim0__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_south__v0 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_south__v0;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_south__v0 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_east__v0;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_east__v0);
    CData/*0:0*/ __VdlyDim0__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_east__v0;
    __VdlyDim0__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_east__v0 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_east__v0;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_east__v0 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_west__v0;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_west__v0);
    CData/*0:0*/ __VdlyDim0__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_west__v0;
    __VdlyDim0__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_west__v0 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_west__v0;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_west__v0 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v0;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v0 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v2;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v2);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v2;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v2 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v3;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v3);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v0;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v0 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v2;
    __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v2;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v3;
    __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v3 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v0;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v0 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v2;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v2);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v2;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v2 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v3;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v3);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v0;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v0 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v2;
    __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v2;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v3;
    __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v3 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v0;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v0 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v2;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v2);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v2;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v2 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v3;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v3);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v0;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v0 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v2;
    __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v2;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v3;
    __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v3 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v0;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v0 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v2;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v2);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v2;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v2 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v3;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v3);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v0;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v0 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v2;
    __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v2;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v3;
    __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v3 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v0;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v0 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v2;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v2);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v2;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v2 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v3;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v3);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v0;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v0 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v2;
    __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v2;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v3;
    __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v3 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v0;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v0 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v2;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v2);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v2;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v2 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v3;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v3);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v0;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v0 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v2;
    __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v2;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v3;
    __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v3 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v0;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v0 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v2;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v2);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v2;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v2 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v3;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v3);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v0;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v0 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v2;
    __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v2;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v3;
    __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v3 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v0;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v0 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v2;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v2);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v2;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v2 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v3;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v3);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v0;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v0 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v2;
    __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v2;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v3;
    __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v3 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_north__v0;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_north__v0);
    CData/*0:0*/ __VdlyDim0__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_north__v0;
    __VdlyDim0__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_north__v0 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_north__v0;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_north__v0 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_local__v0;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_local__v0);
    CData/*0:0*/ __VdlyDim0__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_local__v0;
    __VdlyDim0__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_local__v0 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_local__v0;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_local__v0 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_south__v0;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_south__v0);
    CData/*0:0*/ __VdlyDim0__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_south__v0;
    __VdlyDim0__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_south__v0 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_south__v0;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_south__v0 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_east__v0;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_east__v0);
    CData/*0:0*/ __VdlyDim0__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_east__v0;
    __VdlyDim0__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_east__v0 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_east__v0;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_east__v0 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_west__v0;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_west__v0);
    CData/*0:0*/ __VdlyDim0__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_west__v0;
    __VdlyDim0__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_west__v0 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_west__v0;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_west__v0 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v0;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v0 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v2;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v2);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v2;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v2 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v3;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v3);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v0;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v0 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v2;
    __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v2;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v3;
    __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v3 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v0;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v0 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v2;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v2);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v2;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v2 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v3;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v3);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v0;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v0 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v2;
    __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v2;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v3;
    __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v3 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v0;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v0 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v2;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v2);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v2;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v2 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v3;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v3);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v0;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v0 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v2;
    __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v2;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v3;
    __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v3 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v0;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v0 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v2;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v2);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v2;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v2 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v3;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v3);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v0;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v0 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v2;
    __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v2;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v3;
    __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v3 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v0;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v0 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v2;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v2);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v2;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v2 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v3;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v3);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v0;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v0 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v2;
    __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v2;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v3;
    __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v3 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v0;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v0 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v2;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v2);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v2;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v2 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v3;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v3);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v0;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v0 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v2;
    __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v2;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v3;
    __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v3 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v0;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v0 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v2;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v2);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v2;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v2 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v3;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v3);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v0;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v0 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v2;
    __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v2;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v3;
    __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v3 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v0;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v0 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v2;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v2);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v2;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v2 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v3;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v3);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v0;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v0 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v2;
    __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v2;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v3;
    __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v3 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_north__v0;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_north__v0);
    CData/*0:0*/ __VdlyDim0__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_north__v0;
    __VdlyDim0__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_north__v0 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_north__v0;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_north__v0 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_local__v0;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_local__v0);
    CData/*0:0*/ __VdlyDim0__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_local__v0;
    __VdlyDim0__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_local__v0 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_local__v0;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_local__v0 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_south__v0;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_south__v0);
    CData/*0:0*/ __VdlyDim0__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_south__v0;
    __VdlyDim0__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_south__v0 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_south__v0;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_south__v0 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_east__v0;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_east__v0);
    CData/*0:0*/ __VdlyDim0__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_east__v0;
    __VdlyDim0__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_east__v0 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_east__v0;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_east__v0 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_west__v0;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_west__v0);
    CData/*0:0*/ __VdlyDim0__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_west__v0;
    __VdlyDim0__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_west__v0 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_west__v0;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_west__v0 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v0;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v0 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v2;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v2);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v2;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v2 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v3;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v3);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v0;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v0 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v2;
    __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v2;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v3;
    __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v3 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v0;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v0 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v2;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v2);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v2;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v2 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v3;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v3);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v0;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v0 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v2;
    __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v2;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v3;
    __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v3 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v0;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v0 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v2;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v2);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v2;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v2 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v3;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v3);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v0;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v0 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v2;
    __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v2;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v3;
    __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v3 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v0;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v0 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v2;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v2);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v2;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v2 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v3;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v3);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v0;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v0 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v2;
    __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v2;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v3;
    __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v3 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v0;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v0 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v2;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v2);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v2;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v2 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v3;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v3);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v0;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v0 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v2;
    __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v2;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v3;
    __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v3 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v0;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v0 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v2;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v2);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v2;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v2 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v3;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v3);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v0;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v0 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v2;
    __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v2;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v3;
    __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v3 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v0;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v0 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v2;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v2);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v2;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v2 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v3;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v3);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v0;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v0 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v2;
    __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v2;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v3;
    __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v3 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v0;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v0 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v2;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v2);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v2;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v2 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v3;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v3);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v0;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v0 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v2;
    __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v2;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v3;
    __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v3 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_north__v0;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_north__v0);
    CData/*0:0*/ __VdlyDim0__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_north__v0;
    __VdlyDim0__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_north__v0 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_north__v0;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_north__v0 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_local__v0;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_local__v0);
    CData/*0:0*/ __VdlyDim0__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_local__v0;
    __VdlyDim0__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_local__v0 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_local__v0;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_local__v0 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_south__v0;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_south__v0);
    CData/*0:0*/ __VdlyDim0__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_south__v0;
    __VdlyDim0__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_south__v0 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_south__v0;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_south__v0 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_east__v0;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_east__v0);
    CData/*0:0*/ __VdlyDim0__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_east__v0;
    __VdlyDim0__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_east__v0 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_east__v0;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_east__v0 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_west__v0;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_west__v0);
    CData/*0:0*/ __VdlyDim0__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_west__v0;
    __VdlyDim0__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_west__v0 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_west__v0;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_west__v0 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v0;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v0 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v2;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v2);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v2;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v2 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v3;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v3);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v0;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v0 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v2;
    __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v2;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v3;
    __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v3 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v0;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v0 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v2;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v2);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v2;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v2 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v3;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v3);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v0;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v0 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v2;
    __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v2;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v3;
    __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v3 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v0;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v0 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v2;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v2);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v2;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v2 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v3;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v3);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v0;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v0 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v2;
    __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v2;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v3;
    __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v3 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v0;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v0 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v2;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v2);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v2;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v2 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v3;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v3);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v0;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v0 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v2;
    __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v2;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v3;
    __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v3 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v0;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v0 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v2;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v2);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v2;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v2 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v3;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v3);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v0;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v0 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v2;
    __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v2;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v3;
    __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v3 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v0;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v0 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v2;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v2);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v2;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v2 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v3;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v3);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v0;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v0 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v2;
    __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v2;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v3;
    __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v3 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v0;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v0 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v2;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v2);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v2;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v2 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v3;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v3);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v0;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v0 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v2;
    __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v2;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v3;
    __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v3 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v0;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v0 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v2;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v2);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v2;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v2 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v3;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v3);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v0;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v0 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v2;
    __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v2;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v3;
    __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v3 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_left__v0;
    __VdlySet__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_left__v0 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_left__v4;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_left__v4);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_left__v4;
    __VdlySet__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_left__v4 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_left__v5;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_left__v5);
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_left__v6;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_left__v6);
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_left__v7;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_left__v7);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__valid_left__v0;
    __VdlySet__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__valid_left__v0 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__valid_left__v4;
    __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__valid_left__v4 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__valid_left__v4;
    __VdlySet__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__valid_left__v4 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__valid_left__v5;
    __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__valid_left__v5 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__valid_left__v6;
    __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__valid_left__v6 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__valid_left__v7;
    __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__valid_left__v7 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_right__v0;
    __VdlySet__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_right__v0 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_right__v4;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_right__v4);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_right__v4;
    __VdlySet__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_right__v4 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_right__v5;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_right__v5);
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_right__v6;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_right__v6);
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_right__v7;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_right__v7);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__valid_right__v0;
    __VdlySet__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__valid_right__v0 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__valid_right__v4;
    __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__valid_right__v4 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__valid_right__v4;
    __VdlySet__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__valid_right__v4 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__valid_right__v5;
    __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__valid_right__v5 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__valid_right__v6;
    __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__valid_right__v6 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__valid_right__v7;
    __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__valid_right__v7 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_left__v0;
    __VdlySet__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_left__v0 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_left__v4;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_left__v4);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_left__v4;
    __VdlySet__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_left__v4 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_left__v5;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_left__v5);
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_left__v6;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_left__v6);
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_left__v7;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_left__v7);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__valid_left__v0;
    __VdlySet__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__valid_left__v0 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__valid_left__v4;
    __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__valid_left__v4 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__valid_left__v4;
    __VdlySet__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__valid_left__v4 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__valid_left__v5;
    __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__valid_left__v5 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__valid_left__v6;
    __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__valid_left__v6 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__valid_left__v7;
    __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__valid_left__v7 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_right__v0;
    __VdlySet__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_right__v0 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_right__v4;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_right__v4);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_right__v4;
    __VdlySet__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_right__v4 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_right__v5;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_right__v5);
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_right__v6;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_right__v6);
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_right__v7;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_right__v7);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__valid_right__v0;
    __VdlySet__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__valid_right__v0 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__valid_right__v4;
    __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__valid_right__v4 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__valid_right__v4;
    __VdlySet__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__valid_right__v4 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__valid_right__v5;
    __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__valid_right__v5 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__valid_right__v6;
    __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__valid_right__v6 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__valid_right__v7;
    __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__valid_right__v7 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_left__v0;
    __VdlySet__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_left__v0 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_left__v4;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_left__v4);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_left__v4;
    __VdlySet__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_left__v4 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_left__v5;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_left__v5);
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_left__v6;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_left__v6);
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_left__v7;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_left__v7);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__valid_left__v0;
    __VdlySet__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__valid_left__v0 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__valid_left__v4;
    __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__valid_left__v4 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__valid_left__v4;
    __VdlySet__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__valid_left__v4 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__valid_left__v5;
    __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__valid_left__v5 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__valid_left__v6;
    __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__valid_left__v6 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__valid_left__v7;
    __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__valid_left__v7 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_right__v0;
    __VdlySet__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_right__v0 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_right__v4;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_right__v4);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_right__v4;
    __VdlySet__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_right__v4 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_right__v5;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_right__v5);
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_right__v6;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_right__v6);
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_right__v7;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_right__v7);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__valid_right__v0;
    __VdlySet__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__valid_right__v0 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__valid_right__v4;
    __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__valid_right__v4 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__valid_right__v4;
    __VdlySet__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__valid_right__v4 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__valid_right__v5;
    __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__valid_right__v5 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__valid_right__v6;
    __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__valid_right__v6 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__valid_right__v7;
    __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__valid_right__v7 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_left__v0;
    __VdlySet__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_left__v0 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_left__v4;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_left__v4);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_left__v4;
    __VdlySet__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_left__v4 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_left__v5;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_left__v5);
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_left__v6;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_left__v6);
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_left__v7;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_left__v7);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__valid_left__v0;
    __VdlySet__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__valid_left__v0 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__valid_left__v4;
    __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__valid_left__v4 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__valid_left__v4;
    __VdlySet__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__valid_left__v4 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__valid_left__v5;
    __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__valid_left__v5 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__valid_left__v6;
    __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__valid_left__v6 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__valid_left__v7;
    __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__valid_left__v7 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_right__v0;
    __VdlySet__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_right__v0 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_right__v4;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_right__v4);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_right__v4;
    __VdlySet__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_right__v4 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_right__v5;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_right__v5);
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_right__v6;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_right__v6);
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_right__v7;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_right__v7);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__valid_right__v0;
    __VdlySet__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__valid_right__v0 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__valid_right__v4;
    __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__valid_right__v4 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__valid_right__v4;
    __VdlySet__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__valid_right__v4 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__valid_right__v5;
    __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__valid_right__v5 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__valid_right__v6;
    __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__valid_right__v6 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__valid_right__v7;
    __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__valid_right__v7 = 0;
    // Body
    __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__pkt_sent_last_cycle 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__pkt_sent_last_cycle;
    __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__cycle_counter 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__cycle_counter;
    __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__destination 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__destination;
    __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__pkt_sent_last_cycle 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__pkt_sent_last_cycle;
    __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__cycle_counter 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__cycle_counter;
    __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__destination 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__destination;
    __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__pkt_sent_last_cycle 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__pkt_sent_last_cycle;
    __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__cycle_counter 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__cycle_counter;
    __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__destination 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__destination;
    __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__pkt_sent_last_cycle 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__pkt_sent_last_cycle;
    __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__cycle_counter 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__cycle_counter;
    __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__destination 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__destination;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_left__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_left__v4 = 0U;
    __VdlySet__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_left__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_left__v4 = 0U;
    __VdlySet__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_left__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_left__v4 = 0U;
    __VdlySet__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_left__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_left__v4 = 0U;
    __VdlySet__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_right__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_right__v4 = 0U;
    __VdlySet__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_right__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_right__v4 = 0U;
    __VdlySet__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_right__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_right__v4 = 0U;
    __VdlySet__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_right__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_right__v4 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__valid_left__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__valid_left__v4 = 0U;
    __VdlySet__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__valid_right__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__valid_right__v4 = 0U;
    __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_valid 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_valid;
    __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_valid 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_valid;
    __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_valid 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_valid;
    __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_valid 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_valid;
    __VdlySet__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__valid_left__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__valid_left__v4 = 0U;
    __VdlySet__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__valid_left__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__valid_left__v4 = 0U;
    __VdlySet__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__valid_left__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__valid_left__v4 = 0U;
    __VdlySet__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__valid_right__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__valid_right__v4 = 0U;
    __VdlySet__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__valid_right__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__valid_right__v4 = 0U;
    __VdlySet__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__valid_right__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__valid_right__v4 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_north__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_south__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_east__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_west__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_north__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_south__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_east__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_west__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_north__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_south__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_east__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_west__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_north__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_south__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_east__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_west__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_local__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_local__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_local__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_local__v0 = 0U;
    __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_west 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_west;
    __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_south 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_south;
    __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_east 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_east;
    __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_north 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_north;
    __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_west 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_west;
    __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_south 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_south;
    __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_east 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_east;
    __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_north 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_north;
    __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_west 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_west;
    __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_south 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_south;
    __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_east 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_east;
    __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_north 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_north;
    __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_west 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_west;
    __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_south 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_south;
    __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_east 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_east;
    __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_north 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_north;
    __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_local 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_local;
    __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_local 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_local;
    __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_local 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_local;
    __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_local 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_local;
    if ((1U & (~ (IData)(vlSelfRef.rst)))) {
        if (vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router
            [0U][0U]) {
            __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_north__v0[0U] 
                = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
                [0U][0U][0U];
            __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_north__v0[1U] 
                = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
                [0U][0U][1U];
            __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_north__v0[2U] 
                = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
                [0U][0U][2U];
            __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_north__v0[3U] 
                = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
                [0U][0U][3U];
            __VdlyDim0__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_north__v0 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__tail_north;
            __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_north__v0 = 1U;
            vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__tail_north 
                = (1U & ((IData)(1U) + (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__tail_north)));
        }
        if (vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router
            [0U][1U]) {
            __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_south__v0[0U] 
                = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
                [0U][1U][0U];
            __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_south__v0[1U] 
                = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
                [0U][1U][1U];
            __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_south__v0[2U] 
                = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
                [0U][1U][2U];
            __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_south__v0[3U] 
                = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
                [0U][1U][3U];
            __VdlyDim0__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_south__v0 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__tail_south;
            __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_south__v0 = 1U;
            vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__tail_south 
                = (1U & ((IData)(1U) + (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__tail_south)));
        }
        if (vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router
            [0U][2U]) {
            __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_east__v0[0U] 
                = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
                [0U][2U][0U];
            __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_east__v0[1U] 
                = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
                [0U][2U][1U];
            __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_east__v0[2U] 
                = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
                [0U][2U][2U];
            __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_east__v0[3U] 
                = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
                [0U][2U][3U];
            __VdlyDim0__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_east__v0 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__tail_east;
            __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_east__v0 = 1U;
            vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__tail_east 
                = (1U & ((IData)(1U) + (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__tail_east)));
        }
        if (vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router
            [0U][3U]) {
            __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_west__v0[0U] 
                = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
                [0U][3U][0U];
            __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_west__v0[1U] 
                = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
                [0U][3U][1U];
            __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_west__v0[2U] 
                = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
                [0U][3U][2U];
            __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_west__v0[3U] 
                = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
                [0U][3U][3U];
            __VdlyDim0__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_west__v0 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__tail_west;
            __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_west__v0 = 1U;
            vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__tail_west 
                = (1U & ((IData)(1U) + (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__tail_west)));
        }
        if (vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router
            [1U][0U]) {
            __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_north__v0[0U] 
                = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
                [1U][0U][0U];
            __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_north__v0[1U] 
                = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
                [1U][0U][1U];
            __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_north__v0[2U] 
                = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
                [1U][0U][2U];
            __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_north__v0[3U] 
                = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
                [1U][0U][3U];
            __VdlyDim0__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_north__v0 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__tail_north;
            __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_north__v0 = 1U;
            vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__tail_north 
                = (1U & ((IData)(1U) + (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__tail_north)));
        }
        if (vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router
            [1U][1U]) {
            __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_south__v0[0U] 
                = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
                [1U][1U][0U];
            __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_south__v0[1U] 
                = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
                [1U][1U][1U];
            __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_south__v0[2U] 
                = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
                [1U][1U][2U];
            __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_south__v0[3U] 
                = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
                [1U][1U][3U];
            __VdlyDim0__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_south__v0 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__tail_south;
            __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_south__v0 = 1U;
            vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__tail_south 
                = (1U & ((IData)(1U) + (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__tail_south)));
        }
        if (vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router
            [1U][2U]) {
            __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_east__v0[0U] 
                = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
                [1U][2U][0U];
            __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_east__v0[1U] 
                = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
                [1U][2U][1U];
            __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_east__v0[2U] 
                = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
                [1U][2U][2U];
            __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_east__v0[3U] 
                = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
                [1U][2U][3U];
            __VdlyDim0__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_east__v0 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__tail_east;
            __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_east__v0 = 1U;
            vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__tail_east 
                = (1U & ((IData)(1U) + (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__tail_east)));
        }
        if (vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router
            [1U][3U]) {
            __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_west__v0[0U] 
                = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
                [1U][3U][0U];
            __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_west__v0[1U] 
                = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
                [1U][3U][1U];
            __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_west__v0[2U] 
                = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
                [1U][3U][2U];
            __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_west__v0[3U] 
                = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
                [1U][3U][3U];
            __VdlyDim0__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_west__v0 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__tail_west;
            __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_west__v0 = 1U;
            vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__tail_west 
                = (1U & ((IData)(1U) + (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__tail_west)));
        }
        if (vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router
            [2U][0U]) {
            __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_north__v0[0U] 
                = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
                [2U][0U][0U];
            __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_north__v0[1U] 
                = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
                [2U][0U][1U];
            __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_north__v0[2U] 
                = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
                [2U][0U][2U];
            __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_north__v0[3U] 
                = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
                [2U][0U][3U];
            __VdlyDim0__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_north__v0 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__tail_north;
            __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_north__v0 = 1U;
            vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__tail_north 
                = (1U & ((IData)(1U) + (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__tail_north)));
        }
        if (vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router
            [2U][1U]) {
            __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_south__v0[0U] 
                = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
                [2U][1U][0U];
            __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_south__v0[1U] 
                = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
                [2U][1U][1U];
            __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_south__v0[2U] 
                = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
                [2U][1U][2U];
            __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_south__v0[3U] 
                = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
                [2U][1U][3U];
            __VdlyDim0__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_south__v0 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__tail_south;
            __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_south__v0 = 1U;
            vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__tail_south 
                = (1U & ((IData)(1U) + (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__tail_south)));
        }
        if (vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router
            [2U][2U]) {
            __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_east__v0[0U] 
                = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
                [2U][2U][0U];
            __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_east__v0[1U] 
                = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
                [2U][2U][1U];
            __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_east__v0[2U] 
                = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
                [2U][2U][2U];
            __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_east__v0[3U] 
                = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
                [2U][2U][3U];
            __VdlyDim0__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_east__v0 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__tail_east;
            __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_east__v0 = 1U;
            vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__tail_east 
                = (1U & ((IData)(1U) + (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__tail_east)));
        }
        if (vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router
            [2U][3U]) {
            __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_west__v0[0U] 
                = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
                [2U][3U][0U];
            __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_west__v0[1U] 
                = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
                [2U][3U][1U];
            __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_west__v0[2U] 
                = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
                [2U][3U][2U];
            __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_west__v0[3U] 
                = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
                [2U][3U][3U];
            __VdlyDim0__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_west__v0 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__tail_west;
            __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_west__v0 = 1U;
            vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__tail_west 
                = (1U & ((IData)(1U) + (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__tail_west)));
        }
        if (vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router
            [3U][0U]) {
            __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_north__v0[0U] 
                = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
                [3U][0U][0U];
            __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_north__v0[1U] 
                = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
                [3U][0U][1U];
            __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_north__v0[2U] 
                = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
                [3U][0U][2U];
            __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_north__v0[3U] 
                = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
                [3U][0U][3U];
            __VdlyDim0__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_north__v0 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__tail_north;
            __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_north__v0 = 1U;
            vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__tail_north 
                = (1U & ((IData)(1U) + (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__tail_north)));
        }
        if (vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router
            [3U][1U]) {
            __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_south__v0[0U] 
                = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
                [3U][1U][0U];
            __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_south__v0[1U] 
                = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
                [3U][1U][1U];
            __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_south__v0[2U] 
                = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
                [3U][1U][2U];
            __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_south__v0[3U] 
                = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
                [3U][1U][3U];
            __VdlyDim0__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_south__v0 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__tail_south;
            __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_south__v0 = 1U;
            vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__tail_south 
                = (1U & ((IData)(1U) + (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__tail_south)));
        }
        if (vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router
            [3U][2U]) {
            __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_east__v0[0U] 
                = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
                [3U][2U][0U];
            __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_east__v0[1U] 
                = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
                [3U][2U][1U];
            __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_east__v0[2U] 
                = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
                [3U][2U][2U];
            __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_east__v0[3U] 
                = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
                [3U][2U][3U];
            __VdlyDim0__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_east__v0 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__tail_east;
            __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_east__v0 = 1U;
            vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__tail_east 
                = (1U & ((IData)(1U) + (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__tail_east)));
        }
        if (vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router
            [3U][3U]) {
            __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_west__v0[0U] 
                = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
                [3U][3U][0U];
            __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_west__v0[1U] 
                = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
                [3U][3U][1U];
            __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_west__v0[2U] 
                = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
                [3U][3U][2U];
            __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_west__v0[3U] 
                = vlSelfRef.mesh_onoc__DOT__photodetector_to_router
                [3U][3U][3U];
            __VdlyDim0__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_west__v0 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__tail_west;
            __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_west__v0 = 1U;
            vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__tail_west 
                = (1U & ((IData)(1U) + (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__tail_west)));
        }
        if (vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__valid_out) {
            __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_local__v0[0U] 
                = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__packet_out[0U];
            __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_local__v0[1U] 
                = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__packet_out[1U];
            __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_local__v0[2U] 
                = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__packet_out[2U];
            __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_local__v0[3U] 
                = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__packet_out[3U];
            __VdlyDim0__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_local__v0 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__tail_local;
            __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_local__v0 = 1U;
            vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__tail_local 
                = (1U & ((IData)(1U) + (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__tail_local)));
        }
        if (vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__valid_out) {
            __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_local__v0[0U] 
                = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__packet_out[0U];
            __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_local__v0[1U] 
                = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__packet_out[1U];
            __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_local__v0[2U] 
                = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__packet_out[2U];
            __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_local__v0[3U] 
                = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__packet_out[3U];
            __VdlyDim0__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_local__v0 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__tail_local;
            __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_local__v0 = 1U;
            vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__tail_local 
                = (1U & ((IData)(1U) + (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__tail_local)));
        }
        if (vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__valid_out) {
            __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_local__v0[0U] 
                = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__packet_out[0U];
            __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_local__v0[1U] 
                = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__packet_out[1U];
            __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_local__v0[2U] 
                = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__packet_out[2U];
            __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_local__v0[3U] 
                = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__packet_out[3U];
            __VdlyDim0__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_local__v0 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__tail_local;
            __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_local__v0 = 1U;
            vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__tail_local 
                = (1U & ((IData)(1U) + (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__tail_local)));
        }
        if (vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__valid_out) {
            __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_local__v0[0U] 
                = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__packet_out[0U];
            __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_local__v0[1U] 
                = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__packet_out[1U];
            __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_local__v0[2U] 
                = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__packet_out[2U];
            __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_local__v0[3U] 
                = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__packet_out[3U];
            __VdlyDim0__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_local__v0 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__tail_local;
            __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_local__v0 = 1U;
            vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__tail_local 
                = (1U & ((IData)(1U) + (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__tail_local)));
        }
    }
    if (vlSelfRef.rst) {
        __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v0 = 1U;
    } else {
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v2[0U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [0U][0U][0U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v2[1U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [0U][0U][1U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v2[2U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [0U][0U][2U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v2[3U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [0U][0U][3U];
        __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v3[0U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer
            [0U][0U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v3[1U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer
            [0U][1U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v3[2U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer
            [0U][2U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v3[3U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer
            [0U][3U];
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v0) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[0U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[0U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[0U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[0U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[1U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[1U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[1U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[1U][3U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v2) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[0U][0U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v2[0U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[0U][1U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v2[1U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[0U][2U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v2[2U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[0U][3U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v2[3U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[1U][0U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v3[0U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[1U][1U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v3[1U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[1U][2U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v3[2U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[1U][3U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v3[3U];
    }
    if (vlSelfRef.rst) {
        __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v0 = 1U;
    } else {
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v2 
            = vlSelfRef.mesh_onoc__DOT__waveguide_valid_to_photodetector
            [0U][0U];
        __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v3 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf
            [0U];
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v0) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf[0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf[1U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v2) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf[0U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v2;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf[1U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v3;
    }
    if (vlSelfRef.rst) {
        __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v0 = 1U;
    } else {
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v2[0U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [0U][1U][0U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v2[1U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [0U][1U][1U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v2[2U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [0U][1U][2U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v2[3U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [0U][1U][3U];
        __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v3[0U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer
            [0U][0U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v3[1U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer
            [0U][1U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v3[2U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer
            [0U][2U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v3[3U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer
            [0U][3U];
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v0) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[0U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[0U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[0U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[0U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[1U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[1U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[1U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[1U][3U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v2) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[0U][0U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v2[0U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[0U][1U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v2[1U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[0U][2U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v2[2U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[0U][3U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v2[3U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[1U][0U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v3[0U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[1U][1U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v3[1U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[1U][2U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v3[2U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[1U][3U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v3[3U];
    }
    if (vlSelfRef.rst) {
        __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v0 = 1U;
    } else {
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v2 
            = vlSelfRef.mesh_onoc__DOT__waveguide_valid_to_photodetector
            [0U][1U];
        __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v3 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf
            [0U];
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v0) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf[0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf[1U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v2) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf[0U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v2;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf[1U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v3;
    }
    if (vlSelfRef.rst) {
        __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v0 = 1U;
    } else {
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v2[0U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [0U][2U][0U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v2[1U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [0U][2U][1U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v2[2U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [0U][2U][2U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v2[3U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [0U][2U][3U];
        __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v3[0U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer
            [0U][0U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v3[1U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer
            [0U][1U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v3[2U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer
            [0U][2U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v3[3U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer
            [0U][3U];
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v0) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[0U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[0U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[0U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[0U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[1U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[1U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[1U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[1U][3U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v2) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[0U][0U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v2[0U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[0U][1U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v2[1U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[0U][2U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v2[2U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[0U][3U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v2[3U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[1U][0U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v3[0U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[1U][1U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v3[1U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[1U][2U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v3[2U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[1U][3U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v3[3U];
    }
    if (vlSelfRef.rst) {
        __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v0 = 1U;
    } else {
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v2 
            = vlSelfRef.mesh_onoc__DOT__waveguide_valid_to_photodetector
            [0U][2U];
        __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v3 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf
            [0U];
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v0) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf[0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf[1U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v2) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf[0U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v2;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf[1U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v3;
    }
    if (vlSelfRef.rst) {
        __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v0 = 1U;
    } else {
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v2[0U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [0U][3U][0U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v2[1U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [0U][3U][1U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v2[2U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [0U][3U][2U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v2[3U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [0U][3U][3U];
        __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v3[0U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer
            [0U][0U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v3[1U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer
            [0U][1U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v3[2U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer
            [0U][2U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v3[3U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer
            [0U][3U];
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v0) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[0U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[0U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[0U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[0U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[1U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[1U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[1U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[1U][3U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v2) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[0U][0U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v2[0U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[0U][1U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v2[1U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[0U][2U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v2[2U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[0U][3U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v2[3U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[1U][0U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v3[0U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[1U][1U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v3[1U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[1U][2U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v3[2U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[1U][3U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v3[3U];
    }
    if (vlSelfRef.rst) {
        __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v0 = 1U;
    } else {
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v2 
            = vlSelfRef.mesh_onoc__DOT__waveguide_valid_to_photodetector
            [0U][3U];
        __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v3 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf
            [0U];
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v0) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf[0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf[1U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v2) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf[0U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v2;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf[1U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v3;
    }
    if (vlSelfRef.rst) {
        __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v0 = 1U;
    } else {
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v2[0U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [1U][0U][0U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v2[1U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [1U][0U][1U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v2[2U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [1U][0U][2U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v2[3U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [1U][0U][3U];
        __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v3[0U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer
            [0U][0U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v3[1U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer
            [0U][1U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v3[2U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer
            [0U][2U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v3[3U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer
            [0U][3U];
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v0) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[0U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[0U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[0U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[0U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[1U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[1U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[1U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[1U][3U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v2) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[0U][0U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v2[0U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[0U][1U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v2[1U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[0U][2U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v2[2U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[0U][3U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v2[3U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[1U][0U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v3[0U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[1U][1U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v3[1U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[1U][2U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v3[2U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[1U][3U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v3[3U];
    }
    if (vlSelfRef.rst) {
        __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v0 = 1U;
    } else {
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v2 
            = vlSelfRef.mesh_onoc__DOT__waveguide_valid_to_photodetector
            [1U][0U];
        __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v3 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf
            [0U];
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v0) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf[0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf[1U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v2) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf[0U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v2;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf[1U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v3;
    }
    if (vlSelfRef.rst) {
        __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v0 = 1U;
    } else {
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v2[0U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [1U][1U][0U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v2[1U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [1U][1U][1U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v2[2U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [1U][1U][2U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v2[3U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [1U][1U][3U];
        __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v3[0U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer
            [0U][0U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v3[1U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer
            [0U][1U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v3[2U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer
            [0U][2U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v3[3U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer
            [0U][3U];
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v0) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[0U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[0U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[0U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[0U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[1U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[1U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[1U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[1U][3U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v2) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[0U][0U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v2[0U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[0U][1U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v2[1U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[0U][2U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v2[2U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[0U][3U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v2[3U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[1U][0U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v3[0U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[1U][1U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v3[1U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[1U][2U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v3[2U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[1U][3U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v3[3U];
    }
    if (vlSelfRef.rst) {
        __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v0 = 1U;
    } else {
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v2 
            = vlSelfRef.mesh_onoc__DOT__waveguide_valid_to_photodetector
            [1U][1U];
        __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v3 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf
            [0U];
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v0) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf[0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf[1U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v2) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf[0U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v2;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf[1U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v3;
    }
    if (vlSelfRef.rst) {
        __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v0 = 1U;
    } else {
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v2[0U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [1U][2U][0U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v2[1U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [1U][2U][1U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v2[2U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [1U][2U][2U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v2[3U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [1U][2U][3U];
        __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v3[0U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer
            [0U][0U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v3[1U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer
            [0U][1U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v3[2U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer
            [0U][2U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v3[3U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer
            [0U][3U];
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v0) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[0U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[0U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[0U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[0U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[1U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[1U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[1U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[1U][3U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v2) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[0U][0U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v2[0U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[0U][1U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v2[1U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[0U][2U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v2[2U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[0U][3U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v2[3U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[1U][0U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v3[0U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[1U][1U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v3[1U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[1U][2U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v3[2U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[1U][3U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v3[3U];
    }
    if (vlSelfRef.rst) {
        __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v0 = 1U;
    } else {
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v2 
            = vlSelfRef.mesh_onoc__DOT__waveguide_valid_to_photodetector
            [1U][2U];
        __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v3 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf
            [0U];
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v0) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf[0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf[1U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v2) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf[0U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v2;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf[1U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v3;
    }
    if (vlSelfRef.rst) {
        __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v0 = 1U;
    } else {
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v2[0U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [1U][3U][0U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v2[1U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [1U][3U][1U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v2[2U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [1U][3U][2U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v2[3U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [1U][3U][3U];
        __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v3[0U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer
            [0U][0U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v3[1U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer
            [0U][1U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v3[2U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer
            [0U][2U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v3[3U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer
            [0U][3U];
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v0) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[0U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[0U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[0U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[0U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[1U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[1U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[1U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[1U][3U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v2) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[0U][0U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v2[0U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[0U][1U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v2[1U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[0U][2U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v2[2U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[0U][3U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v2[3U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[1U][0U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v3[0U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[1U][1U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v3[1U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[1U][2U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v3[2U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[1U][3U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v3[3U];
    }
    if (vlSelfRef.rst) {
        __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v0 = 1U;
    } else {
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v2 
            = vlSelfRef.mesh_onoc__DOT__waveguide_valid_to_photodetector
            [1U][3U];
        __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v3 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf
            [0U];
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v0) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf[0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf[1U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v2) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf[0U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v2;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf[1U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v3;
    }
    if (vlSelfRef.rst) {
        __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v0 = 1U;
    } else {
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v2[0U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [2U][0U][0U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v2[1U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [2U][0U][1U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v2[2U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [2U][0U][2U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v2[3U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [2U][0U][3U];
        __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v3[0U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer
            [0U][0U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v3[1U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer
            [0U][1U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v3[2U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer
            [0U][2U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v3[3U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer
            [0U][3U];
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v0) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[0U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[0U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[0U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[0U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[1U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[1U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[1U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[1U][3U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v2) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[0U][0U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v2[0U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[0U][1U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v2[1U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[0U][2U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v2[2U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[0U][3U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v2[3U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[1U][0U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v3[0U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[1U][1U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v3[1U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[1U][2U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v3[2U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[1U][3U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v3[3U];
    }
    if (vlSelfRef.rst) {
        __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v0 = 1U;
    } else {
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v2 
            = vlSelfRef.mesh_onoc__DOT__waveguide_valid_to_photodetector
            [2U][0U];
        __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v3 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf
            [0U];
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v0) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf[0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf[1U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v2) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf[0U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v2;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf[1U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v3;
    }
    if (vlSelfRef.rst) {
        __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v0 = 1U;
    } else {
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v2[0U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [2U][1U][0U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v2[1U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [2U][1U][1U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v2[2U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [2U][1U][2U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v2[3U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [2U][1U][3U];
        __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v3[0U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer
            [0U][0U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v3[1U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer
            [0U][1U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v3[2U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer
            [0U][2U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v3[3U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer
            [0U][3U];
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v0) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[0U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[0U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[0U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[0U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[1U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[1U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[1U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[1U][3U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v2) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[0U][0U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v2[0U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[0U][1U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v2[1U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[0U][2U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v2[2U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[0U][3U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v2[3U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[1U][0U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v3[0U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[1U][1U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v3[1U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[1U][2U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v3[2U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[1U][3U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v3[3U];
    }
    if (vlSelfRef.rst) {
        __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v0 = 1U;
    } else {
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v2 
            = vlSelfRef.mesh_onoc__DOT__waveguide_valid_to_photodetector
            [2U][1U];
        __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v3 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf
            [0U];
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v0) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf[0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf[1U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v2) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf[0U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v2;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf[1U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v3;
    }
    if (vlSelfRef.rst) {
        __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v0 = 1U;
    } else {
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v2[0U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [2U][2U][0U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v2[1U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [2U][2U][1U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v2[2U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [2U][2U][2U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v2[3U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [2U][2U][3U];
        __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v3[0U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer
            [0U][0U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v3[1U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer
            [0U][1U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v3[2U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer
            [0U][2U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v3[3U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer
            [0U][3U];
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v0) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[0U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[0U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[0U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[0U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[1U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[1U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[1U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[1U][3U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v2) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[0U][0U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v2[0U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[0U][1U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v2[1U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[0U][2U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v2[2U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[0U][3U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v2[3U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[1U][0U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v3[0U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[1U][1U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v3[1U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[1U][2U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v3[2U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[1U][3U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v3[3U];
    }
    if (vlSelfRef.rst) {
        __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v0 = 1U;
    } else {
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v2 
            = vlSelfRef.mesh_onoc__DOT__waveguide_valid_to_photodetector
            [2U][2U];
        __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v3 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf
            [0U];
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v0) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf[0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf[1U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v2) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf[0U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v2;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf[1U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v3;
    }
    if (vlSelfRef.rst) {
        __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v0 = 1U;
    } else {
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v2[0U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [2U][3U][0U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v2[1U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [2U][3U][1U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v2[2U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [2U][3U][2U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v2[3U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [2U][3U][3U];
        __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v3[0U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer
            [0U][0U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v3[1U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer
            [0U][1U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v3[2U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer
            [0U][2U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v3[3U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer
            [0U][3U];
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v0) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[0U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[0U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[0U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[0U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[1U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[1U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[1U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[1U][3U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v2) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[0U][0U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v2[0U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[0U][1U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v2[1U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[0U][2U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v2[2U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[0U][3U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v2[3U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[1U][0U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v3[0U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[1U][1U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v3[1U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[1U][2U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v3[2U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[1U][3U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v3[3U];
    }
    if (vlSelfRef.rst) {
        __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v0 = 1U;
    } else {
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v2 
            = vlSelfRef.mesh_onoc__DOT__waveguide_valid_to_photodetector
            [2U][3U];
        __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v3 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf
            [0U];
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v0) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf[0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf[1U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v2) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf[0U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v2;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf[1U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v3;
    }
    if (vlSelfRef.rst) {
        __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v0 = 1U;
    } else {
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v2[0U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [3U][0U][0U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v2[1U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [3U][0U][1U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v2[2U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [3U][0U][2U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v2[3U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [3U][0U][3U];
        __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v3[0U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer
            [0U][0U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v3[1U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer
            [0U][1U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v3[2U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer
            [0U][2U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v3[3U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer
            [0U][3U];
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v0) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[0U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[0U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[0U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[0U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[1U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[1U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[1U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[1U][3U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v2) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[0U][0U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v2[0U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[0U][1U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v2[1U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[0U][2U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v2[2U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[0U][3U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v2[3U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[1U][0U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v3[0U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[1U][1U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v3[1U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[1U][2U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v3[2U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[1U][3U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v3[3U];
    }
    if (vlSelfRef.rst) {
        __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v0 = 1U;
    } else {
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v2 
            = vlSelfRef.mesh_onoc__DOT__waveguide_valid_to_photodetector
            [3U][0U];
        __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v3 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf
            [0U];
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v0) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf[0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf[1U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v2) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf[0U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v2;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf[1U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v3;
    }
    if (vlSelfRef.rst) {
        __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v0 = 1U;
    } else {
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v2[0U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [3U][1U][0U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v2[1U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [3U][1U][1U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v2[2U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [3U][1U][2U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v2[3U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [3U][1U][3U];
        __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v3[0U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer
            [0U][0U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v3[1U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer
            [0U][1U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v3[2U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer
            [0U][2U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v3[3U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer
            [0U][3U];
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v0) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[0U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[0U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[0U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[0U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[1U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[1U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[1U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[1U][3U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v2) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[0U][0U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v2[0U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[0U][1U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v2[1U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[0U][2U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v2[2U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[0U][3U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v2[3U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[1U][0U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v3[0U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[1U][1U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v3[1U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[1U][2U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v3[2U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[1U][3U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v3[3U];
    }
    if (vlSelfRef.rst) {
        __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v0 = 1U;
    } else {
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v2 
            = vlSelfRef.mesh_onoc__DOT__waveguide_valid_to_photodetector
            [3U][1U];
        __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v3 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf
            [0U];
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v0) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf[0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf[1U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v2) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf[0U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v2;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf[1U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v3;
    }
    if (vlSelfRef.rst) {
        __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v0 = 1U;
    } else {
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v2[0U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [3U][2U][0U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v2[1U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [3U][2U][1U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v2[2U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [3U][2U][2U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v2[3U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [3U][2U][3U];
        __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v3[0U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer
            [0U][0U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v3[1U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer
            [0U][1U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v3[2U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer
            [0U][2U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v3[3U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer
            [0U][3U];
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v0) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[0U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[0U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[0U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[0U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[1U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[1U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[1U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[1U][3U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v2) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[0U][0U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v2[0U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[0U][1U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v2[1U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[0U][2U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v2[2U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[0U][3U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v2[3U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[1U][0U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v3[0U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[1U][1U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v3[1U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[1U][2U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v3[2U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[1U][3U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v3[3U];
    }
    if (vlSelfRef.rst) {
        __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v0 = 1U;
    } else {
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v2 
            = vlSelfRef.mesh_onoc__DOT__waveguide_valid_to_photodetector
            [3U][2U];
        __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v3 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf
            [0U];
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v0) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf[0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf[1U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v2) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf[0U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v2;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf[1U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v3;
    }
    if (vlSelfRef.rst) {
        __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v0 = 1U;
    } else {
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v2[0U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [3U][3U][0U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v2[1U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [3U][3U][1U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v2[2U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [3U][3U][2U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v2[3U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [3U][3U][3U];
        __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v3[0U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer
            [0U][0U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v3[1U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer
            [0U][1U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v3[2U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer
            [0U][2U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v3[3U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer
            [0U][3U];
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v0) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[0U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[0U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[0U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[0U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[1U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[1U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[1U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[1U][3U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v2) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[0U][0U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v2[0U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[0U][1U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v2[1U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[0U][2U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v2[2U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[0U][3U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v2[3U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[1U][0U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v3[0U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[1U][1U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v3[1U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[1U][2U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v3[2U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[1U][3U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v3[3U];
    }
    if (vlSelfRef.rst) {
        __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v0 = 1U;
    } else {
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v2 
            = vlSelfRef.mesh_onoc__DOT__waveguide_valid_to_photodetector
            [3U][3U];
        __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v3 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf
            [0U];
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v0) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf[0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf[1U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v2) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf[0U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v2;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf[1U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v3;
    }
    if (vlSelfRef.rst) {
        __VdlySet__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_left__v0 = 1U;
    } else {
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_left__v4[0U] 
            = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_left
            [2U][0U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_left__v4[1U] 
            = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_left
            [2U][1U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_left__v4[2U] 
            = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_left
            [2U][2U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_left__v4[3U] 
            = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_left
            [2U][3U];
        __VdlySet__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_left__v4 = 1U;
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_left__v5[0U] 
            = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_left
            [1U][0U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_left__v5[1U] 
            = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_left
            [1U][1U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_left__v5[2U] 
            = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_left
            [1U][2U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_left__v5[3U] 
            = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_left
            [1U][3U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_left__v6[0U] 
            = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_left
            [0U][0U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_left__v6[1U] 
            = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_left
            [0U][1U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_left__v6[2U] 
            = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_left
            [0U][2U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_left__v6[3U] 
            = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_left
            [0U][3U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_left__v7[0U] 
            = vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide
            [1U][3U][0U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_left__v7[1U] 
            = vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide
            [1U][3U][1U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_left__v7[2U] 
            = vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide
            [1U][3U][2U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_left__v7[3U] 
            = vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide
            [1U][3U][3U];
    }
    if (__VdlySet__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_left__v0) {
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_left[0U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_left[0U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_left[0U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_left[0U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_left[1U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_left[1U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_left[1U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_left[1U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_left[2U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_left[2U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_left[2U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_left[2U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_left[3U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_left[3U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_left[3U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_left[3U][3U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_left__v4) {
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_left[3U][0U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_left__v4[0U];
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_left[3U][1U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_left__v4[1U];
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_left[3U][2U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_left__v4[2U];
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_left[3U][3U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_left__v4[3U];
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_left[2U][0U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_left__v5[0U];
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_left[2U][1U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_left__v5[1U];
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_left[2U][2U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_left__v5[2U];
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_left[2U][3U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_left__v5[3U];
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_left[1U][0U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_left__v6[0U];
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_left[1U][1U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_left__v6[1U];
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_left[1U][2U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_left__v6[2U];
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_left[1U][3U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_left__v6[3U];
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_left[0U][0U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_left__v7[0U];
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_left[0U][1U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_left__v7[1U];
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_left[0U][2U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_left__v7[2U];
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_left[0U][3U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_left__v7[3U];
    }
    if (vlSelfRef.rst) {
        __VdlySet__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_left__v0 = 1U;
    } else {
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_left__v4[0U] 
            = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_left
            [2U][0U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_left__v4[1U] 
            = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_left
            [2U][1U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_left__v4[2U] 
            = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_left
            [2U][2U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_left__v4[3U] 
            = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_left
            [2U][3U];
        __VdlySet__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_left__v4 = 1U;
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_left__v5[0U] 
            = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_left
            [1U][0U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_left__v5[1U] 
            = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_left
            [1U][1U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_left__v5[2U] 
            = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_left
            [1U][2U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_left__v5[3U] 
            = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_left
            [1U][3U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_left__v6[0U] 
            = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_left
            [0U][0U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_left__v6[1U] 
            = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_left
            [0U][1U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_left__v6[2U] 
            = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_left
            [0U][2U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_left__v6[3U] 
            = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_left
            [0U][3U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_left__v7[0U] 
            = vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide
            [3U][3U][0U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_left__v7[1U] 
            = vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide
            [3U][3U][1U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_left__v7[2U] 
            = vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide
            [3U][3U][2U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_left__v7[3U] 
            = vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide
            [3U][3U][3U];
    }
    if (__VdlySet__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_left__v0) {
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_left[0U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_left[0U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_left[0U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_left[0U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_left[1U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_left[1U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_left[1U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_left[1U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_left[2U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_left[2U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_left[2U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_left[2U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_left[3U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_left[3U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_left[3U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_left[3U][3U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_left__v4) {
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_left[3U][0U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_left__v4[0U];
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_left[3U][1U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_left__v4[1U];
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_left[3U][2U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_left__v4[2U];
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_left[3U][3U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_left__v4[3U];
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_left[2U][0U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_left__v5[0U];
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_left[2U][1U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_left__v5[1U];
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_left[2U][2U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_left__v5[2U];
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_left[2U][3U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_left__v5[3U];
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_left[1U][0U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_left__v6[0U];
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_left[1U][1U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_left__v6[1U];
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_left[1U][2U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_left__v6[2U];
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_left[1U][3U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_left__v6[3U];
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_left[0U][0U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_left__v7[0U];
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_left[0U][1U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_left__v7[1U];
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_left[0U][2U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_left__v7[2U];
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_left[0U][3U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_left__v7[3U];
    }
    if (vlSelfRef.rst) {
        __VdlySet__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_left__v0 = 1U;
    } else {
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_left__v4[0U] 
            = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_left
            [2U][0U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_left__v4[1U] 
            = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_left
            [2U][1U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_left__v4[2U] 
            = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_left
            [2U][2U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_left__v4[3U] 
            = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_left
            [2U][3U];
        __VdlySet__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_left__v4 = 1U;
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_left__v5[0U] 
            = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_left
            [1U][0U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_left__v5[1U] 
            = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_left
            [1U][1U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_left__v5[2U] 
            = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_left
            [1U][2U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_left__v5[3U] 
            = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_left
            [1U][3U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_left__v6[0U] 
            = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_left
            [0U][0U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_left__v6[1U] 
            = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_left
            [0U][1U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_left__v6[2U] 
            = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_left
            [0U][2U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_left__v6[3U] 
            = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_left
            [0U][3U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_left__v7[0U] 
            = vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide
            [2U][0U][0U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_left__v7[1U] 
            = vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide
            [2U][0U][1U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_left__v7[2U] 
            = vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide
            [2U][0U][2U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_left__v7[3U] 
            = vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide
            [2U][0U][3U];
    }
    if (__VdlySet__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_left__v0) {
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_left[0U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_left[0U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_left[0U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_left[0U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_left[1U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_left[1U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_left[1U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_left[1U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_left[2U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_left[2U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_left[2U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_left[2U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_left[3U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_left[3U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_left[3U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_left[3U][3U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_left__v4) {
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_left[3U][0U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_left__v4[0U];
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_left[3U][1U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_left__v4[1U];
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_left[3U][2U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_left__v4[2U];
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_left[3U][3U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_left__v4[3U];
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_left[2U][0U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_left__v5[0U];
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_left[2U][1U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_left__v5[1U];
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_left[2U][2U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_left__v5[2U];
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_left[2U][3U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_left__v5[3U];
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_left[1U][0U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_left__v6[0U];
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_left[1U][1U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_left__v6[1U];
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_left[1U][2U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_left__v6[2U];
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_left[1U][3U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_left__v6[3U];
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_left[0U][0U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_left__v7[0U];
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_left[0U][1U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_left__v7[1U];
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_left[0U][2U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_left__v7[2U];
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_left[0U][3U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_left__v7[3U];
    }
    if (vlSelfRef.rst) {
        __VdlySet__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_left__v0 = 1U;
    } else {
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_left__v4[0U] 
            = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_left
            [2U][0U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_left__v4[1U] 
            = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_left
            [2U][1U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_left__v4[2U] 
            = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_left
            [2U][2U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_left__v4[3U] 
            = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_left
            [2U][3U];
        __VdlySet__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_left__v4 = 1U;
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_left__v5[0U] 
            = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_left
            [1U][0U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_left__v5[1U] 
            = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_left
            [1U][1U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_left__v5[2U] 
            = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_left
            [1U][2U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_left__v5[3U] 
            = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_left
            [1U][3U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_left__v6[0U] 
            = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_left
            [0U][0U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_left__v6[1U] 
            = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_left
            [0U][1U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_left__v6[2U] 
            = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_left
            [0U][2U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_left__v6[3U] 
            = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_left
            [0U][3U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_left__v7[0U] 
            = vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide
            [3U][0U][0U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_left__v7[1U] 
            = vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide
            [3U][0U][1U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_left__v7[2U] 
            = vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide
            [3U][0U][2U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_left__v7[3U] 
            = vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide
            [3U][0U][3U];
    }
    if (__VdlySet__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_left__v0) {
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_left[0U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_left[0U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_left[0U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_left[0U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_left[1U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_left[1U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_left[1U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_left[1U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_left[2U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_left[2U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_left[2U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_left[2U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_left[3U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_left[3U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_left[3U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_left[3U][3U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_left__v4) {
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_left[3U][0U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_left__v4[0U];
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_left[3U][1U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_left__v4[1U];
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_left[3U][2U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_left__v4[2U];
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_left[3U][3U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_left__v4[3U];
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_left[2U][0U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_left__v5[0U];
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_left[2U][1U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_left__v5[1U];
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_left[2U][2U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_left__v5[2U];
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_left[2U][3U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_left__v5[3U];
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_left[1U][0U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_left__v6[0U];
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_left[1U][1U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_left__v6[1U];
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_left[1U][2U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_left__v6[2U];
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_left[1U][3U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_left__v6[3U];
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_left[0U][0U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_left__v7[0U];
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_left[0U][1U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_left__v7[1U];
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_left[0U][2U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_left__v7[2U];
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_left[0U][3U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_left__v7[3U];
    }
    if (vlSelfRef.rst) {
        __VdlySet__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_right__v0 = 1U;
    } else {
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_right__v4[0U] 
            = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_right
            [2U][0U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_right__v4[1U] 
            = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_right
            [2U][1U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_right__v4[2U] 
            = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_right
            [2U][2U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_right__v4[3U] 
            = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_right
            [2U][3U];
        __VdlySet__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_right__v4 = 1U;
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_right__v5[0U] 
            = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_right
            [1U][0U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_right__v5[1U] 
            = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_right
            [1U][1U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_right__v5[2U] 
            = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_right
            [1U][2U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_right__v5[3U] 
            = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_right
            [1U][3U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_right__v6[0U] 
            = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_right
            [0U][0U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_right__v6[1U] 
            = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_right
            [0U][1U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_right__v6[2U] 
            = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_right
            [0U][2U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_right__v6[3U] 
            = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_right
            [0U][3U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_right__v7[0U] 
            = vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide
            [0U][2U][0U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_right__v7[1U] 
            = vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide
            [0U][2U][1U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_right__v7[2U] 
            = vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide
            [0U][2U][2U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_right__v7[3U] 
            = vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide
            [0U][2U][3U];
    }
    if (__VdlySet__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_right__v0) {
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_right[0U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_right[0U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_right[0U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_right[0U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_right[1U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_right[1U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_right[1U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_right[1U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_right[2U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_right[2U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_right[2U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_right[2U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_right[3U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_right[3U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_right[3U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_right[3U][3U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_right__v4) {
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_right[3U][0U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_right__v4[0U];
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_right[3U][1U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_right__v4[1U];
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_right[3U][2U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_right__v4[2U];
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_right[3U][3U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_right__v4[3U];
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_right[2U][0U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_right__v5[0U];
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_right[2U][1U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_right__v5[1U];
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_right[2U][2U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_right__v5[2U];
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_right[2U][3U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_right__v5[3U];
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_right[1U][0U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_right__v6[0U];
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_right[1U][1U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_right__v6[1U];
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_right[1U][2U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_right__v6[2U];
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_right[1U][3U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_right__v6[3U];
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_right[0U][0U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_right__v7[0U];
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_right[0U][1U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_right__v7[1U];
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_right[0U][2U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_right__v7[2U];
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_right[0U][3U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_right__v7[3U];
    }
    if (vlSelfRef.rst) {
        __VdlySet__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_right__v0 = 1U;
    } else {
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_right__v4[0U] 
            = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_right
            [2U][0U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_right__v4[1U] 
            = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_right
            [2U][1U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_right__v4[2U] 
            = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_right
            [2U][2U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_right__v4[3U] 
            = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_right
            [2U][3U];
        __VdlySet__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_right__v4 = 1U;
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_right__v5[0U] 
            = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_right
            [1U][0U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_right__v5[1U] 
            = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_right
            [1U][1U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_right__v5[2U] 
            = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_right
            [1U][2U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_right__v5[3U] 
            = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_right
            [1U][3U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_right__v6[0U] 
            = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_right
            [0U][0U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_right__v6[1U] 
            = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_right
            [0U][1U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_right__v6[2U] 
            = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_right
            [0U][2U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_right__v6[3U] 
            = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_right
            [0U][3U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_right__v7[0U] 
            = vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide
            [2U][2U][0U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_right__v7[1U] 
            = vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide
            [2U][2U][1U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_right__v7[2U] 
            = vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide
            [2U][2U][2U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_right__v7[3U] 
            = vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide
            [2U][2U][3U];
    }
    if (__VdlySet__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_right__v0) {
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_right[0U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_right[0U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_right[0U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_right[0U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_right[1U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_right[1U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_right[1U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_right[1U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_right[2U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_right[2U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_right[2U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_right[2U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_right[3U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_right[3U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_right[3U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_right[3U][3U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_right__v4) {
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_right[3U][0U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_right__v4[0U];
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_right[3U][1U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_right__v4[1U];
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_right[3U][2U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_right__v4[2U];
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_right[3U][3U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_right__v4[3U];
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_right[2U][0U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_right__v5[0U];
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_right[2U][1U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_right__v5[1U];
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_right[2U][2U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_right__v5[2U];
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_right[2U][3U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_right__v5[3U];
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_right[1U][0U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_right__v6[0U];
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_right[1U][1U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_right__v6[1U];
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_right[1U][2U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_right__v6[2U];
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_right[1U][3U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_right__v6[3U];
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_right[0U][0U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_right__v7[0U];
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_right[0U][1U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_right__v7[1U];
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_right[0U][2U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_right__v7[2U];
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_right[0U][3U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_right__v7[3U];
    }
    if (vlSelfRef.rst) {
        __VdlySet__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_right__v0 = 1U;
    } else {
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_right__v4[0U] 
            = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_right
            [2U][0U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_right__v4[1U] 
            = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_right
            [2U][1U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_right__v4[2U] 
            = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_right
            [2U][2U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_right__v4[3U] 
            = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_right
            [2U][3U];
        __VdlySet__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_right__v4 = 1U;
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_right__v5[0U] 
            = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_right
            [1U][0U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_right__v5[1U] 
            = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_right
            [1U][1U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_right__v5[2U] 
            = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_right
            [1U][2U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_right__v5[3U] 
            = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_right
            [1U][3U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_right__v6[0U] 
            = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_right
            [0U][0U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_right__v6[1U] 
            = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_right
            [0U][1U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_right__v6[2U] 
            = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_right
            [0U][2U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_right__v6[3U] 
            = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_right
            [0U][3U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_right__v7[0U] 
            = vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide
            [0U][1U][0U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_right__v7[1U] 
            = vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide
            [0U][1U][1U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_right__v7[2U] 
            = vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide
            [0U][1U][2U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_right__v7[3U] 
            = vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide
            [0U][1U][3U];
    }
    if (__VdlySet__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_right__v0) {
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_right[0U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_right[0U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_right[0U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_right[0U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_right[1U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_right[1U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_right[1U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_right[1U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_right[2U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_right[2U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_right[2U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_right[2U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_right[3U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_right[3U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_right[3U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_right[3U][3U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_right__v4) {
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_right[3U][0U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_right__v4[0U];
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_right[3U][1U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_right__v4[1U];
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_right[3U][2U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_right__v4[2U];
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_right[3U][3U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_right__v4[3U];
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_right[2U][0U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_right__v5[0U];
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_right[2U][1U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_right__v5[1U];
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_right[2U][2U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_right__v5[2U];
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_right[2U][3U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_right__v5[3U];
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_right[1U][0U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_right__v6[0U];
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_right[1U][1U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_right__v6[1U];
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_right[1U][2U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_right__v6[2U];
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_right[1U][3U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_right__v6[3U];
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_right[0U][0U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_right__v7[0U];
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_right[0U][1U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_right__v7[1U];
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_right[0U][2U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_right__v7[2U];
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_right[0U][3U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_right__v7[3U];
    }
    if (vlSelfRef.rst) {
        __VdlySet__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_right__v0 = 1U;
    } else {
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_right__v4[0U] 
            = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_right
            [2U][0U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_right__v4[1U] 
            = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_right
            [2U][1U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_right__v4[2U] 
            = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_right
            [2U][2U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_right__v4[3U] 
            = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_right
            [2U][3U];
        __VdlySet__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_right__v4 = 1U;
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_right__v5[0U] 
            = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_right
            [1U][0U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_right__v5[1U] 
            = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_right
            [1U][1U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_right__v5[2U] 
            = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_right
            [1U][2U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_right__v5[3U] 
            = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_right
            [1U][3U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_right__v6[0U] 
            = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_right
            [0U][0U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_right__v6[1U] 
            = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_right
            [0U][1U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_right__v6[2U] 
            = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_right
            [0U][2U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_right__v6[3U] 
            = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_right
            [0U][3U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_right__v7[0U] 
            = vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide
            [1U][1U][0U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_right__v7[1U] 
            = vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide
            [1U][1U][1U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_right__v7[2U] 
            = vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide
            [1U][1U][2U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_right__v7[3U] 
            = vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide
            [1U][1U][3U];
    }
    if (__VdlySet__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_right__v0) {
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_right[0U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_right[0U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_right[0U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_right[0U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_right[1U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_right[1U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_right[1U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_right[1U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_right[2U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_right[2U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_right[2U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_right[2U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_right[3U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_right[3U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_right[3U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_right[3U][3U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_right__v4) {
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_right[3U][0U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_right__v4[0U];
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_right[3U][1U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_right__v4[1U];
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_right[3U][2U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_right__v4[2U];
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_right[3U][3U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_right__v4[3U];
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_right[2U][0U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_right__v5[0U];
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_right[2U][1U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_right__v5[1U];
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_right[2U][2U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_right__v5[2U];
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_right[2U][3U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_right__v5[3U];
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_right[1U][0U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_right__v6[0U];
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_right[1U][1U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_right__v6[1U];
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_right[1U][2U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_right__v6[2U];
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_right[1U][3U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_right__v6[3U];
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_right[0U][0U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_right__v7[0U];
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_right[0U][1U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_right__v7[1U];
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_right[0U][2U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_right__v7[2U];
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_right[0U][3U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_right__v7[3U];
    }
    if (vlSelfRef.rst) {
        __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v0 = 1U;
    } else {
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v2[0U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [0U][0U][0U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v2[1U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [0U][0U][1U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v2[2U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [0U][0U][2U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v2[3U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [0U][0U][3U];
        __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v3[0U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer
            [0U][0U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v3[1U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer
            [0U][1U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v3[2U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer
            [0U][2U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v3[3U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer
            [0U][3U];
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v0) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[0U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[0U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[0U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[0U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[1U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[1U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[1U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[1U][3U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v2) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[0U][0U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v2[0U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[0U][1U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v2[1U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[0U][2U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v2[2U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[0U][3U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v2[3U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[1U][0U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v3[0U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[1U][1U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v3[1U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[1U][2U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v3[2U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[1U][3U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v3[3U];
    }
    if (vlSelfRef.rst) {
        __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v0 = 1U;
    } else {
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v2 
            = vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator
            [0U][0U];
        __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v3 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf
            [0U];
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v0) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf[0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf[1U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v2) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf[0U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v2;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf[1U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v3;
    }
    if (vlSelfRef.rst) {
        __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v0 = 1U;
    } else {
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v2[0U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [0U][1U][0U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v2[1U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [0U][1U][1U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v2[2U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [0U][1U][2U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v2[3U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [0U][1U][3U];
        __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v3[0U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer
            [0U][0U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v3[1U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer
            [0U][1U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v3[2U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer
            [0U][2U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v3[3U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer
            [0U][3U];
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v0) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[0U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[0U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[0U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[0U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[1U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[1U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[1U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[1U][3U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v2) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[0U][0U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v2[0U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[0U][1U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v2[1U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[0U][2U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v2[2U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[0U][3U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v2[3U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[1U][0U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v3[0U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[1U][1U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v3[1U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[1U][2U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v3[2U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[1U][3U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v3[3U];
    }
    if (vlSelfRef.rst) {
        __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v0 = 1U;
    } else {
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v2 
            = vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator
            [0U][1U];
        __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v3 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf
            [0U];
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v0) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf[0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf[1U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v2) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf[0U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v2;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf[1U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v3;
    }
    if (vlSelfRef.rst) {
        __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v0 = 1U;
    } else {
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v2[0U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [0U][2U][0U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v2[1U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [0U][2U][1U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v2[2U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [0U][2U][2U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v2[3U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [0U][2U][3U];
        __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v3[0U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer
            [0U][0U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v3[1U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer
            [0U][1U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v3[2U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer
            [0U][2U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v3[3U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer
            [0U][3U];
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v0) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[0U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[0U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[0U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[0U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[1U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[1U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[1U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[1U][3U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v2) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[0U][0U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v2[0U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[0U][1U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v2[1U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[0U][2U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v2[2U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[0U][3U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v2[3U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[1U][0U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v3[0U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[1U][1U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v3[1U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[1U][2U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v3[2U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[1U][3U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v3[3U];
    }
    if (vlSelfRef.rst) {
        __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v0 = 1U;
    } else {
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v2 
            = vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator
            [0U][2U];
        __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v3 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf
            [0U];
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v0) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf[0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf[1U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v2) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf[0U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v2;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf[1U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v3;
    }
    if (vlSelfRef.rst) {
        __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v0 = 1U;
    } else {
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v2[0U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [0U][3U][0U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v2[1U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [0U][3U][1U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v2[2U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [0U][3U][2U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v2[3U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [0U][3U][3U];
        __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v3[0U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer
            [0U][0U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v3[1U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer
            [0U][1U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v3[2U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer
            [0U][2U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v3[3U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer
            [0U][3U];
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v0) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[0U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[0U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[0U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[0U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[1U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[1U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[1U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[1U][3U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v2) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[0U][0U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v2[0U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[0U][1U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v2[1U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[0U][2U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v2[2U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[0U][3U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v2[3U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[1U][0U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v3[0U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[1U][1U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v3[1U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[1U][2U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v3[2U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[1U][3U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v3[3U];
    }
    if (vlSelfRef.rst) {
        __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v0 = 1U;
    } else {
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v2 
            = vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator
            [0U][3U];
        __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v3 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf
            [0U];
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v0) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf[0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf[1U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v2) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf[0U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v2;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf[1U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v3;
    }
    if (vlSelfRef.rst) {
        __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v0 = 1U;
    } else {
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v2[0U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [1U][0U][0U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v2[1U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [1U][0U][1U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v2[2U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [1U][0U][2U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v2[3U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [1U][0U][3U];
        __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v3[0U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer
            [0U][0U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v3[1U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer
            [0U][1U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v3[2U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer
            [0U][2U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v3[3U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer
            [0U][3U];
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v0) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[0U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[0U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[0U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[0U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[1U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[1U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[1U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[1U][3U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v2) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[0U][0U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v2[0U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[0U][1U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v2[1U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[0U][2U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v2[2U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[0U][3U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v2[3U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[1U][0U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v3[0U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[1U][1U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v3[1U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[1U][2U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v3[2U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[1U][3U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v3[3U];
    }
    if (vlSelfRef.rst) {
        __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v0 = 1U;
    } else {
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v2 
            = vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator
            [1U][0U];
        __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v3 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf
            [0U];
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v0) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf[0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf[1U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v2) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf[0U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v2;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf[1U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v3;
    }
    if (vlSelfRef.rst) {
        __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v0 = 1U;
    } else {
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v2[0U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [1U][1U][0U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v2[1U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [1U][1U][1U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v2[2U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [1U][1U][2U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v2[3U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [1U][1U][3U];
        __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v3[0U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer
            [0U][0U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v3[1U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer
            [0U][1U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v3[2U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer
            [0U][2U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v3[3U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer
            [0U][3U];
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v0) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[0U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[0U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[0U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[0U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[1U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[1U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[1U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[1U][3U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v2) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[0U][0U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v2[0U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[0U][1U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v2[1U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[0U][2U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v2[2U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[0U][3U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v2[3U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[1U][0U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v3[0U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[1U][1U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v3[1U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[1U][2U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v3[2U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[1U][3U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v3[3U];
    }
    if (vlSelfRef.rst) {
        __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v0 = 1U;
    } else {
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v2 
            = vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator
            [1U][1U];
        __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v3 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf
            [0U];
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v0) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf[0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf[1U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v2) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf[0U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v2;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf[1U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v3;
    }
    if (vlSelfRef.rst) {
        __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v0 = 1U;
    } else {
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v2[0U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [1U][2U][0U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v2[1U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [1U][2U][1U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v2[2U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [1U][2U][2U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v2[3U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [1U][2U][3U];
        __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v3[0U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer
            [0U][0U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v3[1U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer
            [0U][1U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v3[2U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer
            [0U][2U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v3[3U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer
            [0U][3U];
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v0) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[0U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[0U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[0U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[0U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[1U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[1U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[1U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[1U][3U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v2) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[0U][0U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v2[0U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[0U][1U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v2[1U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[0U][2U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v2[2U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[0U][3U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v2[3U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[1U][0U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v3[0U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[1U][1U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v3[1U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[1U][2U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v3[2U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[1U][3U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v3[3U];
    }
    if (vlSelfRef.rst) {
        __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v0 = 1U;
    } else {
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v2 
            = vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator
            [1U][2U];
        __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v3 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf
            [0U];
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v0) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf[0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf[1U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v2) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf[0U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v2;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf[1U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v3;
    }
    if (vlSelfRef.rst) {
        __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v0 = 1U;
    } else {
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v2[0U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [1U][3U][0U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v2[1U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [1U][3U][1U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v2[2U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [1U][3U][2U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v2[3U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [1U][3U][3U];
        __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v3[0U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer
            [0U][0U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v3[1U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer
            [0U][1U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v3[2U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer
            [0U][2U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v3[3U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer
            [0U][3U];
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v0) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[0U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[0U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[0U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[0U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[1U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[1U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[1U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[1U][3U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v2) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[0U][0U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v2[0U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[0U][1U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v2[1U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[0U][2U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v2[2U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[0U][3U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v2[3U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[1U][0U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v3[0U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[1U][1U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v3[1U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[1U][2U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v3[2U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[1U][3U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v3[3U];
    }
    if (vlSelfRef.rst) {
        __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v0 = 1U;
    } else {
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v2 
            = vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator
            [1U][3U];
        __VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v3 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf
            [0U];
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v0) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf[0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf[1U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v2) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf[0U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v2;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf[1U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v3;
    }
    if (vlSelfRef.rst) {
        __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v0 = 1U;
    } else {
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v2[0U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [2U][0U][0U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v2[1U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [2U][0U][1U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v2[2U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [2U][0U][2U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v2[3U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [2U][0U][3U];
        __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v3[0U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer
            [0U][0U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v3[1U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer
            [0U][1U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v3[2U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer
            [0U][2U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v3[3U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer
            [0U][3U];
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v0) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[0U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[0U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[0U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[0U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[1U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[1U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[1U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[1U][3U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v2) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[0U][0U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v2[0U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[0U][1U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v2[1U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[0U][2U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v2[2U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[0U][3U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v2[3U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[1U][0U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v3[0U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[1U][1U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v3[1U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[1U][2U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v3[2U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[1U][3U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v3[3U];
    }
    if (vlSelfRef.rst) {
        __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v0 = 1U;
    } else {
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v2 
            = vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator
            [2U][0U];
        __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v3 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf
            [0U];
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v0) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf[0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf[1U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v2) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf[0U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v2;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf[1U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v3;
    }
    if (vlSelfRef.rst) {
        __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v0 = 1U;
    } else {
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v2[0U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [2U][1U][0U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v2[1U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [2U][1U][1U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v2[2U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [2U][1U][2U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v2[3U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [2U][1U][3U];
        __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v3[0U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer
            [0U][0U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v3[1U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer
            [0U][1U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v3[2U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer
            [0U][2U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v3[3U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer
            [0U][3U];
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v0) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[0U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[0U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[0U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[0U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[1U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[1U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[1U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[1U][3U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v2) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[0U][0U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v2[0U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[0U][1U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v2[1U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[0U][2U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v2[2U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[0U][3U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v2[3U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[1U][0U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v3[0U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[1U][1U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v3[1U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[1U][2U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v3[2U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[1U][3U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v3[3U];
    }
    if (vlSelfRef.rst) {
        __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v0 = 1U;
    } else {
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v2 
            = vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator
            [2U][1U];
        __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v3 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf
            [0U];
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v0) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf[0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf[1U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v2) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf[0U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v2;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf[1U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v3;
    }
    if (vlSelfRef.rst) {
        __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v0 = 1U;
    } else {
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v2[0U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [2U][2U][0U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v2[1U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [2U][2U][1U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v2[2U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [2U][2U][2U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v2[3U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [2U][2U][3U];
        __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v3[0U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer
            [0U][0U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v3[1U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer
            [0U][1U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v3[2U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer
            [0U][2U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v3[3U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer
            [0U][3U];
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v0) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[0U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[0U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[0U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[0U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[1U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[1U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[1U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[1U][3U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v2) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[0U][0U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v2[0U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[0U][1U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v2[1U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[0U][2U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v2[2U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[0U][3U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v2[3U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[1U][0U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v3[0U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[1U][1U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v3[1U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[1U][2U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v3[2U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[1U][3U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v3[3U];
    }
    if (vlSelfRef.rst) {
        __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v0 = 1U;
    } else {
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v2 
            = vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator
            [2U][2U];
        __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v3 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf
            [0U];
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v0) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf[0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf[1U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v2) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf[0U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v2;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf[1U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v3;
    }
    if (vlSelfRef.rst) {
        __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v0 = 1U;
    } else {
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v2[0U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [2U][3U][0U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v2[1U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [2U][3U][1U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v2[2U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [2U][3U][2U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v2[3U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [2U][3U][3U];
        __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v3[0U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer
            [0U][0U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v3[1U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer
            [0U][1U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v3[2U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer
            [0U][2U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v3[3U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer
            [0U][3U];
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v0) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[0U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[0U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[0U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[0U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[1U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[1U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[1U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[1U][3U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v2) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[0U][0U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v2[0U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[0U][1U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v2[1U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[0U][2U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v2[2U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[0U][3U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v2[3U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[1U][0U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v3[0U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[1U][1U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v3[1U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[1U][2U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v3[2U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[1U][3U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v3[3U];
    }
    if (vlSelfRef.rst) {
        __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v0 = 1U;
    } else {
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v2 
            = vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator
            [2U][3U];
        __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v3 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf
            [0U];
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v0) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf[0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf[1U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v2) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf[0U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v2;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf[1U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v3;
    }
    if (vlSelfRef.rst) {
        __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v0 = 1U;
    } else {
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v2[0U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [3U][0U][0U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v2[1U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [3U][0U][1U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v2[2U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [3U][0U][2U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v2[3U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [3U][0U][3U];
        __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v3[0U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer
            [0U][0U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v3[1U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer
            [0U][1U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v3[2U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer
            [0U][2U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v3[3U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer
            [0U][3U];
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v0) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[0U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[0U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[0U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[0U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[1U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[1U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[1U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[1U][3U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v2) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[0U][0U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v2[0U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[0U][1U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v2[1U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[0U][2U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v2[2U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[0U][3U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v2[3U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[1U][0U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v3[0U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[1U][1U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v3[1U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[1U][2U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v3[2U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[1U][3U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v3[3U];
    }
    if (vlSelfRef.rst) {
        __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v0 = 1U;
    } else {
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v2 
            = vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator
            [3U][0U];
        __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v3 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf
            [0U];
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v0) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf[0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf[1U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v2) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf[0U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v2;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf[1U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v3;
    }
    if (vlSelfRef.rst) {
        __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v0 = 1U;
    } else {
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v2[0U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [3U][1U][0U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v2[1U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [3U][1U][1U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v2[2U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [3U][1U][2U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v2[3U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [3U][1U][3U];
        __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v3[0U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer
            [0U][0U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v3[1U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer
            [0U][1U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v3[2U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer
            [0U][2U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v3[3U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer
            [0U][3U];
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v0) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[0U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[0U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[0U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[0U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[1U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[1U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[1U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[1U][3U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v2) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[0U][0U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v2[0U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[0U][1U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v2[1U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[0U][2U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v2[2U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[0U][3U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v2[3U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[1U][0U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v3[0U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[1U][1U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v3[1U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[1U][2U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v3[2U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[1U][3U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v3[3U];
    }
    if (vlSelfRef.rst) {
        __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v0 = 1U;
    } else {
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v2 
            = vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator
            [3U][1U];
        __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v3 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf
            [0U];
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v0) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf[0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf[1U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v2) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf[0U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v2;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf[1U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v3;
    }
    if (vlSelfRef.rst) {
        __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v0 = 1U;
    } else {
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v2[0U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [3U][2U][0U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v2[1U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [3U][2U][1U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v2[2U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [3U][2U][2U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v2[3U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [3U][2U][3U];
        __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v3[0U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer
            [0U][0U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v3[1U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer
            [0U][1U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v3[2U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer
            [0U][2U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v3[3U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer
            [0U][3U];
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v0) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[0U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[0U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[0U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[0U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[1U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[1U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[1U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[1U][3U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v2) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[0U][0U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v2[0U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[0U][1U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v2[1U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[0U][2U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v2[2U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[0U][3U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v2[3U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[1U][0U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v3[0U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[1U][1U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v3[1U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[1U][2U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v3[2U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[1U][3U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v3[3U];
    }
    if (vlSelfRef.rst) {
        __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v0 = 1U;
    } else {
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v2 
            = vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator
            [3U][2U];
        __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v3 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf
            [0U];
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v0) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf[0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf[1U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v2) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf[0U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v2;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf[1U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v3;
    }
    if (vlSelfRef.rst) {
        __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v0 = 1U;
    } else {
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v2[0U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [3U][3U][0U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v2[1U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [3U][3U][1U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v2[2U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [3U][3U][2U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v2[3U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [3U][3U][3U];
        __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v3[0U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer
            [0U][0U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v3[1U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer
            [0U][1U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v3[2U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer
            [0U][2U];
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v3[3U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer
            [0U][3U];
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v0) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[0U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[0U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[0U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[0U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[1U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[1U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[1U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[1U][3U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v2) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[0U][0U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v2[0U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[0U][1U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v2[1U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[0U][2U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v2[2U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[0U][3U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v2[3U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[1U][0U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v3[0U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[1U][1U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v3[1U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[1U][2U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v3[2U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[1U][3U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v3[3U];
    }
    if (vlSelfRef.rst) {
        __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v0 = 1U;
    } else {
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v2 
            = vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator
            [3U][3U];
        __VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v3 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf
            [0U];
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v0) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf[0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf[1U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v2) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf[0U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v2;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf[1U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v3;
    }
    if (vlSelfRef.rst) {
        __VdlySet__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__valid_left__v0 = 1U;
    } else {
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__valid_left__v4 
            = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__valid_left
            [2U];
        __VdlySet__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__valid_left__v4 = 1U;
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__valid_left__v5 
            = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__valid_left
            [1U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__valid_left__v6 
            = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__valid_left
            [0U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__valid_left__v7 
            = vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide
            [3U][0U];
    }
    if (__VdlySet__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__valid_left__v0) {
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__valid_left[0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__valid_left[1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__valid_left[2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__valid_left[3U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__valid_left__v4) {
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__valid_left[3U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__valid_left__v4;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__valid_left[2U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__valid_left__v5;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__valid_left[1U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__valid_left__v6;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__valid_left[0U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__valid_left__v7;
    }
    if (vlSelfRef.rst) {
        __VdlySet__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__valid_right__v0 = 1U;
    } else {
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__valid_right__v4 
            = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__valid_right
            [2U];
        __VdlySet__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__valid_right__v4 = 1U;
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__valid_right__v5 
            = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__valid_right
            [1U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__valid_right__v6 
            = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__valid_right
            [0U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__valid_right__v7 
            = vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide
            [1U][1U];
    }
    if (__VdlySet__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__valid_right__v0) {
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__valid_right[0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__valid_right[1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__valid_right[2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__valid_right[3U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__valid_right__v4) {
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__valid_right[3U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__valid_right__v4;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__valid_right[2U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__valid_right__v5;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__valid_right[1U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__valid_right__v6;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__valid_right[0U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__valid_right__v7;
    }
    if (vlSelfRef.rst) {
        __VdlySet__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__valid_left__v0 = 1U;
    } else {
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__valid_left__v4 
            = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__valid_left
            [2U];
        __VdlySet__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__valid_left__v4 = 1U;
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__valid_left__v5 
            = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__valid_left
            [1U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__valid_left__v6 
            = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__valid_left
            [0U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__valid_left__v7 
            = vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide
            [1U][3U];
    }
    if (__VdlySet__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__valid_left__v0) {
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__valid_left[0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__valid_left[1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__valid_left[2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__valid_left[3U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__valid_left__v4) {
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__valid_left[3U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__valid_left__v4;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__valid_left[2U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__valid_left__v5;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__valid_left[1U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__valid_left__v6;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__valid_left[0U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__valid_left__v7;
    }
    if (vlSelfRef.rst) {
        __VdlySet__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__valid_left__v0 = 1U;
    } else {
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__valid_left__v4 
            = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__valid_left
            [2U];
        __VdlySet__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__valid_left__v4 = 1U;
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__valid_left__v5 
            = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__valid_left
            [1U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__valid_left__v6 
            = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__valid_left
            [0U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__valid_left__v7 
            = vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide
            [3U][3U];
    }
    if (__VdlySet__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__valid_left__v0) {
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__valid_left[0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__valid_left[1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__valid_left[2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__valid_left[3U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__valid_left__v4) {
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__valid_left[3U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__valid_left__v4;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__valid_left[2U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__valid_left__v5;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__valid_left[1U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__valid_left__v6;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__valid_left[0U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__valid_left__v7;
    }
    if (vlSelfRef.rst) {
        __VdlySet__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__valid_left__v0 = 1U;
    } else {
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__valid_left__v4 
            = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__valid_left
            [2U];
        __VdlySet__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__valid_left__v4 = 1U;
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__valid_left__v5 
            = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__valid_left
            [1U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__valid_left__v6 
            = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__valid_left
            [0U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__valid_left__v7 
            = vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide
            [2U][0U];
    }
    if (__VdlySet__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__valid_left__v0) {
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__valid_left[0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__valid_left[1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__valid_left[2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__valid_left[3U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__valid_left__v4) {
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__valid_left[3U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__valid_left__v4;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__valid_left[2U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__valid_left__v5;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__valid_left[1U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__valid_left__v6;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__valid_left[0U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__valid_left__v7;
    }
    if (vlSelfRef.rst) {
        __VdlySet__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__valid_right__v0 = 1U;
    } else {
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__valid_right__v4 
            = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__valid_right
            [2U];
        __VdlySet__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__valid_right__v4 = 1U;
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__valid_right__v5 
            = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__valid_right
            [1U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__valid_right__v6 
            = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__valid_right
            [0U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__valid_right__v7 
            = vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide
            [0U][2U];
    }
    if (__VdlySet__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__valid_right__v0) {
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__valid_right[0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__valid_right[1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__valid_right[2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__valid_right[3U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__valid_right__v4) {
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__valid_right[3U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__valid_right__v4;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__valid_right[2U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__valid_right__v5;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__valid_right[1U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__valid_right__v6;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__valid_right[0U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__valid_right__v7;
    }
    if (vlSelfRef.rst) {
        __VdlySet__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__valid_right__v0 = 1U;
    } else {
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__valid_right__v4 
            = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__valid_right
            [2U];
        __VdlySet__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__valid_right__v4 = 1U;
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__valid_right__v5 
            = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__valid_right
            [1U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__valid_right__v6 
            = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__valid_right
            [0U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__valid_right__v7 
            = vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide
            [2U][2U];
    }
    if (__VdlySet__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__valid_right__v0) {
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__valid_right[0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__valid_right[1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__valid_right[2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__valid_right[3U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__valid_right__v4) {
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__valid_right[3U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__valid_right__v4;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__valid_right[2U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__valid_right__v5;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__valid_right[1U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__valid_right__v6;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__valid_right[0U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__valid_right__v7;
    }
    if (vlSelfRef.rst) {
        __VdlySet__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__valid_right__v0 = 1U;
    } else {
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__valid_right__v4 
            = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__valid_right
            [2U];
        __VdlySet__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__valid_right__v4 = 1U;
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__valid_right__v5 
            = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__valid_right
            [1U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__valid_right__v6 
            = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__valid_right
            [0U];
        __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__valid_right__v7 
            = vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide
            [0U][1U];
    }
    if (__VdlySet__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__valid_right__v0) {
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__valid_right[0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__valid_right[1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__valid_right[2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__valid_right[3U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__valid_right__v4) {
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__valid_right[3U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__valid_right__v4;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__valid_right[2U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__valid_right__v5;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__valid_right[1U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__valid_right__v6;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__valid_right[0U] 
            = __VdlyVal__mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__valid_right__v7;
    }
    if (vlSelfRef.rst) {
        __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_west = 0U;
        __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_south = 0U;
        __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_east = 0U;
        __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_north = 0U;
        __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_west = 0U;
        __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_south = 0U;
        __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_east = 0U;
        __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_north = 0U;
        __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_west = 0U;
        __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_south = 0U;
        __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_east = 0U;
        __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_north = 0U;
        __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_west = 0U;
        __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_south = 0U;
        __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_east = 0U;
        __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_north = 0U;
        __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_local = 0U;
        __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_local = 0U;
        __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_local = 0U;
        __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_local = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__fp_arb__DOT__grant_reg = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__fp_arb__DOT__grant_reg = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__fp_arb__DOT__grant_reg = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__fp_arb__DOT__grant_reg = 0U;
        __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_valid = 0U;
    } else {
        if (vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router
            [0U][3U]) {
            __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_west 
                = (1U & ((IData)(1U) + (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_west)));
        }
        if (vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router
            [0U][1U]) {
            __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_south 
                = (1U & ((IData)(1U) + (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_south)));
        }
        if (vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router
            [0U][2U]) {
            __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_east 
                = (1U & ((IData)(1U) + (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_east)));
        }
        if (vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router
            [0U][0U]) {
            __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_north 
                = (1U & ((IData)(1U) + (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_north)));
        }
        if (vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router
            [1U][3U]) {
            __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_west 
                = (1U & ((IData)(1U) + (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_west)));
        }
        if (vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router
            [1U][1U]) {
            __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_south 
                = (1U & ((IData)(1U) + (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_south)));
        }
        if (vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router
            [1U][2U]) {
            __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_east 
                = (1U & ((IData)(1U) + (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_east)));
        }
        if (vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router
            [1U][0U]) {
            __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_north 
                = (1U & ((IData)(1U) + (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_north)));
        }
        if (vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router
            [2U][3U]) {
            __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_west 
                = (1U & ((IData)(1U) + (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_west)));
        }
        if (vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router
            [2U][1U]) {
            __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_south 
                = (1U & ((IData)(1U) + (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_south)));
        }
        if (vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router
            [2U][2U]) {
            __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_east 
                = (1U & ((IData)(1U) + (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_east)));
        }
        if (vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router
            [2U][0U]) {
            __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_north 
                = (1U & ((IData)(1U) + (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_north)));
        }
        if (vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router
            [3U][3U]) {
            __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_west 
                = (1U & ((IData)(1U) + (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_west)));
        }
        if (vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router
            [3U][1U]) {
            __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_south 
                = (1U & ((IData)(1U) + (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_south)));
        }
        if (vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router
            [3U][2U]) {
            __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_east 
                = (1U & ((IData)(1U) + (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_east)));
        }
        if (vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router
            [3U][0U]) {
            __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_north 
                = (1U & ((IData)(1U) + (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_north)));
        }
        if (vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__valid_out) {
            __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_local 
                = (1U & ((IData)(1U) + (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_local)));
        }
        if (vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__valid_out) {
            __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_local 
                = (1U & ((IData)(1U) + (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_local)));
        }
        if (vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__valid_out) {
            __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_local 
                = (1U & ((IData)(1U) + (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_local)));
        }
        if (vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__valid_out) {
            __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_local 
                = (1U & ((IData)(1U) + (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_local)));
        }
        if ((IData)((0U != (IData)(vlSelfRef.mesh_onoc__DOT____Vcellinp__wg_inst__BRA__1__KET____DOT__fp_arb__freeze_all_grants)))) {
            vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__fp_arb__DOT__grant_reg = 0U;
        } else {
            vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__fp_arb__DOT__unnamedblk1__DOT__i = 0U;
            {
                while (VL_GTS_III(32, 2U, vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__fp_arb__DOT__unnamedblk1__DOT__i)) {
                    if ((1U & ((((2U & ((IData)(vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__request_to_send) 
                                        >> 1U)) | (1U 
                                                   & ((IData)(vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__request_to_send) 
                                                      >> 3U))) 
                                >> (1U & vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__fp_arb__DOT__unnamedblk1__DOT__i)) 
                               & (~ ((IData)(vlSelfRef.mesh_onoc__DOT____Vcellout__wg_inst__BRA__2__KET____DOT__wg__packet_done) 
                                     >> (1U & vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__fp_arb__DOT__unnamedblk1__DOT__i)))))) {
                        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__fp_arb__DOT__grant_reg = 0U;
                        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__fp_arb__DOT__grant_reg 
                            = ((IData)(vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__fp_arb__DOT__grant_reg) 
                               | (3U & ((IData)(1U) 
                                        << (1U & vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__fp_arb__DOT__unnamedblk1__DOT__i))));
                        goto __Vlabel1;
                    }
                    vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__fp_arb__DOT__unnamedblk1__DOT__i 
                        = ((IData)(1U) + vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__fp_arb__DOT__unnamedblk1__DOT__i);
                }
                __Vlabel1: ;
            }
        }
        if ((IData)((0U != (IData)(vlSelfRef.mesh_onoc__DOT____Vcellinp__wg_inst__BRA__3__KET____DOT__fp_arb__freeze_all_grants)))) {
            vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__fp_arb__DOT__grant_reg = 0U;
        } else {
            vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__fp_arb__DOT__unnamedblk1__DOT__i = 0U;
            {
                while (VL_GTS_III(32, 2U, vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__fp_arb__DOT__unnamedblk1__DOT__i)) {
                    if ((1U & ((((2U & (IData)(vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__request_to_send)) 
                                 | (1U & (IData)(vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__request_to_send))) 
                                >> (1U & vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__fp_arb__DOT__unnamedblk1__DOT__i)) 
                               & (~ ((IData)(vlSelfRef.mesh_onoc__DOT____Vcellout__wg_inst__BRA__1__KET____DOT__wg__packet_done) 
                                     >> (1U & vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__fp_arb__DOT__unnamedblk1__DOT__i)))))) {
                        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__fp_arb__DOT__grant_reg = 0U;
                        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__fp_arb__DOT__grant_reg 
                            = ((IData)(vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__fp_arb__DOT__grant_reg) 
                               | (3U & ((IData)(1U) 
                                        << (1U & vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__fp_arb__DOT__unnamedblk1__DOT__i))));
                        goto __Vlabel2;
                    }
                    vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__fp_arb__DOT__unnamedblk1__DOT__i 
                        = ((IData)(1U) + vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__fp_arb__DOT__unnamedblk1__DOT__i);
                }
                __Vlabel2: ;
            }
        }
        if ((IData)((0U != (IData)(vlSelfRef.mesh_onoc__DOT____Vcellinp__wg_inst__BRA__0__KET____DOT__fp_arb__freeze_all_grants)))) {
            vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__fp_arb__DOT__grant_reg = 0U;
        } else {
            vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__fp_arb__DOT__unnamedblk1__DOT__i = 0U;
            {
                while (VL_GTS_III(32, 2U, vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__fp_arb__DOT__unnamedblk1__DOT__i)) {
                    if ((1U & ((((2U & ((IData)(vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__request_to_send) 
                                        >> 1U)) | (1U 
                                                   & ((IData)(vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__request_to_send) 
                                                      >> 3U))) 
                                >> (1U & vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__fp_arb__DOT__unnamedblk1__DOT__i)) 
                               & (~ ((IData)(vlSelfRef.mesh_onoc__DOT____Vcellout__wg_inst__BRA__0__KET____DOT__wg__packet_done) 
                                     >> (1U & vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__fp_arb__DOT__unnamedblk1__DOT__i)))))) {
                        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__fp_arb__DOT__grant_reg = 0U;
                        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__fp_arb__DOT__grant_reg 
                            = ((IData)(vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__fp_arb__DOT__grant_reg) 
                               | (3U & ((IData)(1U) 
                                        << (1U & vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__fp_arb__DOT__unnamedblk1__DOT__i))));
                        goto __Vlabel3;
                    }
                    vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__fp_arb__DOT__unnamedblk1__DOT__i 
                        = ((IData)(1U) + vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__fp_arb__DOT__unnamedblk1__DOT__i);
                }
                __Vlabel3: ;
            }
        }
        if ((IData)((0U != (IData)(vlSelfRef.mesh_onoc__DOT____Vcellinp__wg_inst__BRA__2__KET____DOT__fp_arb__freeze_all_grants)))) {
            vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__fp_arb__DOT__grant_reg = 0U;
        } else {
            vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__fp_arb__DOT__unnamedblk1__DOT__i = 0U;
            {
                while (VL_GTS_III(32, 2U, vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__fp_arb__DOT__unnamedblk1__DOT__i)) {
                    if ((1U & ((((2U & (IData)(vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__request_to_send)) 
                                 | (1U & (IData)(vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__request_to_send))) 
                                >> (1U & vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__fp_arb__DOT__unnamedblk1__DOT__i)) 
                               & (~ ((IData)(vlSelfRef.mesh_onoc__DOT____Vcellout__wg_inst__BRA__0__KET____DOT__wg__packet_done) 
                                     >> (1U & vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__fp_arb__DOT__unnamedblk1__DOT__i)))))) {
                        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__fp_arb__DOT__grant_reg = 0U;
                        vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__fp_arb__DOT__grant_reg 
                            = ((IData)(vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__fp_arb__DOT__grant_reg) 
                               | (3U & ((IData)(1U) 
                                        << (1U & vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__fp_arb__DOT__unnamedblk1__DOT__i))));
                        goto __Vlabel4;
                    }
                    vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__fp_arb__DOT__unnamedblk1__DOT__i 
                        = ((IData)(1U) + vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__fp_arb__DOT__unnamedblk1__DOT__i);
                }
                __Vlabel4: ;
            }
        }
        if (vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_valid) {
            if (vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_valid) {
                vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__unnamedblk1__DOT__dest_x 
                    = (0xffU & (vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[2U] 
                                >> 1U));
                vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__unnamedblk1__DOT__dest_y 
                    = (0xffU & (vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[2U] 
                                >> 9U));
                if (((0U == vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__unnamedblk1__DOT__dest_x) 
                     & (0U == vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__unnamedblk1__DOT__dest_y))) {
                    vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_local[0U] 
                        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[0U];
                    vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_local[1U] 
                        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[1U];
                    vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_local[2U] 
                        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[2U];
                    vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_local[3U] 
                        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[3U];
                    vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__valid_out_local = 1U;
                    __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_valid = 0U;
                } else if ((1U & (vlSelfRef.mesh_onoc__DOT__router_granted
                                  [0U] >> (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__route_dir)))) {
                    __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_valid = 0U;
                    if ((2U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__route_dir))) {
                        if ((1U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__route_dir))) {
                            vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_west[0U] 
                                = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[0U];
                            vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_west[1U] 
                                = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[1U];
                            vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_west[2U] 
                                = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[2U];
                            vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_west[3U] 
                                = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[3U];
                            vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__valid_out_west = 1U;
                        } else {
                            vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_east[0U] 
                                = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[0U];
                            vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_east[1U] 
                                = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[1U];
                            vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_east[2U] 
                                = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[2U];
                            vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_east[3U] 
                                = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[3U];
                            vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__valid_out_east = 1U;
                        }
                    } else if ((1U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__route_dir))) {
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_south[0U] 
                            = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[0U];
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_south[1U] 
                            = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[1U];
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_south[2U] 
                            = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[2U];
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_south[3U] 
                            = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[3U];
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__valid_out_south = 1U;
                    } else {
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_north[0U] 
                            = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[0U];
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_north[1U] 
                            = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[1U];
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_north[2U] 
                            = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[2U];
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_north[3U] 
                            = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[3U];
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__valid_out_north = 1U;
                    }
                }
            }
        } else if (vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_local) {
            __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_local 
                = (1U & ((IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_local) 
                         - (IData)(1U)));
            vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[0U] 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_local
                [vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_local][0U];
            vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[1U] 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_local
                [vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_local][1U];
            vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[2U] 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_local
                [vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_local][2U];
            vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[3U] 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_local
                [vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_local][3U];
            __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_valid = 1U;
            vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_local 
                = (1U & ((IData)(1U) + (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_local)));
        } else if (vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_north) {
            __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_north 
                = (1U & ((IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_north) 
                         - (IData)(1U)));
            vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[0U] 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_north
                [vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_north][0U];
            vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[1U] 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_north
                [vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_north][1U];
            vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[2U] 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_north
                [vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_north][2U];
            vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[3U] 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_north
                [vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_north][3U];
            __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_valid = 1U;
            vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_north 
                = (1U & ((IData)(1U) + (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_north)));
        } else if (vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_south) {
            __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_south 
                = (1U & ((IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_south) 
                         - (IData)(1U)));
            vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[0U] 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_south
                [vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_south][0U];
            vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[1U] 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_south
                [vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_south][1U];
            vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[2U] 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_south
                [vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_south][2U];
            vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[3U] 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_south
                [vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_south][3U];
            __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_valid = 1U;
            vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_south 
                = (1U & ((IData)(1U) + (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_south)));
        } else if (vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_east) {
            __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_east 
                = (1U & ((IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_east) 
                         - (IData)(1U)));
            vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[0U] 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_east
                [vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_east][0U];
            vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[1U] 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_east
                [vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_east][1U];
            vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[2U] 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_east
                [vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_east][2U];
            vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[3U] 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_east
                [vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_east][3U];
            __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_valid = 1U;
            vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_east 
                = (1U & ((IData)(1U) + (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_east)));
        } else if (vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_west) {
            __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_west 
                = (1U & ((IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_west) 
                         - (IData)(1U)));
            vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[0U] 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_west
                [vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_west][0U];
            vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[1U] 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_west
                [vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_west][1U];
            vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[2U] 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_west
                [vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_west][2U];
            vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[3U] 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_west
                [vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_west][3U];
            __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_valid = 1U;
            vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_west 
                = (1U & ((IData)(1U) + (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_west)));
        }
    }
    vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_valid 
        = __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_valid;
    vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_local 
        = __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_local;
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_local__v0) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_local[__VdlyDim0__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_local__v0][0U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_local__v0[0U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_local[__VdlyDim0__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_local__v0][1U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_local__v0[1U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_local[__VdlyDim0__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_local__v0][2U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_local__v0[2U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_local[__VdlyDim0__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_local__v0][3U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_local__v0[3U];
    }
    vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_north 
        = __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_north;
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_north__v0) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_north[__VdlyDim0__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_north__v0][0U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_north__v0[0U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_north[__VdlyDim0__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_north__v0][1U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_north__v0[1U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_north[__VdlyDim0__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_north__v0][2U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_north__v0[2U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_north[__VdlyDim0__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_north__v0][3U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_north__v0[3U];
    }
    vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_south 
        = __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_south;
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_south__v0) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_south[__VdlyDim0__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_south__v0][0U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_south__v0[0U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_south[__VdlyDim0__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_south__v0][1U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_south__v0[1U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_south[__VdlyDim0__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_south__v0][2U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_south__v0[2U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_south[__VdlyDim0__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_south__v0][3U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_south__v0[3U];
    }
    vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_east 
        = __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_east;
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_east__v0) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_east[__VdlyDim0__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_east__v0][0U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_east__v0[0U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_east[__VdlyDim0__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_east__v0][1U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_east__v0[1U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_east[__VdlyDim0__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_east__v0][2U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_east__v0[2U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_east[__VdlyDim0__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_east__v0][3U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_east__v0[3U];
    }
    vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_west 
        = __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_west;
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_west__v0) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_west[__VdlyDim0__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_west__v0][0U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_west__v0[0U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_west[__VdlyDim0__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_west__v0][1U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_west__v0[1U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_west[__VdlyDim0__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_west__v0][2U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_west__v0[2U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_west[__VdlyDim0__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_west__v0][3U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_west__v0[3U];
    }
    if (vlSelfRef.rst) {
        __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_valid = 0U;
    } else if (vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_valid) {
        if (vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_valid) {
            vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__dest_x 
                = (0xffU & (vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[2U] 
                            >> 1U));
            vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__dest_y 
                = (0xffU & (vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[2U] 
                            >> 9U));
            if (((1U == vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__dest_x) 
                 & (0U == vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__dest_y))) {
                vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_local[0U] 
                    = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[0U];
                vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_local[1U] 
                    = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[1U];
                vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_local[2U] 
                    = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[2U];
                vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_local[3U] 
                    = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[3U];
                vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__valid_out_local = 1U;
                __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_valid = 0U;
            } else if ((1U & (vlSelfRef.mesh_onoc__DOT__router_granted
                              [1U] >> (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_dir)))) {
                __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_valid = 0U;
                if ((2U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_dir))) {
                    if ((1U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_dir))) {
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_west[0U] 
                            = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[0U];
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_west[1U] 
                            = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[1U];
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_west[2U] 
                            = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[2U];
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_west[3U] 
                            = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[3U];
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__valid_out_west = 1U;
                    } else {
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_east[0U] 
                            = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[0U];
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_east[1U] 
                            = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[1U];
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_east[2U] 
                            = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[2U];
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_east[3U] 
                            = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[3U];
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__valid_out_east = 1U;
                    }
                } else if ((1U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_dir))) {
                    vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_south[0U] 
                        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[0U];
                    vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_south[1U] 
                        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[1U];
                    vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_south[2U] 
                        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[2U];
                    vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_south[3U] 
                        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[3U];
                    vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__valid_out_south = 1U;
                } else {
                    vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_north[0U] 
                        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[0U];
                    vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_north[1U] 
                        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[1U];
                    vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_north[2U] 
                        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[2U];
                    vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_north[3U] 
                        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[3U];
                    vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__valid_out_north = 1U;
                }
            }
        }
    } else if (vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_local) {
        __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_local 
            = (1U & ((IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_local) 
                     - (IData)(1U)));
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[0U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_local
            [vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_local][0U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[1U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_local
            [vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_local][1U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[2U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_local
            [vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_local][2U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[3U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_local
            [vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_local][3U];
        __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_valid = 1U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_local 
            = (1U & ((IData)(1U) + (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_local)));
    } else if (vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_north) {
        __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_north 
            = (1U & ((IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_north) 
                     - (IData)(1U)));
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[0U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_north
            [vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_north][0U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[1U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_north
            [vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_north][1U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[2U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_north
            [vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_north][2U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[3U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_north
            [vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_north][3U];
        __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_valid = 1U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_north 
            = (1U & ((IData)(1U) + (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_north)));
    } else if (vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_south) {
        __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_south 
            = (1U & ((IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_south) 
                     - (IData)(1U)));
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[0U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_south
            [vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_south][0U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[1U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_south
            [vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_south][1U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[2U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_south
            [vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_south][2U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[3U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_south
            [vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_south][3U];
        __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_valid = 1U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_south 
            = (1U & ((IData)(1U) + (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_south)));
    } else if (vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_east) {
        __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_east 
            = (1U & ((IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_east) 
                     - (IData)(1U)));
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[0U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_east
            [vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_east][0U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[1U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_east
            [vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_east][1U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[2U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_east
            [vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_east][2U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[3U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_east
            [vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_east][3U];
        __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_valid = 1U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_east 
            = (1U & ((IData)(1U) + (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_east)));
    } else if (vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_west) {
        __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_west 
            = (1U & ((IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_west) 
                     - (IData)(1U)));
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[0U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_west
            [vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_west][0U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[1U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_west
            [vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_west][1U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[2U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_west
            [vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_west][2U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[3U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_west
            [vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_west][3U];
        __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_valid = 1U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_west 
            = (1U & ((IData)(1U) + (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_west)));
    }
    vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_valid 
        = __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_valid;
    vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_local 
        = __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_local;
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_local__v0) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_local[__VdlyDim0__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_local__v0][0U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_local__v0[0U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_local[__VdlyDim0__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_local__v0][1U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_local__v0[1U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_local[__VdlyDim0__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_local__v0][2U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_local__v0[2U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_local[__VdlyDim0__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_local__v0][3U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_local__v0[3U];
    }
    vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_north 
        = __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_north;
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_north__v0) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_north[__VdlyDim0__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_north__v0][0U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_north__v0[0U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_north[__VdlyDim0__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_north__v0][1U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_north__v0[1U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_north[__VdlyDim0__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_north__v0][2U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_north__v0[2U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_north[__VdlyDim0__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_north__v0][3U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_north__v0[3U];
    }
    vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_south 
        = __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_south;
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_south__v0) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_south[__VdlyDim0__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_south__v0][0U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_south__v0[0U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_south[__VdlyDim0__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_south__v0][1U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_south__v0[1U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_south[__VdlyDim0__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_south__v0][2U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_south__v0[2U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_south[__VdlyDim0__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_south__v0][3U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_south__v0[3U];
    }
    vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_east 
        = __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_east;
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_east__v0) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_east[__VdlyDim0__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_east__v0][0U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_east__v0[0U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_east[__VdlyDim0__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_east__v0][1U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_east__v0[1U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_east[__VdlyDim0__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_east__v0][2U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_east__v0[2U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_east[__VdlyDim0__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_east__v0][3U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_east__v0[3U];
    }
    vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_west 
        = __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_west;
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_west__v0) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_west[__VdlyDim0__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_west__v0][0U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_west__v0[0U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_west[__VdlyDim0__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_west__v0][1U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_west__v0[1U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_west[__VdlyDim0__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_west__v0][2U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_west__v0[2U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_west[__VdlyDim0__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_west__v0][3U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_west__v0[3U];
    }
    if (vlSelfRef.rst) {
        __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_valid = 0U;
    } else if (vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_valid) {
        if (vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_valid) {
            vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__unnamedblk1__DOT__dest_x 
                = (0xffU & (vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[2U] 
                            >> 1U));
            vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__unnamedblk1__DOT__dest_y 
                = (0xffU & (vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[2U] 
                            >> 9U));
            if (((0U == vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__unnamedblk1__DOT__dest_x) 
                 & (1U == vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__unnamedblk1__DOT__dest_y))) {
                vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_local[0U] 
                    = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[0U];
                vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_local[1U] 
                    = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[1U];
                vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_local[2U] 
                    = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[2U];
                vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_local[3U] 
                    = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[3U];
                vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__valid_out_local = 1U;
                __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_valid = 0U;
            } else if ((1U & (vlSelfRef.mesh_onoc__DOT__router_granted
                              [2U] >> (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__route_dir)))) {
                __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_valid = 0U;
                if ((2U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__route_dir))) {
                    if ((1U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__route_dir))) {
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_west[0U] 
                            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[0U];
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_west[1U] 
                            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[1U];
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_west[2U] 
                            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[2U];
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_west[3U] 
                            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[3U];
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__valid_out_west = 1U;
                    } else {
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_east[0U] 
                            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[0U];
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_east[1U] 
                            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[1U];
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_east[2U] 
                            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[2U];
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_east[3U] 
                            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[3U];
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__valid_out_east = 1U;
                    }
                } else if ((1U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__route_dir))) {
                    vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_south[0U] 
                        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[0U];
                    vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_south[1U] 
                        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[1U];
                    vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_south[2U] 
                        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[2U];
                    vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_south[3U] 
                        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[3U];
                    vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__valid_out_south = 1U;
                } else {
                    vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_north[0U] 
                        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[0U];
                    vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_north[1U] 
                        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[1U];
                    vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_north[2U] 
                        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[2U];
                    vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_north[3U] 
                        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[3U];
                    vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__valid_out_north = 1U;
                }
            }
        }
    } else if (vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_local) {
        __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_local 
            = (1U & ((IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_local) 
                     - (IData)(1U)));
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[0U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_local
            [vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_local][0U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[1U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_local
            [vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_local][1U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[2U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_local
            [vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_local][2U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[3U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_local
            [vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_local][3U];
        __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_valid = 1U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_local 
            = (1U & ((IData)(1U) + (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_local)));
    } else if (vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_north) {
        __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_north 
            = (1U & ((IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_north) 
                     - (IData)(1U)));
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[0U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_north
            [vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_north][0U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[1U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_north
            [vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_north][1U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[2U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_north
            [vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_north][2U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[3U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_north
            [vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_north][3U];
        __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_valid = 1U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_north 
            = (1U & ((IData)(1U) + (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_north)));
    } else if (vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_south) {
        __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_south 
            = (1U & ((IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_south) 
                     - (IData)(1U)));
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[0U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_south
            [vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_south][0U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[1U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_south
            [vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_south][1U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[2U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_south
            [vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_south][2U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[3U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_south
            [vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_south][3U];
        __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_valid = 1U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_south 
            = (1U & ((IData)(1U) + (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_south)));
    } else if (vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_east) {
        __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_east 
            = (1U & ((IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_east) 
                     - (IData)(1U)));
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[0U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_east
            [vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_east][0U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[1U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_east
            [vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_east][1U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[2U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_east
            [vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_east][2U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[3U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_east
            [vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_east][3U];
        __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_valid = 1U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_east 
            = (1U & ((IData)(1U) + (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_east)));
    } else if (vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_west) {
        __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_west 
            = (1U & ((IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_west) 
                     - (IData)(1U)));
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[0U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_west
            [vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_west][0U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[1U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_west
            [vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_west][1U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[2U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_west
            [vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_west][2U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[3U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_west
            [vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_west][3U];
        __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_valid = 1U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_west 
            = (1U & ((IData)(1U) + (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_west)));
    }
    vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_valid 
        = __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_valid;
    vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_local 
        = __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_local;
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_local__v0) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_local[__VdlyDim0__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_local__v0][0U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_local__v0[0U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_local[__VdlyDim0__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_local__v0][1U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_local__v0[1U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_local[__VdlyDim0__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_local__v0][2U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_local__v0[2U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_local[__VdlyDim0__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_local__v0][3U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_local__v0[3U];
    }
    vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_north 
        = __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_north;
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_north__v0) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_north[__VdlyDim0__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_north__v0][0U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_north__v0[0U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_north[__VdlyDim0__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_north__v0][1U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_north__v0[1U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_north[__VdlyDim0__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_north__v0][2U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_north__v0[2U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_north[__VdlyDim0__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_north__v0][3U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_north__v0[3U];
    }
    vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_south 
        = __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_south;
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_south__v0) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_south[__VdlyDim0__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_south__v0][0U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_south__v0[0U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_south[__VdlyDim0__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_south__v0][1U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_south__v0[1U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_south[__VdlyDim0__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_south__v0][2U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_south__v0[2U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_south[__VdlyDim0__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_south__v0][3U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_south__v0[3U];
    }
    vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_east 
        = __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_east;
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_east__v0) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_east[__VdlyDim0__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_east__v0][0U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_east__v0[0U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_east[__VdlyDim0__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_east__v0][1U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_east__v0[1U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_east[__VdlyDim0__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_east__v0][2U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_east__v0[2U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_east[__VdlyDim0__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_east__v0][3U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_east__v0[3U];
    }
    vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_west 
        = __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_west;
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_west__v0) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_west[__VdlyDim0__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_west__v0][0U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_west__v0[0U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_west[__VdlyDim0__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_west__v0][1U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_west__v0[1U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_west[__VdlyDim0__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_west__v0][2U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_west__v0[2U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_west[__VdlyDim0__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_west__v0][3U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_west__v0[3U];
    }
    if (vlSelfRef.rst) {
        __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_valid = 0U;
    } else if (vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_valid) {
        if (vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_valid) {
            vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__dest_x 
                = (0xffU & (vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[2U] 
                            >> 1U));
            vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__dest_y 
                = (0xffU & (vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[2U] 
                            >> 9U));
            if (((1U == vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__dest_x) 
                 & (1U == vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__dest_y))) {
                vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_local[0U] 
                    = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[0U];
                vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_local[1U] 
                    = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[1U];
                vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_local[2U] 
                    = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[2U];
                vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_local[3U] 
                    = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[3U];
                vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__valid_out_local = 1U;
                __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_valid = 0U;
            } else if ((1U & (vlSelfRef.mesh_onoc__DOT__router_granted
                              [3U] >> (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_dir)))) {
                __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_valid = 0U;
                if ((2U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_dir))) {
                    if ((1U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_dir))) {
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_west[0U] 
                            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[0U];
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_west[1U] 
                            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[1U];
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_west[2U] 
                            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[2U];
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_west[3U] 
                            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[3U];
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__valid_out_west = 1U;
                    } else {
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_east[0U] 
                            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[0U];
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_east[1U] 
                            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[1U];
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_east[2U] 
                            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[2U];
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_east[3U] 
                            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[3U];
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__valid_out_east = 1U;
                    }
                } else if ((1U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_dir))) {
                    vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_south[0U] 
                        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[0U];
                    vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_south[1U] 
                        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[1U];
                    vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_south[2U] 
                        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[2U];
                    vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_south[3U] 
                        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[3U];
                    vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__valid_out_south = 1U;
                } else {
                    vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_north[0U] 
                        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[0U];
                    vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_north[1U] 
                        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[1U];
                    vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_north[2U] 
                        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[2U];
                    vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_north[3U] 
                        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[3U];
                    vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__valid_out_north = 1U;
                }
            }
        }
    } else if (vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_local) {
        __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_local 
            = (1U & ((IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_local) 
                     - (IData)(1U)));
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[0U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_local
            [vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_local][0U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[1U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_local
            [vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_local][1U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[2U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_local
            [vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_local][2U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[3U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_local
            [vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_local][3U];
        __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_valid = 1U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_local 
            = (1U & ((IData)(1U) + (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_local)));
    } else if (vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_north) {
        __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_north 
            = (1U & ((IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_north) 
                     - (IData)(1U)));
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[0U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_north
            [vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_north][0U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[1U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_north
            [vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_north][1U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[2U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_north
            [vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_north][2U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[3U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_north
            [vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_north][3U];
        __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_valid = 1U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_north 
            = (1U & ((IData)(1U) + (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_north)));
    } else if (vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_south) {
        __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_south 
            = (1U & ((IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_south) 
                     - (IData)(1U)));
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[0U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_south
            [vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_south][0U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[1U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_south
            [vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_south][1U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[2U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_south
            [vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_south][2U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[3U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_south
            [vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_south][3U];
        __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_valid = 1U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_south 
            = (1U & ((IData)(1U) + (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_south)));
    } else if (vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_east) {
        __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_east 
            = (1U & ((IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_east) 
                     - (IData)(1U)));
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[0U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_east
            [vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_east][0U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[1U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_east
            [vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_east][1U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[2U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_east
            [vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_east][2U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[3U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_east
            [vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_east][3U];
        __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_valid = 1U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_east 
            = (1U & ((IData)(1U) + (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_east)));
    } else if (vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_west) {
        __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_west 
            = (1U & ((IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_west) 
                     - (IData)(1U)));
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[0U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_west
            [vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_west][0U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[1U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_west
            [vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_west][1U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[2U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_west
            [vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_west][2U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[3U] 
            = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_west
            [vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_west][3U];
        __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_valid = 1U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_west 
            = (1U & ((IData)(1U) + (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_west)));
    }
    vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_valid 
        = __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_valid;
    vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_local 
        = __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_local;
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_local__v0) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_local[__VdlyDim0__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_local__v0][0U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_local__v0[0U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_local[__VdlyDim0__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_local__v0][1U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_local__v0[1U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_local[__VdlyDim0__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_local__v0][2U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_local__v0[2U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_local[__VdlyDim0__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_local__v0][3U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_local__v0[3U];
    }
    vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_north 
        = __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_north;
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_north__v0) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_north[__VdlyDim0__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_north__v0][0U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_north__v0[0U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_north[__VdlyDim0__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_north__v0][1U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_north__v0[1U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_north[__VdlyDim0__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_north__v0][2U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_north__v0[2U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_north[__VdlyDim0__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_north__v0][3U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_north__v0[3U];
    }
    vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_south 
        = __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_south;
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_south__v0) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_south[__VdlyDim0__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_south__v0][0U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_south__v0[0U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_south[__VdlyDim0__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_south__v0][1U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_south__v0[1U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_south[__VdlyDim0__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_south__v0][2U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_south__v0[2U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_south[__VdlyDim0__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_south__v0][3U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_south__v0[3U];
    }
    vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_east 
        = __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_east;
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_east__v0) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_east[__VdlyDim0__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_east__v0][0U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_east__v0[0U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_east[__VdlyDim0__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_east__v0][1U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_east__v0[1U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_east[__VdlyDim0__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_east__v0][2U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_east__v0[2U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_east[__VdlyDim0__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_east__v0][3U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_east__v0[3U];
    }
    vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_west 
        = __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_west;
    if (__VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_west__v0) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_west[__VdlyDim0__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_west__v0][0U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_west__v0[0U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_west[__VdlyDim0__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_west__v0][1U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_west__v0[1U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_west[__VdlyDim0__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_west__v0][2U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_west__v0[2U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_west[__VdlyDim0__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_west__v0][3U] 
            = __VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_west__v0[3U];
    }
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
    vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router[0U][0U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf
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
    vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router[0U][1U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf
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
    vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router[0U][2U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf
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
    vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router[0U][3U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf
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
    vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router[1U][0U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf
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
    vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router[1U][1U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf
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
    vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router[1U][2U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf
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
    vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router[1U][3U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf
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
    vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router[2U][0U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf
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
    vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router[2U][1U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf
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
    vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router[2U][2U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf
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
    vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router[2U][3U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf
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
    vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router[3U][0U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf
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
    vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router[3U][1U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf
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
    vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router[3U][2U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf
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
    vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router[3U][3U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf
        [1U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[1U][3U][0U] 
        = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_left
        [3U][0U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[1U][3U][1U] 
        = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_left
        [3U][1U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[1U][3U][2U] 
        = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_left
        [3U][2U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[1U][3U][3U] 
        = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_left
        [3U][3U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[3U][3U][0U] 
        = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_left
        [3U][0U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[3U][3U][1U] 
        = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_left
        [3U][1U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[3U][3U][2U] 
        = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_left
        [3U][2U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[3U][3U][3U] 
        = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_left
        [3U][3U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[2U][0U][0U] 
        = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_left
        [3U][0U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[2U][0U][1U] 
        = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_left
        [3U][1U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[2U][0U][2U] 
        = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_left
        [3U][2U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[2U][0U][3U] 
        = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_left
        [3U][3U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[3U][0U][0U] 
        = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_left
        [3U][0U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[3U][0U][1U] 
        = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_left
        [3U][1U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[3U][0U][2U] 
        = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_left
        [3U][2U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[3U][0U][3U] 
        = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_left
        [3U][3U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[0U][2U][0U] 
        = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_right
        [3U][0U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[0U][2U][1U] 
        = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_right
        [3U][1U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[0U][2U][2U] 
        = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_right
        [3U][2U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[0U][2U][3U] 
        = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__buffer_right
        [3U][3U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[2U][2U][0U] 
        = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_right
        [3U][0U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[2U][2U][1U] 
        = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_right
        [3U][1U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[2U][2U][2U] 
        = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_right
        [3U][2U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[2U][2U][3U] 
        = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__buffer_right
        [3U][3U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[0U][1U][0U] 
        = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_right
        [3U][0U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[0U][1U][1U] 
        = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_right
        [3U][1U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[0U][1U][2U] 
        = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_right
        [3U][2U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[0U][1U][3U] 
        = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__buffer_right
        [3U][3U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[1U][1U][0U] 
        = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_right
        [3U][0U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[1U][1U][1U] 
        = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_right
        [3U][1U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[1U][1U][2U] 
        = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_right
        [3U][2U];
    vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector[1U][1U][3U] 
        = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__buffer_right
        [3U][3U];
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
    vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide[0U][0U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf
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
    vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide[0U][1U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf
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
    vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide[0U][2U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf
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
    vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide[0U][3U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf
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
    vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide[1U][0U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf
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
    vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide[1U][1U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf
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
    vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide[1U][2U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf
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
    vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide[1U][3U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf
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
    vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide[2U][0U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf
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
    vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide[2U][1U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf
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
    vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide[2U][2U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf
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
    vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide[2U][3U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf
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
    vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide[3U][0U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf
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
    vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide[3U][1U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf
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
    vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide[3U][2U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf
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
    vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide[3U][3U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf
        [1U];
    vlSelfRef.mesh_onoc__DOT__waveguide_valid_to_photodetector[3U][0U] 
        = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__valid_left
        [3U];
    vlSelfRef.mesh_onoc__DOT__wg_packet_done[3U] = 
        ((vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__valid_left
          [2U] << 1U) | vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__valid_right
         [2U]);
    vlSelfRef.mesh_onoc__DOT__waveguide_valid_to_photodetector[1U][1U] 
        = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__valid_right
        [3U];
    vlSelfRef.mesh_onoc__DOT__waveguide_valid_to_photodetector[1U][3U] 
        = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__valid_left
        [3U];
    vlSelfRef.mesh_onoc__DOT__waveguide_valid_to_photodetector[3U][3U] 
        = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__valid_left
        [3U];
    vlSelfRef.mesh_onoc__DOT__waveguide_valid_to_photodetector[2U][0U] 
        = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__valid_left
        [3U];
    vlSelfRef.mesh_onoc__DOT__waveguide_valid_to_photodetector[0U][2U] 
        = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__valid_right
        [3U];
    vlSelfRef.mesh_onoc__DOT____Vcellout__wg_inst__BRA__0__KET____DOT__wg__packet_done 
        = ((vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__valid_left
            [2U] << 1U) | vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__valid_right
           [2U]);
    vlSelfRef.mesh_onoc__DOT__waveguide_valid_to_photodetector[2U][2U] 
        = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__valid_right
        [3U];
    vlSelfRef.mesh_onoc__DOT____Vcellout__wg_inst__BRA__1__KET____DOT__wg__packet_done 
        = ((vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__valid_left
            [2U] << 1U) | vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__valid_right
           [2U]);
    vlSelfRef.mesh_onoc__DOT__waveguide_valid_to_photodetector[0U][1U] 
        = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__valid_right
        [3U];
    vlSelfRef.mesh_onoc__DOT____Vcellout__wg_inst__BRA__2__KET____DOT__wg__packet_done 
        = ((vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__valid_left
            [2U] << 1U) | vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__valid_right
           [2U]);
    if (vlSelfRef.rst) {
        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__packet_out[0U] = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__packet_out[1U] = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__packet_out[2U] = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__packet_out[3U] = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__valid_out = 0U;
        __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__pkt_sent_last_cycle = 0U;
        __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__cycle_counter = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__packet_out[0U] = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__packet_out[1U] = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__packet_out[2U] = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__packet_out[3U] = 0U;
    } else {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__unnamedblk1__DOT__send_now 
            = (VL_ITOR_D_I(32, VL_MODDIV_III(32, (IData)(
                                                         VL_RANDOM_I()), (IData)(0x64U))) 
               < (50.0 + (50.0 * sin(((6.28000000000000025e+00 
                                       * VL_ISTOR_D_I(32, vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__cycle_counter)) 
                                      / 50.0)))));
        if (VL_UNLIKELY(((IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__unnamedblk1__DOT__send_now) 
                         & (~ (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__pkt_sent_last_cycle))))) {
            __Vfunc_mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__get_random_destination__0__self_id = 0U;
            __Vfunc_mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__get_random_destination__0__random_id 
                = (0xffffU & VL_URANDOM_RANGE_I(0U, 1U));
            vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__valid_out = 1U;
            __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__pkt_sent_last_cycle = 1U;
            while (((IData)(__Vfunc_mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__get_random_destination__0__random_id) 
                    == (IData)(__Vfunc_mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__get_random_destination__0__self_id))) {
                __Vfunc_mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__get_random_destination__0__random_id 
                    = (0xffffU & VL_URANDOM_RANGE_I(0U, 1U));
            }
            __Vfunc_mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__get_random_destination__0__rand_y 
                = (0xffU & (IData)(__Vfunc_mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__get_random_destination__0__random_id));
            __Vfunc_mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__encode_xy__1__y 
                = __Vfunc_mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__get_random_destination__0__rand_y;
            __Vfunc_mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__encode_xy__1__Vfuncout 
                = __Vfunc_mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__encode_xy__1__y;
            __Vfunc_mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__get_random_destination__0__Vfuncout 
                = __Vfunc_mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__encode_xy__1__Vfuncout;
            __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__destination 
                = __Vfunc_mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__get_random_destination__0__Vfuncout;
            vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__packet_out[0U] 
                = (1U | (vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__cycle_counter 
                         << 1U));
            vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__packet_out[1U] 
                = ((vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__cycle_counter 
                    >> 0x1fU) | ((IData)((((QData)((IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__destination)) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__payload)))) 
                                 << 1U));
            vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__packet_out[2U] 
                = (((IData)((((QData)((IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__destination)) 
                              << 0x20U) | (QData)((IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__payload)))) 
                    >> 0x1fU) | ((IData)(((((QData)((IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__destination)) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__payload))) 
                                          >> 0x20U)) 
                                 << 1U));
            vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__packet_out[3U] 
                = ((IData)(((((QData)((IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__destination)) 
                              << 0x20U) | (QData)((IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__payload))) 
                            >> 0x20U)) >> 0x1fU);
            VL_WRITEF_NX("IP 0 sending %11d to dest %0#\n",0,
                         32,vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__payload,
                         16,(IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__destination));
            vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__payload 
                = ((IData)(1U) + vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__payload);
        } else {
            vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__valid_out = 0U;
            __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__pkt_sent_last_cycle = 0U;
        }
        __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__cycle_counter 
            = ((IData)(1U) + vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__cycle_counter);
    }
    if (vlSelfRef.rst) {
        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__packet_out[0U] = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__packet_out[1U] = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__packet_out[2U] = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__packet_out[3U] = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__valid_out = 0U;
        __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__pkt_sent_last_cycle = 0U;
        __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__cycle_counter = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__packet_out[0U] = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__packet_out[1U] = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__packet_out[2U] = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__packet_out[3U] = 0U;
    } else {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__unnamedblk1__DOT__send_now 
            = (VL_ITOR_D_I(32, VL_MODDIV_III(32, (IData)(
                                                         VL_RANDOM_I()), (IData)(0x64U))) 
               < (50.0 + (50.0 * sin(((6.28000000000000025e+00 
                                       * VL_ISTOR_D_I(32, vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__cycle_counter)) 
                                      / 50.0)))));
        if (VL_UNLIKELY(((IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__unnamedblk1__DOT__send_now) 
                         & (~ (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__pkt_sent_last_cycle))))) {
            __Vfunc_mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__get_random_destination__3__self_id = 1U;
            __Vfunc_mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__get_random_destination__3__random_id 
                = (0xffffU & VL_URANDOM_RANGE_I(0U, 1U));
            vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__valid_out = 1U;
            __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__pkt_sent_last_cycle = 1U;
            while (((IData)(__Vfunc_mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__get_random_destination__3__random_id) 
                    == (IData)(__Vfunc_mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__get_random_destination__3__self_id))) {
                __Vfunc_mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__get_random_destination__3__random_id 
                    = (0xffffU & VL_URANDOM_RANGE_I(0U, 1U));
            }
            __Vfunc_mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__get_random_destination__3__rand_y 
                = (0xffU & (IData)(__Vfunc_mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__get_random_destination__3__random_id));
            __Vfunc_mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__encode_xy__4__y 
                = __Vfunc_mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__get_random_destination__3__rand_y;
            __Vfunc_mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__encode_xy__4__Vfuncout 
                = __Vfunc_mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__encode_xy__4__y;
            __Vfunc_mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__get_random_destination__3__Vfuncout 
                = __Vfunc_mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__encode_xy__4__Vfuncout;
            __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__destination 
                = __Vfunc_mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__get_random_destination__3__Vfuncout;
            vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__packet_out[0U] 
                = (1U | ((IData)((((QData)((IData)(
                                                   (0x10000U 
                                                    | vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__payload))) 
                                   << 0x20U) | (QData)((IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__cycle_counter)))) 
                         << 1U));
            vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__packet_out[1U] 
                = (((IData)((((QData)((IData)((0x10000U 
                                               | vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__payload))) 
                              << 0x20U) | (QData)((IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__cycle_counter)))) 
                    >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                            (0x10000U 
                                                             | vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__payload))) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__cycle_counter))) 
                                          >> 0x20U)) 
                                 << 1U));
            vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__packet_out[2U] 
                = ((0xfffffffeU & vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__packet_out[2U]) 
                   | ((IData)(((((QData)((IData)((0x10000U 
                                                  | vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__payload))) 
                                 << 0x20U) | (QData)((IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__cycle_counter))) 
                               >> 0x20U)) >> 0x1fU));
            vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__packet_out[2U] 
                = ((1U & vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__packet_out[2U]) 
                   | (0xfffffffeU & (0x2000000U | ((IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__destination) 
                                                   << 1U))));
            vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__packet_out[3U] 
                = ((IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__destination) 
                   >> 0x1fU);
            VL_WRITEF_NX("IP 1 sending %11d to dest %0#\n",0,
                         32,vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__payload,
                         16,(IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__destination));
            vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__payload 
                = ((IData)(1U) + vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__payload);
        } else {
            vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__valid_out = 0U;
            __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__pkt_sent_last_cycle = 0U;
        }
        __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__cycle_counter 
            = ((IData)(1U) + vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__cycle_counter);
    }
    if (vlSelfRef.rst) {
        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__packet_out[0U] = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__packet_out[1U] = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__packet_out[2U] = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__packet_out[3U] = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__valid_out = 0U;
        __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__pkt_sent_last_cycle = 0U;
        __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__cycle_counter = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__packet_out[0U] = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__packet_out[1U] = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__packet_out[2U] = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__packet_out[3U] = 0U;
    } else {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__unnamedblk1__DOT__send_now 
            = (VL_ITOR_D_I(32, VL_MODDIV_III(32, (IData)(
                                                         VL_RANDOM_I()), (IData)(0x64U))) 
               < (50.0 + (50.0 * sin(((6.28000000000000025e+00 
                                       * VL_ISTOR_D_I(32, vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__cycle_counter)) 
                                      / 50.0)))));
        if (VL_UNLIKELY(((IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__unnamedblk1__DOT__send_now) 
                         & (~ (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__pkt_sent_last_cycle))))) {
            __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__get_random_destination__6__self_id = 2U;
            __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__get_random_destination__6__random_id 
                = (0xffffU & VL_URANDOM_RANGE_I(0U, 1U));
            vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__valid_out = 1U;
            __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__pkt_sent_last_cycle = 1U;
            while (((IData)(__Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__get_random_destination__6__random_id) 
                    == (IData)(__Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__get_random_destination__6__self_id))) {
                __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__get_random_destination__6__random_id 
                    = (0xffffU & VL_URANDOM_RANGE_I(0U, 1U));
            }
            __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__get_random_destination__6__rand_y 
                = (0xffU & (IData)(__Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__get_random_destination__6__random_id));
            __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__encode_xy__7__y 
                = __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__get_random_destination__6__rand_y;
            __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__encode_xy__7__Vfuncout 
                = __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__encode_xy__7__y;
            __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__get_random_destination__6__Vfuncout 
                = __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__encode_xy__7__Vfuncout;
            __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__destination 
                = __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__get_random_destination__6__Vfuncout;
            vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__packet_out[0U] 
                = (1U | ((IData)((((QData)((IData)(
                                                   (0x20000U 
                                                    | vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__payload))) 
                                   << 0x20U) | (QData)((IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__cycle_counter)))) 
                         << 1U));
            vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__packet_out[1U] 
                = (((IData)((((QData)((IData)((0x20000U 
                                               | vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__payload))) 
                              << 0x20U) | (QData)((IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__cycle_counter)))) 
                    >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                            (0x20000U 
                                                             | vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__payload))) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__cycle_counter))) 
                                          >> 0x20U)) 
                                 << 1U));
            vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__packet_out[2U] 
                = ((0xfffffffeU & vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__packet_out[2U]) 
                   | ((IData)(((((QData)((IData)((0x20000U 
                                                  | vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__payload))) 
                                 << 0x20U) | (QData)((IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__cycle_counter))) 
                               >> 0x20U)) >> 0x1fU));
            vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__packet_out[2U] 
                = ((1U & vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__packet_out[2U]) 
                   | (0xfffffffeU & (0x20000U | ((IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__destination) 
                                                 << 1U))));
            vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__packet_out[3U] 
                = ((IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__destination) 
                   >> 0x1fU);
            VL_WRITEF_NX("IP 2 sending %11d to dest %0#\n",0,
                         32,vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__payload,
                         16,(IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__destination));
            vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__payload 
                = ((IData)(1U) + vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__payload);
        } else {
            vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__valid_out = 0U;
            __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__pkt_sent_last_cycle = 0U;
        }
        __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__cycle_counter 
            = ((IData)(1U) + vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__cycle_counter);
    }
    if (vlSelfRef.rst) {
        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__packet_out[0U] = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__packet_out[1U] = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__packet_out[2U] = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__packet_out[3U] = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__valid_out = 0U;
        __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__pkt_sent_last_cycle = 0U;
        __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__cycle_counter = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__packet_out[0U] = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__packet_out[1U] = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__packet_out[2U] = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__packet_out[3U] = 0U;
    } else {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__unnamedblk1__DOT__send_now 
            = (VL_ITOR_D_I(32, VL_MODDIV_III(32, (IData)(
                                                         VL_RANDOM_I()), (IData)(0x64U))) 
               < (50.0 + (50.0 * sin(((6.28000000000000025e+00 
                                       * VL_ISTOR_D_I(32, vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__cycle_counter)) 
                                      / 50.0)))));
        if (VL_UNLIKELY(((IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__unnamedblk1__DOT__send_now) 
                         & (~ (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__pkt_sent_last_cycle))))) {
            __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__get_random_destination__9__self_id = 3U;
            __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__get_random_destination__9__random_id 
                = (0xffffU & VL_URANDOM_RANGE_I(0U, 1U));
            vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__valid_out = 1U;
            __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__pkt_sent_last_cycle = 1U;
            while (((IData)(__Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__get_random_destination__9__random_id) 
                    == (IData)(__Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__get_random_destination__9__self_id))) {
                __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__get_random_destination__9__random_id 
                    = (0xffffU & VL_URANDOM_RANGE_I(0U, 1U));
            }
            __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__get_random_destination__9__rand_y 
                = (0xffU & (IData)(__Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__get_random_destination__9__random_id));
            __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__encode_xy__10__y 
                = __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__get_random_destination__9__rand_y;
            __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__encode_xy__10__Vfuncout 
                = __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__encode_xy__10__y;
            __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__get_random_destination__9__Vfuncout 
                = __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__encode_xy__10__Vfuncout;
            __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__destination 
                = __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__get_random_destination__9__Vfuncout;
            vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__packet_out[0U] 
                = (1U | ((IData)((((QData)((IData)(
                                                   (0x30000U 
                                                    | vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__payload))) 
                                   << 0x20U) | (QData)((IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__cycle_counter)))) 
                         << 1U));
            vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__packet_out[1U] 
                = (((IData)((((QData)((IData)((0x30000U 
                                               | vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__payload))) 
                              << 0x20U) | (QData)((IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__cycle_counter)))) 
                    >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                            (0x30000U 
                                                             | vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__payload))) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__cycle_counter))) 
                                          >> 0x20U)) 
                                 << 1U));
            vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__packet_out[2U] 
                = ((0xfffffffeU & vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__packet_out[2U]) 
                   | ((IData)(((((QData)((IData)((0x30000U 
                                                  | vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__payload))) 
                                 << 0x20U) | (QData)((IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__cycle_counter))) 
                               >> 0x20U)) >> 0x1fU));
            vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__packet_out[2U] 
                = ((1U & vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__packet_out[2U]) 
                   | (0xfffffffeU & (0x2020000U | ((IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__destination) 
                                                   << 1U))));
            vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__packet_out[3U] 
                = ((IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__destination) 
                   >> 0x1fU);
            VL_WRITEF_NX("IP 3 sending %11d to dest %0#\n",0,
                         32,vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__payload,
                         16,(IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__destination));
            vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__payload 
                = ((IData)(1U) + vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__payload);
        } else {
            vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__valid_out = 0U;
            __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__pkt_sent_last_cycle = 0U;
        }
        __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__cycle_counter 
            = ((IData)(1U) + vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__cycle_counter);
    }
    vlSelfRef.mesh_onoc__DOT__router_granted[2U] = 
        ((0xbU & vlSelfRef.mesh_onoc__DOT__router_granted
          [2U]) | (4U & ((IData)(vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__fp_arb__DOT__grant_reg) 
                         << 1U)));
    vlSelfRef.mesh_onoc__DOT__router_granted[3U] = 
        ((7U & vlSelfRef.mesh_onoc__DOT__router_granted
          [3U]) | (8U & ((IData)(vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__fp_arb__DOT__grant_reg) 
                         << 3U)));
    vlSelfRef.mesh_onoc__DOT__router_granted[1U] = 
        ((0xdU & vlSelfRef.mesh_onoc__DOT__router_granted
          [1U]) | (2U & (IData)(vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__fp_arb__DOT__grant_reg)));
    vlSelfRef.mesh_onoc__DOT__router_granted[3U] = 
        ((0xeU & vlSelfRef.mesh_onoc__DOT__router_granted
          [3U]) | (1U & (IData)(vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__fp_arb__DOT__grant_reg)));
    vlSelfRef.mesh_onoc__DOT__router_granted[0U] = 
        ((0xbU & vlSelfRef.mesh_onoc__DOT__router_granted
          [0U]) | (4U & ((IData)(vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__fp_arb__DOT__grant_reg) 
                         << 1U)));
    vlSelfRef.mesh_onoc__DOT__router_granted[1U] = 
        ((7U & vlSelfRef.mesh_onoc__DOT__router_granted
          [1U]) | (8U & ((IData)(vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__fp_arb__DOT__grant_reg) 
                         << 3U)));
    vlSelfRef.mesh_onoc__DOT__router_granted[0U] = 
        ((0xdU & vlSelfRef.mesh_onoc__DOT__router_granted
          [0U]) | (2U & (IData)(vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__fp_arb__DOT__grant_reg)));
    vlSelfRef.mesh_onoc__DOT__router_granted[2U] = 
        ((0xeU & vlSelfRef.mesh_onoc__DOT__router_granted
          [2U]) | (1U & (IData)(vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__fp_arb__DOT__grant_reg)));
    mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__unnamedblk2__DOT__dest_x 
        = (0xffU & (vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[2U] 
                    >> 1U));
    mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__unnamedblk2__DOT__dest_y 
        = (0xffU & (vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[2U] 
                    >> 9U));
    vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__request_to_send = 0U;
    vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__route_dir = 0U;
    if (VL_LTS_III(32, 0U, mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__unnamedblk2__DOT__dest_x)) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__route_dir = 2U;
    } else if (VL_GTS_III(32, 0U, mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__unnamedblk2__DOT__dest_x)) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__route_dir = 3U;
    } else if (VL_LTS_III(32, 0U, mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__unnamedblk2__DOT__dest_y)) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__route_dir = 1U;
    } else if (VL_GTS_III(32, 0U, mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__unnamedblk2__DOT__dest_y)) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__route_dir = 0U;
    }
    if ((1U & (~ ((0U == mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__unnamedblk2__DOT__dest_x) 
                  & (0U == mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__unnamedblk2__DOT__dest_y))))) {
        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__request_to_send 
            = ((IData)(vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__request_to_send) 
               | (0xfU & ((IData)(1U) << (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__route_dir))));
    }
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[0U][3U][0U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_west[0U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[0U][3U][1U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_west[1U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[0U][3U][2U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_west[2U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[0U][3U][3U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_west[3U];
    vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator[0U][3U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__valid_out_west;
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[0U][2U][0U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_east[0U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[0U][2U][1U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_east[1U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[0U][2U][2U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_east[2U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[0U][2U][3U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_east[3U];
    vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator[0U][2U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__valid_out_east;
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[0U][1U][0U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_south[0U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[0U][1U][1U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_south[1U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[0U][1U][2U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_south[2U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[0U][1U][3U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_south[3U];
    vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator[0U][1U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__valid_out_south;
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[0U][0U][0U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_north[0U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[0U][0U][1U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_north[1U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[0U][0U][2U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_north[2U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[0U][0U][3U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_north[3U];
    vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator[0U][0U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__valid_out_north;
    mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk2__DOT__dest_x 
        = (0xffU & (vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[2U] 
                    >> 1U));
    mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk2__DOT__dest_y 
        = (0xffU & (vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[2U] 
                    >> 9U));
    vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__request_to_send = 0U;
    vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_dir = 0U;
    if (VL_LTS_III(32, 1U, mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk2__DOT__dest_x)) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_dir = 2U;
    } else if (VL_GTS_III(32, 1U, mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk2__DOT__dest_x)) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_dir = 3U;
    } else if (VL_LTS_III(32, 0U, mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk2__DOT__dest_y)) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_dir = 1U;
    } else if (VL_GTS_III(32, 0U, mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk2__DOT__dest_y)) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_dir = 0U;
    }
    if ((1U & (~ ((1U == mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk2__DOT__dest_x) 
                  & (0U == mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk2__DOT__dest_y))))) {
        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__request_to_send 
            = ((IData)(vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__request_to_send) 
               | (0xfU & ((IData)(1U) << (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_dir))));
    }
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[1U][3U][0U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_west[0U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[1U][3U][1U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_west[1U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[1U][3U][2U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_west[2U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[1U][3U][3U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_west[3U];
    vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator[1U][3U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__valid_out_west;
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[1U][2U][0U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_east[0U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[1U][2U][1U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_east[1U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[1U][2U][2U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_east[2U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[1U][2U][3U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_east[3U];
    vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator[1U][2U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__valid_out_east;
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[1U][1U][0U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_south[0U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[1U][1U][1U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_south[1U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[1U][1U][2U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_south[2U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[1U][1U][3U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_south[3U];
    vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator[1U][1U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__valid_out_south;
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[1U][0U][0U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_north[0U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[1U][0U][1U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_north[1U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[1U][0U][2U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_north[2U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[1U][0U][3U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_north[3U];
    vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator[1U][0U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__valid_out_north;
    mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__unnamedblk2__DOT__dest_x 
        = (0xffU & (vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[2U] 
                    >> 1U));
    mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__unnamedblk2__DOT__dest_y 
        = (0xffU & (vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[2U] 
                    >> 9U));
    vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__request_to_send = 0U;
    vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__route_dir = 0U;
    if (VL_LTS_III(32, 0U, mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__unnamedblk2__DOT__dest_x)) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__route_dir = 2U;
    } else if (VL_GTS_III(32, 0U, mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__unnamedblk2__DOT__dest_x)) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__route_dir = 3U;
    } else if (VL_LTS_III(32, 1U, mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__unnamedblk2__DOT__dest_y)) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__route_dir = 1U;
    } else if (VL_GTS_III(32, 1U, mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__unnamedblk2__DOT__dest_y)) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__route_dir = 0U;
    }
    if ((1U & (~ ((0U == mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__unnamedblk2__DOT__dest_x) 
                  & (1U == mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__unnamedblk2__DOT__dest_y))))) {
        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__request_to_send 
            = ((IData)(vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__request_to_send) 
               | (0xfU & ((IData)(1U) << (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__route_dir))));
    }
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[2U][3U][0U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_west[0U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[2U][3U][1U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_west[1U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[2U][3U][2U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_west[2U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[2U][3U][3U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_west[3U];
    vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator[2U][3U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__valid_out_west;
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[2U][2U][0U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_east[0U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[2U][2U][1U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_east[1U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[2U][2U][2U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_east[2U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[2U][2U][3U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_east[3U];
    vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator[2U][2U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__valid_out_east;
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[2U][1U][0U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_south[0U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[2U][1U][1U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_south[1U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[2U][1U][2U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_south[2U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[2U][1U][3U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_south[3U];
    vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator[2U][1U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__valid_out_south;
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[2U][0U][0U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_north[0U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[2U][0U][1U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_north[1U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[2U][0U][2U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_north[2U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[2U][0U][3U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_north[3U];
    vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator[2U][0U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__valid_out_north;
    mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk2__DOT__dest_x 
        = (0xffU & (vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[2U] 
                    >> 1U));
    mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk2__DOT__dest_y 
        = (0xffU & (vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[2U] 
                    >> 9U));
    vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__request_to_send = 0U;
    vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_dir = 0U;
    if (VL_LTS_III(32, 1U, mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk2__DOT__dest_x)) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_dir = 2U;
    } else if (VL_GTS_III(32, 1U, mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk2__DOT__dest_x)) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_dir = 3U;
    } else if (VL_LTS_III(32, 1U, mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk2__DOT__dest_y)) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_dir = 1U;
    } else if (VL_GTS_III(32, 1U, mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk2__DOT__dest_y)) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_dir = 0U;
    }
    if ((1U & (~ ((1U == mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk2__DOT__dest_x) 
                  & (1U == mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk2__DOT__dest_y))))) {
        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__request_to_send 
            = ((IData)(vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__request_to_send) 
               | (0xfU & ((IData)(1U) << (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_dir))));
    }
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[3U][3U][0U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_west[0U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[3U][3U][1U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_west[1U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[3U][3U][2U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_west[2U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[3U][3U][3U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_west[3U];
    vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator[3U][3U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__valid_out_west;
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[3U][2U][0U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_east[0U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[3U][2U][1U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_east[1U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[3U][2U][2U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_east[2U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[3U][2U][3U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_east[3U];
    vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator[3U][2U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__valid_out_east;
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[3U][1U][0U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_south[0U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[3U][1U][1U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_south[1U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[3U][1U][2U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_south[2U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[3U][1U][3U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_south[3U];
    vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator[3U][1U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__valid_out_south;
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[3U][0U][0U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_north[0U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[3U][0U][1U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_north[1U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[3U][0U][2U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_north[2U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[3U][0U][3U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_north[3U];
    vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator[3U][0U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__valid_out_north;
    vlSelfRef.mesh_onoc__DOT__wg_packet_done[0U] = vlSelfRef.mesh_onoc__DOT____Vcellout__wg_inst__BRA__0__KET____DOT__wg__packet_done;
    vlSelfRef.mesh_onoc__DOT__wg_packet_done[1U] = vlSelfRef.mesh_onoc__DOT____Vcellout__wg_inst__BRA__1__KET____DOT__wg__packet_done;
    vlSelfRef.mesh_onoc__DOT__wg_packet_done[2U] = vlSelfRef.mesh_onoc__DOT____Vcellout__wg_inst__BRA__2__KET____DOT__wg__packet_done;
    vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__pkt_sent_last_cycle 
        = __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__pkt_sent_last_cycle;
    vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__cycle_counter 
        = __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__cycle_counter;
    vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__destination 
        = __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__destination;
    vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__pkt_sent_last_cycle 
        = __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__pkt_sent_last_cycle;
    vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__cycle_counter 
        = __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__cycle_counter;
    vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__destination 
        = __Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__destination;
    vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__pkt_sent_last_cycle 
        = __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__pkt_sent_last_cycle;
    vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__cycle_counter 
        = __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__cycle_counter;
    vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__destination 
        = __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__destination;
    vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__pkt_sent_last_cycle 
        = __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__pkt_sent_last_cycle;
    vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__cycle_counter 
        = __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__cycle_counter;
    vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__destination 
        = __Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__destination;
    vlSelfRef.mesh_onoc__DOT__router_request_to_send[0U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__request_to_send;
    vlSelfRef.mesh_onoc__DOT__router_request_to_send[1U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__request_to_send;
    vlSelfRef.mesh_onoc__DOT__router_request_to_send[2U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__request_to_send;
    vlSelfRef.mesh_onoc__DOT__router_request_to_send[3U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__request_to_send;
}
