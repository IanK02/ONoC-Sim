// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmesh_onoc.h for the primary calling header

#include "Vmesh_onoc__pch.h"
#include "Vmesh_onoc___024root.h"

VL_INLINE_OPT void Vmesh_onoc___024root___nba_sequent__TOP__1(Vmesh_onoc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmesh_onoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmesh_onoc___024root___nba_sequent__TOP__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*15:0*/ __Vfunc_mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__get_random_destination__0__Vfuncout;
    __Vfunc_mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__get_random_destination__0__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__get_random_destination__0__self_id;
    __Vfunc_mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__get_random_destination__0__self_id = 0;
    SData/*15:0*/ __Vfunc_mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__get_random_destination__0__random_id;
    __Vfunc_mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__get_random_destination__0__random_id = 0;
    CData/*7:0*/ __Vfunc_mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__get_random_destination__0__rand_x;
    __Vfunc_mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__get_random_destination__0__rand_x = 0;
    CData/*7:0*/ __Vfunc_mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__get_random_destination__0__rand_y;
    __Vfunc_mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__get_random_destination__0__rand_y = 0;
    SData/*15:0*/ __Vfunc_mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__encode_xy__1__Vfuncout;
    __Vfunc_mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__encode_xy__1__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__encode_xy__1__x;
    __Vfunc_mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__encode_xy__1__x = 0;
    CData/*7:0*/ __Vfunc_mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__encode_xy__1__y;
    __Vfunc_mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__encode_xy__1__y = 0;
    SData/*15:0*/ __Vfunc_mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__get_random_destination__23__Vfuncout;
    __Vfunc_mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__get_random_destination__23__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__get_random_destination__23__self_id;
    __Vfunc_mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__get_random_destination__23__self_id = 0;
    SData/*15:0*/ __Vfunc_mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__get_random_destination__23__random_id;
    __Vfunc_mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__get_random_destination__23__random_id = 0;
    CData/*7:0*/ __Vfunc_mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__get_random_destination__23__rand_x;
    __Vfunc_mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__get_random_destination__23__rand_x = 0;
    CData/*7:0*/ __Vfunc_mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__get_random_destination__23__rand_y;
    __Vfunc_mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__get_random_destination__23__rand_y = 0;
    SData/*15:0*/ __Vfunc_mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__encode_xy__24__Vfuncout;
    __Vfunc_mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__encode_xy__24__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__encode_xy__24__x;
    __Vfunc_mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__encode_xy__24__x = 0;
    CData/*7:0*/ __Vfunc_mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__encode_xy__24__y;
    __Vfunc_mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__encode_xy__24__y = 0;
    SData/*15:0*/ __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__get_random_destination__46__Vfuncout;
    __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__get_random_destination__46__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__get_random_destination__46__self_id;
    __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__get_random_destination__46__self_id = 0;
    SData/*15:0*/ __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__get_random_destination__46__random_id;
    __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__get_random_destination__46__random_id = 0;
    CData/*7:0*/ __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__get_random_destination__46__rand_x;
    __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__get_random_destination__46__rand_x = 0;
    CData/*7:0*/ __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__get_random_destination__46__rand_y;
    __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__get_random_destination__46__rand_y = 0;
    SData/*15:0*/ __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__encode_xy__47__Vfuncout;
    __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__encode_xy__47__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__encode_xy__47__x;
    __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__encode_xy__47__x = 0;
    CData/*7:0*/ __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__encode_xy__47__y;
    __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__encode_xy__47__y = 0;
    SData/*15:0*/ __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__get_random_destination__69__Vfuncout;
    __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__get_random_destination__69__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__get_random_destination__69__self_id;
    __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__get_random_destination__69__self_id = 0;
    SData/*15:0*/ __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__get_random_destination__69__random_id;
    __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__get_random_destination__69__random_id = 0;
    CData/*7:0*/ __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__get_random_destination__69__rand_x;
    __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__get_random_destination__69__rand_x = 0;
    CData/*7:0*/ __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__get_random_destination__69__rand_y;
    __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__get_random_destination__69__rand_y = 0;
    SData/*15:0*/ __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__encode_xy__70__Vfuncout;
    __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__encode_xy__70__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__encode_xy__70__x;
    __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__encode_xy__70__x = 0;
    CData/*7:0*/ __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__encode_xy__70__y;
    __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__encode_xy__70__y = 0;
    IData/*31:0*/ __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_for__72__Vfuncout;
    __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_for__72__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_for__72__dx;
    __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_for__72__dx = 0;
    IData/*31:0*/ __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_for__72__dy;
    __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_for__72__dy = 0;
    VlWide<4>/*96:0*/ __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__73__pkt;
    VL_ZERO_W(97, __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__73__pkt);
    IData/*31:0*/ __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__73__dir;
    __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__73__dir = 0;
    IData/*31:0*/ __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_for__74__Vfuncout;
    __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_for__74__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_for__74__dx;
    __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_for__74__dx = 0;
    IData/*31:0*/ __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_for__74__dy;
    __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_for__74__dy = 0;
    VlWide<4>/*96:0*/ __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__75__pkt;
    VL_ZERO_W(97, __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__75__pkt);
    IData/*31:0*/ __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__75__dir;
    __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__75__dir = 0;
    IData/*31:0*/ __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_for__76__Vfuncout;
    __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_for__76__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_for__76__dx;
    __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_for__76__dx = 0;
    IData/*31:0*/ __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_for__76__dy;
    __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_for__76__dy = 0;
    VlWide<4>/*96:0*/ __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__77__pkt;
    VL_ZERO_W(97, __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__77__pkt);
    IData/*31:0*/ __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__77__dir;
    __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__77__dir = 0;
    IData/*31:0*/ __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_for__78__Vfuncout;
    __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_for__78__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_for__78__dx;
    __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_for__78__dx = 0;
    IData/*31:0*/ __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_for__78__dy;
    __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_for__78__dy = 0;
    VlWide<4>/*96:0*/ __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__79__pkt;
    VL_ZERO_W(97, __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__79__pkt);
    IData/*31:0*/ __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__79__dir;
    __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__79__dir = 0;
    IData/*31:0*/ __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_for__80__Vfuncout;
    __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_for__80__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_for__80__dx;
    __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_for__80__dx = 0;
    IData/*31:0*/ __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_for__80__dy;
    __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_for__80__dy = 0;
    VlWide<4>/*96:0*/ __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__81__pkt;
    VL_ZERO_W(97, __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__81__pkt);
    IData/*31:0*/ __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__81__dir;
    __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__81__dir = 0;
    // Body
    if (vlSelfRef.rst) {
        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__valid_out_local = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__request_to_send = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__valid_out_north = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__valid_out_south = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__valid_out_east = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__valid_out_west = 0U;
        vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_local = 0U;
        vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_north = 0U;
        vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_south = 0U;
        vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_east = 0U;
        vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_west = 0U;
    } else {
        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__request_to_send = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__valid_out_local = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__valid_out_north = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__valid_out_south = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__valid_out_east = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__valid_out_west = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__been_sent_out_per_dir = 0U;
        if ((0U < (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_local))) {
            vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk2__DOT__p[0U] 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_local
                [(3U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_local))][0U];
            vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk2__DOT__p[1U] 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_local
                [(3U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_local))][1U];
            vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk2__DOT__p[2U] 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_local
                [(3U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_local))][2U];
            vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk2__DOT__p[3U] 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_local
                [(3U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_local))][3U];
            if ((IData)((0x202U == (0x1fffeU & vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk2__DOT__p[2U])))) {
                vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_local 
                    = (3U & ((IData)(1U) + (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_local)));
                vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_local 
                    = (7U & ((IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_local) 
                             - (IData)(1U)));
                vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_local[0U] 
                    = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk2__DOT__p[0U];
                vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_local[1U] 
                    = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk2__DOT__p[1U];
                vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_local[2U] 
                    = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk2__DOT__p[2U];
                vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_local[3U] 
                    = ((0xfffffffeU & vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_local[3U]) 
                       | vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk2__DOT__p[3U]);
                vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__valid_out_local 
                    = (1U | (IData)(vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__valid_out_local));
            } else {
                __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_for__72__dy 
                    = (0xffU & (vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk2__DOT__p[2U] 
                                >> 1U));
                __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_for__72__dx 
                    = (0xffU & (vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk2__DOT__p[2U] 
                                >> 9U));
                {
                    if (VL_LTS_III(32, 1U, __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_for__72__dx)) {
                        __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_for__72__Vfuncout = 2U;
                        goto __Vlabel120;
                    } else if (VL_GTS_III(32, 1U, __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_for__72__dx)) {
                        __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_for__72__Vfuncout = 3U;
                        goto __Vlabel120;
                    } else if (VL_LTS_III(32, 1U, __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_for__72__dy)) {
                        __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_for__72__Vfuncout = 1U;
                        goto __Vlabel120;
                    } else if (VL_GTS_III(32, 1U, __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_for__72__dy)) {
                        __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_for__72__Vfuncout = 0U;
                        goto __Vlabel120;
                    } else {
                        __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_for__72__Vfuncout = 0xffffffffU;
                        goto __Vlabel120;
                    }
                    __Vlabel120: ;
                }
                vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__dir 
                    = __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_for__72__Vfuncout;
                if (VL_LTES_III(32, 0U, vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__dir)) {
                    vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__request_to_send 
                        = ((IData)(vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__request_to_send) 
                           | (0xfU & ((IData)(1U) << 
                                      (3U & vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__dir))));
                }
                if (VL_UNLIKELY((1U & ((vlSelfRef.mesh_onoc__DOT__router_granted
                                        [3U] >> (3U 
                                                 & vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__dir)) 
                                       & (~ ((IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__been_sent_out_per_dir) 
                                             >> (3U 
                                                 & vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__dir))))))) {
                    vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__been_sent_out_per_dir 
                        = ((IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__been_sent_out_per_dir) 
                           | (0xfU & ((IData)(1U) << 
                                      (3U & vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__dir))));
                    VL_WRITEF_NX("Router 3 Dequeueing packet\n",0);
                    __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__73__dir 
                        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__dir;
                    __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__73__pkt[0U] 
                        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk2__DOT__p[0U];
                    __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__73__pkt[1U] 
                        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk2__DOT__p[1U];
                    __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__73__pkt[2U] 
                        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk2__DOT__p[2U];
                    __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__73__pkt[3U] 
                        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk2__DOT__p[3U];
                    if ((0U == __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__73__dir)) {
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_north[0U] 
                            = __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__73__pkt[0U];
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_north[1U] 
                            = __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__73__pkt[1U];
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_north[2U] 
                            = __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__73__pkt[2U];
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_north[3U] 
                            = __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__73__pkt[3U];
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__valid_out_north = 1U;
                    } else if ((1U == __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__73__dir)) {
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_south[0U] 
                            = __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__73__pkt[0U];
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_south[1U] 
                            = __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__73__pkt[1U];
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_south[2U] 
                            = __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__73__pkt[2U];
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_south[3U] 
                            = __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__73__pkt[3U];
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__valid_out_south = 1U;
                    } else if ((2U == __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__73__dir)) {
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_east[0U] 
                            = __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__73__pkt[0U];
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_east[1U] 
                            = __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__73__pkt[1U];
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_east[2U] 
                            = __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__73__pkt[2U];
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_east[3U] 
                            = __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__73__pkt[3U];
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__valid_out_east = 1U;
                    } else if ((3U == __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__73__dir)) {
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_west[0U] 
                            = __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__73__pkt[0U];
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_west[1U] 
                            = __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__73__pkt[1U];
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_west[2U] 
                            = __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__73__pkt[2U];
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_west[3U] 
                            = __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__73__pkt[3U];
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__valid_out_west = 1U;
                    }
                    vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_local 
                        = (3U & ((IData)(1U) + (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_local)));
                    vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_local 
                        = (7U & ((IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_local) 
                                 - (IData)(1U)));
                }
            }
        }
        if ((0U < (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_north))) {
            vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk4__DOT__p[0U] 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_north
                [(3U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_north))][0U];
            vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk4__DOT__p[1U] 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_north
                [(3U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_north))][1U];
            vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk4__DOT__p[2U] 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_north
                [(3U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_north))][2U];
            vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk4__DOT__p[3U] 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_north
                [(3U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_north))][3U];
            if ((IData)((0x202U == (0x1fffeU & vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk4__DOT__p[2U])))) {
                vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_local[0U] 
                    = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk4__DOT__p[0U];
                vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_local[1U] 
                    = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk4__DOT__p[1U];
                vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_local[2U] 
                    = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk4__DOT__p[2U];
                vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_local[3U] 
                    = ((0xfffffffeU & vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_local[3U]) 
                       | vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk4__DOT__p[3U]);
                vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__valid_out_local 
                    = (1U | (IData)(vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__valid_out_local));
                vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_north 
                    = (3U & ((IData)(1U) + (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_north)));
                vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_north 
                    = (7U & ((IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_north) 
                             - (IData)(1U)));
            } else {
                __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_for__74__dy 
                    = (0xffU & (vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk4__DOT__p[2U] 
                                >> 1U));
                __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_for__74__dx 
                    = (0xffU & (vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk4__DOT__p[2U] 
                                >> 9U));
                {
                    if (VL_LTS_III(32, 1U, __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_for__74__dx)) {
                        __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_for__74__Vfuncout = 2U;
                        goto __Vlabel121;
                    } else if (VL_GTS_III(32, 1U, __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_for__74__dx)) {
                        __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_for__74__Vfuncout = 3U;
                        goto __Vlabel121;
                    } else if (VL_LTS_III(32, 1U, __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_for__74__dy)) {
                        __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_for__74__Vfuncout = 1U;
                        goto __Vlabel121;
                    } else if (VL_GTS_III(32, 1U, __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_for__74__dy)) {
                        __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_for__74__Vfuncout = 0U;
                        goto __Vlabel121;
                    } else {
                        __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_for__74__Vfuncout = 0xffffffffU;
                        goto __Vlabel121;
                    }
                    __Vlabel121: ;
                }
                vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT__dir 
                    = __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_for__74__Vfuncout;
                if (VL_LTES_III(32, 0U, vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT__dir)) {
                    vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__request_to_send 
                        = ((IData)(vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__request_to_send) 
                           | (0xfU & ((IData)(1U) << 
                                      (3U & vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT__dir))));
                }
                if ((1U & ((vlSelfRef.mesh_onoc__DOT__router_granted
                            [3U] >> (3U & vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT__dir)) 
                           & (~ ((IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__been_sent_out_per_dir) 
                                 >> (3U & vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT__dir)))))) {
                    vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__been_sent_out_per_dir 
                        = ((IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__been_sent_out_per_dir) 
                           | (0xfU & ((IData)(1U) << 
                                      (3U & vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT__dir))));
                    __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__75__dir 
                        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk4__DOT__unnamedblk5__DOT__dir;
                    __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__75__pkt[0U] 
                        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk4__DOT__p[0U];
                    __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__75__pkt[1U] 
                        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk4__DOT__p[1U];
                    __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__75__pkt[2U] 
                        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk4__DOT__p[2U];
                    __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__75__pkt[3U] 
                        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk4__DOT__p[3U];
                    if ((0U == __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__75__dir)) {
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_north[0U] 
                            = __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__75__pkt[0U];
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_north[1U] 
                            = __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__75__pkt[1U];
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_north[2U] 
                            = __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__75__pkt[2U];
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_north[3U] 
                            = __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__75__pkt[3U];
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__valid_out_north = 1U;
                    } else if ((1U == __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__75__dir)) {
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_south[0U] 
                            = __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__75__pkt[0U];
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_south[1U] 
                            = __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__75__pkt[1U];
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_south[2U] 
                            = __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__75__pkt[2U];
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_south[3U] 
                            = __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__75__pkt[3U];
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__valid_out_south = 1U;
                    } else if ((2U == __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__75__dir)) {
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_east[0U] 
                            = __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__75__pkt[0U];
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_east[1U] 
                            = __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__75__pkt[1U];
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_east[2U] 
                            = __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__75__pkt[2U];
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_east[3U] 
                            = __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__75__pkt[3U];
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__valid_out_east = 1U;
                    } else if ((3U == __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__75__dir)) {
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_west[0U] 
                            = __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__75__pkt[0U];
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_west[1U] 
                            = __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__75__pkt[1U];
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_west[2U] 
                            = __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__75__pkt[2U];
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_west[3U] 
                            = __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__75__pkt[3U];
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__valid_out_west = 1U;
                    }
                    vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_north 
                        = (3U & ((IData)(1U) + (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_north)));
                    vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_north 
                        = (7U & ((IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_north) 
                                 - (IData)(1U)));
                }
            }
        }
        if ((0U < (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_south))) {
            vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk6__DOT__p[0U] 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_south
                [(3U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_south))][0U];
            vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk6__DOT__p[1U] 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_south
                [(3U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_south))][1U];
            vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk6__DOT__p[2U] 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_south
                [(3U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_south))][2U];
            vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk6__DOT__p[3U] 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_south
                [(3U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_south))][3U];
            if ((IData)((0x202U == (0x1fffeU & vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk6__DOT__p[2U])))) {
                vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_local[3U] 
                    = ((1U & vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_local[3U]) 
                       | (vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk6__DOT__p[0U] 
                          << 1U));
                vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_local[4U] 
                    = ((vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk6__DOT__p[0U] 
                        >> 0x1fU) | (vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk6__DOT__p[1U] 
                                     << 1U));
                vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_local[5U] 
                    = ((vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk6__DOT__p[1U] 
                        >> 0x1fU) | (vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk6__DOT__p[2U] 
                                     << 1U));
                vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_local[6U] 
                    = ((0xfffffffcU & vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_local[6U]) 
                       | ((vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk6__DOT__p[2U] 
                           >> 0x1fU) | (vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk6__DOT__p[3U] 
                                        << 1U)));
                vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__valid_out_local 
                    = (2U | (IData)(vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__valid_out_local));
                vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_south 
                    = (3U & ((IData)(1U) + (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_south)));
                vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_south 
                    = (7U & ((IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_south) 
                             - (IData)(1U)));
            } else {
                __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_for__76__dy 
                    = (0xffU & (vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk6__DOT__p[2U] 
                                >> 1U));
                __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_for__76__dx 
                    = (0xffU & (vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk6__DOT__p[2U] 
                                >> 9U));
                {
                    if (VL_LTS_III(32, 1U, __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_for__76__dx)) {
                        __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_for__76__Vfuncout = 2U;
                        goto __Vlabel122;
                    } else if (VL_GTS_III(32, 1U, __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_for__76__dx)) {
                        __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_for__76__Vfuncout = 3U;
                        goto __Vlabel122;
                    } else if (VL_LTS_III(32, 1U, __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_for__76__dy)) {
                        __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_for__76__Vfuncout = 1U;
                        goto __Vlabel122;
                    } else if (VL_GTS_III(32, 1U, __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_for__76__dy)) {
                        __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_for__76__Vfuncout = 0U;
                        goto __Vlabel122;
                    } else {
                        __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_for__76__Vfuncout = 0xffffffffU;
                        goto __Vlabel122;
                    }
                    __Vlabel122: ;
                }
                vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk6__DOT__unnamedblk7__DOT__dir 
                    = __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_for__76__Vfuncout;
                if (VL_LTES_III(32, 0U, vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk6__DOT__unnamedblk7__DOT__dir)) {
                    vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__request_to_send 
                        = ((IData)(vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__request_to_send) 
                           | (0xfU & ((IData)(1U) << 
                                      (3U & vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk6__DOT__unnamedblk7__DOT__dir))));
                }
                if ((1U & ((vlSelfRef.mesh_onoc__DOT__router_granted
                            [3U] >> (3U & vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk6__DOT__unnamedblk7__DOT__dir)) 
                           & (~ ((IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__been_sent_out_per_dir) 
                                 >> (3U & vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk6__DOT__unnamedblk7__DOT__dir)))))) {
                    vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__been_sent_out_per_dir 
                        = ((IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__been_sent_out_per_dir) 
                           | (0xfU & ((IData)(1U) << 
                                      (3U & vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk6__DOT__unnamedblk7__DOT__dir))));
                    __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__77__dir 
                        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk6__DOT__unnamedblk7__DOT__dir;
                    __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__77__pkt[0U] 
                        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk6__DOT__p[0U];
                    __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__77__pkt[1U] 
                        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk6__DOT__p[1U];
                    __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__77__pkt[2U] 
                        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk6__DOT__p[2U];
                    __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__77__pkt[3U] 
                        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk6__DOT__p[3U];
                    if ((0U == __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__77__dir)) {
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_north[0U] 
                            = __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__77__pkt[0U];
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_north[1U] 
                            = __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__77__pkt[1U];
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_north[2U] 
                            = __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__77__pkt[2U];
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_north[3U] 
                            = __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__77__pkt[3U];
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__valid_out_north = 1U;
                    } else if ((1U == __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__77__dir)) {
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_south[0U] 
                            = __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__77__pkt[0U];
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_south[1U] 
                            = __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__77__pkt[1U];
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_south[2U] 
                            = __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__77__pkt[2U];
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_south[3U] 
                            = __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__77__pkt[3U];
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__valid_out_south = 1U;
                    } else if ((2U == __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__77__dir)) {
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_east[0U] 
                            = __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__77__pkt[0U];
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_east[1U] 
                            = __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__77__pkt[1U];
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_east[2U] 
                            = __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__77__pkt[2U];
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_east[3U] 
                            = __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__77__pkt[3U];
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__valid_out_east = 1U;
                    } else if ((3U == __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__77__dir)) {
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_west[0U] 
                            = __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__77__pkt[0U];
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_west[1U] 
                            = __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__77__pkt[1U];
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_west[2U] 
                            = __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__77__pkt[2U];
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_west[3U] 
                            = __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__77__pkt[3U];
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__valid_out_west = 1U;
                    }
                    vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_south 
                        = (3U & ((IData)(1U) + (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_south)));
                    vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_south 
                        = (7U & ((IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_south) 
                                 - (IData)(1U)));
                }
            }
        }
        if ((0U < (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_east))) {
            vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk8__DOT__p[0U] 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_east
                [(3U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_east))][0U];
            vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk8__DOT__p[1U] 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_east
                [(3U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_east))][1U];
            vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk8__DOT__p[2U] 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_east
                [(3U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_east))][2U];
            vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk8__DOT__p[3U] 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_east
                [(3U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_east))][3U];
            if ((IData)((0x202U == (0x1fffeU & vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk8__DOT__p[2U])))) {
                vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_local[6U] 
                    = ((3U & vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_local[6U]) 
                       | (vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk8__DOT__p[0U] 
                          << 2U));
                vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_local[7U] 
                    = ((vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk8__DOT__p[0U] 
                        >> 0x1eU) | (vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk8__DOT__p[1U] 
                                     << 2U));
                vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_local[8U] 
                    = ((vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk8__DOT__p[1U] 
                        >> 0x1eU) | (vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk8__DOT__p[2U] 
                                     << 2U));
                vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_local[9U] 
                    = ((0xfffffff8U & vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_local[9U]) 
                       | ((vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk8__DOT__p[2U] 
                           >> 0x1eU) | (vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk8__DOT__p[3U] 
                                        << 2U)));
                vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__valid_out_local 
                    = (4U | (IData)(vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__valid_out_local));
                vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_east 
                    = (3U & ((IData)(1U) + (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_east)));
                vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_east 
                    = (7U & ((IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_east) 
                             - (IData)(1U)));
            } else {
                __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_for__78__dy 
                    = (0xffU & (vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk8__DOT__p[2U] 
                                >> 1U));
                __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_for__78__dx 
                    = (0xffU & (vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk8__DOT__p[2U] 
                                >> 9U));
                {
                    if (VL_LTS_III(32, 1U, __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_for__78__dx)) {
                        __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_for__78__Vfuncout = 2U;
                        goto __Vlabel123;
                    } else if (VL_GTS_III(32, 1U, __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_for__78__dx)) {
                        __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_for__78__Vfuncout = 3U;
                        goto __Vlabel123;
                    } else if (VL_LTS_III(32, 1U, __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_for__78__dy)) {
                        __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_for__78__Vfuncout = 1U;
                        goto __Vlabel123;
                    } else if (VL_GTS_III(32, 1U, __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_for__78__dy)) {
                        __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_for__78__Vfuncout = 0U;
                        goto __Vlabel123;
                    } else {
                        __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_for__78__Vfuncout = 0xffffffffU;
                        goto __Vlabel123;
                    }
                    __Vlabel123: ;
                }
                vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk8__DOT__unnamedblk9__DOT__dir 
                    = __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_for__78__Vfuncout;
                if (VL_LTES_III(32, 0U, vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk8__DOT__unnamedblk9__DOT__dir)) {
                    vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__request_to_send 
                        = ((IData)(vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__request_to_send) 
                           | (0xfU & ((IData)(1U) << 
                                      (3U & vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk8__DOT__unnamedblk9__DOT__dir))));
                }
                if ((1U & ((vlSelfRef.mesh_onoc__DOT__router_granted
                            [3U] >> (3U & vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk8__DOT__unnamedblk9__DOT__dir)) 
                           & (~ ((IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__been_sent_out_per_dir) 
                                 >> (3U & vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk8__DOT__unnamedblk9__DOT__dir)))))) {
                    vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__been_sent_out_per_dir 
                        = ((IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__been_sent_out_per_dir) 
                           | (0xfU & ((IData)(1U) << 
                                      (3U & vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk8__DOT__unnamedblk9__DOT__dir))));
                    __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__79__dir 
                        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk8__DOT__unnamedblk9__DOT__dir;
                    __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__79__pkt[0U] 
                        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk8__DOT__p[0U];
                    __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__79__pkt[1U] 
                        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk8__DOT__p[1U];
                    __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__79__pkt[2U] 
                        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk8__DOT__p[2U];
                    __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__79__pkt[3U] 
                        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk8__DOT__p[3U];
                    if ((0U == __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__79__dir)) {
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_north[0U] 
                            = __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__79__pkt[0U];
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_north[1U] 
                            = __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__79__pkt[1U];
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_north[2U] 
                            = __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__79__pkt[2U];
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_north[3U] 
                            = __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__79__pkt[3U];
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__valid_out_north = 1U;
                    } else if ((1U == __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__79__dir)) {
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_south[0U] 
                            = __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__79__pkt[0U];
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_south[1U] 
                            = __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__79__pkt[1U];
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_south[2U] 
                            = __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__79__pkt[2U];
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_south[3U] 
                            = __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__79__pkt[3U];
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__valid_out_south = 1U;
                    } else if ((2U == __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__79__dir)) {
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_east[0U] 
                            = __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__79__pkt[0U];
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_east[1U] 
                            = __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__79__pkt[1U];
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_east[2U] 
                            = __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__79__pkt[2U];
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_east[3U] 
                            = __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__79__pkt[3U];
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__valid_out_east = 1U;
                    } else if ((3U == __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__79__dir)) {
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_west[0U] 
                            = __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__79__pkt[0U];
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_west[1U] 
                            = __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__79__pkt[1U];
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_west[2U] 
                            = __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__79__pkt[2U];
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_west[3U] 
                            = __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__79__pkt[3U];
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__valid_out_west = 1U;
                    }
                    vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_east 
                        = (3U & ((IData)(1U) + (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_east)));
                    vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_east 
                        = (7U & ((IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_east) 
                                 - (IData)(1U)));
                }
            }
        }
        if ((0U < (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_west))) {
            vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk10__DOT__p[0U] 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_west
                [(3U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_west))][0U];
            vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk10__DOT__p[1U] 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_west
                [(3U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_west))][1U];
            vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk10__DOT__p[2U] 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_west
                [(3U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_west))][2U];
            vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk10__DOT__p[3U] 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_west
                [(3U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_west))][3U];
            if ((IData)((0x202U == (0x1fffeU & vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk10__DOT__p[2U])))) {
                vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_local[9U] 
                    = ((7U & vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_local[9U]) 
                       | (vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk10__DOT__p[0U] 
                          << 3U));
                vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_local[0xaU] 
                    = ((vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk10__DOT__p[0U] 
                        >> 0x1dU) | (vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk10__DOT__p[1U] 
                                     << 3U));
                vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_local[0xbU] 
                    = ((vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk10__DOT__p[1U] 
                        >> 0x1dU) | (vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk10__DOT__p[2U] 
                                     << 3U));
                vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_local[0xcU] 
                    = (0xfU & ((vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk10__DOT__p[2U] 
                                >> 0x1dU) | (vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk10__DOT__p[3U] 
                                             << 3U)));
                vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__valid_out_local 
                    = (8U | (IData)(vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__valid_out_local));
                vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_west 
                    = (3U & ((IData)(1U) + (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_west)));
                vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_west 
                    = (7U & ((IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_west) 
                             - (IData)(1U)));
            } else {
                __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_for__80__dy 
                    = (0xffU & (vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk10__DOT__p[2U] 
                                >> 1U));
                __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_for__80__dx 
                    = (0xffU & (vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk10__DOT__p[2U] 
                                >> 9U));
                {
                    if (VL_LTS_III(32, 1U, __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_for__80__dx)) {
                        __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_for__80__Vfuncout = 2U;
                        goto __Vlabel124;
                    } else if (VL_GTS_III(32, 1U, __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_for__80__dx)) {
                        __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_for__80__Vfuncout = 3U;
                        goto __Vlabel124;
                    } else if (VL_LTS_III(32, 1U, __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_for__80__dy)) {
                        __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_for__80__Vfuncout = 1U;
                        goto __Vlabel124;
                    } else if (VL_GTS_III(32, 1U, __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_for__80__dy)) {
                        __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_for__80__Vfuncout = 0U;
                        goto __Vlabel124;
                    } else {
                        __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_for__80__Vfuncout = 0xffffffffU;
                        goto __Vlabel124;
                    }
                    __Vlabel124: ;
                }
                vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk10__DOT__unnamedblk11__DOT__dir 
                    = __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_for__80__Vfuncout;
                if (VL_LTES_III(32, 0U, vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk10__DOT__unnamedblk11__DOT__dir)) {
                    vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__request_to_send 
                        = ((IData)(vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__request_to_send) 
                           | (0xfU & ((IData)(1U) << 
                                      (3U & vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk10__DOT__unnamedblk11__DOT__dir))));
                }
                if ((1U & ((vlSelfRef.mesh_onoc__DOT__router_granted
                            [3U] >> (3U & vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk10__DOT__unnamedblk11__DOT__dir)) 
                           & (~ ((IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__been_sent_out_per_dir) 
                                 >> (3U & vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk10__DOT__unnamedblk11__DOT__dir)))))) {
                    vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__been_sent_out_per_dir 
                        = ((IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__been_sent_out_per_dir) 
                           | (0xfU & ((IData)(1U) << 
                                      (3U & vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk10__DOT__unnamedblk11__DOT__dir))));
                    __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__81__dir 
                        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk10__DOT__unnamedblk11__DOT__dir;
                    __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__81__pkt[0U] 
                        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk10__DOT__p[0U];
                    __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__81__pkt[1U] 
                        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk10__DOT__p[1U];
                    __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__81__pkt[2U] 
                        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk10__DOT__p[2U];
                    __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__81__pkt[3U] 
                        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__unnamedblk10__DOT__p[3U];
                    if ((0U == __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__81__dir)) {
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_north[0U] 
                            = __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__81__pkt[0U];
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_north[1U] 
                            = __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__81__pkt[1U];
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_north[2U] 
                            = __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__81__pkt[2U];
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_north[3U] 
                            = __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__81__pkt[3U];
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__valid_out_north = 1U;
                    } else if ((1U == __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__81__dir)) {
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_south[0U] 
                            = __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__81__pkt[0U];
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_south[1U] 
                            = __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__81__pkt[1U];
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_south[2U] 
                            = __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__81__pkt[2U];
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_south[3U] 
                            = __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__81__pkt[3U];
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__valid_out_south = 1U;
                    } else if ((2U == __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__81__dir)) {
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_east[0U] 
                            = __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__81__pkt[0U];
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_east[1U] 
                            = __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__81__pkt[1U];
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_east[2U] 
                            = __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__81__pkt[2U];
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_east[3U] 
                            = __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__81__pkt[3U];
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__valid_out_east = 1U;
                    } else if ((3U == __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__81__dir)) {
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_west[0U] 
                            = __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__81__pkt[0U];
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_west[1U] 
                            = __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__81__pkt[1U];
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_west[2U] 
                            = __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__81__pkt[2U];
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_west[3U] 
                            = __Vtask_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__send_packet_to_dir__81__pkt[3U];
                        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__valid_out_west = 1U;
                    }
                    vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_west 
                        = (3U & ((IData)(1U) + (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_west)));
                    vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_west 
                        = (7U & ((IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_west) 
                                 - (IData)(1U)));
                }
            }
        }
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
    vlSelfRef.mesh_onoc__DOT__waveguide_valid_to_photodetector[0U][2U] 
        = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__valid_left
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
    vlSelfRef.mesh_onoc__DOT__waveguide_valid_to_photodetector[1U][3U] 
        = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__valid_right
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
    vlSelfRef.mesh_onoc__DOT__waveguide_valid_to_photodetector[2U][2U] 
        = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__valid_left
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
    vlSelfRef.mesh_onoc__DOT__waveguide_valid_to_photodetector[3U][3U] 
        = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__valid_right
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
    vlSelfRef.mesh_onoc__DOT__waveguide_valid_to_photodetector[0U][1U] 
        = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__valid_left
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
    vlSelfRef.mesh_onoc__DOT__waveguide_valid_to_photodetector[2U][0U] 
        = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__valid_right
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
    vlSelfRef.mesh_onoc__DOT__waveguide_valid_to_photodetector[1U][1U] 
        = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__valid_left
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
    vlSelfRef.mesh_onoc__DOT__waveguide_valid_to_photodetector[3U][0U] 
        = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__valid_right
        [3U];
    if (vlSelfRef.rst) {
        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__packet_out[0U] = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__packet_out[1U] = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__packet_out[2U] = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__packet_out[3U] = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__valid_out = 0U;
        vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__pkt_sent_last_cycle = 0U;
        vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__cycle_counter = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__packet_out[0U] = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__packet_out[1U] = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__packet_out[2U] = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__packet_out[3U] = 0U;
    } else {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__unnamedblk1__DOT__send_now 
            = (4U > VL_URANDOM_RANGE_I(0U, 9U));
        if (VL_UNLIKELY((((IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__unnamedblk1__DOT__send_now) 
                          & (4U > (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_local))) 
                         & (~ (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__pkt_sent_last_cycle))))) {
            __Vfunc_mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__get_random_destination__0__self_id = 0U;
            __Vfunc_mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__get_random_destination__0__random_id 
                = (0xffffU & VL_URANDOM_RANGE_I(0U, 3U));
            vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__payload 
                = ((IData)(1U) + vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__payload);
            while (((IData)(__Vfunc_mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__get_random_destination__0__random_id) 
                    == (IData)(__Vfunc_mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__get_random_destination__0__self_id))) {
                __Vfunc_mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__get_random_destination__0__random_id 
                    = (0xffffU & VL_URANDOM_RANGE_I(0U, 3U));
            }
            vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__valid_out = 1U;
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__pkt_sent_last_cycle = 1U;
            __Vfunc_mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__get_random_destination__0__rand_x 
                = (1U & (IData)(__Vfunc_mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__get_random_destination__0__random_id));
            __Vfunc_mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__get_random_destination__0__rand_y 
                = (0xffU & ((IData)(__Vfunc_mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__get_random_destination__0__random_id) 
                            >> 1U));
            __Vfunc_mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__encode_xy__1__y 
                = __Vfunc_mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__get_random_destination__0__rand_y;
            __Vfunc_mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__encode_xy__1__x 
                = __Vfunc_mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__get_random_destination__0__rand_x;
            __Vfunc_mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__encode_xy__1__Vfuncout 
                = (((IData)(__Vfunc_mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__encode_xy__1__x) 
                    << 8U) | (IData)(__Vfunc_mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__encode_xy__1__y));
            __Vfunc_mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__get_random_destination__0__Vfuncout 
                = __Vfunc_mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__encode_xy__1__Vfuncout;
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__destination 
                = __Vfunc_mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__get_random_destination__0__Vfuncout;
            vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__packet_out[1U] 
                = ((1U & vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__packet_out[1U]) 
                   | ((IData)((((QData)((IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__destination)) 
                                << 0x20U) | (QData)((IData)(
                                                            (0xffffffU 
                                                             & vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__cycle_counter))))) 
                      << 1U));
            vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__packet_out[2U] 
                = (((IData)((((QData)((IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__destination)) 
                              << 0x20U) | (QData)((IData)(
                                                          (0xffffffU 
                                                           & vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__cycle_counter))))) 
                    >> 0x1fU) | ((IData)(((((QData)((IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__destination)) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             (0xffffffU 
                                                              & vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__cycle_counter)))) 
                                          >> 0x20U)) 
                                 << 1U));
            vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__packet_out[3U] 
                = ((IData)(((((QData)((IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__destination)) 
                              << 0x20U) | (QData)((IData)(
                                                          (0xffffffU 
                                                           & vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__cycle_counter)))) 
                            >> 0x20U)) >> 0x1fU);
            vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__packet_out[0U] 
                = (IData)((1ULL | ((QData)((IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__cycle_counter)) 
                                   << 1U)));
            vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__packet_out[1U] 
                = ((0xfffffffeU & vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__packet_out[1U]) 
                   | (IData)(((1ULL | ((QData)((IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__cycle_counter)) 
                                       << 1U)) >> 0x20U)));
            VL_WRITEF_NX("IP 0 sending 0-%0# to %0#,%0#\n",0,
                         24,(0xffffffU & vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__cycle_counter),
                         8,(0xffU & ((IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__destination) 
                                     >> 8U)),8,(0xffU 
                                                & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__destination)));
        } else {
            vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__valid_out = 0U;
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__pkt_sent_last_cycle = 0U;
        }
        vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__cycle_counter 
            = ((IData)(1U) + vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__cycle_counter);
    }
    if (vlSelfRef.rst) {
        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__packet_out[0U] = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__packet_out[1U] = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__packet_out[2U] = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__packet_out[3U] = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__valid_out = 0U;
        vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__pkt_sent_last_cycle = 0U;
        vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__cycle_counter = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__packet_out[0U] = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__packet_out[1U] = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__packet_out[2U] = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__packet_out[3U] = 0U;
    } else {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__unnamedblk1__DOT__send_now 
            = (4U > VL_URANDOM_RANGE_I(0U, 9U));
        if (VL_UNLIKELY((((IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__unnamedblk1__DOT__send_now) 
                          & (4U > (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_local))) 
                         & (~ (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__pkt_sent_last_cycle))))) {
            __Vfunc_mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__get_random_destination__23__self_id = 1U;
            __Vfunc_mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__get_random_destination__23__random_id 
                = (0xffffU & VL_URANDOM_RANGE_I(0U, 3U));
            vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__payload 
                = ((IData)(1U) + vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__payload);
            while (((IData)(__Vfunc_mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__get_random_destination__23__random_id) 
                    == (IData)(__Vfunc_mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__get_random_destination__23__self_id))) {
                __Vfunc_mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__get_random_destination__23__random_id 
                    = (0xffffU & VL_URANDOM_RANGE_I(0U, 3U));
            }
            vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__valid_out = 1U;
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__pkt_sent_last_cycle = 1U;
            __Vfunc_mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__get_random_destination__23__rand_x 
                = (1U & (IData)(__Vfunc_mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__get_random_destination__23__random_id));
            __Vfunc_mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__get_random_destination__23__rand_y 
                = (0xffU & ((IData)(__Vfunc_mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__get_random_destination__23__random_id) 
                            >> 1U));
            __Vfunc_mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__encode_xy__24__y 
                = __Vfunc_mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__get_random_destination__23__rand_y;
            __Vfunc_mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__encode_xy__24__x 
                = __Vfunc_mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__get_random_destination__23__rand_x;
            __Vfunc_mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__encode_xy__24__Vfuncout 
                = (((IData)(__Vfunc_mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__encode_xy__24__x) 
                    << 8U) | (IData)(__Vfunc_mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__encode_xy__24__y));
            __Vfunc_mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__get_random_destination__23__Vfuncout 
                = __Vfunc_mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__encode_xy__24__Vfuncout;
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__destination 
                = __Vfunc_mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__get_random_destination__23__Vfuncout;
            vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__packet_out[1U] 
                = ((1U & vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__packet_out[1U]) 
                   | ((IData)((((QData)((IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__destination)) 
                                << 0x20U) | (QData)((IData)(
                                                            (0x1000000U 
                                                             | (0xffffffU 
                                                                & vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__cycle_counter)))))) 
                      << 1U));
            vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__packet_out[2U] 
                = ((0xfffe0000U & vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__packet_out[2U]) 
                   | (((IData)((((QData)((IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__destination)) 
                                 << 0x20U) | (QData)((IData)(
                                                             (0x1000000U 
                                                              | (0xffffffU 
                                                                 & vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__cycle_counter)))))) 
                       >> 0x1fU) | ((IData)(((((QData)((IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__destination)) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                (0x1000000U 
                                                                 | (0xffffffU 
                                                                    & vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__cycle_counter))))) 
                                             >> 0x20U)) 
                                    << 1U)));
            vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__packet_out[2U] 
                = (0x2000000U | (0x1ffffU & vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__packet_out[2U]));
            vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__packet_out[3U] = 0U;
            vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__packet_out[0U] 
                = (IData)((1ULL | ((QData)((IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__cycle_counter)) 
                                   << 1U)));
            vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__packet_out[1U] 
                = ((0xfffffffeU & vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__packet_out[1U]) 
                   | (IData)(((1ULL | ((QData)((IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__cycle_counter)) 
                                       << 1U)) >> 0x20U)));
            VL_WRITEF_NX("IP 1 sending 1-%0# to %0#,%0#\n",0,
                         24,(0xffffffU & vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__cycle_counter),
                         8,(0xffU & ((IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__destination) 
                                     >> 8U)),8,(0xffU 
                                                & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__destination)));
        } else {
            vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__valid_out = 0U;
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__pkt_sent_last_cycle = 0U;
        }
        vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__cycle_counter 
            = ((IData)(1U) + vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__cycle_counter);
    }
    if (vlSelfRef.rst) {
        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__packet_out[0U] = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__packet_out[1U] = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__packet_out[2U] = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__packet_out[3U] = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__valid_out = 0U;
        vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__pkt_sent_last_cycle = 0U;
        vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__cycle_counter = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__packet_out[0U] = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__packet_out[1U] = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__packet_out[2U] = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__packet_out[3U] = 0U;
    } else {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__unnamedblk1__DOT__send_now 
            = (4U > VL_URANDOM_RANGE_I(0U, 9U));
        if (VL_UNLIKELY((((IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__unnamedblk1__DOT__send_now) 
                          & (4U > (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_local))) 
                         & (~ (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__pkt_sent_last_cycle))))) {
            __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__get_random_destination__46__self_id = 2U;
            __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__get_random_destination__46__random_id 
                = (0xffffU & VL_URANDOM_RANGE_I(0U, 3U));
            vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__payload 
                = ((IData)(1U) + vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__payload);
            while (((IData)(__Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__get_random_destination__46__random_id) 
                    == (IData)(__Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__get_random_destination__46__self_id))) {
                __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__get_random_destination__46__random_id 
                    = (0xffffU & VL_URANDOM_RANGE_I(0U, 3U));
            }
            vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__valid_out = 1U;
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__pkt_sent_last_cycle = 1U;
            __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__get_random_destination__46__rand_x 
                = (1U & (IData)(__Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__get_random_destination__46__random_id));
            __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__get_random_destination__46__rand_y 
                = (0xffU & ((IData)(__Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__get_random_destination__46__random_id) 
                            >> 1U));
            __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__encode_xy__47__y 
                = __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__get_random_destination__46__rand_y;
            __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__encode_xy__47__x 
                = __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__get_random_destination__46__rand_x;
            __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__encode_xy__47__Vfuncout 
                = (((IData)(__Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__encode_xy__47__x) 
                    << 8U) | (IData)(__Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__encode_xy__47__y));
            __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__get_random_destination__46__Vfuncout 
                = __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__encode_xy__47__Vfuncout;
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__destination 
                = __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__get_random_destination__46__Vfuncout;
            vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__packet_out[1U] 
                = ((1U & vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__packet_out[1U]) 
                   | ((IData)((((QData)((IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__destination)) 
                                << 0x20U) | (QData)((IData)(
                                                            (0x2000000U 
                                                             | (0xffffffU 
                                                                & vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__cycle_counter)))))) 
                      << 1U));
            vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__packet_out[2U] 
                = ((0xfffe0000U & vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__packet_out[2U]) 
                   | (((IData)((((QData)((IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__destination)) 
                                 << 0x20U) | (QData)((IData)(
                                                             (0x2000000U 
                                                              | (0xffffffU 
                                                                 & vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__cycle_counter)))))) 
                       >> 0x1fU) | ((IData)(((((QData)((IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__destination)) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                (0x2000000U 
                                                                 | (0xffffffU 
                                                                    & vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__cycle_counter))))) 
                                             >> 0x20U)) 
                                    << 1U)));
            vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__packet_out[2U] 
                = (0x20000U | (0x1ffffU & vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__packet_out[2U]));
            vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__packet_out[3U] = 0U;
            vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__packet_out[0U] 
                = (IData)((1ULL | ((QData)((IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__cycle_counter)) 
                                   << 1U)));
            vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__packet_out[1U] 
                = ((0xfffffffeU & vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__packet_out[1U]) 
                   | (IData)(((1ULL | ((QData)((IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__cycle_counter)) 
                                       << 1U)) >> 0x20U)));
            VL_WRITEF_NX("IP 2 sending 2-%0# to %0#,%0#\n",0,
                         24,(0xffffffU & vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__cycle_counter),
                         8,(0xffU & ((IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__destination) 
                                     >> 8U)),8,(0xffU 
                                                & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__destination)));
        } else {
            vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__valid_out = 0U;
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__pkt_sent_last_cycle = 0U;
        }
        vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__cycle_counter 
            = ((IData)(1U) + vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__cycle_counter);
    }
    if (vlSelfRef.rst) {
        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__packet_out[0U] = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__packet_out[1U] = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__packet_out[2U] = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__packet_out[3U] = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__valid_out = 0U;
        vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__pkt_sent_last_cycle = 0U;
        vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__cycle_counter = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__packet_out[0U] = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__packet_out[1U] = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__packet_out[2U] = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__packet_out[3U] = 0U;
    } else {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__unnamedblk1__DOT__send_now 
            = (4U > VL_URANDOM_RANGE_I(0U, 9U));
        if (VL_UNLIKELY((((IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__unnamedblk1__DOT__send_now) 
                          & (4U > (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_local))) 
                         & (~ (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__pkt_sent_last_cycle))))) {
            __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__get_random_destination__69__self_id = 3U;
            __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__get_random_destination__69__random_id 
                = (0xffffU & VL_URANDOM_RANGE_I(0U, 3U));
            vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__payload 
                = ((IData)(1U) + vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__payload);
            while (((IData)(__Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__get_random_destination__69__random_id) 
                    == (IData)(__Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__get_random_destination__69__self_id))) {
                __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__get_random_destination__69__random_id 
                    = (0xffffU & VL_URANDOM_RANGE_I(0U, 3U));
            }
            vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__valid_out = 1U;
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__pkt_sent_last_cycle = 1U;
            __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__get_random_destination__69__rand_x 
                = (1U & (IData)(__Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__get_random_destination__69__random_id));
            __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__get_random_destination__69__rand_y 
                = (0xffU & ((IData)(__Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__get_random_destination__69__random_id) 
                            >> 1U));
            __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__encode_xy__70__y 
                = __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__get_random_destination__69__rand_y;
            __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__encode_xy__70__x 
                = __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__get_random_destination__69__rand_x;
            __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__encode_xy__70__Vfuncout 
                = (((IData)(__Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__encode_xy__70__x) 
                    << 8U) | (IData)(__Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__encode_xy__70__y));
            __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__get_random_destination__69__Vfuncout 
                = __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__encode_xy__70__Vfuncout;
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__destination 
                = __Vfunc_mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__get_random_destination__69__Vfuncout;
            vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__packet_out[1U] 
                = ((1U & vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__packet_out[1U]) 
                   | ((IData)((((QData)((IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__destination)) 
                                << 0x20U) | (QData)((IData)(
                                                            (0x3000000U 
                                                             | (0xffffffU 
                                                                & vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__cycle_counter)))))) 
                      << 1U));
            vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__packet_out[2U] 
                = ((0xfffe0000U & vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__packet_out[2U]) 
                   | (((IData)((((QData)((IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__destination)) 
                                 << 0x20U) | (QData)((IData)(
                                                             (0x3000000U 
                                                              | (0xffffffU 
                                                                 & vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__cycle_counter)))))) 
                       >> 0x1fU) | ((IData)(((((QData)((IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__destination)) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                (0x3000000U 
                                                                 | (0xffffffU 
                                                                    & vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__cycle_counter))))) 
                                             >> 0x20U)) 
                                    << 1U)));
            vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__packet_out[2U] 
                = (0x2020000U | (0x1ffffU & vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__packet_out[2U]));
            vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__packet_out[3U] = 0U;
            vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__packet_out[0U] 
                = (IData)((1ULL | ((QData)((IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__cycle_counter)) 
                                   << 1U)));
            vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__packet_out[1U] 
                = ((0xfffffffeU & vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__packet_out[1U]) 
                   | (IData)(((1ULL | ((QData)((IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__cycle_counter)) 
                                       << 1U)) >> 0x20U)));
            VL_WRITEF_NX("IP 3 sending 3-%0# to %0#,%0#\n",0,
                         24,(0xffffffU & vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__cycle_counter),
                         8,(0xffU & ((IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__destination) 
                                     >> 8U)),8,(0xffU 
                                                & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__destination)));
        } else {
            vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__valid_out = 0U;
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__pkt_sent_last_cycle = 0U;
        }
        vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__cycle_counter 
            = ((IData)(1U) + vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__cycle_counter);
    }
    vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_local 
        = vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_local;
    vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_north 
        = vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_north;
    vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_south 
        = vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_south;
    vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_east 
        = vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_east;
    vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_west 
        = vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_west;
    vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_north 
        = vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_north;
    vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_south 
        = vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_south;
    vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_east 
        = vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_east;
    vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_west 
        = vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_west;
    if (vlSelfRef.__VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_local__v0) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_local[vlSelfRef.__VdlyDim0__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_local__v0][0U] 
            = vlSelfRef.__VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_local__v0[0U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_local[vlSelfRef.__VdlyDim0__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_local__v0][1U] 
            = vlSelfRef.__VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_local__v0[1U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_local[vlSelfRef.__VdlyDim0__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_local__v0][2U] 
            = vlSelfRef.__VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_local__v0[2U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_local[vlSelfRef.__VdlyDim0__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_local__v0][3U] 
            = vlSelfRef.__VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_local__v0[3U];
    }
    if (vlSelfRef.__VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_north__v0) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_north[vlSelfRef.__VdlyDim0__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_north__v0][0U] 
            = vlSelfRef.__VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_north__v0[0U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_north[vlSelfRef.__VdlyDim0__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_north__v0][1U] 
            = vlSelfRef.__VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_north__v0[1U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_north[vlSelfRef.__VdlyDim0__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_north__v0][2U] 
            = vlSelfRef.__VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_north__v0[2U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_north[vlSelfRef.__VdlyDim0__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_north__v0][3U] 
            = vlSelfRef.__VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_north__v0[3U];
    }
    if (vlSelfRef.__VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_south__v0) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_south[vlSelfRef.__VdlyDim0__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_south__v0][0U] 
            = vlSelfRef.__VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_south__v0[0U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_south[vlSelfRef.__VdlyDim0__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_south__v0][1U] 
            = vlSelfRef.__VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_south__v0[1U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_south[vlSelfRef.__VdlyDim0__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_south__v0][2U] 
            = vlSelfRef.__VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_south__v0[2U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_south[vlSelfRef.__VdlyDim0__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_south__v0][3U] 
            = vlSelfRef.__VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_south__v0[3U];
    }
    if (vlSelfRef.__VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_east__v0) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_east[vlSelfRef.__VdlyDim0__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_east__v0][0U] 
            = vlSelfRef.__VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_east__v0[0U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_east[vlSelfRef.__VdlyDim0__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_east__v0][1U] 
            = vlSelfRef.__VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_east__v0[1U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_east[vlSelfRef.__VdlyDim0__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_east__v0][2U] 
            = vlSelfRef.__VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_east__v0[2U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_east[vlSelfRef.__VdlyDim0__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_east__v0][3U] 
            = vlSelfRef.__VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_east__v0[3U];
    }
    if (vlSelfRef.__VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_west__v0) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_west[vlSelfRef.__VdlyDim0__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_west__v0][0U] 
            = vlSelfRef.__VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_west__v0[0U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_west[vlSelfRef.__VdlyDim0__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_west__v0][1U] 
            = vlSelfRef.__VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_west__v0[1U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_west[vlSelfRef.__VdlyDim0__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_west__v0][2U] 
            = vlSelfRef.__VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_west__v0[2U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_west[vlSelfRef.__VdlyDim0__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_west__v0][3U] 
            = vlSelfRef.__VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_west__v0[3U];
    }
    vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_local 
        = vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_local;
    vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_north 
        = vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_north;
    vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_south 
        = vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_south;
    vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_east 
        = vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_east;
    vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_west 
        = vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_west;
    vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_north 
        = vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_north;
    vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_south 
        = vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_south;
    vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_east 
        = vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_east;
    vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_west 
        = vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_west;
    if (vlSelfRef.__VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_local__v0) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_local[vlSelfRef.__VdlyDim0__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_local__v0][0U] 
            = vlSelfRef.__VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_local__v0[0U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_local[vlSelfRef.__VdlyDim0__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_local__v0][1U] 
            = vlSelfRef.__VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_local__v0[1U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_local[vlSelfRef.__VdlyDim0__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_local__v0][2U] 
            = vlSelfRef.__VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_local__v0[2U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_local[vlSelfRef.__VdlyDim0__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_local__v0][3U] 
            = vlSelfRef.__VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_local__v0[3U];
    }
    if (vlSelfRef.__VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_north__v0) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_north[vlSelfRef.__VdlyDim0__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_north__v0][0U] 
            = vlSelfRef.__VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_north__v0[0U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_north[vlSelfRef.__VdlyDim0__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_north__v0][1U] 
            = vlSelfRef.__VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_north__v0[1U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_north[vlSelfRef.__VdlyDim0__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_north__v0][2U] 
            = vlSelfRef.__VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_north__v0[2U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_north[vlSelfRef.__VdlyDim0__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_north__v0][3U] 
            = vlSelfRef.__VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_north__v0[3U];
    }
    if (vlSelfRef.__VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_south__v0) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_south[vlSelfRef.__VdlyDim0__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_south__v0][0U] 
            = vlSelfRef.__VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_south__v0[0U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_south[vlSelfRef.__VdlyDim0__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_south__v0][1U] 
            = vlSelfRef.__VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_south__v0[1U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_south[vlSelfRef.__VdlyDim0__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_south__v0][2U] 
            = vlSelfRef.__VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_south__v0[2U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_south[vlSelfRef.__VdlyDim0__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_south__v0][3U] 
            = vlSelfRef.__VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_south__v0[3U];
    }
    if (vlSelfRef.__VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_east__v0) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_east[vlSelfRef.__VdlyDim0__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_east__v0][0U] 
            = vlSelfRef.__VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_east__v0[0U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_east[vlSelfRef.__VdlyDim0__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_east__v0][1U] 
            = vlSelfRef.__VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_east__v0[1U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_east[vlSelfRef.__VdlyDim0__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_east__v0][2U] 
            = vlSelfRef.__VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_east__v0[2U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_east[vlSelfRef.__VdlyDim0__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_east__v0][3U] 
            = vlSelfRef.__VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_east__v0[3U];
    }
    if (vlSelfRef.__VdlySet__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_west__v0) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_west[vlSelfRef.__VdlyDim0__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_west__v0][0U] 
            = vlSelfRef.__VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_west__v0[0U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_west[vlSelfRef.__VdlyDim0__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_west__v0][1U] 
            = vlSelfRef.__VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_west__v0[1U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_west[vlSelfRef.__VdlyDim0__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_west__v0][2U] 
            = vlSelfRef.__VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_west__v0[2U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_west[vlSelfRef.__VdlyDim0__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_west__v0][3U] 
            = vlSelfRef.__VdlyVal__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_west__v0[3U];
    }
    vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_local 
        = vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_local;
    vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_north 
        = vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_north;
    vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_south 
        = vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_south;
    vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_east 
        = vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_east;
    vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_west 
        = vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_west;
    vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_north 
        = vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_north;
    vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_south 
        = vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_south;
    vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_east 
        = vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_east;
    vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_west 
        = vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_west;
    if (vlSelfRef.__VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_local__v0) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_local[vlSelfRef.__VdlyDim0__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_local__v0][0U] 
            = vlSelfRef.__VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_local__v0[0U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_local[vlSelfRef.__VdlyDim0__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_local__v0][1U] 
            = vlSelfRef.__VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_local__v0[1U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_local[vlSelfRef.__VdlyDim0__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_local__v0][2U] 
            = vlSelfRef.__VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_local__v0[2U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_local[vlSelfRef.__VdlyDim0__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_local__v0][3U] 
            = vlSelfRef.__VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_local__v0[3U];
    }
    if (vlSelfRef.__VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_north__v0) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_north[vlSelfRef.__VdlyDim0__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_north__v0][0U] 
            = vlSelfRef.__VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_north__v0[0U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_north[vlSelfRef.__VdlyDim0__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_north__v0][1U] 
            = vlSelfRef.__VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_north__v0[1U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_north[vlSelfRef.__VdlyDim0__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_north__v0][2U] 
            = vlSelfRef.__VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_north__v0[2U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_north[vlSelfRef.__VdlyDim0__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_north__v0][3U] 
            = vlSelfRef.__VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_north__v0[3U];
    }
    if (vlSelfRef.__VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_south__v0) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_south[vlSelfRef.__VdlyDim0__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_south__v0][0U] 
            = vlSelfRef.__VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_south__v0[0U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_south[vlSelfRef.__VdlyDim0__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_south__v0][1U] 
            = vlSelfRef.__VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_south__v0[1U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_south[vlSelfRef.__VdlyDim0__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_south__v0][2U] 
            = vlSelfRef.__VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_south__v0[2U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_south[vlSelfRef.__VdlyDim0__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_south__v0][3U] 
            = vlSelfRef.__VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_south__v0[3U];
    }
    if (vlSelfRef.__VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_east__v0) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_east[vlSelfRef.__VdlyDim0__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_east__v0][0U] 
            = vlSelfRef.__VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_east__v0[0U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_east[vlSelfRef.__VdlyDim0__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_east__v0][1U] 
            = vlSelfRef.__VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_east__v0[1U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_east[vlSelfRef.__VdlyDim0__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_east__v0][2U] 
            = vlSelfRef.__VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_east__v0[2U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_east[vlSelfRef.__VdlyDim0__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_east__v0][3U] 
            = vlSelfRef.__VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_east__v0[3U];
    }
    if (vlSelfRef.__VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_west__v0) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_west[vlSelfRef.__VdlyDim0__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_west__v0][0U] 
            = vlSelfRef.__VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_west__v0[0U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_west[vlSelfRef.__VdlyDim0__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_west__v0][1U] 
            = vlSelfRef.__VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_west__v0[1U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_west[vlSelfRef.__VdlyDim0__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_west__v0][2U] 
            = vlSelfRef.__VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_west__v0[2U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_west[vlSelfRef.__VdlyDim0__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_west__v0][3U] 
            = vlSelfRef.__VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_west__v0[3U];
    }
    vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_local 
        = vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_local;
    vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_north 
        = vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_north;
    vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_south 
        = vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_south;
    vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_east 
        = vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_east;
    vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_west 
        = vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_west;
    vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_north 
        = vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_north;
    vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_south 
        = vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_south;
    vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_east 
        = vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_east;
    vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_west 
        = vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_west;
    if (vlSelfRef.__VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_local__v0) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_local[vlSelfRef.__VdlyDim0__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_local__v0][0U] 
            = vlSelfRef.__VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_local__v0[0U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_local[vlSelfRef.__VdlyDim0__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_local__v0][1U] 
            = vlSelfRef.__VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_local__v0[1U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_local[vlSelfRef.__VdlyDim0__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_local__v0][2U] 
            = vlSelfRef.__VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_local__v0[2U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_local[vlSelfRef.__VdlyDim0__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_local__v0][3U] 
            = vlSelfRef.__VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_local__v0[3U];
    }
    if (vlSelfRef.__VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_north__v0) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_north[vlSelfRef.__VdlyDim0__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_north__v0][0U] 
            = vlSelfRef.__VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_north__v0[0U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_north[vlSelfRef.__VdlyDim0__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_north__v0][1U] 
            = vlSelfRef.__VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_north__v0[1U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_north[vlSelfRef.__VdlyDim0__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_north__v0][2U] 
            = vlSelfRef.__VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_north__v0[2U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_north[vlSelfRef.__VdlyDim0__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_north__v0][3U] 
            = vlSelfRef.__VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_north__v0[3U];
    }
    if (vlSelfRef.__VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_south__v0) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_south[vlSelfRef.__VdlyDim0__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_south__v0][0U] 
            = vlSelfRef.__VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_south__v0[0U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_south[vlSelfRef.__VdlyDim0__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_south__v0][1U] 
            = vlSelfRef.__VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_south__v0[1U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_south[vlSelfRef.__VdlyDim0__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_south__v0][2U] 
            = vlSelfRef.__VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_south__v0[2U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_south[vlSelfRef.__VdlyDim0__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_south__v0][3U] 
            = vlSelfRef.__VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_south__v0[3U];
    }
    if (vlSelfRef.__VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_east__v0) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_east[vlSelfRef.__VdlyDim0__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_east__v0][0U] 
            = vlSelfRef.__VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_east__v0[0U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_east[vlSelfRef.__VdlyDim0__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_east__v0][1U] 
            = vlSelfRef.__VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_east__v0[1U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_east[vlSelfRef.__VdlyDim0__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_east__v0][2U] 
            = vlSelfRef.__VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_east__v0[2U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_east[vlSelfRef.__VdlyDim0__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_east__v0][3U] 
            = vlSelfRef.__VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_east__v0[3U];
    }
    if (vlSelfRef.__VdlySet__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_west__v0) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_west[vlSelfRef.__VdlyDim0__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_west__v0][0U] 
            = vlSelfRef.__VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_west__v0[0U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_west[vlSelfRef.__VdlyDim0__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_west__v0][1U] 
            = vlSelfRef.__VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_west__v0[1U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_west[vlSelfRef.__VdlyDim0__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_west__v0][2U] 
            = vlSelfRef.__VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_west__v0[2U];
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_west[vlSelfRef.__VdlyDim0__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_west__v0][3U] 
            = vlSelfRef.__VdlyVal__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_west__v0[3U];
    }
    vlSelfRef.mesh_onoc__DOT__router_granted[0U] = 
        ((0xbU & vlSelfRef.mesh_onoc__DOT__router_granted
          [0U]) | (4U & ((IData)(vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__fp_arb__DOT__current_grant) 
                         << 1U)));
    vlSelfRef.mesh_onoc__DOT__router_granted[1U] = 
        ((7U & vlSelfRef.mesh_onoc__DOT__router_granted
          [1U]) | (8U & ((IData)(vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__fp_arb__DOT__current_grant) 
                         << 3U)));
    vlSelfRef.mesh_onoc__DOT__router_granted[2U] = 
        ((0xbU & vlSelfRef.mesh_onoc__DOT__router_granted
          [2U]) | (4U & ((IData)(vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__fp_arb__DOT__current_grant) 
                         << 1U)));
    vlSelfRef.mesh_onoc__DOT__router_granted[3U] = 
        ((7U & vlSelfRef.mesh_onoc__DOT__router_granted
          [3U]) | (8U & ((IData)(vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__fp_arb__DOT__current_grant) 
                         << 3U)));
    vlSelfRef.mesh_onoc__DOT__router_granted[0U] = 
        ((0xdU & vlSelfRef.mesh_onoc__DOT__router_granted
          [0U]) | (2U & (IData)(vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__fp_arb__DOT__current_grant)));
    vlSelfRef.mesh_onoc__DOT__router_granted[2U] = 
        ((0xeU & vlSelfRef.mesh_onoc__DOT__router_granted
          [2U]) | (1U & (IData)(vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__fp_arb__DOT__current_grant)));
    vlSelfRef.mesh_onoc__DOT__router_granted[1U] = 
        ((0xdU & vlSelfRef.mesh_onoc__DOT__router_granted
          [1U]) | (2U & (IData)(vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__fp_arb__DOT__current_grant)));
    vlSelfRef.mesh_onoc__DOT__router_granted[3U] = 
        ((0xeU & vlSelfRef.mesh_onoc__DOT__router_granted
          [3U]) | (1U & (IData)(vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__fp_arb__DOT__current_grant)));
    vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__pkt_sent_last_cycle 
        = vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__pkt_sent_last_cycle;
    vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__cycle_counter 
        = vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__cycle_counter;
    vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__destination 
        = vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__destination;
    vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_local 
        = vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_local;
    vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__pkt_sent_last_cycle 
        = vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__pkt_sent_last_cycle;
    vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__cycle_counter 
        = vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__cycle_counter;
    vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__destination 
        = vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__destination;
    vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_local 
        = vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_local;
    vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__pkt_sent_last_cycle 
        = vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__pkt_sent_last_cycle;
    vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__cycle_counter 
        = vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__cycle_counter;
    vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__destination 
        = vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__DOT__destination;
    vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_local 
        = vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_local;
    vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__pkt_sent_last_cycle 
        = vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__pkt_sent_last_cycle;
    vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__cycle_counter 
        = vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__cycle_counter;
    vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__destination 
        = vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__DOT__destination;
    vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_local 
        = vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_local;
    vlSelfRef.router_valid_to_ip[0U] = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__valid_out_local;
    vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator[0U][0U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__valid_out_north;
    vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator[0U][1U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__valid_out_south;
    vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator[0U][2U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__valid_out_east;
    vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator[0U][3U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__valid_out_west;
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[0U][0U][0U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_north[0U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[0U][0U][1U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_north[1U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[0U][0U][2U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_north[2U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[0U][0U][3U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_north[3U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[0U][1U][0U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_south[0U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[0U][1U][1U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_south[1U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[0U][1U][2U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_south[2U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[0U][1U][3U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_south[3U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[0U][2U][0U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_east[0U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[0U][2U][1U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_east[1U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[0U][2U][2U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_east[2U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[0U][2U][3U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_east[3U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[0U][3U][0U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_west[0U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[0U][3U][1U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_west[1U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[0U][3U][2U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_west[2U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[0U][3U][3U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_west[3U];
    vlSelfRef.router_valid_to_ip[1U] = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__valid_out_local;
    vlSelfRef.mesh_onoc__DOT____Vcellinp__wg_inst__BRA__0__KET____DOT__fp_arb__request 
        = ((2U & ((IData)(vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__request_to_send) 
                  >> 1U)) | (1U & ((IData)(vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__request_to_send) 
                                   >> 3U)));
    vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator[1U][0U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__valid_out_north;
    vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator[1U][1U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__valid_out_south;
    vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator[1U][2U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__valid_out_east;
    vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator[1U][3U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__valid_out_west;
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[1U][0U][0U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_north[0U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[1U][0U][1U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_north[1U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[1U][0U][2U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_north[2U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[1U][0U][3U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_north[3U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[1U][1U][0U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_south[0U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[1U][1U][1U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_south[1U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[1U][1U][2U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_south[2U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[1U][1U][3U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_south[3U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[1U][2U][0U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_east[0U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[1U][2U][1U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_east[1U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[1U][2U][2U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_east[2U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[1U][2U][3U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_east[3U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[1U][3U][0U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_west[0U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[1U][3U][1U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_west[1U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[1U][3U][2U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_west[2U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[1U][3U][3U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_west[3U];
    vlSelfRef.router_valid_to_ip[2U] = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__valid_out_local;
    vlSelfRef.mesh_onoc__DOT____Vcellinp__wg_inst__BRA__2__KET____DOT__fp_arb__request 
        = ((2U & (IData)(vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__request_to_send)) 
           | (1U & (IData)(vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__request_to_send)));
    vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator[2U][0U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__valid_out_north;
    vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator[2U][1U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__valid_out_south;
    vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator[2U][2U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__valid_out_east;
    vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator[2U][3U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__valid_out_west;
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[2U][0U][0U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_north[0U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[2U][0U][1U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_north[1U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[2U][0U][2U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_north[2U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[2U][0U][3U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_north[3U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[2U][1U][0U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_south[0U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[2U][1U][1U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_south[1U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[2U][1U][2U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_south[2U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[2U][1U][3U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_south[3U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[2U][2U][0U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_east[0U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[2U][2U][1U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_east[1U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[2U][2U][2U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_east[2U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[2U][2U][3U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_east[3U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[2U][3U][0U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_west[0U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[2U][3U][1U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_west[1U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[2U][3U][2U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_west[2U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[2U][3U][3U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_west[3U];
    vlSelfRef.router_valid_to_ip[3U] = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__valid_out_local;
    vlSelfRef.mesh_onoc__DOT____Vcellinp__wg_inst__BRA__1__KET____DOT__fp_arb__request 
        = ((2U & ((IData)(vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__request_to_send) 
                  >> 1U)) | (1U & ((IData)(vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__request_to_send) 
                                   >> 3U)));
    vlSelfRef.mesh_onoc__DOT____Vcellinp__wg_inst__BRA__3__KET____DOT__fp_arb__request 
        = ((2U & (IData)(vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__request_to_send)) 
           | (1U & (IData)(vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__request_to_send)));
    vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator[3U][0U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__valid_out_north;
    vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator[3U][1U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__valid_out_south;
    vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator[3U][2U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__valid_out_east;
    vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator[3U][3U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__valid_out_west;
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[3U][0U][0U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_north[0U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[3U][0U][1U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_north[1U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[3U][0U][2U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_north[2U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[3U][0U][3U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_north[3U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[3U][1U][0U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_south[0U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[3U][1U][1U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_south[1U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[3U][1U][2U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_south[2U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[3U][1U][3U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_south[3U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[3U][2U][0U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_east[0U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[3U][2U][1U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_east[1U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[3U][2U][2U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_east[2U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[3U][2U][3U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_east[3U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[3U][3U][0U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_west[0U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[3U][3U][1U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_west[1U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[3U][3U][2U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_west[2U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[3U][3U][3U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_west[3U];
    vlSelfRef.ip_valid_to_router[0U] = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__valid_out;
    vlSelfRef.ip_valid_to_router[1U] = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__valid_out;
    vlSelfRef.ip_valid_to_router[2U] = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__ip_inst__valid_out;
    vlSelfRef.ip_valid_to_router[3U] = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__ip_inst__valid_out;
}

void Vmesh_onoc___024root___eval_triggers__act(Vmesh_onoc___024root* vlSelf);
void Vmesh_onoc___024root___eval_act(Vmesh_onoc___024root* vlSelf);

bool Vmesh_onoc___024root___eval_phase__act(Vmesh_onoc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmesh_onoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmesh_onoc___024root___eval_phase__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vmesh_onoc___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vmesh_onoc___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void Vmesh_onoc___024root___eval_nba(Vmesh_onoc___024root* vlSelf);

bool Vmesh_onoc___024root___eval_phase__nba(Vmesh_onoc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmesh_onoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmesh_onoc___024root___eval_phase__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vmesh_onoc___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmesh_onoc___024root___dump_triggers__nba(Vmesh_onoc___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmesh_onoc___024root___dump_triggers__act(Vmesh_onoc___024root* vlSelf);
#endif  // VL_DEBUG

void Vmesh_onoc___024root___eval(Vmesh_onoc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmesh_onoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmesh_onoc___024root___eval\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vmesh_onoc___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("../src/../src/mesh_top/mesh_onoc.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vmesh_onoc___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("../src/../src/mesh_top/mesh_onoc.sv", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vmesh_onoc___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vmesh_onoc___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vmesh_onoc___024root___eval_debug_assertions(Vmesh_onoc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmesh_onoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmesh_onoc___024root___eval_debug_assertions\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelfRef.rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
