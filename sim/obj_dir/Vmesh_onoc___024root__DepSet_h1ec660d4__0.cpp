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
    if (VL_UNLIKELY(vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf
                    [1U])) {
        VL_WRITEF_NX("Modulator 0 forwarding packet ID %0#\n",0,
                     32,((vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer
                          [1U][1U] << 0x1fU) | (vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer
                                                [1U][0U] 
                                                >> 1U)));
    }
    if (VL_UNLIKELY(vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf
                    [1U])) {
        VL_WRITEF_NX("Modulator 1 forwarding packet ID %0#\n",0,
                     32,((vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer
                          [1U][1U] << 0x1fU) | (vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer
                                                [1U][0U] 
                                                >> 1U)));
    }
    if (VL_UNLIKELY(vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf
                    [1U])) {
        VL_WRITEF_NX("Modulator 2 forwarding packet ID %0#\n",0,
                     32,((vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer
                          [1U][1U] << 0x1fU) | (vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer
                                                [1U][0U] 
                                                >> 1U)));
    }
    if (VL_UNLIKELY(vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf
                    [1U])) {
        VL_WRITEF_NX("Modulator 3 forwarding packet ID %0#\n",0,
                     32,((vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer
                          [1U][1U] << 0x1fU) | (vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer
                                                [1U][0U] 
                                                >> 1U)));
    }
    if (VL_UNLIKELY(vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf
                    [1U])) {
        VL_WRITEF_NX("Modulator 4 forwarding packet ID %0#\n",0,
                     32,((vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer
                          [1U][1U] << 0x1fU) | (vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer
                                                [1U][0U] 
                                                >> 1U)));
    }
    if (VL_UNLIKELY(vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf
                    [1U])) {
        VL_WRITEF_NX("Modulator 5 forwarding packet ID %0#\n",0,
                     32,((vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer
                          [1U][1U] << 0x1fU) | (vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer
                                                [1U][0U] 
                                                >> 1U)));
    }
    if (VL_UNLIKELY(vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf
                    [1U])) {
        VL_WRITEF_NX("Modulator 6 forwarding packet ID %0#\n",0,
                     32,((vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer
                          [1U][1U] << 0x1fU) | (vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer
                                                [1U][0U] 
                                                >> 1U)));
    }
    if (VL_UNLIKELY(vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf
                    [1U])) {
        VL_WRITEF_NX("Modulator 7 forwarding packet ID %0#\n",0,
                     32,((vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer
                          [1U][1U] << 0x1fU) | (vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer
                                                [1U][0U] 
                                                >> 1U)));
    }
    if (VL_UNLIKELY(vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf
                    [1U])) {
        VL_WRITEF_NX("Modulator 8 forwarding packet ID %0#\n",0,
                     32,((vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer
                          [1U][1U] << 0x1fU) | (vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer
                                                [1U][0U] 
                                                >> 1U)));
    }
    if (VL_UNLIKELY(vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf
                    [1U])) {
        VL_WRITEF_NX("Modulator 9 forwarding packet ID %0#\n",0,
                     32,((vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer
                          [1U][1U] << 0x1fU) | (vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer
                                                [1U][0U] 
                                                >> 1U)));
    }
    if (VL_UNLIKELY(vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf
                    [1U])) {
        VL_WRITEF_NX("Modulator 10 forwarding packet ID %0#\n",0,
                     32,((vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer
                          [1U][1U] << 0x1fU) | (vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer
                                                [1U][0U] 
                                                >> 1U)));
    }
    if (VL_UNLIKELY(vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf
                    [1U])) {
        VL_WRITEF_NX("Modulator 11 forwarding packet ID %0#\n",0,
                     32,((vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer
                          [1U][1U] << 0x1fU) | (vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer
                                                [1U][0U] 
                                                >> 1U)));
    }
    if (VL_UNLIKELY(vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf
                    [1U])) {
        VL_WRITEF_NX("Modulator 12 forwarding packet ID %0#\n",0,
                     32,((vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer
                          [1U][1U] << 0x1fU) | (vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer
                                                [1U][0U] 
                                                >> 1U)));
    }
    if (VL_UNLIKELY(vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf
                    [1U])) {
        VL_WRITEF_NX("Modulator 13 forwarding packet ID %0#\n",0,
                     32,((vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer
                          [1U][1U] << 0x1fU) | (vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer
                                                [1U][0U] 
                                                >> 1U)));
    }
    if (VL_UNLIKELY(vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf
                    [1U])) {
        VL_WRITEF_NX("Modulator 14 forwarding packet ID %0#\n",0,
                     32,((vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer
                          [1U][1U] << 0x1fU) | (vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer
                                                [1U][0U] 
                                                >> 1U)));
    }
    if (VL_UNLIKELY(vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf
                    [1U])) {
        VL_WRITEF_NX("Modulator 15 forwarding packet ID %0#\n",0,
                     32,((vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer
                          [1U][1U] << 0x1fU) | (vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer
                                                [1U][0U] 
                                                >> 1U)));
    }
    if (VL_UNLIKELY(vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_right
                    [3U])) {
        VL_WRITEF_NX("Waveguide outputs packet ID %0# R-> at cycle %0t\n",0,
                     32,((vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right
                          [3U][1U] << 0x1fU) | (vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right
                                                [3U][0U] 
                                                >> 1U)),
                     64,VL_TIME_UNITED_Q(1),-12);
    }
    if (VL_UNLIKELY(vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_right
                    [3U])) {
        VL_WRITEF_NX("Waveguide outputs packet ID %0# R-> at cycle %0t\n",0,
                     32,((vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right
                          [3U][1U] << 0x1fU) | (vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right
                                                [3U][0U] 
                                                >> 1U)),
                     64,VL_TIME_UNITED_Q(1),-12);
    }
    if (VL_UNLIKELY(vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_right
                    [3U])) {
        VL_WRITEF_NX("Waveguide outputs packet ID %0# R-> at cycle %0t\n",0,
                     32,((vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right
                          [3U][1U] << 0x1fU) | (vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right
                                                [3U][0U] 
                                                >> 1U)),
                     64,VL_TIME_UNITED_Q(1),-12);
    }
    if (VL_UNLIKELY(vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_right
                    [3U])) {
        VL_WRITEF_NX("Waveguide outputs packet ID %0# R-> at cycle %0t\n",0,
                     32,((vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right
                          [3U][1U] << 0x1fU) | (vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right
                                                [3U][0U] 
                                                >> 1U)),
                     64,VL_TIME_UNITED_Q(1),-12);
    }
    if (VL_UNLIKELY(vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_right
                    [3U])) {
        VL_WRITEF_NX("Waveguide outputs packet ID %0# R-> at cycle %0t\n",0,
                     32,((vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right
                          [3U][1U] << 0x1fU) | (vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right
                                                [3U][0U] 
                                                >> 1U)),
                     64,VL_TIME_UNITED_Q(1),-12);
    }
    if (VL_UNLIKELY(vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_right
                    [3U])) {
        VL_WRITEF_NX("Waveguide outputs packet ID %0# R-> at cycle %0t\n",0,
                     32,((vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right
                          [3U][1U] << 0x1fU) | (vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right
                                                [3U][0U] 
                                                >> 1U)),
                     64,VL_TIME_UNITED_Q(1),-12);
    }
    if (VL_UNLIKELY(vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_right
                    [3U])) {
        VL_WRITEF_NX("Waveguide outputs packet ID %0# R-> at cycle %0t\n",0,
                     32,((vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right
                          [3U][1U] << 0x1fU) | (vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right
                                                [3U][0U] 
                                                >> 1U)),
                     64,VL_TIME_UNITED_Q(1),-12);
    }
    if (VL_UNLIKELY(vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_right
                    [3U])) {
        VL_WRITEF_NX("Waveguide outputs packet ID %0# R-> at cycle %0t\n",0,
                     32,((vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right
                          [3U][1U] << 0x1fU) | (vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right
                                                [3U][0U] 
                                                >> 1U)),
                     64,VL_TIME_UNITED_Q(1),-12);
    }
    VL_WRITEF_NX("Fixed Priority Arbiter State:\n  request           = %b\n  done              = %b\n  grant             = %b\n  waiting_for_done  = %b\n",0,
                 4,vlSelfRef.mesh_onoc__DOT__router_request,
                 4,(((((IData)((0U != (IData)(vlSelfRef.mesh_onoc__DOT__packet_done_gen__BRA__3__KET____DOT__reduced))) 
                       << 1U) | (0U != (IData)(vlSelfRef.mesh_onoc__DOT__packet_done_gen__BRA__2__KET____DOT__reduced))) 
                     << 2U) | (((IData)((0U != (IData)(vlSelfRef.mesh_onoc__DOT__packet_done_gen__BRA__1__KET____DOT__reduced))) 
                                << 1U) | (0U != (IData)(vlSelfRef.mesh_onoc__DOT__packet_done_gen__BRA__0__KET____DOT__reduced)))),
                 4,(IData)(vlSelfRef.mesh_onoc__DOT__arb__DOT__current_grant),
                 1,vlSelfRef.mesh_onoc__DOT__arb__DOT__waiting_for_done);
    if (VL_UNLIKELY(((IData)(vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_valid) 
                     & ((IData)(vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__out_dir) 
                        & (IData)(vlSelfRef.mesh_onoc__DOT__arb__DOT__current_grant))))) {
        VL_WRITEF_NX("IP block 0 received packet from IP %0# with ID %0#\n",0,
                     32,VL_SHIFTR_III(32,32,32, ((vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_data[2U] 
                                                  << 0x1fU) 
                                                 | (vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_data[1U] 
                                                    >> 1U)), 0x10U),
                     32,(0xffffU & (vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_data[1U] 
                                    >> 1U)));
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_valid) 
                     & ((IData)(vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__out_dir) 
                        & ((IData)(vlSelfRef.mesh_onoc__DOT__arb__DOT__current_grant) 
                           >> 1U))))) {
        VL_WRITEF_NX("IP block 1 received packet from IP %0# with ID %0#\n",0,
                     32,VL_SHIFTR_III(32,32,32, ((vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_data[2U] 
                                                  << 0x1fU) 
                                                 | (vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_data[1U] 
                                                    >> 1U)), 0x10U),
                     32,(0xffffU & (vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_data[1U] 
                                    >> 1U)));
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_valid) 
                     & ((IData)(vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__out_dir) 
                        & ((IData)(vlSelfRef.mesh_onoc__DOT__arb__DOT__current_grant) 
                           >> 2U))))) {
        VL_WRITEF_NX("IP block 2 received packet from IP %0# with ID %0#\n",0,
                     32,VL_SHIFTR_III(32,32,32, ((vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_data[2U] 
                                                  << 0x1fU) 
                                                 | (vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_data[1U] 
                                                    >> 1U)), 0x10U),
                     32,(0xffffU & (vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_data[1U] 
                                    >> 1U)));
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_valid) 
                     & ((IData)(vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__out_dir) 
                        & ((IData)(vlSelfRef.mesh_onoc__DOT__arb__DOT__current_grant) 
                           >> 3U))))) {
        VL_WRITEF_NX("IP block 3 received packet from IP %0# with ID %0#\n",0,
                     32,VL_SHIFTR_III(32,32,32, ((vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_data[2U] 
                                                  << 0x1fU) 
                                                 | (vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_data[1U] 
                                                    >> 1U)), 0x10U),
                     32,(0xffffU & (vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_data[1U] 
                                    >> 1U)));
    }
}

VL_INLINE_OPT void Vmesh_onoc___024root___nba_sequent__TOP__1(Vmesh_onoc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmesh_onoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmesh_onoc___024root___nba_sequent__TOP__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*15:0*/ __Vfunc_mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__get_random_destination__0__Vfuncout;
    __Vfunc_mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__get_random_destination__0__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__get_random_destination__0__self_id;
    __Vfunc_mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__get_random_destination__0__self_id = 0;
    SData/*15:0*/ __Vfunc_mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__get_random_destination__0__random_id;
    __Vfunc_mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__get_random_destination__0__random_id = 0;
    CData/*7:0*/ __Vfunc_mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__get_random_destination__0__rand_y;
    __Vfunc_mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__get_random_destination__0__rand_y = 0;
    SData/*15:0*/ __Vfunc_mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__encode_xy__1__Vfuncout;
    __Vfunc_mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__encode_xy__1__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__encode_xy__1__y;
    __Vfunc_mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__encode_xy__1__y = 0;
    SData/*15:0*/ __Vfunc_mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__get_random_destination__3__Vfuncout;
    __Vfunc_mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__get_random_destination__3__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__get_random_destination__3__self_id;
    __Vfunc_mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__get_random_destination__3__self_id = 0;
    SData/*15:0*/ __Vfunc_mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__get_random_destination__3__random_id;
    __Vfunc_mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__get_random_destination__3__random_id = 0;
    CData/*7:0*/ __Vfunc_mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__get_random_destination__3__rand_y;
    __Vfunc_mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__get_random_destination__3__rand_y = 0;
    SData/*15:0*/ __Vfunc_mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__encode_xy__4__Vfuncout;
    __Vfunc_mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__encode_xy__4__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__encode_xy__4__y;
    __Vfunc_mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__encode_xy__4__y = 0;
    SData/*15:0*/ __Vfunc_mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__get_random_destination__6__Vfuncout;
    __Vfunc_mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__get_random_destination__6__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__get_random_destination__6__self_id;
    __Vfunc_mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__get_random_destination__6__self_id = 0;
    SData/*15:0*/ __Vfunc_mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__get_random_destination__6__random_id;
    __Vfunc_mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__get_random_destination__6__random_id = 0;
    CData/*7:0*/ __Vfunc_mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__get_random_destination__6__rand_y;
    __Vfunc_mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__get_random_destination__6__rand_y = 0;
    SData/*15:0*/ __Vfunc_mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__encode_xy__7__Vfuncout;
    __Vfunc_mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__encode_xy__7__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__encode_xy__7__y;
    __Vfunc_mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__encode_xy__7__y = 0;
    SData/*15:0*/ __Vfunc_mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__get_random_destination__9__Vfuncout;
    __Vfunc_mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__get_random_destination__9__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__get_random_destination__9__self_id;
    __Vfunc_mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__get_random_destination__9__self_id = 0;
    SData/*15:0*/ __Vfunc_mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__get_random_destination__9__random_id;
    __Vfunc_mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__get_random_destination__9__random_id = 0;
    CData/*7:0*/ __Vfunc_mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__get_random_destination__9__rand_y;
    __Vfunc_mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__get_random_destination__9__rand_y = 0;
    SData/*15:0*/ __Vfunc_mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__encode_xy__10__Vfuncout;
    __Vfunc_mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__encode_xy__10__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__encode_xy__10__y;
    __Vfunc_mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__encode_xy__10__y = 0;
    CData/*3:0*/ __Vdly__mesh_onoc__DOT__arb__DOT__current_grant;
    __Vdly__mesh_onoc__DOT__arb__DOT__current_grant = 0;
    CData/*0:0*/ __Vdly__mesh_onoc__DOT__arb__DOT__waiting_for_done;
    __Vdly__mesh_onoc__DOT__arb__DOT__waiting_for_done = 0;
    CData/*0:0*/ __Vdly__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__pkt_sent_last_cycle;
    __Vdly__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__pkt_sent_last_cycle = 0;
    IData/*31:0*/ __Vdly__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__cycle_counter;
    __Vdly__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__cycle_counter = 0;
    SData/*15:0*/ __Vdly__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__destination;
    __Vdly__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__destination = 0;
    CData/*0:0*/ __Vdly__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__pkt_sent_last_cycle;
    __Vdly__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__pkt_sent_last_cycle = 0;
    IData/*31:0*/ __Vdly__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__cycle_counter;
    __Vdly__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__cycle_counter = 0;
    SData/*15:0*/ __Vdly__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__destination;
    __Vdly__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__destination = 0;
    CData/*0:0*/ __Vdly__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__pkt_sent_last_cycle;
    __Vdly__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__pkt_sent_last_cycle = 0;
    IData/*31:0*/ __Vdly__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__cycle_counter;
    __Vdly__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__cycle_counter = 0;
    SData/*15:0*/ __Vdly__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__destination;
    __Vdly__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__destination = 0;
    CData/*0:0*/ __Vdly__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__pkt_sent_last_cycle;
    __Vdly__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__pkt_sent_last_cycle = 0;
    IData/*31:0*/ __Vdly__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__cycle_counter;
    __Vdly__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__cycle_counter = 0;
    SData/*15:0*/ __Vdly__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__destination;
    __Vdly__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__destination = 0;
    IData/*31:0*/ __Vdly__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__current_cycle;
    __Vdly__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__current_cycle = 0;
    IData/*31:0*/ __Vdly__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__current_cycle;
    __Vdly__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__current_cycle = 0;
    IData/*31:0*/ __Vdly__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__current_cycle;
    __Vdly__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__current_cycle = 0;
    IData/*31:0*/ __Vdly__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__current_cycle;
    __Vdly__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__current_cycle = 0;
    IData/*31:0*/ __Vdly__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__current_cycle;
    __Vdly__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__current_cycle = 0;
    IData/*31:0*/ __Vdly__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__current_cycle;
    __Vdly__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__current_cycle = 0;
    IData/*31:0*/ __Vdly__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__current_cycle;
    __Vdly__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__current_cycle = 0;
    IData/*31:0*/ __Vdly__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__current_cycle;
    __Vdly__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__current_cycle = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v0;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v0 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v2;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v2);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v2;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v2 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v3;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v3);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v0;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v0 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v2;
    __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v2;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v3;
    __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v3 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v0;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v0 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v2;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v2);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v2;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v2 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v3;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v3);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v0;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v0 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v2;
    __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v2;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v3;
    __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v3 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v0;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v0 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v2;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v2);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v2;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v2 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v3;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v3);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v0;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v0 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v2;
    __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v2;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v3;
    __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v3 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v0;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v0 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v2;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v2);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v2;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v2 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v3;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v3);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v0;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v0 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v2;
    __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v2;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v3;
    __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v3 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v0;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v0 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v2;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v2);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v2;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v2 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v3;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v3);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v0;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v0 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v2;
    __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v2;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v3;
    __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v3 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v0;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v0 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v2;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v2);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v2;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v2 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v3;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v3);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v0;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v0 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v2;
    __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v2;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v3;
    __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v3 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v0;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v0 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v2;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v2);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v2;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v2 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v3;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v3);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v0;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v0 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v2;
    __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v2;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v3;
    __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v3 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v0;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v0 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v2;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v2);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v2;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v2 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v3;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v3);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v0;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v0 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v2;
    __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v2;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v3;
    __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v3 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v0;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v0 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v2;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v2);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v2;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v2 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v3;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v3);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v0;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v0 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v2;
    __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v2;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v3;
    __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v3 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v0;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v0 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v2;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v2);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v2;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v2 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v3;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v3);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v0;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v0 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v2;
    __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v2;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v3;
    __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v3 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v0;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v0 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v2;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v2);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v2;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v2 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v3;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v3);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v0;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v0 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v2;
    __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v2;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v3;
    __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v3 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v0;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v0 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v2;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v2);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v2;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v2 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v3;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v3);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v0;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v0 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v2;
    __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v2;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v3;
    __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v3 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v0;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v0 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v2;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v2);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v2;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v2 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v3;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v3);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v0;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v0 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v2;
    __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v2;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v3;
    __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v3 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v0;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v0 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v2;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v2);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v2;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v2 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v3;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v3);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v0;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v0 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v2;
    __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v2;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v3;
    __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v3 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v0;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v0 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v2;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v2);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v2;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v2 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v3;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v3);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v0;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v0 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v2;
    __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v2;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v3;
    __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v3 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v0;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v0 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v2;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v2);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v2;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v2 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v3;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v3);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v0;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v0 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v2;
    __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v2;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v3;
    __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v3 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v0;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v0 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v2;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v2);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v2;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v2 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v3;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v3);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v0;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v0 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v2;
    __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v2;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v3;
    __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v3 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v0;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v0 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v2;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v2);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v2;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v2 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v3;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v3);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v0;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v0 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v2;
    __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v2;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v3;
    __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v3 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v0;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v0 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v2;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v2);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v2;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v2 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v3;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v3);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v0;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v0 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v2;
    __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v2;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v3;
    __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v3 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v0;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v0 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v2;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v2);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v2;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v2 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v3;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v3);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v0;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v0 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v2;
    __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v2;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v3;
    __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v3 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v0;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v0 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v2;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v2);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v2;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v2 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v3;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v3);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v0;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v0 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v2;
    __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v2;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v3;
    __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v3 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v0;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v0 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v2;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v2);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v2;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v2 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v3;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v3);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v0;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v0 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v2;
    __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v2;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v3;
    __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v3 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v0;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v0 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v2;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v2);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v2;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v2 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v3;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v3);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v0;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v0 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v2;
    __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v2;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v3;
    __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v3 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v0;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v0 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v2;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v2);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v2;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v2 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v3;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v3);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v0;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v0 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v2;
    __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v2;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v3;
    __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v3 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v0;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v0 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v2;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v2);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v2;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v2 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v3;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v3);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v0;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v0 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v2;
    __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v2;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v3;
    __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v3 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v0;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v0 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v2;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v2);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v2;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v2 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v3;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v3);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v0;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v0 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v2;
    __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v2;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v3;
    __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v3 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v0;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v0 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v2;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v2);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v2;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v2 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v3;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v3);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v0;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v0 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v2;
    __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v2;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v3;
    __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v3 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v0;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v0 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v2;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v2);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v2;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v2 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v3;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v3);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v0;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v0 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v2;
    __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v2;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v3;
    __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v3 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v0;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v0 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v2;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v2);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v2;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v2 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v3;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v3);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v0;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v0 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v2;
    __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v2;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v3;
    __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v3 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v0;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v0 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v2;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v2);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v2;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v2 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v3;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v3);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v0;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v0 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v2;
    __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v2;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v3;
    __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v3 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v0;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v0 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v2;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v2);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v2;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v2 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v3;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v3);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v0;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v0 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v2;
    __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v2;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v3;
    __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v3 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v0;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v0 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v2;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v2);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v2;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v2 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v3;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v3);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v0;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v0 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v2;
    __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v2;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v3;
    __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v3 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left__v0;
    __VdlySet__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left__v0 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left__v4;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left__v4);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left__v4;
    __VdlySet__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left__v4 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_left__v4;
    __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_left__v4 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right__v4;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right__v4);
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_right__v4;
    __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_right__v4 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left__v5;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left__v5);
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_left__v5;
    __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_left__v5 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right__v5;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right__v5);
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_right__v5;
    __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_right__v5 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left__v6;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left__v6);
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_left__v6;
    __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_left__v6 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right__v6;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right__v6);
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_right__v6;
    __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_right__v6 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left__v7;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left__v7);
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_left__v7;
    __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_left__v7 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right__v7;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right__v7);
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_right__v7;
    __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_right__v7 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left__v0;
    __VdlySet__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left__v0 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left__v4;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left__v4);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left__v4;
    __VdlySet__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left__v4 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_left__v4;
    __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_left__v4 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right__v4;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right__v4);
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_right__v4;
    __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_right__v4 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left__v5;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left__v5);
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_left__v5;
    __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_left__v5 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right__v5;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right__v5);
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_right__v5;
    __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_right__v5 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left__v6;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left__v6);
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_left__v6;
    __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_left__v6 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right__v6;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right__v6);
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_right__v6;
    __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_right__v6 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left__v7;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left__v7);
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_left__v7;
    __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_left__v7 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right__v7;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right__v7);
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_right__v7;
    __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_right__v7 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left__v0;
    __VdlySet__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left__v0 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left__v4;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left__v4);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left__v4;
    __VdlySet__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left__v4 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_left__v4;
    __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_left__v4 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right__v4;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right__v4);
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_right__v4;
    __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_right__v4 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left__v5;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left__v5);
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_left__v5;
    __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_left__v5 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right__v5;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right__v5);
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_right__v5;
    __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_right__v5 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left__v6;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left__v6);
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_left__v6;
    __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_left__v6 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right__v6;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right__v6);
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_right__v6;
    __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_right__v6 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left__v7;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left__v7);
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_left__v7;
    __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_left__v7 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right__v7;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right__v7);
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_right__v7;
    __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_right__v7 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left__v0;
    __VdlySet__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left__v0 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left__v4;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left__v4);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left__v4;
    __VdlySet__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left__v4 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_left__v4;
    __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_left__v4 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right__v4;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right__v4);
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_right__v4;
    __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_right__v4 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left__v5;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left__v5);
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_left__v5;
    __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_left__v5 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right__v5;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right__v5);
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_right__v5;
    __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_right__v5 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left__v6;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left__v6);
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_left__v6;
    __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_left__v6 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right__v6;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right__v6);
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_right__v6;
    __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_right__v6 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left__v7;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left__v7);
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_left__v7;
    __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_left__v7 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right__v7;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right__v7);
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_right__v7;
    __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_right__v7 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left__v0;
    __VdlySet__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left__v0 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left__v4;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left__v4);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left__v4;
    __VdlySet__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left__v4 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_left__v4;
    __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_left__v4 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right__v4;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right__v4);
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_right__v4;
    __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_right__v4 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left__v5;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left__v5);
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_left__v5;
    __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_left__v5 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right__v5;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right__v5);
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_right__v5;
    __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_right__v5 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left__v6;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left__v6);
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_left__v6;
    __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_left__v6 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right__v6;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right__v6);
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_right__v6;
    __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_right__v6 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left__v7;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left__v7);
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_left__v7;
    __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_left__v7 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right__v7;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right__v7);
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_right__v7;
    __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_right__v7 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left__v0;
    __VdlySet__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left__v0 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left__v4;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left__v4);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left__v4;
    __VdlySet__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left__v4 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_left__v4;
    __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_left__v4 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right__v4;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right__v4);
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_right__v4;
    __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_right__v4 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left__v5;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left__v5);
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_left__v5;
    __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_left__v5 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right__v5;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right__v5);
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_right__v5;
    __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_right__v5 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left__v6;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left__v6);
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_left__v6;
    __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_left__v6 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right__v6;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right__v6);
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_right__v6;
    __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_right__v6 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left__v7;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left__v7);
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_left__v7;
    __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_left__v7 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right__v7;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right__v7);
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_right__v7;
    __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_right__v7 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left__v0;
    __VdlySet__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left__v0 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left__v4;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left__v4);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left__v4;
    __VdlySet__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left__v4 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_left__v4;
    __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_left__v4 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right__v4;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right__v4);
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_right__v4;
    __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_right__v4 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left__v5;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left__v5);
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_left__v5;
    __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_left__v5 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right__v5;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right__v5);
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_right__v5;
    __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_right__v5 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left__v6;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left__v6);
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_left__v6;
    __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_left__v6 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right__v6;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right__v6);
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_right__v6;
    __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_right__v6 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left__v7;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left__v7);
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_left__v7;
    __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_left__v7 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right__v7;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right__v7);
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_right__v7;
    __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_right__v7 = 0;
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left__v0;
    __VdlySet__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left__v0 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left__v4;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left__v4);
    CData/*0:0*/ __VdlySet__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left__v4;
    __VdlySet__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left__v4 = 0;
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_left__v4;
    __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_left__v4 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right__v4;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right__v4);
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_right__v4;
    __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_right__v4 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left__v5;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left__v5);
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_left__v5;
    __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_left__v5 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right__v5;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right__v5);
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_right__v5;
    __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_right__v5 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left__v6;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left__v6);
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_left__v6;
    __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_left__v6 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right__v6;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right__v6);
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_right__v6;
    __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_right__v6 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left__v7;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left__v7);
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_left__v7;
    __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_left__v7 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right__v7;
    VL_ZERO_W(97, __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right__v7);
    CData/*0:0*/ __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_right__v7;
    __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_right__v7 = 0;
    // Body
    __Vdly__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__current_cycle 
        = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__current_cycle;
    __Vdly__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__current_cycle 
        = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__current_cycle;
    __Vdly__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__current_cycle 
        = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__current_cycle;
    __Vdly__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__current_cycle 
        = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__current_cycle;
    __Vdly__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__current_cycle 
        = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__current_cycle;
    __Vdly__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__current_cycle 
        = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__current_cycle;
    __Vdly__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__current_cycle 
        = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__current_cycle;
    __Vdly__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__current_cycle 
        = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__current_cycle;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v2 = 0U;
    VL_WRITEF_NX("Router           0,    0: Pending %0b Request %0b Granted %0b\nRouter           1,    1: Pending %0b Request %0b Granted %0b\nRouter           2,    2: Pending %0b Request %0b Granted %0b\nRouter           3,    3: Pending %0b Request %0b Granted %0b\n",0,
                 1,vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__pending_send_packet,
                 1,(IData)(vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_valid),
                 1,(1U & (IData)(vlSelfRef.mesh_onoc__DOT__arb__DOT__current_grant)),
                 1,(IData)(vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__pending_send_packet),
                 1,vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_valid,
                 1,(1U & ((IData)(vlSelfRef.mesh_onoc__DOT__arb__DOT__current_grant) 
                          >> 1U)),1,(IData)(vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__pending_send_packet),
                 1,vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_valid,
                 1,(1U & ((IData)(vlSelfRef.mesh_onoc__DOT__arb__DOT__current_grant) 
                          >> 2U)),1,(IData)(vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__pending_send_packet),
                 1,vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_valid,
                 1,(1U & ((IData)(vlSelfRef.mesh_onoc__DOT__arb__DOT__current_grant) 
                          >> 3U)));
    __Vdly__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__pkt_sent_last_cycle 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__pkt_sent_last_cycle;
    __Vdly__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__cycle_counter 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__cycle_counter;
    __Vdly__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__destination 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__destination;
    __Vdly__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__pkt_sent_last_cycle 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__pkt_sent_last_cycle;
    __Vdly__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__cycle_counter 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__cycle_counter;
    __Vdly__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__destination 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__destination;
    __Vdly__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__pkt_sent_last_cycle 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__pkt_sent_last_cycle;
    __Vdly__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__cycle_counter 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__cycle_counter;
    __Vdly__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__destination 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__destination;
    __Vdly__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__pkt_sent_last_cycle 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__pkt_sent_last_cycle;
    __Vdly__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__cycle_counter 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__cycle_counter;
    __Vdly__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__destination 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__destination;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v2 = 0U;
    __Vdly__mesh_onoc__DOT__arb__DOT__waiting_for_done 
        = vlSelfRef.mesh_onoc__DOT__arb__DOT__waiting_for_done;
    __Vdly__mesh_onoc__DOT__arb__DOT__current_grant 
        = vlSelfRef.mesh_onoc__DOT__arb__DOT__current_grant;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left__v4 = 0U;
    __VdlySet__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left__v4 = 0U;
    __VdlySet__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left__v4 = 0U;
    __VdlySet__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left__v4 = 0U;
    __VdlySet__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left__v4 = 0U;
    __VdlySet__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left__v4 = 0U;
    __VdlySet__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left__v4 = 0U;
    __VdlySet__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left__v4 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v2 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v0 = 0U;
    __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v2 = 0U;
    if (vlSelfRef.rst) {
        __Vdly__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__current_cycle = 0U;
        __Vdly__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__current_cycle = 0U;
        __Vdly__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__current_cycle = 0U;
        __Vdly__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__current_cycle = 0U;
        __Vdly__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__current_cycle = 0U;
        __Vdly__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__current_cycle = 0U;
        __Vdly__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__current_cycle = 0U;
        __Vdly__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__current_cycle = 0U;
        __Vdly__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__current_cycle = 0U;
        __Vdly__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__current_cycle = 0U;
        __Vdly__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__current_cycle = 0U;
        __Vdly__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__current_cycle = 0U;
        __Vdly__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__current_cycle = 0U;
        __Vdly__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__current_cycle = 0U;
        __Vdly__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__current_cycle = 0U;
        __Vdly__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__current_cycle = 0U;
        __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v0 = 1U;
        __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v0 = 1U;
        __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v0 = 1U;
        __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v0 = 1U;
        __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v0 = 1U;
        __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v0 = 1U;
        __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v0 = 1U;
        __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v0 = 1U;
        __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v0 = 1U;
        __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v0 = 1U;
        __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v0 = 1U;
        __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v0 = 1U;
        __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v0 = 1U;
        __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v0 = 1U;
        __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v0 = 1U;
        __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v0 = 1U;
        __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v0 = 1U;
        __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v0 = 1U;
        __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v0 = 1U;
        __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v0 = 1U;
        __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v0 = 1U;
        __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v0 = 1U;
        __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v0 = 1U;
        __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v0 = 1U;
        __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v0 = 1U;
        __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v0 = 1U;
        __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v0 = 1U;
        __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v0 = 1U;
        __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v0 = 1U;
        __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v0 = 1U;
        __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v0 = 1U;
        __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v0 = 1U;
        __Vdly__mesh_onoc__DOT__arb__DOT__current_grant = 0U;
        __Vdly__mesh_onoc__DOT__arb__DOT__waiting_for_done = 0U;
        __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v0 = 1U;
        __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v0 = 1U;
        __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v0 = 1U;
        __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v0 = 1U;
        __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v0 = 1U;
        __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v0 = 1U;
        __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v0 = 1U;
        __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v0 = 1U;
        __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v0 = 1U;
        __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v0 = 1U;
        __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v0 = 1U;
        __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v0 = 1U;
        __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v0 = 1U;
        __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v0 = 1U;
        __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v0 = 1U;
        __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v0 = 1U;
        __VdlySet__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left__v0 = 1U;
    } else {
        __Vdly__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__current_cycle 
            = ((IData)(1U) + vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__current_cycle);
        __Vdly__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__current_cycle 
            = ((IData)(1U) + vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__current_cycle);
        __Vdly__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__current_cycle 
            = ((IData)(1U) + vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__current_cycle);
        __Vdly__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__current_cycle 
            = ((IData)(1U) + vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__current_cycle);
        __Vdly__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__current_cycle 
            = ((IData)(1U) + vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__current_cycle);
        __Vdly__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__current_cycle 
            = ((IData)(1U) + vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__current_cycle);
        __Vdly__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__current_cycle 
            = ((IData)(1U) + vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__current_cycle);
        __Vdly__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__current_cycle 
            = ((IData)(1U) + vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__current_cycle);
        __Vdly__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__current_cycle 
            = ((IData)(1U) + vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__current_cycle);
        __Vdly__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__current_cycle 
            = ((IData)(1U) + vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__current_cycle);
        __Vdly__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__current_cycle 
            = ((IData)(1U) + vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__current_cycle);
        __Vdly__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__current_cycle 
            = ((IData)(1U) + vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__current_cycle);
        __Vdly__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__current_cycle 
            = ((IData)(1U) + vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__current_cycle);
        __Vdly__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__current_cycle 
            = ((IData)(1U) + vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__current_cycle);
        __Vdly__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__current_cycle 
            = ((IData)(1U) + vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__current_cycle);
        __Vdly__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__current_cycle 
            = ((IData)(1U) + vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__current_cycle);
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v2[0U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [0U][0U][0U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v2[1U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [0U][0U][1U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v2[2U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [0U][0U][2U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v2[3U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [0U][0U][3U];
        __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v3[0U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer
            [0U][0U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v3[1U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer
            [0U][1U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v3[2U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer
            [0U][2U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v3[3U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer
            [0U][3U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v2[0U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [0U][1U][0U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v2[1U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [0U][1U][1U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v2[2U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [0U][1U][2U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v2[3U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [0U][1U][3U];
        __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v3[0U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer
            [0U][0U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v3[1U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer
            [0U][1U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v3[2U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer
            [0U][2U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v3[3U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer
            [0U][3U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v2[0U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [0U][2U][0U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v2[1U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [0U][2U][1U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v2[2U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [0U][2U][2U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v2[3U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [0U][2U][3U];
        __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v3[0U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer
            [0U][0U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v3[1U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer
            [0U][1U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v3[2U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer
            [0U][2U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v3[3U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer
            [0U][3U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v2[0U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [0U][3U][0U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v2[1U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [0U][3U][1U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v2[2U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [0U][3U][2U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v2[3U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [0U][3U][3U];
        __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v3[0U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer
            [0U][0U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v3[1U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer
            [0U][1U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v3[2U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer
            [0U][2U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v3[3U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer
            [0U][3U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v2[0U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [1U][0U][0U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v2[1U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [1U][0U][1U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v2[2U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [1U][0U][2U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v2[3U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [1U][0U][3U];
        __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v3[0U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer
            [0U][0U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v3[1U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer
            [0U][1U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v3[2U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer
            [0U][2U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v3[3U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer
            [0U][3U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v2[0U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [1U][1U][0U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v2[1U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [1U][1U][1U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v2[2U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [1U][1U][2U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v2[3U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [1U][1U][3U];
        __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v3[0U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer
            [0U][0U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v3[1U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer
            [0U][1U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v3[2U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer
            [0U][2U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v3[3U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer
            [0U][3U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v2[0U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [1U][2U][0U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v2[1U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [1U][2U][1U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v2[2U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [1U][2U][2U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v2[3U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [1U][2U][3U];
        __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v3[0U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer
            [0U][0U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v3[1U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer
            [0U][1U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v3[2U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer
            [0U][2U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v3[3U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer
            [0U][3U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v2[0U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [1U][3U][0U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v2[1U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [1U][3U][1U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v2[2U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [1U][3U][2U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v2[3U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [1U][3U][3U];
        __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v3[0U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer
            [0U][0U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v3[1U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer
            [0U][1U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v3[2U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer
            [0U][2U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v3[3U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer
            [0U][3U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v2[0U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [2U][0U][0U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v2[1U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [2U][0U][1U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v2[2U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [2U][0U][2U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v2[3U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [2U][0U][3U];
        __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v3[0U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer
            [0U][0U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v3[1U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer
            [0U][1U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v3[2U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer
            [0U][2U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v3[3U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer
            [0U][3U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v2[0U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [2U][1U][0U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v2[1U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [2U][1U][1U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v2[2U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [2U][1U][2U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v2[3U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [2U][1U][3U];
        __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v3[0U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer
            [0U][0U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v3[1U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer
            [0U][1U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v3[2U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer
            [0U][2U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v3[3U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer
            [0U][3U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v2[0U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [2U][2U][0U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v2[1U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [2U][2U][1U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v2[2U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [2U][2U][2U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v2[3U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [2U][2U][3U];
        __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v3[0U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer
            [0U][0U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v3[1U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer
            [0U][1U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v3[2U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer
            [0U][2U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v3[3U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer
            [0U][3U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v2[0U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [2U][3U][0U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v2[1U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [2U][3U][1U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v2[2U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [2U][3U][2U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v2[3U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [2U][3U][3U];
        __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v3[0U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer
            [0U][0U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v3[1U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer
            [0U][1U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v3[2U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer
            [0U][2U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v3[3U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer
            [0U][3U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v2[0U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [3U][0U][0U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v2[1U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [3U][0U][1U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v2[2U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [3U][0U][2U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v2[3U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [3U][0U][3U];
        __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v3[0U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer
            [0U][0U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v3[1U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer
            [0U][1U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v3[2U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer
            [0U][2U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v3[3U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer
            [0U][3U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v2[0U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [3U][1U][0U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v2[1U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [3U][1U][1U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v2[2U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [3U][1U][2U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v2[3U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [3U][1U][3U];
        __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v3[0U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer
            [0U][0U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v3[1U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer
            [0U][1U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v3[2U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer
            [0U][2U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v3[3U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer
            [0U][3U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v2[0U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [3U][2U][0U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v2[1U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [3U][2U][1U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v2[2U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [3U][2U][2U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v2[3U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [3U][2U][3U];
        __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v3[0U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer
            [0U][0U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v3[1U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer
            [0U][1U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v3[2U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer
            [0U][2U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v3[3U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer
            [0U][3U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v2[0U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [3U][3U][0U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v2[1U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [3U][3U][1U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v2[2U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [3U][3U][2U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v2[3U] 
            = vlSelfRef.mesh_onoc__DOT__router_to_modulator
            [3U][3U][3U];
        __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v3[0U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer
            [0U][0U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v3[1U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer
            [0U][1U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v3[2U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer
            [0U][2U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v3[3U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer
            [0U][3U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v2 
            = vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator
            [0U][0U];
        __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v3 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf
            [0U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v2 
            = vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator
            [0U][1U];
        __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v3 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf
            [0U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v2 
            = vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator
            [0U][2U];
        __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v3 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf
            [0U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v2 
            = vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator
            [0U][3U];
        __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v3 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf
            [0U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v2 
            = vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator
            [1U][0U];
        __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v3 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf
            [0U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v2 
            = vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator
            [1U][1U];
        __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v3 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf
            [0U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v2 
            = vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator
            [1U][2U];
        __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v3 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf
            [0U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v2 
            = vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator
            [1U][3U];
        __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v3 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf
            [0U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v2 
            = vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator
            [2U][0U];
        __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v3 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf
            [0U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v2 
            = vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator
            [2U][1U];
        __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v3 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf
            [0U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v2 
            = vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator
            [2U][2U];
        __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v3 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf
            [0U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v2 
            = vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator
            [2U][3U];
        __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v3 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf
            [0U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v2 
            = vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator
            [3U][0U];
        __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v3 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf
            [0U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v2 
            = vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator
            [3U][1U];
        __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v3 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf
            [0U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v2 
            = vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator
            [3U][2U];
        __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v3 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf
            [0U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v2 
            = vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator
            [3U][3U];
        __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v3 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf
            [0U];
        if (vlSelfRef.mesh_onoc__DOT__arb__DOT__waiting_for_done) {
            if ((0U != (((((IData)((0U != (IData)(vlSelfRef.mesh_onoc__DOT__packet_done_gen__BRA__3__KET____DOT__reduced))) 
                           << 1U) | (0U != (IData)(vlSelfRef.mesh_onoc__DOT__packet_done_gen__BRA__2__KET____DOT__reduced))) 
                         << 2U) | (((IData)((0U != (IData)(vlSelfRef.mesh_onoc__DOT__packet_done_gen__BRA__1__KET____DOT__reduced))) 
                                    << 1U) | (0U != (IData)(vlSelfRef.mesh_onoc__DOT__packet_done_gen__BRA__0__KET____DOT__reduced)))))) {
                __Vdly__mesh_onoc__DOT__arb__DOT__waiting_for_done = 0U;
            }
        } else if ((0U != ((IData)(vlSelfRef.mesh_onoc__DOT__arb__DOT__current_grant) 
                           & (IData)(vlSelfRef.mesh_onoc__DOT__router_request)))) {
            __Vdly__mesh_onoc__DOT__arb__DOT__current_grant = 0U;
            __Vdly__mesh_onoc__DOT__arb__DOT__waiting_for_done = 1U;
        } else {
            __Vdly__mesh_onoc__DOT__arb__DOT__current_grant = 0U;
            vlSelfRef.mesh_onoc__DOT__arb__DOT__unnamedblk1__DOT__i = 0U;
            {
                while (VL_GTS_III(32, 4U, vlSelfRef.mesh_onoc__DOT__arb__DOT__unnamedblk1__DOT__i)) {
                    if ((1U & ((IData)(vlSelfRef.mesh_onoc__DOT__router_request) 
                               >> (3U & vlSelfRef.mesh_onoc__DOT__arb__DOT__unnamedblk1__DOT__i)))) {
                        __Vdly__mesh_onoc__DOT__arb__DOT__current_grant 
                            = ((IData)(__Vdly__mesh_onoc__DOT__arb__DOT__current_grant) 
                               | (0xfU & ((IData)(1U) 
                                          << (3U & vlSelfRef.mesh_onoc__DOT__arb__DOT__unnamedblk1__DOT__i))));
                        goto __Vlabel1;
                    }
                    vlSelfRef.mesh_onoc__DOT__arb__DOT__unnamedblk1__DOT__i 
                        = ((IData)(1U) + vlSelfRef.mesh_onoc__DOT__arb__DOT__unnamedblk1__DOT__i);
                }
                __Vlabel1: ;
            }
        }
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v2[0U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [0U][0U][0U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v2[1U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [0U][0U][1U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v2[2U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [0U][0U][2U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v2[3U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [0U][0U][3U];
        __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v3[0U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer
            [0U][0U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v3[1U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer
            [0U][1U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v3[2U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer
            [0U][2U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v3[3U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer
            [0U][3U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v2[0U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [0U][1U][0U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v2[1U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [0U][1U][1U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v2[2U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [0U][1U][2U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v2[3U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [0U][1U][3U];
        __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v3[0U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer
            [0U][0U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v3[1U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer
            [0U][1U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v3[2U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer
            [0U][2U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v3[3U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer
            [0U][3U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v2[0U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [0U][2U][0U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v2[1U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [0U][2U][1U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v2[2U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [0U][2U][2U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v2[3U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [0U][2U][3U];
        __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v3[0U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer
            [0U][0U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v3[1U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer
            [0U][1U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v3[2U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer
            [0U][2U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v3[3U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer
            [0U][3U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v2[0U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [0U][3U][0U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v2[1U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [0U][3U][1U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v2[2U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [0U][3U][2U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v2[3U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [0U][3U][3U];
        __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v3[0U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer
            [0U][0U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v3[1U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer
            [0U][1U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v3[2U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer
            [0U][2U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v3[3U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer
            [0U][3U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v2[0U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [1U][0U][0U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v2[1U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [1U][0U][1U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v2[2U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [1U][0U][2U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v2[3U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [1U][0U][3U];
        __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v3[0U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer
            [0U][0U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v3[1U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer
            [0U][1U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v3[2U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer
            [0U][2U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v3[3U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer
            [0U][3U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v2[0U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [1U][1U][0U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v2[1U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [1U][1U][1U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v2[2U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [1U][1U][2U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v2[3U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [1U][1U][3U];
        __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v3[0U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer
            [0U][0U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v3[1U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer
            [0U][1U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v3[2U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer
            [0U][2U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v3[3U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer
            [0U][3U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v2[0U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [1U][2U][0U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v2[1U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [1U][2U][1U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v2[2U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [1U][2U][2U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v2[3U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [1U][2U][3U];
        __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v3[0U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer
            [0U][0U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v3[1U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer
            [0U][1U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v3[2U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer
            [0U][2U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v3[3U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer
            [0U][3U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v2[0U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [1U][3U][0U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v2[1U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [1U][3U][1U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v2[2U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [1U][3U][2U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v2[3U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [1U][3U][3U];
        __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v3[0U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer
            [0U][0U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v3[1U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer
            [0U][1U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v3[2U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer
            [0U][2U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v3[3U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer
            [0U][3U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v2[0U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [2U][0U][0U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v2[1U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [2U][0U][1U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v2[2U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [2U][0U][2U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v2[3U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [2U][0U][3U];
        __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v3[0U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer
            [0U][0U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v3[1U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer
            [0U][1U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v3[2U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer
            [0U][2U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v3[3U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer
            [0U][3U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v2[0U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [2U][1U][0U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v2[1U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [2U][1U][1U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v2[2U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [2U][1U][2U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v2[3U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [2U][1U][3U];
        __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v3[0U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer
            [0U][0U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v3[1U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer
            [0U][1U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v3[2U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer
            [0U][2U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v3[3U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer
            [0U][3U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v2[0U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [2U][2U][0U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v2[1U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [2U][2U][1U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v2[2U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [2U][2U][2U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v2[3U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [2U][2U][3U];
        __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v3[0U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer
            [0U][0U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v3[1U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer
            [0U][1U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v3[2U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer
            [0U][2U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v3[3U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer
            [0U][3U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v2[0U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [2U][3U][0U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v2[1U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [2U][3U][1U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v2[2U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [2U][3U][2U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v2[3U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [2U][3U][3U];
        __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v3[0U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer
            [0U][0U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v3[1U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer
            [0U][1U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v3[2U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer
            [0U][2U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v3[3U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer
            [0U][3U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v2[0U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [3U][0U][0U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v2[1U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [3U][0U][1U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v2[2U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [3U][0U][2U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v2[3U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [3U][0U][3U];
        __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v3[0U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer
            [0U][0U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v3[1U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer
            [0U][1U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v3[2U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer
            [0U][2U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v3[3U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer
            [0U][3U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v2[0U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [3U][1U][0U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v2[1U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [3U][1U][1U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v2[2U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [3U][1U][2U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v2[3U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [3U][1U][3U];
        __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v3[0U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer
            [0U][0U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v3[1U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer
            [0U][1U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v3[2U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer
            [0U][2U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v3[3U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer
            [0U][3U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v2[0U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [3U][2U][0U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v2[1U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [3U][2U][1U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v2[2U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [3U][2U][2U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v2[3U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [3U][2U][3U];
        __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v3[0U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer
            [0U][0U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v3[1U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer
            [0U][1U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v3[2U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer
            [0U][2U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v3[3U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer
            [0U][3U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v2[0U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [3U][3U][0U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v2[1U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [3U][3U][1U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v2[2U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [3U][3U][2U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v2[3U] 
            = vlSelfRef.mesh_onoc__DOT__waveguide_to_photodetector
            [3U][3U][3U];
        __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v3[0U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer
            [0U][0U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v3[1U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer
            [0U][1U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v3[2U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer
            [0U][2U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v3[3U] 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer
            [0U][3U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left__v4[0U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left
            [2U][0U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left__v4[1U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left
            [2U][1U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left__v4[2U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left
            [2U][2U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left__v4[3U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left
            [2U][3U];
        __VdlySet__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left__v4 = 1U;
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_left__v4 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_left
            [2U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right__v4[0U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right
            [2U][0U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right__v4[1U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right
            [2U][1U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right__v4[2U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right
            [2U][2U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right__v4[3U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right
            [2U][3U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_right__v4 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_right
            [2U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left__v5[0U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left
            [1U][0U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left__v5[1U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left
            [1U][1U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left__v5[2U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left
            [1U][2U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left__v5[3U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left
            [1U][3U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_left__v5 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_left
            [1U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right__v5[0U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right
            [1U][0U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right__v5[1U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right
            [1U][1U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right__v5[2U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right
            [1U][2U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right__v5[3U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right
            [1U][3U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_right__v5 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_right
            [1U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left__v6[0U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left
            [0U][0U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left__v6[1U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left
            [0U][1U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left__v6[2U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left
            [0U][2U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left__v6[3U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left
            [0U][3U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_left__v6 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_left
            [0U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right__v6[0U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right
            [0U][0U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right__v6[1U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right
            [0U][1U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right__v6[2U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right
            [0U][2U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right__v6[3U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right
            [0U][3U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_right__v6 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_right
            [0U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left__v7[0U] 
            = vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide
            [2U][0U][0U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left__v7[1U] 
            = vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide
            [2U][0U][1U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left__v7[2U] 
            = vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide
            [2U][0U][2U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left__v7[3U] 
            = vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide
            [2U][0U][3U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_left__v7 
            = vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide
            [2U][0U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right__v7[0U] 
            = vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide
            [0U][1U][0U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right__v7[1U] 
            = vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide
            [0U][1U][1U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right__v7[2U] 
            = vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide
            [0U][1U][2U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right__v7[3U] 
            = vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide
            [0U][1U][3U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_right__v7 
            = vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide
            [0U][1U];
    }
    VL_WRITEF_NX("  L->R  [0:%s:%0#] [1:%s:%0#] [2:%s:%0#] [3:%s:%0#] \n  R->L  [0:%s:%0#] [1:%s:%0#] [2:%s:%0#] [3:%s:%0#] \n\nCycle #%10#\n---------------------------------------------------------------------------------------------------------------------\n",0,
                 8,(vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_right
                    [0U] ? 0x56U : 0U),32,((vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right
                                            [0U][1U] 
                                            << 0x1fU) 
                                           | (vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right
                                              [0U][0U] 
                                              >> 1U)),
                 8,(vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_right
                    [1U] ? 0x56U : 0U),32,((vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right
                                            [1U][1U] 
                                            << 0x1fU) 
                                           | (vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right
                                              [1U][0U] 
                                              >> 1U)),
                 8,(vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_right
                    [2U] ? 0x56U : 0U),32,((vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right
                                            [2U][1U] 
                                            << 0x1fU) 
                                           | (vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right
                                              [2U][0U] 
                                              >> 1U)),
                 8,(vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_right
                    [3U] ? 0x56U : 0U),32,((vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right
                                            [3U][1U] 
                                            << 0x1fU) 
                                           | (vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right
                                              [3U][0U] 
                                              >> 1U)),
                 8,(vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_left
                    [0U] ? 0x56U : 0U),32,((vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left
                                            [0U][1U] 
                                            << 0x1fU) 
                                           | (vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left
                                              [0U][0U] 
                                              >> 1U)),
                 8,(vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_left
                    [1U] ? 0x56U : 0U),32,((vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left
                                            [1U][1U] 
                                            << 0x1fU) 
                                           | (vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left
                                              [1U][0U] 
                                              >> 1U)),
                 8,(vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_left
                    [2U] ? 0x56U : 0U),32,((vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left
                                            [2U][1U] 
                                            << 0x1fU) 
                                           | (vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left
                                              [2U][0U] 
                                              >> 1U)),
                 8,(vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_left
                    [3U] ? 0x56U : 0U),32,((vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left
                                            [3U][1U] 
                                            << 0x1fU) 
                                           | (vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left
                                              [3U][0U] 
                                              >> 1U)),
                 32,vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__current_cycle);
    if (vlSelfRef.rst) {
        __VdlySet__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left__v0 = 1U;
    } else {
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left__v4[0U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left
            [2U][0U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left__v4[1U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left
            [2U][1U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left__v4[2U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left
            [2U][2U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left__v4[3U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left
            [2U][3U];
        __VdlySet__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left__v4 = 1U;
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_left__v4 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_left
            [2U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right__v4[0U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right
            [2U][0U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right__v4[1U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right
            [2U][1U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right__v4[2U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right
            [2U][2U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right__v4[3U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right
            [2U][3U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_right__v4 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_right
            [2U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left__v5[0U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left
            [1U][0U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left__v5[1U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left
            [1U][1U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left__v5[2U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left
            [1U][2U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left__v5[3U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left
            [1U][3U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_left__v5 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_left
            [1U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right__v5[0U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right
            [1U][0U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right__v5[1U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right
            [1U][1U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right__v5[2U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right
            [1U][2U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right__v5[3U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right
            [1U][3U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_right__v5 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_right
            [1U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left__v6[0U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left
            [0U][0U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left__v6[1U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left
            [0U][1U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left__v6[2U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left
            [0U][2U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left__v6[3U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left
            [0U][3U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_left__v6 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_left
            [0U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right__v6[0U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right
            [0U][0U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right__v6[1U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right
            [0U][1U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right__v6[2U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right
            [0U][2U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right__v6[3U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right
            [0U][3U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_right__v6 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_right
            [0U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left__v7[0U] 
            = vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide
            [1U][3U][0U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left__v7[1U] 
            = vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide
            [1U][3U][1U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left__v7[2U] 
            = vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide
            [1U][3U][2U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left__v7[3U] 
            = vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide
            [1U][3U][3U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_left__v7 
            = vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide
            [1U][3U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right__v7[0U] 
            = vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide
            [0U][2U][0U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right__v7[1U] 
            = vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide
            [0U][2U][1U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right__v7[2U] 
            = vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide
            [0U][2U][2U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right__v7[3U] 
            = vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide
            [0U][2U][3U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_right__v7 
            = vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide
            [0U][2U];
    }
    VL_WRITEF_NX("  L->R  [0:%s:%0#] [1:%s:%0#] [2:%s:%0#] [3:%s:%0#] \n  R->L  [0:%s:%0#] [1:%s:%0#] [2:%s:%0#] [3:%s:%0#] \n\nCycle #%10#\n---------------------------------------------------------------------------------------------------------------------\n",0,
                 8,(vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_right
                    [0U] ? 0x56U : 0U),32,((vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right
                                            [0U][1U] 
                                            << 0x1fU) 
                                           | (vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right
                                              [0U][0U] 
                                              >> 1U)),
                 8,(vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_right
                    [1U] ? 0x56U : 0U),32,((vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right
                                            [1U][1U] 
                                            << 0x1fU) 
                                           | (vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right
                                              [1U][0U] 
                                              >> 1U)),
                 8,(vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_right
                    [2U] ? 0x56U : 0U),32,((vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right
                                            [2U][1U] 
                                            << 0x1fU) 
                                           | (vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right
                                              [2U][0U] 
                                              >> 1U)),
                 8,(vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_right
                    [3U] ? 0x56U : 0U),32,((vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right
                                            [3U][1U] 
                                            << 0x1fU) 
                                           | (vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right
                                              [3U][0U] 
                                              >> 1U)),
                 8,(vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_left
                    [0U] ? 0x56U : 0U),32,((vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left
                                            [0U][1U] 
                                            << 0x1fU) 
                                           | (vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left
                                              [0U][0U] 
                                              >> 1U)),
                 8,(vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_left
                    [1U] ? 0x56U : 0U),32,((vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left
                                            [1U][1U] 
                                            << 0x1fU) 
                                           | (vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left
                                              [1U][0U] 
                                              >> 1U)),
                 8,(vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_left
                    [2U] ? 0x56U : 0U),32,((vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left
                                            [2U][1U] 
                                            << 0x1fU) 
                                           | (vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left
                                              [2U][0U] 
                                              >> 1U)),
                 8,(vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_left
                    [3U] ? 0x56U : 0U),32,((vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left
                                            [3U][1U] 
                                            << 0x1fU) 
                                           | (vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left
                                              [3U][0U] 
                                              >> 1U)),
                 32,vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__current_cycle);
    if (vlSelfRef.rst) {
        __VdlySet__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left__v0 = 1U;
    } else {
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left__v4[0U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left
            [2U][0U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left__v4[1U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left
            [2U][1U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left__v4[2U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left
            [2U][2U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left__v4[3U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left
            [2U][3U];
        __VdlySet__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left__v4 = 1U;
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_left__v4 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_left
            [2U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right__v4[0U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right
            [2U][0U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right__v4[1U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right
            [2U][1U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right__v4[2U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right
            [2U][2U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right__v4[3U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right
            [2U][3U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_right__v4 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_right
            [2U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left__v5[0U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left
            [1U][0U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left__v5[1U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left
            [1U][1U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left__v5[2U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left
            [1U][2U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left__v5[3U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left
            [1U][3U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_left__v5 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_left
            [1U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right__v5[0U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right
            [1U][0U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right__v5[1U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right
            [1U][1U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right__v5[2U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right
            [1U][2U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right__v5[3U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right
            [1U][3U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_right__v5 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_right
            [1U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left__v6[0U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left
            [0U][0U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left__v6[1U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left
            [0U][1U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left__v6[2U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left
            [0U][2U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left__v6[3U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left
            [0U][3U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_left__v6 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_left
            [0U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right__v6[0U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right
            [0U][0U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right__v6[1U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right
            [0U][1U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right__v6[2U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right
            [0U][2U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right__v6[3U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right
            [0U][3U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_right__v6 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_right
            [0U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left__v7[0U] 
            = vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide
            [3U][0U][0U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left__v7[1U] 
            = vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide
            [3U][0U][1U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left__v7[2U] 
            = vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide
            [3U][0U][2U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left__v7[3U] 
            = vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide
            [3U][0U][3U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_left__v7 
            = vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide
            [3U][0U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right__v7[0U] 
            = vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide
            [1U][1U][0U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right__v7[1U] 
            = vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide
            [1U][1U][1U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right__v7[2U] 
            = vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide
            [1U][1U][2U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right__v7[3U] 
            = vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide
            [1U][1U][3U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_right__v7 
            = vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide
            [1U][1U];
    }
    VL_WRITEF_NX("  L->R  [0:%s:%0#] [1:%s:%0#] [2:%s:%0#] [3:%s:%0#] \n  R->L  [0:%s:%0#] [1:%s:%0#] [2:%s:%0#] [3:%s:%0#] \n\nCycle #%10#\n---------------------------------------------------------------------------------------------------------------------\n",0,
                 8,(vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_right
                    [0U] ? 0x56U : 0U),32,((vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right
                                            [0U][1U] 
                                            << 0x1fU) 
                                           | (vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right
                                              [0U][0U] 
                                              >> 1U)),
                 8,(vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_right
                    [1U] ? 0x56U : 0U),32,((vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right
                                            [1U][1U] 
                                            << 0x1fU) 
                                           | (vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right
                                              [1U][0U] 
                                              >> 1U)),
                 8,(vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_right
                    [2U] ? 0x56U : 0U),32,((vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right
                                            [2U][1U] 
                                            << 0x1fU) 
                                           | (vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right
                                              [2U][0U] 
                                              >> 1U)),
                 8,(vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_right
                    [3U] ? 0x56U : 0U),32,((vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right
                                            [3U][1U] 
                                            << 0x1fU) 
                                           | (vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right
                                              [3U][0U] 
                                              >> 1U)),
                 8,(vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_left
                    [0U] ? 0x56U : 0U),32,((vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left
                                            [0U][1U] 
                                            << 0x1fU) 
                                           | (vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left
                                              [0U][0U] 
                                              >> 1U)),
                 8,(vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_left
                    [1U] ? 0x56U : 0U),32,((vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left
                                            [1U][1U] 
                                            << 0x1fU) 
                                           | (vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left
                                              [1U][0U] 
                                              >> 1U)),
                 8,(vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_left
                    [2U] ? 0x56U : 0U),32,((vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left
                                            [2U][1U] 
                                            << 0x1fU) 
                                           | (vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left
                                              [2U][0U] 
                                              >> 1U)),
                 8,(vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_left
                    [3U] ? 0x56U : 0U),32,((vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left
                                            [3U][1U] 
                                            << 0x1fU) 
                                           | (vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left
                                              [3U][0U] 
                                              >> 1U)),
                 32,vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__current_cycle);
    if (vlSelfRef.rst) {
        __VdlySet__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left__v0 = 1U;
    } else {
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left__v4[0U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left
            [2U][0U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left__v4[1U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left
            [2U][1U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left__v4[2U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left
            [2U][2U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left__v4[3U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left
            [2U][3U];
        __VdlySet__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left__v4 = 1U;
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_left__v4 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_left
            [2U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right__v4[0U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right
            [2U][0U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right__v4[1U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right
            [2U][1U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right__v4[2U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right
            [2U][2U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right__v4[3U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right
            [2U][3U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_right__v4 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_right
            [2U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left__v5[0U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left
            [1U][0U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left__v5[1U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left
            [1U][1U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left__v5[2U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left
            [1U][2U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left__v5[3U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left
            [1U][3U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_left__v5 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_left
            [1U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right__v5[0U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right
            [1U][0U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right__v5[1U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right
            [1U][1U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right__v5[2U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right
            [1U][2U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right__v5[3U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right
            [1U][3U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_right__v5 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_right
            [1U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left__v6[0U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left
            [0U][0U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left__v6[1U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left
            [0U][1U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left__v6[2U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left
            [0U][2U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left__v6[3U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left
            [0U][3U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_left__v6 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_left
            [0U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right__v6[0U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right
            [0U][0U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right__v6[1U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right
            [0U][1U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right__v6[2U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right
            [0U][2U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right__v6[3U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right
            [0U][3U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_right__v6 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_right
            [0U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left__v7[0U] 
            = vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide
            [0U][2U][0U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left__v7[1U] 
            = vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide
            [0U][2U][1U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left__v7[2U] 
            = vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide
            [0U][2U][2U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left__v7[3U] 
            = vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide
            [0U][2U][3U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_left__v7 
            = vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide
            [0U][2U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right__v7[0U] 
            = vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide
            [1U][3U][0U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right__v7[1U] 
            = vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide
            [1U][3U][1U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right__v7[2U] 
            = vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide
            [1U][3U][2U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right__v7[3U] 
            = vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide
            [1U][3U][3U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_right__v7 
            = vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide
            [1U][3U];
    }
    VL_WRITEF_NX("  L->R  [0:%s:%0#] [1:%s:%0#] [2:%s:%0#] [3:%s:%0#] \n  R->L  [0:%s:%0#] [1:%s:%0#] [2:%s:%0#] [3:%s:%0#] \n\nCycle #%10#\n---------------------------------------------------------------------------------------------------------------------\n",0,
                 8,(vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_right
                    [0U] ? 0x56U : 0U),32,((vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right
                                            [0U][1U] 
                                            << 0x1fU) 
                                           | (vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right
                                              [0U][0U] 
                                              >> 1U)),
                 8,(vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_right
                    [1U] ? 0x56U : 0U),32,((vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right
                                            [1U][1U] 
                                            << 0x1fU) 
                                           | (vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right
                                              [1U][0U] 
                                              >> 1U)),
                 8,(vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_right
                    [2U] ? 0x56U : 0U),32,((vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right
                                            [2U][1U] 
                                            << 0x1fU) 
                                           | (vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right
                                              [2U][0U] 
                                              >> 1U)),
                 8,(vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_right
                    [3U] ? 0x56U : 0U),32,((vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right
                                            [3U][1U] 
                                            << 0x1fU) 
                                           | (vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right
                                              [3U][0U] 
                                              >> 1U)),
                 8,(vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_left
                    [0U] ? 0x56U : 0U),32,((vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left
                                            [0U][1U] 
                                            << 0x1fU) 
                                           | (vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left
                                              [0U][0U] 
                                              >> 1U)),
                 8,(vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_left
                    [1U] ? 0x56U : 0U),32,((vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left
                                            [1U][1U] 
                                            << 0x1fU) 
                                           | (vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left
                                              [1U][0U] 
                                              >> 1U)),
                 8,(vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_left
                    [2U] ? 0x56U : 0U),32,((vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left
                                            [2U][1U] 
                                            << 0x1fU) 
                                           | (vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left
                                              [2U][0U] 
                                              >> 1U)),
                 8,(vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_left
                    [3U] ? 0x56U : 0U),32,((vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left
                                            [3U][1U] 
                                            << 0x1fU) 
                                           | (vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left
                                              [3U][0U] 
                                              >> 1U)),
                 32,vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__current_cycle);
    if (vlSelfRef.rst) {
        __VdlySet__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left__v0 = 1U;
    } else {
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left__v4[0U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left
            [2U][0U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left__v4[1U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left
            [2U][1U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left__v4[2U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left
            [2U][2U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left__v4[3U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left
            [2U][3U];
        __VdlySet__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left__v4 = 1U;
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_left__v4 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_left
            [2U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right__v4[0U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right
            [2U][0U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right__v4[1U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right
            [2U][1U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right__v4[2U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right
            [2U][2U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right__v4[3U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right
            [2U][3U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_right__v4 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_right
            [2U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left__v5[0U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left
            [1U][0U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left__v5[1U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left
            [1U][1U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left__v5[2U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left
            [1U][2U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left__v5[3U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left
            [1U][3U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_left__v5 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_left
            [1U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right__v5[0U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right
            [1U][0U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right__v5[1U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right
            [1U][1U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right__v5[2U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right
            [1U][2U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right__v5[3U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right
            [1U][3U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_right__v5 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_right
            [1U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left__v6[0U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left
            [0U][0U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left__v6[1U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left
            [0U][1U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left__v6[2U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left
            [0U][2U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left__v6[3U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left
            [0U][3U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_left__v6 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_left
            [0U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right__v6[0U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right
            [0U][0U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right__v6[1U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right
            [0U][1U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right__v6[2U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right
            [0U][2U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right__v6[3U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right
            [0U][3U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_right__v6 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_right
            [0U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left__v7[0U] 
            = vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide
            [0U][1U][0U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left__v7[1U] 
            = vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide
            [0U][1U][1U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left__v7[2U] 
            = vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide
            [0U][1U][2U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left__v7[3U] 
            = vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide
            [0U][1U][3U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_left__v7 
            = vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide
            [0U][1U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right__v7[0U] 
            = vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide
            [2U][0U][0U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right__v7[1U] 
            = vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide
            [2U][0U][1U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right__v7[2U] 
            = vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide
            [2U][0U][2U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right__v7[3U] 
            = vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide
            [2U][0U][3U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_right__v7 
            = vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide
            [2U][0U];
    }
    VL_WRITEF_NX("  L->R  [0:%s:%0#] [1:%s:%0#] [2:%s:%0#] [3:%s:%0#] \n  R->L  [0:%s:%0#] [1:%s:%0#] [2:%s:%0#] [3:%s:%0#] \n\nCycle #%10#\n---------------------------------------------------------------------------------------------------------------------\n",0,
                 8,(vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_right
                    [0U] ? 0x56U : 0U),32,((vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right
                                            [0U][1U] 
                                            << 0x1fU) 
                                           | (vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right
                                              [0U][0U] 
                                              >> 1U)),
                 8,(vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_right
                    [1U] ? 0x56U : 0U),32,((vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right
                                            [1U][1U] 
                                            << 0x1fU) 
                                           | (vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right
                                              [1U][0U] 
                                              >> 1U)),
                 8,(vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_right
                    [2U] ? 0x56U : 0U),32,((vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right
                                            [2U][1U] 
                                            << 0x1fU) 
                                           | (vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right
                                              [2U][0U] 
                                              >> 1U)),
                 8,(vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_right
                    [3U] ? 0x56U : 0U),32,((vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right
                                            [3U][1U] 
                                            << 0x1fU) 
                                           | (vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right
                                              [3U][0U] 
                                              >> 1U)),
                 8,(vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_left
                    [0U] ? 0x56U : 0U),32,((vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left
                                            [0U][1U] 
                                            << 0x1fU) 
                                           | (vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left
                                              [0U][0U] 
                                              >> 1U)),
                 8,(vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_left
                    [1U] ? 0x56U : 0U),32,((vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left
                                            [1U][1U] 
                                            << 0x1fU) 
                                           | (vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left
                                              [1U][0U] 
                                              >> 1U)),
                 8,(vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_left
                    [2U] ? 0x56U : 0U),32,((vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left
                                            [2U][1U] 
                                            << 0x1fU) 
                                           | (vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left
                                              [2U][0U] 
                                              >> 1U)),
                 8,(vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_left
                    [3U] ? 0x56U : 0U),32,((vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left
                                            [3U][1U] 
                                            << 0x1fU) 
                                           | (vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left
                                              [3U][0U] 
                                              >> 1U)),
                 32,vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__current_cycle);
    if (vlSelfRef.rst) {
        __VdlySet__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left__v0 = 1U;
    } else {
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left__v4[0U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left
            [2U][0U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left__v4[1U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left
            [2U][1U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left__v4[2U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left
            [2U][2U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left__v4[3U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left
            [2U][3U];
        __VdlySet__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left__v4 = 1U;
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_left__v4 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_left
            [2U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right__v4[0U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right
            [2U][0U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right__v4[1U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right
            [2U][1U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right__v4[2U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right
            [2U][2U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right__v4[3U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right
            [2U][3U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_right__v4 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_right
            [2U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left__v5[0U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left
            [1U][0U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left__v5[1U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left
            [1U][1U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left__v5[2U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left
            [1U][2U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left__v5[3U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left
            [1U][3U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_left__v5 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_left
            [1U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right__v5[0U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right
            [1U][0U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right__v5[1U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right
            [1U][1U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right__v5[2U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right
            [1U][2U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right__v5[3U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right
            [1U][3U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_right__v5 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_right
            [1U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left__v6[0U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left
            [0U][0U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left__v6[1U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left
            [0U][1U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left__v6[2U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left
            [0U][2U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left__v6[3U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left
            [0U][3U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_left__v6 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_left
            [0U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right__v6[0U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right
            [0U][0U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right__v6[1U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right
            [0U][1U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right__v6[2U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right
            [0U][2U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right__v6[3U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right
            [0U][3U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_right__v6 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_right
            [0U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left__v7[0U] 
            = vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide
            [3U][3U][0U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left__v7[1U] 
            = vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide
            [3U][3U][1U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left__v7[2U] 
            = vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide
            [3U][3U][2U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left__v7[3U] 
            = vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide
            [3U][3U][3U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_left__v7 
            = vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide
            [3U][3U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right__v7[0U] 
            = vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide
            [2U][2U][0U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right__v7[1U] 
            = vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide
            [2U][2U][1U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right__v7[2U] 
            = vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide
            [2U][2U][2U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right__v7[3U] 
            = vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide
            [2U][2U][3U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_right__v7 
            = vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide
            [2U][2U];
    }
    VL_WRITEF_NX("  L->R  [0:%s:%0#] [1:%s:%0#] [2:%s:%0#] [3:%s:%0#] \n  R->L  [0:%s:%0#] [1:%s:%0#] [2:%s:%0#] [3:%s:%0#] \n\nCycle #%10#\n---------------------------------------------------------------------------------------------------------------------\n",0,
                 8,(vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_right
                    [0U] ? 0x56U : 0U),32,((vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right
                                            [0U][1U] 
                                            << 0x1fU) 
                                           | (vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right
                                              [0U][0U] 
                                              >> 1U)),
                 8,(vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_right
                    [1U] ? 0x56U : 0U),32,((vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right
                                            [1U][1U] 
                                            << 0x1fU) 
                                           | (vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right
                                              [1U][0U] 
                                              >> 1U)),
                 8,(vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_right
                    [2U] ? 0x56U : 0U),32,((vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right
                                            [2U][1U] 
                                            << 0x1fU) 
                                           | (vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right
                                              [2U][0U] 
                                              >> 1U)),
                 8,(vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_right
                    [3U] ? 0x56U : 0U),32,((vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right
                                            [3U][1U] 
                                            << 0x1fU) 
                                           | (vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right
                                              [3U][0U] 
                                              >> 1U)),
                 8,(vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_left
                    [0U] ? 0x56U : 0U),32,((vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left
                                            [0U][1U] 
                                            << 0x1fU) 
                                           | (vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left
                                              [0U][0U] 
                                              >> 1U)),
                 8,(vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_left
                    [1U] ? 0x56U : 0U),32,((vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left
                                            [1U][1U] 
                                            << 0x1fU) 
                                           | (vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left
                                              [1U][0U] 
                                              >> 1U)),
                 8,(vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_left
                    [2U] ? 0x56U : 0U),32,((vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left
                                            [2U][1U] 
                                            << 0x1fU) 
                                           | (vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left
                                              [2U][0U] 
                                              >> 1U)),
                 8,(vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_left
                    [3U] ? 0x56U : 0U),32,((vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left
                                            [3U][1U] 
                                            << 0x1fU) 
                                           | (vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left
                                              [3U][0U] 
                                              >> 1U)),
                 32,vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__current_cycle);
    if (vlSelfRef.rst) {
        __VdlySet__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left__v0 = 1U;
    } else {
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left__v4[0U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left
            [2U][0U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left__v4[1U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left
            [2U][1U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left__v4[2U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left
            [2U][2U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left__v4[3U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left
            [2U][3U];
        __VdlySet__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left__v4 = 1U;
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_left__v4 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_left
            [2U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right__v4[0U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right
            [2U][0U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right__v4[1U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right
            [2U][1U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right__v4[2U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right
            [2U][2U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right__v4[3U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right
            [2U][3U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_right__v4 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_right
            [2U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left__v5[0U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left
            [1U][0U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left__v5[1U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left
            [1U][1U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left__v5[2U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left
            [1U][2U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left__v5[3U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left
            [1U][3U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_left__v5 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_left
            [1U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right__v5[0U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right
            [1U][0U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right__v5[1U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right
            [1U][1U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right__v5[2U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right
            [1U][2U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right__v5[3U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right
            [1U][3U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_right__v5 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_right
            [1U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left__v6[0U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left
            [0U][0U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left__v6[1U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left
            [0U][1U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left__v6[2U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left
            [0U][2U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left__v6[3U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left
            [0U][3U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_left__v6 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_left
            [0U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right__v6[0U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right
            [0U][0U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right__v6[1U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right
            [0U][1U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right__v6[2U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right
            [0U][2U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right__v6[3U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right
            [0U][3U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_right__v6 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_right
            [0U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left__v7[0U] 
            = vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide
            [1U][1U][0U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left__v7[1U] 
            = vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide
            [1U][1U][1U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left__v7[2U] 
            = vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide
            [1U][1U][2U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left__v7[3U] 
            = vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide
            [1U][1U][3U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_left__v7 
            = vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide
            [1U][1U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right__v7[0U] 
            = vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide
            [3U][0U][0U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right__v7[1U] 
            = vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide
            [3U][0U][1U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right__v7[2U] 
            = vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide
            [3U][0U][2U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right__v7[3U] 
            = vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide
            [3U][0U][3U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_right__v7 
            = vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide
            [3U][0U];
    }
    VL_WRITEF_NX("  L->R  [0:%s:%0#] [1:%s:%0#] [2:%s:%0#] [3:%s:%0#] \n  R->L  [0:%s:%0#] [1:%s:%0#] [2:%s:%0#] [3:%s:%0#] \n\nCycle #%10#\n---------------------------------------------------------------------------------------------------------------------\n",0,
                 8,(vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_right
                    [0U] ? 0x56U : 0U),32,((vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right
                                            [0U][1U] 
                                            << 0x1fU) 
                                           | (vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right
                                              [0U][0U] 
                                              >> 1U)),
                 8,(vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_right
                    [1U] ? 0x56U : 0U),32,((vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right
                                            [1U][1U] 
                                            << 0x1fU) 
                                           | (vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right
                                              [1U][0U] 
                                              >> 1U)),
                 8,(vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_right
                    [2U] ? 0x56U : 0U),32,((vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right
                                            [2U][1U] 
                                            << 0x1fU) 
                                           | (vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right
                                              [2U][0U] 
                                              >> 1U)),
                 8,(vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_right
                    [3U] ? 0x56U : 0U),32,((vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right
                                            [3U][1U] 
                                            << 0x1fU) 
                                           | (vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right
                                              [3U][0U] 
                                              >> 1U)),
                 8,(vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_left
                    [0U] ? 0x56U : 0U),32,((vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left
                                            [0U][1U] 
                                            << 0x1fU) 
                                           | (vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left
                                              [0U][0U] 
                                              >> 1U)),
                 8,(vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_left
                    [1U] ? 0x56U : 0U),32,((vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left
                                            [1U][1U] 
                                            << 0x1fU) 
                                           | (vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left
                                              [1U][0U] 
                                              >> 1U)),
                 8,(vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_left
                    [2U] ? 0x56U : 0U),32,((vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left
                                            [2U][1U] 
                                            << 0x1fU) 
                                           | (vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left
                                              [2U][0U] 
                                              >> 1U)),
                 8,(vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_left
                    [3U] ? 0x56U : 0U),32,((vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left
                                            [3U][1U] 
                                            << 0x1fU) 
                                           | (vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left
                                              [3U][0U] 
                                              >> 1U)),
                 32,vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__current_cycle);
    if (vlSelfRef.rst) {
        __VdlySet__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left__v0 = 1U;
    } else {
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left__v4[0U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left
            [2U][0U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left__v4[1U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left
            [2U][1U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left__v4[2U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left
            [2U][2U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left__v4[3U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left
            [2U][3U];
        __VdlySet__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left__v4 = 1U;
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_left__v4 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_left
            [2U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right__v4[0U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right
            [2U][0U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right__v4[1U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right
            [2U][1U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right__v4[2U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right
            [2U][2U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right__v4[3U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right
            [2U][3U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_right__v4 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_right
            [2U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left__v5[0U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left
            [1U][0U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left__v5[1U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left
            [1U][1U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left__v5[2U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left
            [1U][2U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left__v5[3U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left
            [1U][3U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_left__v5 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_left
            [1U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right__v5[0U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right
            [1U][0U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right__v5[1U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right
            [1U][1U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right__v5[2U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right
            [1U][2U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right__v5[3U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right
            [1U][3U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_right__v5 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_right
            [1U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left__v6[0U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left
            [0U][0U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left__v6[1U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left
            [0U][1U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left__v6[2U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left
            [0U][2U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left__v6[3U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left
            [0U][3U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_left__v6 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_left
            [0U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right__v6[0U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right
            [0U][0U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right__v6[1U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right
            [0U][1U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right__v6[2U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right
            [0U][2U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right__v6[3U] 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right
            [0U][3U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_right__v6 
            = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_right
            [0U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left__v7[0U] 
            = vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide
            [2U][2U][0U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left__v7[1U] 
            = vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide
            [2U][2U][1U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left__v7[2U] 
            = vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide
            [2U][2U][2U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left__v7[3U] 
            = vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide
            [2U][2U][3U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_left__v7 
            = vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide
            [2U][2U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right__v7[0U] 
            = vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide
            [3U][3U][0U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right__v7[1U] 
            = vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide
            [3U][3U][1U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right__v7[2U] 
            = vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide
            [3U][3U][2U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right__v7[3U] 
            = vlSelfRef.mesh_onoc__DOT__modulator_to_waveguide
            [3U][3U][3U];
        __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_right__v7 
            = vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide
            [3U][3U];
    }
    VL_WRITEF_NX("  L->R  [0:%s:%0#] [1:%s:%0#] [2:%s:%0#] [3:%s:%0#] \n  R->L  [0:%s:%0#] [1:%s:%0#] [2:%s:%0#] [3:%s:%0#] \n\nCycle #%10#\n---------------------------------------------------------------------------------------------------------------------\n",0,
                 8,(vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_right
                    [0U] ? 0x56U : 0U),32,((vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right
                                            [0U][1U] 
                                            << 0x1fU) 
                                           | (vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right
                                              [0U][0U] 
                                              >> 1U)),
                 8,(vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_right
                    [1U] ? 0x56U : 0U),32,((vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right
                                            [1U][1U] 
                                            << 0x1fU) 
                                           | (vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right
                                              [1U][0U] 
                                              >> 1U)),
                 8,(vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_right
                    [2U] ? 0x56U : 0U),32,((vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right
                                            [2U][1U] 
                                            << 0x1fU) 
                                           | (vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right
                                              [2U][0U] 
                                              >> 1U)),
                 8,(vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_right
                    [3U] ? 0x56U : 0U),32,((vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right
                                            [3U][1U] 
                                            << 0x1fU) 
                                           | (vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right
                                              [3U][0U] 
                                              >> 1U)),
                 8,(vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_left
                    [0U] ? 0x56U : 0U),32,((vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left
                                            [0U][1U] 
                                            << 0x1fU) 
                                           | (vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left
                                              [0U][0U] 
                                              >> 1U)),
                 8,(vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_left
                    [1U] ? 0x56U : 0U),32,((vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left
                                            [1U][1U] 
                                            << 0x1fU) 
                                           | (vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left
                                              [1U][0U] 
                                              >> 1U)),
                 8,(vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_left
                    [2U] ? 0x56U : 0U),32,((vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left
                                            [2U][1U] 
                                            << 0x1fU) 
                                           | (vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left
                                              [2U][0U] 
                                              >> 1U)),
                 8,(vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_left
                    [3U] ? 0x56U : 0U),32,((vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left
                                            [3U][1U] 
                                            << 0x1fU) 
                                           | (vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left
                                              [3U][0U] 
                                              >> 1U)),
                 32,vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__current_cycle);
    if (vlSelfRef.rst) {
        __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v0 = 1U;
        __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v0 = 1U;
        __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v0 = 1U;
        __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v0 = 1U;
        __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v0 = 1U;
        __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v0 = 1U;
        __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v0 = 1U;
        __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v0 = 1U;
        __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v0 = 1U;
        __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v0 = 1U;
        __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v0 = 1U;
        __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v0 = 1U;
        __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v0 = 1U;
        __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v0 = 1U;
        __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v0 = 1U;
        __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v0 = 1U;
    } else {
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v2 
            = vlSelfRef.mesh_onoc__DOT__waveguide_valid_to_photodetector
            [0U][0U];
        __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v3 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf
            [0U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v2 
            = vlSelfRef.mesh_onoc__DOT__waveguide_valid_to_photodetector
            [0U][1U];
        __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v3 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf
            [0U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v2 
            = vlSelfRef.mesh_onoc__DOT__waveguide_valid_to_photodetector
            [0U][2U];
        __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v3 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf
            [0U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v2 
            = vlSelfRef.mesh_onoc__DOT__waveguide_valid_to_photodetector
            [0U][3U];
        __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v3 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf
            [0U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v2 
            = vlSelfRef.mesh_onoc__DOT__waveguide_valid_to_photodetector
            [1U][0U];
        __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v3 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf
            [0U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v2 
            = vlSelfRef.mesh_onoc__DOT__waveguide_valid_to_photodetector
            [1U][1U];
        __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v3 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf
            [0U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v2 
            = vlSelfRef.mesh_onoc__DOT__waveguide_valid_to_photodetector
            [1U][2U];
        __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v3 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf
            [0U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v2 
            = vlSelfRef.mesh_onoc__DOT__waveguide_valid_to_photodetector
            [1U][3U];
        __VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v3 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf
            [0U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v2 
            = vlSelfRef.mesh_onoc__DOT__waveguide_valid_to_photodetector
            [2U][0U];
        __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v3 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf
            [0U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v2 
            = vlSelfRef.mesh_onoc__DOT__waveguide_valid_to_photodetector
            [2U][1U];
        __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v3 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf
            [0U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v2 
            = vlSelfRef.mesh_onoc__DOT__waveguide_valid_to_photodetector
            [2U][2U];
        __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v3 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf
            [0U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v2 
            = vlSelfRef.mesh_onoc__DOT__waveguide_valid_to_photodetector
            [2U][3U];
        __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v3 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf
            [0U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v2 
            = vlSelfRef.mesh_onoc__DOT__waveguide_valid_to_photodetector
            [3U][0U];
        __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v3 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf
            [0U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v2 
            = vlSelfRef.mesh_onoc__DOT__waveguide_valid_to_photodetector
            [3U][1U];
        __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v3 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf
            [0U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v2 
            = vlSelfRef.mesh_onoc__DOT__waveguide_valid_to_photodetector
            [3U][2U];
        __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v3 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf
            [0U];
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v2 
            = vlSelfRef.mesh_onoc__DOT__waveguide_valid_to_photodetector
            [3U][3U];
        __VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v2 = 1U;
        __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v3 
            = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf
            [0U];
    }
    if (vlSelfRef.rst) {
        vlSelfRef.mesh_onoc__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__ip_inst__packet_out[0U] = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__ip_inst__packet_out[1U] = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__ip_inst__packet_out[2U] = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__ip_inst__packet_out[3U] = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__ip_inst__valid_out = 0U;
        __Vdly__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__pkt_sent_last_cycle = 0U;
        __Vdly__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__cycle_counter = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__ip_inst__packet_out[0U] = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__ip_inst__packet_out[1U] = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__ip_inst__packet_out[2U] = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__ip_inst__packet_out[3U] = 0U;
    } else {
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__unnamedblk1__DOT__send_now 
            = (VL_ITOR_D_I(32, VL_MODDIV_III(32, (IData)(
                                                         VL_RANDOM_I()), (IData)(0x64U))) 
               < (50.0 + (50.0 * sin(((6.28000000000000025e+00 
                                       * VL_ISTOR_D_I(32, vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__cycle_counter)) 
                                      / 50.0)))));
        if (VL_UNLIKELY((((IData)(vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__unnamedblk1__DOT__send_now) 
                          & (~ (IData)(vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__pending_send_packet))) 
                         & (~ (IData)(vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__pkt_sent_last_cycle))))) {
            __Vfunc_mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__get_random_destination__0__self_id = 0U;
            __Vfunc_mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__get_random_destination__0__random_id 
                = (0xffffU & VL_URANDOM_RANGE_I(0U, 1U));
            vlSelfRef.mesh_onoc__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__ip_inst__valid_out = 1U;
            __Vdly__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__pkt_sent_last_cycle = 1U;
            while (((IData)(__Vfunc_mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__get_random_destination__0__random_id) 
                    == (IData)(__Vfunc_mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__get_random_destination__0__self_id))) {
                __Vfunc_mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__get_random_destination__0__random_id 
                    = (0xffffU & VL_URANDOM_RANGE_I(0U, 1U));
            }
            __Vfunc_mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__get_random_destination__0__rand_y 
                = (0xffU & (IData)(__Vfunc_mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__get_random_destination__0__random_id));
            __Vfunc_mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__encode_xy__1__y 
                = __Vfunc_mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__get_random_destination__0__rand_y;
            __Vfunc_mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__encode_xy__1__Vfuncout 
                = __Vfunc_mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__encode_xy__1__y;
            __Vfunc_mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__get_random_destination__0__Vfuncout 
                = __Vfunc_mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__encode_xy__1__Vfuncout;
            __Vdly__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__destination 
                = __Vfunc_mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__get_random_destination__0__Vfuncout;
            vlSelfRef.mesh_onoc__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__ip_inst__packet_out[0U] 
                = (1U | (vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__cycle_counter 
                         << 1U));
            vlSelfRef.mesh_onoc__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__ip_inst__packet_out[1U] 
                = ((vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__cycle_counter 
                    >> 0x1fU) | ((IData)((((QData)((IData)(vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__destination)) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__payload)))) 
                                 << 1U));
            vlSelfRef.mesh_onoc__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__ip_inst__packet_out[2U] 
                = (((IData)((((QData)((IData)(vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__destination)) 
                              << 0x20U) | (QData)((IData)(vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__payload)))) 
                    >> 0x1fU) | ((IData)(((((QData)((IData)(vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__destination)) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__payload))) 
                                          >> 0x20U)) 
                                 << 1U));
            vlSelfRef.mesh_onoc__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__ip_inst__packet_out[3U] 
                = ((IData)(((((QData)((IData)(vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__destination)) 
                              << 0x20U) | (QData)((IData)(vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__payload))) 
                            >> 0x20U)) >> 0x1fU);
            VL_WRITEF_NX("IP 0 sending %11d to dest %0#\n",0,
                         32,vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__payload,
                         16,(IData)(vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__destination));
            vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__payload 
                = ((IData)(1U) + vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__payload);
        } else {
            vlSelfRef.mesh_onoc__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__ip_inst__valid_out = 0U;
            __Vdly__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__pkt_sent_last_cycle = 0U;
        }
        __Vdly__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__cycle_counter 
            = ((IData)(1U) + vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__cycle_counter);
    }
    if (vlSelfRef.rst) {
        vlSelfRef.mesh_onoc__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__ip_inst__packet_out[0U] = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__ip_inst__packet_out[1U] = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__ip_inst__packet_out[2U] = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__ip_inst__packet_out[3U] = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__ip_inst__valid_out = 0U;
        __Vdly__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__pkt_sent_last_cycle = 0U;
        __Vdly__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__cycle_counter = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__ip_inst__packet_out[0U] = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__ip_inst__packet_out[1U] = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__ip_inst__packet_out[2U] = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__ip_inst__packet_out[3U] = 0U;
    } else {
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__unnamedblk1__DOT__send_now 
            = (VL_ITOR_D_I(32, VL_MODDIV_III(32, (IData)(
                                                         VL_RANDOM_I()), (IData)(0x64U))) 
               < (50.0 + (50.0 * sin(((6.28000000000000025e+00 
                                       * VL_ISTOR_D_I(32, vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__cycle_counter)) 
                                      / 50.0)))));
        if (VL_UNLIKELY((((IData)(vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__unnamedblk1__DOT__send_now) 
                          & (~ (IData)(vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__pending_send_packet))) 
                         & (~ (IData)(vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__pkt_sent_last_cycle))))) {
            __Vfunc_mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__get_random_destination__3__self_id = 1U;
            __Vfunc_mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__get_random_destination__3__random_id 
                = (0xffffU & VL_URANDOM_RANGE_I(0U, 1U));
            vlSelfRef.mesh_onoc__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__ip_inst__valid_out = 1U;
            __Vdly__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__pkt_sent_last_cycle = 1U;
            while (((IData)(__Vfunc_mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__get_random_destination__3__random_id) 
                    == (IData)(__Vfunc_mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__get_random_destination__3__self_id))) {
                __Vfunc_mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__get_random_destination__3__random_id 
                    = (0xffffU & VL_URANDOM_RANGE_I(0U, 1U));
            }
            __Vfunc_mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__get_random_destination__3__rand_y 
                = (0xffU & (IData)(__Vfunc_mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__get_random_destination__3__random_id));
            __Vfunc_mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__encode_xy__4__y 
                = __Vfunc_mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__get_random_destination__3__rand_y;
            __Vfunc_mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__encode_xy__4__Vfuncout 
                = __Vfunc_mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__encode_xy__4__y;
            __Vfunc_mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__get_random_destination__3__Vfuncout 
                = __Vfunc_mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__encode_xy__4__Vfuncout;
            __Vdly__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__destination 
                = __Vfunc_mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__get_random_destination__3__Vfuncout;
            vlSelfRef.mesh_onoc__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__ip_inst__packet_out[0U] 
                = (1U | ((IData)((((QData)((IData)(
                                                   (0x10000U 
                                                    | vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__payload))) 
                                   << 0x20U) | (QData)((IData)(vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__cycle_counter)))) 
                         << 1U));
            vlSelfRef.mesh_onoc__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__ip_inst__packet_out[1U] 
                = (((IData)((((QData)((IData)((0x10000U 
                                               | vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__payload))) 
                              << 0x20U) | (QData)((IData)(vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__cycle_counter)))) 
                    >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                            (0x10000U 
                                                             | vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__payload))) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__cycle_counter))) 
                                          >> 0x20U)) 
                                 << 1U));
            vlSelfRef.mesh_onoc__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__ip_inst__packet_out[2U] 
                = ((0xfffffffeU & vlSelfRef.mesh_onoc__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__ip_inst__packet_out[2U]) 
                   | ((IData)(((((QData)((IData)((0x10000U 
                                                  | vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__payload))) 
                                 << 0x20U) | (QData)((IData)(vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__cycle_counter))) 
                               >> 0x20U)) >> 0x1fU));
            vlSelfRef.mesh_onoc__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__ip_inst__packet_out[2U] 
                = ((1U & vlSelfRef.mesh_onoc__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__ip_inst__packet_out[2U]) 
                   | (0xfffffffeU & (0x2000000U | ((IData)(vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__destination) 
                                                   << 1U))));
            vlSelfRef.mesh_onoc__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__ip_inst__packet_out[3U] 
                = ((IData)(vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__destination) 
                   >> 0x1fU);
            VL_WRITEF_NX("IP 1 sending %11d to dest %0#\n",0,
                         32,vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__payload,
                         16,(IData)(vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__destination));
            vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__payload 
                = ((IData)(1U) + vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__payload);
        } else {
            vlSelfRef.mesh_onoc__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__ip_inst__valid_out = 0U;
            __Vdly__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__pkt_sent_last_cycle = 0U;
        }
        __Vdly__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__cycle_counter 
            = ((IData)(1U) + vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__cycle_counter);
    }
    if (vlSelfRef.rst) {
        vlSelfRef.mesh_onoc__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__ip_inst__packet_out[0U] = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__ip_inst__packet_out[1U] = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__ip_inst__packet_out[2U] = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__ip_inst__packet_out[3U] = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__ip_inst__valid_out = 0U;
        __Vdly__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__pkt_sent_last_cycle = 0U;
        __Vdly__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__cycle_counter = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__ip_inst__packet_out[0U] = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__ip_inst__packet_out[1U] = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__ip_inst__packet_out[2U] = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__ip_inst__packet_out[3U] = 0U;
    } else {
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__unnamedblk1__DOT__send_now 
            = (VL_ITOR_D_I(32, VL_MODDIV_III(32, (IData)(
                                                         VL_RANDOM_I()), (IData)(0x64U))) 
               < (50.0 + (50.0 * sin(((6.28000000000000025e+00 
                                       * VL_ISTOR_D_I(32, vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__cycle_counter)) 
                                      / 50.0)))));
        if (VL_UNLIKELY((((IData)(vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__unnamedblk1__DOT__send_now) 
                          & (~ (IData)(vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__pending_send_packet))) 
                         & (~ (IData)(vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__pkt_sent_last_cycle))))) {
            __Vfunc_mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__get_random_destination__6__self_id = 2U;
            __Vfunc_mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__get_random_destination__6__random_id 
                = (0xffffU & VL_URANDOM_RANGE_I(0U, 1U));
            vlSelfRef.mesh_onoc__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__ip_inst__valid_out = 1U;
            __Vdly__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__pkt_sent_last_cycle = 1U;
            while (((IData)(__Vfunc_mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__get_random_destination__6__random_id) 
                    == (IData)(__Vfunc_mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__get_random_destination__6__self_id))) {
                __Vfunc_mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__get_random_destination__6__random_id 
                    = (0xffffU & VL_URANDOM_RANGE_I(0U, 1U));
            }
            __Vfunc_mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__get_random_destination__6__rand_y 
                = (0xffU & (IData)(__Vfunc_mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__get_random_destination__6__random_id));
            __Vfunc_mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__encode_xy__7__y 
                = __Vfunc_mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__get_random_destination__6__rand_y;
            __Vfunc_mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__encode_xy__7__Vfuncout 
                = __Vfunc_mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__encode_xy__7__y;
            __Vfunc_mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__get_random_destination__6__Vfuncout 
                = __Vfunc_mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__encode_xy__7__Vfuncout;
            __Vdly__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__destination 
                = __Vfunc_mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__get_random_destination__6__Vfuncout;
            vlSelfRef.mesh_onoc__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__ip_inst__packet_out[0U] 
                = (1U | ((IData)((((QData)((IData)(
                                                   (0x20000U 
                                                    | vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__payload))) 
                                   << 0x20U) | (QData)((IData)(vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__cycle_counter)))) 
                         << 1U));
            vlSelfRef.mesh_onoc__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__ip_inst__packet_out[1U] 
                = (((IData)((((QData)((IData)((0x20000U 
                                               | vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__payload))) 
                              << 0x20U) | (QData)((IData)(vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__cycle_counter)))) 
                    >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                            (0x20000U 
                                                             | vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__payload))) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__cycle_counter))) 
                                          >> 0x20U)) 
                                 << 1U));
            vlSelfRef.mesh_onoc__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__ip_inst__packet_out[2U] 
                = ((0xfffffffeU & vlSelfRef.mesh_onoc__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__ip_inst__packet_out[2U]) 
                   | ((IData)(((((QData)((IData)((0x20000U 
                                                  | vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__payload))) 
                                 << 0x20U) | (QData)((IData)(vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__cycle_counter))) 
                               >> 0x20U)) >> 0x1fU));
            vlSelfRef.mesh_onoc__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__ip_inst__packet_out[2U] 
                = ((1U & vlSelfRef.mesh_onoc__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__ip_inst__packet_out[2U]) 
                   | (0xfffffffeU & (0x20000U | ((IData)(vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__destination) 
                                                 << 1U))));
            vlSelfRef.mesh_onoc__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__ip_inst__packet_out[3U] 
                = ((IData)(vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__destination) 
                   >> 0x1fU);
            VL_WRITEF_NX("IP 2 sending %11d to dest %0#\n",0,
                         32,vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__payload,
                         16,(IData)(vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__destination));
            vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__payload 
                = ((IData)(1U) + vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__payload);
        } else {
            vlSelfRef.mesh_onoc__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__ip_inst__valid_out = 0U;
            __Vdly__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__pkt_sent_last_cycle = 0U;
        }
        __Vdly__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__cycle_counter 
            = ((IData)(1U) + vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__cycle_counter);
    }
    if (vlSelfRef.rst) {
        vlSelfRef.mesh_onoc__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__ip_inst__packet_out[0U] = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__ip_inst__packet_out[1U] = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__ip_inst__packet_out[2U] = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__ip_inst__packet_out[3U] = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__ip_inst__valid_out = 0U;
        __Vdly__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__pkt_sent_last_cycle = 0U;
        __Vdly__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__cycle_counter = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__ip_inst__packet_out[0U] = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__ip_inst__packet_out[1U] = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__ip_inst__packet_out[2U] = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__ip_inst__packet_out[3U] = 0U;
    } else {
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__unnamedblk1__DOT__send_now 
            = (VL_ITOR_D_I(32, VL_MODDIV_III(32, (IData)(
                                                         VL_RANDOM_I()), (IData)(0x64U))) 
               < (50.0 + (50.0 * sin(((6.28000000000000025e+00 
                                       * VL_ISTOR_D_I(32, vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__cycle_counter)) 
                                      / 50.0)))));
        if (VL_UNLIKELY((((IData)(vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__unnamedblk1__DOT__send_now) 
                          & (~ (IData)(vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__pending_send_packet))) 
                         & (~ (IData)(vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__pkt_sent_last_cycle))))) {
            __Vfunc_mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__get_random_destination__9__self_id = 3U;
            __Vfunc_mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__get_random_destination__9__random_id 
                = (0xffffU & VL_URANDOM_RANGE_I(0U, 1U));
            vlSelfRef.mesh_onoc__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__ip_inst__valid_out = 1U;
            __Vdly__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__pkt_sent_last_cycle = 1U;
            while (((IData)(__Vfunc_mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__get_random_destination__9__random_id) 
                    == (IData)(__Vfunc_mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__get_random_destination__9__self_id))) {
                __Vfunc_mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__get_random_destination__9__random_id 
                    = (0xffffU & VL_URANDOM_RANGE_I(0U, 1U));
            }
            __Vfunc_mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__get_random_destination__9__rand_y 
                = (0xffU & (IData)(__Vfunc_mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__get_random_destination__9__random_id));
            __Vfunc_mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__encode_xy__10__y 
                = __Vfunc_mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__get_random_destination__9__rand_y;
            __Vfunc_mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__encode_xy__10__Vfuncout 
                = __Vfunc_mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__encode_xy__10__y;
            __Vfunc_mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__get_random_destination__9__Vfuncout 
                = __Vfunc_mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__encode_xy__10__Vfuncout;
            __Vdly__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__destination 
                = __Vfunc_mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__get_random_destination__9__Vfuncout;
            vlSelfRef.mesh_onoc__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__ip_inst__packet_out[0U] 
                = (1U | ((IData)((((QData)((IData)(
                                                   (0x30000U 
                                                    | vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__payload))) 
                                   << 0x20U) | (QData)((IData)(vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__cycle_counter)))) 
                         << 1U));
            vlSelfRef.mesh_onoc__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__ip_inst__packet_out[1U] 
                = (((IData)((((QData)((IData)((0x30000U 
                                               | vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__payload))) 
                              << 0x20U) | (QData)((IData)(vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__cycle_counter)))) 
                    >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                            (0x30000U 
                                                             | vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__payload))) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__cycle_counter))) 
                                          >> 0x20U)) 
                                 << 1U));
            vlSelfRef.mesh_onoc__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__ip_inst__packet_out[2U] 
                = ((0xfffffffeU & vlSelfRef.mesh_onoc__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__ip_inst__packet_out[2U]) 
                   | ((IData)(((((QData)((IData)((0x30000U 
                                                  | vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__payload))) 
                                 << 0x20U) | (QData)((IData)(vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__cycle_counter))) 
                               >> 0x20U)) >> 0x1fU));
            vlSelfRef.mesh_onoc__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__ip_inst__packet_out[2U] 
                = ((1U & vlSelfRef.mesh_onoc__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__ip_inst__packet_out[2U]) 
                   | (0xfffffffeU & (0x2020000U | ((IData)(vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__destination) 
                                                   << 1U))));
            vlSelfRef.mesh_onoc__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__ip_inst__packet_out[3U] 
                = ((IData)(vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__destination) 
                   >> 0x1fU);
            VL_WRITEF_NX("IP 3 sending %11d to dest %0#\n",0,
                         32,vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__payload,
                         16,(IData)(vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__destination));
            vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__payload 
                = ((IData)(1U) + vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__payload);
        } else {
            vlSelfRef.mesh_onoc__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__ip_inst__valid_out = 0U;
            __Vdly__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__pkt_sent_last_cycle = 0U;
        }
        __Vdly__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__cycle_counter 
            = ((IData)(1U) + vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__cycle_counter);
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v0) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[0U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[0U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[0U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[0U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[1U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[1U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[1U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[1U][3U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v2) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[0U][0U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v2[0U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[0U][1U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v2[1U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[0U][2U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v2[2U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[0U][3U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v2[3U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[1U][0U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v3[0U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[1U][1U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v3[1U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[1U][2U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v3[2U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[1U][3U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v3[3U];
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v0) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[0U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[0U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[0U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[0U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[1U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[1U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[1U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[1U][3U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v2) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[0U][0U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v2[0U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[0U][1U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v2[1U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[0U][2U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v2[2U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[0U][3U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v2[3U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[1U][0U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v3[0U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[1U][1U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v3[1U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[1U][2U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v3[2U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[1U][3U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v3[3U];
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v0) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[0U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[0U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[0U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[0U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[1U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[1U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[1U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[1U][3U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v2) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[0U][0U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v2[0U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[0U][1U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v2[1U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[0U][2U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v2[2U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[0U][3U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v2[3U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[1U][0U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v3[0U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[1U][1U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v3[1U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[1U][2U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v3[2U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[1U][3U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v3[3U];
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v0) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[0U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[0U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[0U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[0U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[1U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[1U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[1U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[1U][3U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v2) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[0U][0U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v2[0U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[0U][1U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v2[1U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[0U][2U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v2[2U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[0U][3U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v2[3U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[1U][0U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v3[0U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[1U][1U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v3[1U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[1U][2U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v3[2U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[1U][3U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v3[3U];
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v0) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[0U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[0U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[0U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[0U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[1U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[1U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[1U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[1U][3U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v2) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[0U][0U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v2[0U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[0U][1U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v2[1U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[0U][2U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v2[2U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[0U][3U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v2[3U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[1U][0U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v3[0U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[1U][1U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v3[1U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[1U][2U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v3[2U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[1U][3U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v3[3U];
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v0) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[0U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[0U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[0U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[0U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[1U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[1U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[1U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[1U][3U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v2) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[0U][0U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v2[0U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[0U][1U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v2[1U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[0U][2U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v2[2U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[0U][3U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v2[3U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[1U][0U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v3[0U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[1U][1U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v3[1U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[1U][2U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v3[2U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[1U][3U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v3[3U];
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v0) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[0U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[0U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[0U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[0U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[1U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[1U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[1U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[1U][3U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v2) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[0U][0U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v2[0U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[0U][1U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v2[1U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[0U][2U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v2[2U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[0U][3U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v2[3U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[1U][0U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v3[0U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[1U][1U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v3[1U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[1U][2U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v3[2U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[1U][3U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v3[3U];
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v0) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[0U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[0U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[0U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[0U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[1U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[1U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[1U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[1U][3U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v2) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[0U][0U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v2[0U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[0U][1U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v2[1U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[0U][2U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v2[2U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[0U][3U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v2[3U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[1U][0U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v3[0U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[1U][1U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v3[1U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[1U][2U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v3[2U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[1U][3U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v3[3U];
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v0) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[0U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[0U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[0U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[0U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[1U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[1U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[1U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[1U][3U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v2) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[0U][0U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v2[0U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[0U][1U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v2[1U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[0U][2U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v2[2U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[0U][3U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v2[3U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[1U][0U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v3[0U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[1U][1U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v3[1U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[1U][2U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v3[2U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[1U][3U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v3[3U];
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v0) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[0U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[0U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[0U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[0U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[1U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[1U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[1U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[1U][3U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v2) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[0U][0U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v2[0U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[0U][1U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v2[1U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[0U][2U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v2[2U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[0U][3U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v2[3U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[1U][0U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v3[0U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[1U][1U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v3[1U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[1U][2U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v3[2U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[1U][3U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v3[3U];
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v0) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[0U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[0U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[0U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[0U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[1U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[1U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[1U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[1U][3U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v2) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[0U][0U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v2[0U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[0U][1U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v2[1U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[0U][2U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v2[2U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[0U][3U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v2[3U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[1U][0U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v3[0U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[1U][1U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v3[1U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[1U][2U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v3[2U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[1U][3U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v3[3U];
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v0) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[0U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[0U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[0U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[0U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[1U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[1U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[1U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[1U][3U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v2) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[0U][0U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v2[0U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[0U][1U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v2[1U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[0U][2U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v2[2U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[0U][3U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v2[3U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[1U][0U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v3[0U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[1U][1U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v3[1U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[1U][2U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v3[2U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[1U][3U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v3[3U];
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v0) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[0U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[0U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[0U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[0U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[1U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[1U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[1U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[1U][3U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v2) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[0U][0U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v2[0U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[0U][1U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v2[1U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[0U][2U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v2[2U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[0U][3U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v2[3U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[1U][0U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v3[0U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[1U][1U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v3[1U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[1U][2U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v3[2U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer[1U][3U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer__v3[3U];
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v0) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[0U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[0U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[0U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[0U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[1U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[1U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[1U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[1U][3U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v2) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[0U][0U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v2[0U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[0U][1U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v2[1U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[0U][2U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v2[2U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[0U][3U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v2[3U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[1U][0U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v3[0U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[1U][1U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v3[1U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[1U][2U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v3[2U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer[1U][3U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer__v3[3U];
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v0) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[0U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[0U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[0U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[0U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[1U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[1U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[1U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[1U][3U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v2) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[0U][0U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v2[0U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[0U][1U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v2[1U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[0U][2U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v2[2U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[0U][3U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v2[3U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[1U][0U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v3[0U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[1U][1U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v3[1U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[1U][2U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v3[2U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer[1U][3U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer__v3[3U];
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v0) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[0U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[0U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[0U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[0U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[1U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[1U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[1U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[1U][3U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v2) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[0U][0U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v2[0U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[0U][1U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v2[1U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[0U][2U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v2[2U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[0U][3U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v2[3U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[1U][0U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v3[0U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[1U][1U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v3[1U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[1U][2U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v3[2U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer[1U][3U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer__v3[3U];
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v0) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf[0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf[1U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v2) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf[0U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v2;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf[1U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v3;
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v0) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf[0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf[1U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v2) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf[0U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v2;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf[1U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v3;
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v0) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf[0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf[1U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v2) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf[0U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v2;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf[1U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v3;
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v0) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf[0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf[1U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v2) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf[0U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v2;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf[1U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v3;
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v0) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf[0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf[1U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v2) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf[0U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v2;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf[1U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v3;
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v0) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf[0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf[1U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v2) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf[0U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v2;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf[1U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v3;
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v0) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf[0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf[1U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v2) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf[0U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v2;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf[1U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v3;
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v0) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf[0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf[1U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v2) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf[0U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v2;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf[1U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v3;
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v0) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf[0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf[1U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v2) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf[0U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v2;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf[1U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v3;
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v0) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf[0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf[1U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v2) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf[0U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v2;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf[1U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v3;
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v0) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf[0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf[1U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v2) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf[0U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v2;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf[1U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v3;
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v0) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf[0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf[1U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v2) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf[0U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v2;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf[1U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v3;
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v0) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf[0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf[1U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v2) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf[0U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v2;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf[1U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf__v3;
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v0) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf[0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf[1U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v2) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf[0U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v2;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf[1U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf__v3;
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v0) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf[0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf[1U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v2) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf[0U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v2;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf[1U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf__v3;
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v0) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf[0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf[1U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v2) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf[0U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v2;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf[1U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf__v3;
    }
    vlSelfRef.mesh_onoc__DOT__arb__DOT__waiting_for_done 
        = __Vdly__mesh_onoc__DOT__arb__DOT__waiting_for_done;
    vlSelfRef.mesh_onoc__DOT__arb__DOT__current_grant 
        = __Vdly__mesh_onoc__DOT__arb__DOT__current_grant;
    if (__VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v0) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[0U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[0U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[0U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[0U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[1U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[1U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[1U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[1U][3U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v2) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[0U][0U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v2[0U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[0U][1U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v2[1U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[0U][2U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v2[2U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[0U][3U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v2[3U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[1U][0U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v3[0U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[1U][1U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v3[1U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[1U][2U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v3[2U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[1U][3U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v3[3U];
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v0) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[0U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[0U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[0U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[0U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[1U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[1U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[1U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[1U][3U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v2) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[0U][0U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v2[0U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[0U][1U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v2[1U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[0U][2U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v2[2U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[0U][3U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v2[3U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[1U][0U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v3[0U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[1U][1U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v3[1U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[1U][2U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v3[2U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[1U][3U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v3[3U];
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v0) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[0U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[0U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[0U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[0U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[1U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[1U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[1U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[1U][3U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v2) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[0U][0U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v2[0U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[0U][1U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v2[1U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[0U][2U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v2[2U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[0U][3U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v2[3U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[1U][0U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v3[0U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[1U][1U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v3[1U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[1U][2U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v3[2U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[1U][3U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v3[3U];
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v0) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[0U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[0U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[0U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[0U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[1U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[1U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[1U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[1U][3U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v2) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[0U][0U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v2[0U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[0U][1U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v2[1U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[0U][2U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v2[2U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[0U][3U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v2[3U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[1U][0U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v3[0U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[1U][1U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v3[1U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[1U][2U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v3[2U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[1U][3U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v3[3U];
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v0) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[0U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[0U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[0U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[0U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[1U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[1U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[1U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[1U][3U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v2) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[0U][0U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v2[0U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[0U][1U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v2[1U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[0U][2U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v2[2U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[0U][3U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v2[3U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[1U][0U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v3[0U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[1U][1U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v3[1U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[1U][2U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v3[2U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[1U][3U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v3[3U];
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v0) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[0U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[0U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[0U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[0U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[1U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[1U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[1U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[1U][3U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v2) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[0U][0U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v2[0U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[0U][1U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v2[1U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[0U][2U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v2[2U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[0U][3U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v2[3U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[1U][0U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v3[0U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[1U][1U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v3[1U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[1U][2U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v3[2U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[1U][3U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v3[3U];
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v0) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[0U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[0U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[0U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[0U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[1U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[1U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[1U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[1U][3U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v2) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[0U][0U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v2[0U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[0U][1U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v2[1U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[0U][2U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v2[2U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[0U][3U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v2[3U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[1U][0U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v3[0U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[1U][1U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v3[1U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[1U][2U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v3[2U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[1U][3U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v3[3U];
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v0) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[0U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[0U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[0U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[0U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[1U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[1U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[1U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[1U][3U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v2) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[0U][0U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v2[0U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[0U][1U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v2[1U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[0U][2U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v2[2U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[0U][3U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v2[3U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[1U][0U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v3[0U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[1U][1U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v3[1U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[1U][2U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v3[2U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[1U][3U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v3[3U];
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v0) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[0U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[0U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[0U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[0U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[1U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[1U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[1U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[1U][3U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v2) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[0U][0U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v2[0U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[0U][1U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v2[1U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[0U][2U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v2[2U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[0U][3U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v2[3U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[1U][0U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v3[0U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[1U][1U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v3[1U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[1U][2U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v3[2U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[1U][3U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v3[3U];
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v0) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[0U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[0U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[0U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[0U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[1U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[1U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[1U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[1U][3U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v2) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[0U][0U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v2[0U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[0U][1U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v2[1U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[0U][2U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v2[2U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[0U][3U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v2[3U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[1U][0U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v3[0U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[1U][1U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v3[1U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[1U][2U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v3[2U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[1U][3U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v3[3U];
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v0) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[0U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[0U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[0U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[0U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[1U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[1U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[1U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[1U][3U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v2) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[0U][0U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v2[0U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[0U][1U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v2[1U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[0U][2U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v2[2U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[0U][3U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v2[3U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[1U][0U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v3[0U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[1U][1U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v3[1U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[1U][2U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v3[2U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[1U][3U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v3[3U];
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v0) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[0U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[0U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[0U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[0U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[1U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[1U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[1U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[1U][3U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v2) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[0U][0U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v2[0U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[0U][1U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v2[1U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[0U][2U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v2[2U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[0U][3U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v2[3U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[1U][0U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v3[0U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[1U][1U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v3[1U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[1U][2U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v3[2U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[1U][3U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v3[3U];
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v0) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[0U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[0U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[0U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[0U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[1U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[1U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[1U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[1U][3U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v2) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[0U][0U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v2[0U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[0U][1U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v2[1U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[0U][2U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v2[2U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[0U][3U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v2[3U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[1U][0U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v3[0U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[1U][1U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v3[1U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[1U][2U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v3[2U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer[1U][3U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer__v3[3U];
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v0) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[0U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[0U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[0U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[0U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[1U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[1U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[1U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[1U][3U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v2) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[0U][0U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v2[0U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[0U][1U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v2[1U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[0U][2U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v2[2U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[0U][3U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v2[3U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[1U][0U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v3[0U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[1U][1U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v3[1U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[1U][2U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v3[2U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer[1U][3U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer__v3[3U];
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v0) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[0U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[0U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[0U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[0U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[1U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[1U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[1U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[1U][3U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v2) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[0U][0U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v2[0U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[0U][1U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v2[1U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[0U][2U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v2[2U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[0U][3U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v2[3U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[1U][0U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v3[0U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[1U][1U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v3[1U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[1U][2U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v3[2U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer[1U][3U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer__v3[3U];
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v0) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[0U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[0U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[0U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[0U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[1U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[1U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[1U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[1U][3U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v2) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[0U][0U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v2[0U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[0U][1U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v2[1U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[0U][2U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v2[2U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[0U][3U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v2[3U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[1U][0U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v3[0U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[1U][1U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v3[1U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[1U][2U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v3[2U];
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer[1U][3U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer__v3[3U];
    }
    vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__current_cycle 
        = __Vdly__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__current_cycle;
    if (__VdlySet__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left__v0) {
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left[0U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left[0U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left[0U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left[0U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_left[0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right[0U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right[0U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right[0U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right[0U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_right[0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left[1U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left[1U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left[1U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left[1U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_left[1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right[1U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right[1U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right[1U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right[1U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_right[1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left[2U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left[2U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left[2U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left[2U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_left[2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right[2U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right[2U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right[2U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right[2U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_right[2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left[3U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left[3U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left[3U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left[3U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_left[3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right[3U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right[3U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right[3U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right[3U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_right[3U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left__v4) {
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left[3U][0U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left__v4[0U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left[3U][1U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left__v4[1U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left[3U][2U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left__v4[2U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left[3U][3U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left__v4[3U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_left[3U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_left__v4;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right[3U][0U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right__v4[0U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right[3U][1U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right__v4[1U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right[3U][2U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right__v4[2U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right[3U][3U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right__v4[3U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_right[3U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_right__v4;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left[2U][0U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left__v5[0U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left[2U][1U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left__v5[1U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left[2U][2U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left__v5[2U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left[2U][3U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left__v5[3U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_left[2U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_left__v5;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right[2U][0U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right__v5[0U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right[2U][1U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right__v5[1U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right[2U][2U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right__v5[2U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right[2U][3U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right__v5[3U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_right[2U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_right__v5;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left[1U][0U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left__v6[0U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left[1U][1U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left__v6[1U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left[1U][2U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left__v6[2U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left[1U][3U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left__v6[3U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_left[1U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_left__v6;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right[1U][0U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right__v6[0U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right[1U][1U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right__v6[1U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right[1U][2U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right__v6[2U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right[1U][3U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right__v6[3U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_right[1U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_right__v6;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left[0U][0U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left__v7[0U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left[0U][1U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left__v7[1U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left[0U][2U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left__v7[2U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left[0U][3U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left__v7[3U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_left[0U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_left__v7;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right[0U][0U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right__v7[0U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right[0U][1U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right__v7[1U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right[0U][2U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right__v7[2U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right[0U][3U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right__v7[3U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_right[0U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_right__v7;
    }
    vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__current_cycle 
        = __Vdly__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__current_cycle;
    if (__VdlySet__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left__v0) {
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left[0U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left[0U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left[0U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left[0U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_left[0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right[0U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right[0U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right[0U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right[0U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_right[0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left[1U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left[1U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left[1U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left[1U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_left[1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right[1U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right[1U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right[1U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right[1U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_right[1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left[2U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left[2U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left[2U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left[2U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_left[2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right[2U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right[2U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right[2U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right[2U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_right[2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left[3U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left[3U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left[3U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left[3U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_left[3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right[3U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right[3U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right[3U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right[3U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_right[3U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left__v4) {
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left[3U][0U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left__v4[0U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left[3U][1U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left__v4[1U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left[3U][2U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left__v4[2U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left[3U][3U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left__v4[3U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_left[3U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_left__v4;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right[3U][0U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right__v4[0U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right[3U][1U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right__v4[1U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right[3U][2U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right__v4[2U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right[3U][3U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right__v4[3U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_right[3U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_right__v4;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left[2U][0U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left__v5[0U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left[2U][1U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left__v5[1U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left[2U][2U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left__v5[2U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left[2U][3U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left__v5[3U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_left[2U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_left__v5;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right[2U][0U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right__v5[0U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right[2U][1U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right__v5[1U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right[2U][2U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right__v5[2U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right[2U][3U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right__v5[3U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_right[2U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_right__v5;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left[1U][0U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left__v6[0U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left[1U][1U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left__v6[1U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left[1U][2U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left__v6[2U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left[1U][3U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left__v6[3U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_left[1U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_left__v6;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right[1U][0U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right__v6[0U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right[1U][1U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right__v6[1U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right[1U][2U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right__v6[2U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right[1U][3U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right__v6[3U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_right[1U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_right__v6;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left[0U][0U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left__v7[0U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left[0U][1U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left__v7[1U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left[0U][2U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left__v7[2U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left[0U][3U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left__v7[3U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_left[0U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_left__v7;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right[0U][0U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right__v7[0U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right[0U][1U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right__v7[1U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right[0U][2U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right__v7[2U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right[0U][3U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right__v7[3U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_right[0U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_right__v7;
    }
    vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__current_cycle 
        = __Vdly__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__current_cycle;
    if (__VdlySet__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left__v0) {
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left[0U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left[0U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left[0U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left[0U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_left[0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right[0U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right[0U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right[0U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right[0U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_right[0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left[1U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left[1U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left[1U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left[1U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_left[1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right[1U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right[1U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right[1U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right[1U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_right[1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left[2U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left[2U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left[2U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left[2U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_left[2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right[2U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right[2U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right[2U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right[2U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_right[2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left[3U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left[3U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left[3U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left[3U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_left[3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right[3U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right[3U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right[3U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right[3U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_right[3U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left__v4) {
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left[3U][0U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left__v4[0U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left[3U][1U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left__v4[1U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left[3U][2U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left__v4[2U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left[3U][3U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left__v4[3U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_left[3U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_left__v4;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right[3U][0U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right__v4[0U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right[3U][1U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right__v4[1U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right[3U][2U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right__v4[2U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right[3U][3U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right__v4[3U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_right[3U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_right__v4;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left[2U][0U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left__v5[0U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left[2U][1U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left__v5[1U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left[2U][2U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left__v5[2U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left[2U][3U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left__v5[3U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_left[2U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_left__v5;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right[2U][0U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right__v5[0U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right[2U][1U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right__v5[1U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right[2U][2U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right__v5[2U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right[2U][3U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right__v5[3U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_right[2U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_right__v5;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left[1U][0U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left__v6[0U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left[1U][1U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left__v6[1U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left[1U][2U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left__v6[2U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left[1U][3U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left__v6[3U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_left[1U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_left__v6;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right[1U][0U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right__v6[0U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right[1U][1U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right__v6[1U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right[1U][2U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right__v6[2U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right[1U][3U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right__v6[3U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_right[1U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_right__v6;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left[0U][0U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left__v7[0U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left[0U][1U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left__v7[1U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left[0U][2U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left__v7[2U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left[0U][3U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left__v7[3U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_left[0U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_left__v7;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right[0U][0U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right__v7[0U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right[0U][1U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right__v7[1U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right[0U][2U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right__v7[2U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right[0U][3U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right__v7[3U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_right[0U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_right__v7;
    }
    vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__current_cycle 
        = __Vdly__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__current_cycle;
    if (__VdlySet__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left__v0) {
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left[0U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left[0U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left[0U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left[0U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_left[0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right[0U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right[0U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right[0U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right[0U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_right[0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left[1U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left[1U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left[1U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left[1U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_left[1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right[1U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right[1U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right[1U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right[1U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_right[1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left[2U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left[2U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left[2U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left[2U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_left[2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right[2U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right[2U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right[2U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right[2U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_right[2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left[3U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left[3U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left[3U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left[3U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_left[3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right[3U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right[3U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right[3U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right[3U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_right[3U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left__v4) {
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left[3U][0U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left__v4[0U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left[3U][1U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left__v4[1U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left[3U][2U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left__v4[2U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left[3U][3U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left__v4[3U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_left[3U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_left__v4;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right[3U][0U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right__v4[0U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right[3U][1U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right__v4[1U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right[3U][2U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right__v4[2U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right[3U][3U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right__v4[3U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_right[3U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_right__v4;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left[2U][0U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left__v5[0U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left[2U][1U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left__v5[1U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left[2U][2U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left__v5[2U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left[2U][3U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left__v5[3U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_left[2U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_left__v5;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right[2U][0U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right__v5[0U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right[2U][1U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right__v5[1U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right[2U][2U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right__v5[2U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right[2U][3U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right__v5[3U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_right[2U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_right__v5;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left[1U][0U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left__v6[0U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left[1U][1U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left__v6[1U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left[1U][2U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left__v6[2U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left[1U][3U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left__v6[3U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_left[1U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_left__v6;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right[1U][0U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right__v6[0U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right[1U][1U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right__v6[1U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right[1U][2U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right__v6[2U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right[1U][3U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right__v6[3U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_right[1U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_right__v6;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left[0U][0U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left__v7[0U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left[0U][1U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left__v7[1U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left[0U][2U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left__v7[2U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left[0U][3U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left__v7[3U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_left[0U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_left__v7;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right[0U][0U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right__v7[0U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right[0U][1U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right__v7[1U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right[0U][2U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right__v7[2U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right[0U][3U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right__v7[3U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_right[0U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_right__v7;
    }
    vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__current_cycle 
        = __Vdly__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__current_cycle;
    if (__VdlySet__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left__v0) {
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left[0U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left[0U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left[0U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left[0U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_left[0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right[0U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right[0U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right[0U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right[0U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_right[0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left[1U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left[1U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left[1U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left[1U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_left[1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right[1U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right[1U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right[1U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right[1U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_right[1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left[2U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left[2U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left[2U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left[2U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_left[2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right[2U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right[2U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right[2U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right[2U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_right[2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left[3U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left[3U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left[3U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left[3U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_left[3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right[3U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right[3U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right[3U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right[3U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_right[3U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left__v4) {
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left[3U][0U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left__v4[0U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left[3U][1U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left__v4[1U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left[3U][2U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left__v4[2U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left[3U][3U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left__v4[3U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_left[3U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_left__v4;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right[3U][0U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right__v4[0U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right[3U][1U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right__v4[1U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right[3U][2U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right__v4[2U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right[3U][3U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right__v4[3U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_right[3U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_right__v4;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left[2U][0U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left__v5[0U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left[2U][1U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left__v5[1U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left[2U][2U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left__v5[2U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left[2U][3U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left__v5[3U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_left[2U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_left__v5;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right[2U][0U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right__v5[0U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right[2U][1U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right__v5[1U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right[2U][2U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right__v5[2U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right[2U][3U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right__v5[3U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_right[2U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_right__v5;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left[1U][0U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left__v6[0U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left[1U][1U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left__v6[1U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left[1U][2U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left__v6[2U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left[1U][3U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left__v6[3U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_left[1U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_left__v6;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right[1U][0U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right__v6[0U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right[1U][1U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right__v6[1U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right[1U][2U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right__v6[2U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right[1U][3U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right__v6[3U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_right[1U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_right__v6;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left[0U][0U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left__v7[0U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left[0U][1U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left__v7[1U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left[0U][2U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left__v7[2U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left[0U][3U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left__v7[3U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_left[0U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_left__v7;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right[0U][0U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right__v7[0U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right[0U][1U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right__v7[1U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right[0U][2U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right__v7[2U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right[0U][3U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right__v7[3U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_right[0U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_right__v7;
    }
    vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__current_cycle 
        = __Vdly__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__current_cycle;
    if (__VdlySet__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left__v0) {
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left[0U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left[0U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left[0U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left[0U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_left[0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right[0U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right[0U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right[0U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right[0U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_right[0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left[1U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left[1U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left[1U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left[1U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_left[1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right[1U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right[1U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right[1U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right[1U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_right[1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left[2U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left[2U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left[2U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left[2U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_left[2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right[2U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right[2U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right[2U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right[2U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_right[2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left[3U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left[3U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left[3U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left[3U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_left[3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right[3U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right[3U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right[3U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right[3U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_right[3U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left__v4) {
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left[3U][0U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left__v4[0U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left[3U][1U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left__v4[1U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left[3U][2U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left__v4[2U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left[3U][3U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left__v4[3U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_left[3U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_left__v4;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right[3U][0U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right__v4[0U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right[3U][1U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right__v4[1U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right[3U][2U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right__v4[2U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right[3U][3U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right__v4[3U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_right[3U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_right__v4;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left[2U][0U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left__v5[0U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left[2U][1U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left__v5[1U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left[2U][2U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left__v5[2U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left[2U][3U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left__v5[3U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_left[2U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_left__v5;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right[2U][0U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right__v5[0U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right[2U][1U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right__v5[1U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right[2U][2U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right__v5[2U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right[2U][3U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right__v5[3U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_right[2U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_right__v5;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left[1U][0U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left__v6[0U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left[1U][1U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left__v6[1U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left[1U][2U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left__v6[2U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left[1U][3U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left__v6[3U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_left[1U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_left__v6;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right[1U][0U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right__v6[0U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right[1U][1U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right__v6[1U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right[1U][2U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right__v6[2U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right[1U][3U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right__v6[3U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_right[1U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_right__v6;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left[0U][0U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left__v7[0U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left[0U][1U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left__v7[1U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left[0U][2U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left__v7[2U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left[0U][3U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left__v7[3U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_left[0U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_left__v7;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right[0U][0U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right__v7[0U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right[0U][1U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right__v7[1U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right[0U][2U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right__v7[2U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right[0U][3U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right__v7[3U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_right[0U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_right__v7;
    }
    vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__current_cycle 
        = __Vdly__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__current_cycle;
    if (__VdlySet__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left__v0) {
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left[0U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left[0U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left[0U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left[0U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_left[0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right[0U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right[0U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right[0U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right[0U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_right[0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left[1U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left[1U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left[1U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left[1U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_left[1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right[1U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right[1U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right[1U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right[1U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_right[1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left[2U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left[2U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left[2U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left[2U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_left[2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right[2U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right[2U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right[2U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right[2U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_right[2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left[3U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left[3U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left[3U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left[3U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_left[3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right[3U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right[3U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right[3U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right[3U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_right[3U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left__v4) {
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left[3U][0U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left__v4[0U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left[3U][1U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left__v4[1U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left[3U][2U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left__v4[2U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left[3U][3U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left__v4[3U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_left[3U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_left__v4;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right[3U][0U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right__v4[0U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right[3U][1U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right__v4[1U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right[3U][2U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right__v4[2U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right[3U][3U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right__v4[3U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_right[3U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_right__v4;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left[2U][0U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left__v5[0U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left[2U][1U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left__v5[1U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left[2U][2U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left__v5[2U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left[2U][3U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left__v5[3U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_left[2U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_left__v5;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right[2U][0U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right__v5[0U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right[2U][1U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right__v5[1U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right[2U][2U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right__v5[2U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right[2U][3U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right__v5[3U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_right[2U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_right__v5;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left[1U][0U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left__v6[0U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left[1U][1U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left__v6[1U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left[1U][2U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left__v6[2U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left[1U][3U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left__v6[3U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_left[1U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_left__v6;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right[1U][0U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right__v6[0U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right[1U][1U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right__v6[1U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right[1U][2U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right__v6[2U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right[1U][3U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right__v6[3U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_right[1U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_right__v6;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left[0U][0U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left__v7[0U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left[0U][1U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left__v7[1U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left[0U][2U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left__v7[2U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left[0U][3U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left__v7[3U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_left[0U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_left__v7;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right[0U][0U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right__v7[0U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right[0U][1U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right__v7[1U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right[0U][2U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right__v7[2U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right[0U][3U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right__v7[3U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_right[0U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_right__v7;
    }
    vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__current_cycle 
        = __Vdly__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__current_cycle;
    if (__VdlySet__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left__v0) {
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left[0U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left[0U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left[0U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left[0U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_left[0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right[0U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right[0U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right[0U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right[0U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_right[0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left[1U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left[1U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left[1U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left[1U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_left[1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right[1U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right[1U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right[1U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right[1U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_right[1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left[2U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left[2U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left[2U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left[2U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_left[2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right[2U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right[2U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right[2U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right[2U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_right[2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left[3U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left[3U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left[3U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left[3U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_left[3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right[3U][0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right[3U][1U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right[3U][2U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right[3U][3U] = 0U;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_right[3U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left__v4) {
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left[3U][0U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left__v4[0U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left[3U][1U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left__v4[1U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left[3U][2U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left__v4[2U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left[3U][3U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left__v4[3U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_left[3U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_left__v4;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right[3U][0U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right__v4[0U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right[3U][1U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right__v4[1U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right[3U][2U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right__v4[2U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right[3U][3U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right__v4[3U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_right[3U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_right__v4;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left[2U][0U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left__v5[0U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left[2U][1U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left__v5[1U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left[2U][2U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left__v5[2U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left[2U][3U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left__v5[3U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_left[2U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_left__v5;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right[2U][0U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right__v5[0U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right[2U][1U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right__v5[1U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right[2U][2U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right__v5[2U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right[2U][3U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right__v5[3U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_right[2U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_right__v5;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left[1U][0U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left__v6[0U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left[1U][1U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left__v6[1U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left[1U][2U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left__v6[2U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left[1U][3U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left__v6[3U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_left[1U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_left__v6;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right[1U][0U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right__v6[0U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right[1U][1U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right__v6[1U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right[1U][2U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right__v6[2U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right[1U][3U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right__v6[3U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_right[1U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_right__v6;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left[0U][0U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left__v7[0U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left[0U][1U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left__v7[1U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left[0U][2U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left__v7[2U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left[0U][3U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left__v7[3U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_left[0U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_left__v7;
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right[0U][0U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right__v7[0U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right[0U][1U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right__v7[1U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right[0U][2U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right__v7[2U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right[0U][3U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right__v7[3U];
        vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_right[0U] 
            = __VdlyVal__mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_right__v7;
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v0) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf[0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf[1U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v2) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf[0U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v2;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf[1U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v3;
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v0) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf[0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf[1U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v2) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf[0U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v2;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf[1U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v3;
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v0) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf[0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf[1U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v2) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf[0U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v2;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf[1U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v3;
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v0) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf[0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf[1U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v2) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf[0U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v2;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf[1U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v3;
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v0) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf[0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf[1U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v2) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf[0U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v2;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf[1U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v3;
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v0) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf[0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf[1U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v2) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf[0U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v2;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf[1U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v3;
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v0) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf[0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf[1U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v2) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf[0U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v2;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf[1U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v3;
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v0) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf[0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf[1U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v2) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf[0U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v2;
        vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf[1U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v3;
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v0) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf[0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf[1U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v2) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf[0U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v2;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf[1U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v3;
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v0) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf[0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf[1U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v2) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf[0U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v2;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf[1U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v3;
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v0) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf[0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf[1U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v2) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf[0U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v2;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf[1U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v3;
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v0) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf[0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf[1U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v2) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf[0U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v2;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf[1U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v3;
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v0) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf[0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf[1U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v2) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf[0U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v2;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf[1U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf__v3;
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v0) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf[0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf[1U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v2) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf[0U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v2;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf[1U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf__v3;
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v0) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf[0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf[1U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v2) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf[0U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v2;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf[1U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf__v3;
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v0) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf[0U] = 0U;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf[1U] = 0U;
    }
    if (__VdlySet__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v2) {
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf[0U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v2;
        vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf[1U] 
            = __VdlyVal__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf__v3;
    }
    vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__pkt_sent_last_cycle 
        = __Vdly__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__pkt_sent_last_cycle;
    vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__cycle_counter 
        = __Vdly__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__cycle_counter;
    vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__destination 
        = __Vdly__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__destination;
    vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__pkt_sent_last_cycle 
        = __Vdly__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__pkt_sent_last_cycle;
    vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__cycle_counter 
        = __Vdly__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__cycle_counter;
    vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__destination 
        = __Vdly__mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__destination;
    vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__pkt_sent_last_cycle 
        = __Vdly__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__pkt_sent_last_cycle;
    vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__cycle_counter 
        = __Vdly__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__cycle_counter;
    vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__destination 
        = __Vdly__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__destination;
    vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__pkt_sent_last_cycle 
        = __Vdly__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__pkt_sent_last_cycle;
    vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__cycle_counter 
        = __Vdly__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__cycle_counter;
    vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__destination 
        = __Vdly__mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__destination;
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
    vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide[0U][0U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf
        [1U];
    vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide[0U][1U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf
        [1U];
    vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide[0U][2U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf
        [1U];
    vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide[0U][3U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf
        [1U];
    vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide[1U][0U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf
        [1U];
    vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide[1U][1U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf
        [1U];
    vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide[1U][2U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf
        [1U];
    vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide[1U][3U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf
        [1U];
    vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide[2U][0U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf
        [1U];
    vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide[2U][1U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf
        [1U];
    vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide[2U][2U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf
        [1U];
    vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide[2U][3U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf
        [1U];
    vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide[3U][0U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf
        [1U];
    vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide[3U][1U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf
        [1U];
    vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide[3U][2U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf
        [1U];
    vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide[3U][3U] 
        = vlSelfRef.mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf
        [1U];
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
    vlSelfRef.mesh_onoc__DOT__waveguide_valid_to_photodetector[0U][1U] 
        = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_right
        [3U];
    vlSelfRef.mesh_onoc__DOT__wg_packet_done[0U][1U] 
        = ((vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_left
            [2U] << 1U) | vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_right
           [2U]);
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
    vlSelfRef.mesh_onoc__DOT__waveguide_valid_to_photodetector[0U][2U] 
        = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_right
        [3U];
    vlSelfRef.mesh_onoc__DOT__wg_packet_done[0U][2U] 
        = ((vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_left
            [2U] << 1U) | vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_right
           [2U]);
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
    vlSelfRef.mesh_onoc__DOT__waveguide_valid_to_photodetector[1U][1U] 
        = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_right
        [3U];
    vlSelfRef.mesh_onoc__DOT__wg_packet_done[1U][1U] 
        = ((vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_left
            [2U] << 1U) | vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_right
           [2U]);
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
    vlSelfRef.mesh_onoc__DOT__waveguide_valid_to_photodetector[1U][3U] 
        = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_right
        [3U];
    vlSelfRef.mesh_onoc__DOT__wg_packet_done[1U][3U] 
        = ((vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_left
            [2U] << 1U) | vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_right
           [2U]);
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
    vlSelfRef.mesh_onoc__DOT__waveguide_valid_to_photodetector[2U][0U] 
        = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_right
        [3U];
    vlSelfRef.mesh_onoc__DOT__wg_packet_done[2U][0U] 
        = ((vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_left
            [2U] << 1U) | vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_right
           [2U]);
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
    vlSelfRef.mesh_onoc__DOT__waveguide_valid_to_photodetector[2U][2U] 
        = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_right
        [3U];
    vlSelfRef.mesh_onoc__DOT__wg_packet_done[2U][2U] 
        = ((vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_left
            [2U] << 1U) | vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_right
           [2U]);
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
    vlSelfRef.mesh_onoc__DOT__waveguide_valid_to_photodetector[3U][0U] 
        = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_right
        [3U];
    vlSelfRef.mesh_onoc__DOT__wg_packet_done[3U][0U] 
        = ((vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_left
            [2U] << 1U) | vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_right
           [2U]);
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
    vlSelfRef.mesh_onoc__DOT__waveguide_valid_to_photodetector[3U][3U] 
        = vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_right
        [3U];
    vlSelfRef.mesh_onoc__DOT__wg_packet_done[3U][3U] 
        = ((vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_left
            [2U] << 1U) | vlSelfRef.mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_right
           [2U]);
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
