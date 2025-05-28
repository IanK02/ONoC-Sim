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
    // Body
    VL_WRITEF_NX("Current Valid: %0b\nRequest: %4b Grants %4b\n==== [Router 0] FIFO Packet Timestamps ====\nLocal FIFO c=%0#   : ",0,
                 1,vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_valid,
                 4,(IData)(vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__request_to_send),
                 4,vlSelfRef.mesh_onoc__DOT__router_granted
                 [0U],7,vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_local);
    if ((0U < (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_local))) {
        VL_WRITEF_NX("%0# ",0,32,((vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_local
                                   [(1U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_local))][1U] 
                                   << 0x1fU) | (vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_local
                                                [(1U 
                                                  & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_local))][0U] 
                                                >> 1U)));
    } else {
        VL_WRITEF_NX("x ",0);
    }
    if ((1U < (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_local))) {
        VL_WRITEF_NX("%0# ",0,32,((vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_local
                                   [(1U & ((IData)(1U) 
                                           + (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_local)))][1U] 
                                   << 0x1fU) | (vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_local
                                                [(1U 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_local)))][0U] 
                                                >> 1U)));
    } else {
        VL_WRITEF_NX("x ",0);
    }
    VL_WRITEF_NX("\nNorth FIFO c=%0#   : ",0,2,vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_north);
    if ((0U < (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_north))) {
        VL_WRITEF_NX("%0# ",0,32,((vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_north
                                   [(1U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_north))][1U] 
                                   << 0x1fU) | (vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_north
                                                [(1U 
                                                  & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_north))][0U] 
                                                >> 1U)));
    } else {
        VL_WRITEF_NX("x ",0);
    }
    if ((1U < (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_north))) {
        VL_WRITEF_NX("%0# ",0,32,((vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_north
                                   [(1U & ((IData)(1U) 
                                           + (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_north)))][1U] 
                                   << 0x1fU) | (vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_north
                                                [(1U 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_north)))][0U] 
                                                >> 1U)));
    } else {
        VL_WRITEF_NX("x ",0);
    }
    VL_WRITEF_NX("\nSouth FIFO c=%0#   : ",0,2,vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_south);
    if ((0U < (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_south))) {
        VL_WRITEF_NX("%0# ",0,32,((vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_south
                                   [(1U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_south))][1U] 
                                   << 0x1fU) | (vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_south
                                                [(1U 
                                                  & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_south))][0U] 
                                                >> 1U)));
    } else {
        VL_WRITEF_NX("x ",0);
    }
    if ((1U < (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_south))) {
        VL_WRITEF_NX("%0# ",0,32,((vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_south
                                   [(1U & ((IData)(1U) 
                                           + (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_south)))][1U] 
                                   << 0x1fU) | (vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_south
                                                [(1U 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_south)))][0U] 
                                                >> 1U)));
    } else {
        VL_WRITEF_NX("x ",0);
    }
    VL_WRITEF_NX("\nEast FIFO c=%0#    : ",0,2,vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_east);
    if ((0U < (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_east))) {
        VL_WRITEF_NX("%0# ",0,32,((vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_east
                                   [(1U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_east))][1U] 
                                   << 0x1fU) | (vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_east
                                                [(1U 
                                                  & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_east))][0U] 
                                                >> 1U)));
    } else {
        VL_WRITEF_NX("x ",0);
    }
    if ((1U < (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_east))) {
        VL_WRITEF_NX("%0# ",0,32,((vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_east
                                   [(1U & ((IData)(1U) 
                                           + (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_east)))][1U] 
                                   << 0x1fU) | (vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_east
                                                [(1U 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_east)))][0U] 
                                                >> 1U)));
    } else {
        VL_WRITEF_NX("x ",0);
    }
    VL_WRITEF_NX("\nCurrent Valid: %0b\nRequest: %4b Grants %4b\n==== [Router 1] FIFO Packet Timestamps ====\nLocal FIFO c=%0#   : ",0,
                 1,vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_valid,
                 4,(IData)(vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__request_to_send),
                 4,vlSelfRef.mesh_onoc__DOT__router_granted
                 [1U],7,vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_local);
    if ((0U < (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_local))) {
        VL_WRITEF_NX("%0# ",0,32,((vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_local
                                   [(1U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_local))][1U] 
                                   << 0x1fU) | (vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_local
                                                [(1U 
                                                  & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_local))][0U] 
                                                >> 1U)));
    } else {
        VL_WRITEF_NX("x ",0);
    }
    if ((1U < (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_local))) {
        VL_WRITEF_NX("%0# ",0,32,((vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_local
                                   [(1U & ((IData)(1U) 
                                           + (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_local)))][1U] 
                                   << 0x1fU) | (vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_local
                                                [(1U 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_local)))][0U] 
                                                >> 1U)));
    } else {
        VL_WRITEF_NX("x ",0);
    }
    VL_WRITEF_NX("\nNorth FIFO c=%0#   : ",0,2,vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_north);
    if ((0U < (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_north))) {
        VL_WRITEF_NX("%0# ",0,32,((vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_north
                                   [(1U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_north))][1U] 
                                   << 0x1fU) | (vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_north
                                                [(1U 
                                                  & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_north))][0U] 
                                                >> 1U)));
    } else {
        VL_WRITEF_NX("x ",0);
    }
    if ((1U < (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_north))) {
        VL_WRITEF_NX("%0# ",0,32,((vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_north
                                   [(1U & ((IData)(1U) 
                                           + (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_north)))][1U] 
                                   << 0x1fU) | (vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_north
                                                [(1U 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_north)))][0U] 
                                                >> 1U)));
    } else {
        VL_WRITEF_NX("x ",0);
    }
    VL_WRITEF_NX("\nSouth FIFO c=%0#   : ",0,2,vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_south);
    if ((0U < (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_south))) {
        VL_WRITEF_NX("%0# ",0,32,((vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_south
                                   [(1U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_south))][1U] 
                                   << 0x1fU) | (vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_south
                                                [(1U 
                                                  & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_south))][0U] 
                                                >> 1U)));
    } else {
        VL_WRITEF_NX("x ",0);
    }
    if ((1U < (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_south))) {
        VL_WRITEF_NX("%0# ",0,32,((vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_south
                                   [(1U & ((IData)(1U) 
                                           + (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_south)))][1U] 
                                   << 0x1fU) | (vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_south
                                                [(1U 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_south)))][0U] 
                                                >> 1U)));
    } else {
        VL_WRITEF_NX("x ",0);
    }
    VL_WRITEF_NX("\nEast FIFO c=%0#    : ",0,2,vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_east);
    if ((0U < (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_east))) {
        VL_WRITEF_NX("%0# ",0,32,((vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_east
                                   [(1U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_east))][1U] 
                                   << 0x1fU) | (vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_east
                                                [(1U 
                                                  & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_east))][0U] 
                                                >> 1U)));
    } else {
        VL_WRITEF_NX("x ",0);
    }
    if ((1U < (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_east))) {
        VL_WRITEF_NX("%0# ",0,32,((vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_east
                                   [(1U & ((IData)(1U) 
                                           + (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_east)))][1U] 
                                   << 0x1fU) | (vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_east
                                                [(1U 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_east)))][0U] 
                                                >> 1U)));
    } else {
        VL_WRITEF_NX("x ",0);
    }
    VL_WRITEF_NX("\nCurrent Valid: %0b\nRequest: %4b Grants %4b\n==== [Router 2] FIFO Packet Timestamps ====\nLocal FIFO c=%0#   : ",0,
                 1,vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_valid,
                 4,(IData)(vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__request_to_send),
                 4,vlSelfRef.mesh_onoc__DOT__router_granted
                 [2U],7,vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_local);
    if ((0U < (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_local))) {
        VL_WRITEF_NX("%0# ",0,32,((vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_local
                                   [(1U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_local))][1U] 
                                   << 0x1fU) | (vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_local
                                                [(1U 
                                                  & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_local))][0U] 
                                                >> 1U)));
    } else {
        VL_WRITEF_NX("x ",0);
    }
    if ((1U < (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_local))) {
        VL_WRITEF_NX("%0# ",0,32,((vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_local
                                   [(1U & ((IData)(1U) 
                                           + (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_local)))][1U] 
                                   << 0x1fU) | (vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_local
                                                [(1U 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_local)))][0U] 
                                                >> 1U)));
    } else {
        VL_WRITEF_NX("x ",0);
    }
    VL_WRITEF_NX("\nNorth FIFO c=%0#   : ",0,2,vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_north);
    if ((0U < (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_north))) {
        VL_WRITEF_NX("%0# ",0,32,((vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_north
                                   [(1U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_north))][1U] 
                                   << 0x1fU) | (vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_north
                                                [(1U 
                                                  & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_north))][0U] 
                                                >> 1U)));
    } else {
        VL_WRITEF_NX("x ",0);
    }
    if ((1U < (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_north))) {
        VL_WRITEF_NX("%0# ",0,32,((vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_north
                                   [(1U & ((IData)(1U) 
                                           + (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_north)))][1U] 
                                   << 0x1fU) | (vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_north
                                                [(1U 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_north)))][0U] 
                                                >> 1U)));
    } else {
        VL_WRITEF_NX("x ",0);
    }
    VL_WRITEF_NX("\nSouth FIFO c=%0#   : ",0,2,vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_south);
    if ((0U < (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_south))) {
        VL_WRITEF_NX("%0# ",0,32,((vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_south
                                   [(1U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_south))][1U] 
                                   << 0x1fU) | (vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_south
                                                [(1U 
                                                  & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_south))][0U] 
                                                >> 1U)));
    } else {
        VL_WRITEF_NX("x ",0);
    }
    if ((1U < (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_south))) {
        VL_WRITEF_NX("%0# ",0,32,((vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_south
                                   [(1U & ((IData)(1U) 
                                           + (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_south)))][1U] 
                                   << 0x1fU) | (vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_south
                                                [(1U 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_south)))][0U] 
                                                >> 1U)));
    } else {
        VL_WRITEF_NX("x ",0);
    }
    VL_WRITEF_NX("\nEast FIFO c=%0#    : ",0,2,vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_east);
    if ((0U < (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_east))) {
        VL_WRITEF_NX("%0# ",0,32,((vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_east
                                   [(1U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_east))][1U] 
                                   << 0x1fU) | (vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_east
                                                [(1U 
                                                  & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_east))][0U] 
                                                >> 1U)));
    } else {
        VL_WRITEF_NX("x ",0);
    }
    if ((1U < (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_east))) {
        VL_WRITEF_NX("%0# ",0,32,((vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_east
                                   [(1U & ((IData)(1U) 
                                           + (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_east)))][1U] 
                                   << 0x1fU) | (vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_east
                                                [(1U 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_east)))][0U] 
                                                >> 1U)));
    } else {
        VL_WRITEF_NX("x ",0);
    }
    VL_WRITEF_NX("\nCurrent Valid: %0b\nRequest: %4b Grants %4b\n==== [Router 3] FIFO Packet Timestamps ====\nLocal FIFO c=%0#   : ",0,
                 1,vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_valid,
                 4,(IData)(vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__request_to_send),
                 4,vlSelfRef.mesh_onoc__DOT__router_granted
                 [3U],7,vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_local);
    if ((0U < (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_local))) {
        VL_WRITEF_NX("%0# ",0,32,((vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_local
                                   [(1U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_local))][1U] 
                                   << 0x1fU) | (vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_local
                                                [(1U 
                                                  & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_local))][0U] 
                                                >> 1U)));
    } else {
        VL_WRITEF_NX("x ",0);
    }
    if ((1U < (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_local))) {
        VL_WRITEF_NX("%0# ",0,32,((vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_local
                                   [(1U & ((IData)(1U) 
                                           + (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_local)))][1U] 
                                   << 0x1fU) | (vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_local
                                                [(1U 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_local)))][0U] 
                                                >> 1U)));
    } else {
        VL_WRITEF_NX("x ",0);
    }
    VL_WRITEF_NX("\nNorth FIFO c=%0#   : ",0,2,vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_north);
    if ((0U < (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_north))) {
        VL_WRITEF_NX("%0# ",0,32,((vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_north
                                   [(1U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_north))][1U] 
                                   << 0x1fU) | (vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_north
                                                [(1U 
                                                  & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_north))][0U] 
                                                >> 1U)));
    } else {
        VL_WRITEF_NX("x ",0);
    }
    if ((1U < (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_north))) {
        VL_WRITEF_NX("%0# ",0,32,((vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_north
                                   [(1U & ((IData)(1U) 
                                           + (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_north)))][1U] 
                                   << 0x1fU) | (vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_north
                                                [(1U 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_north)))][0U] 
                                                >> 1U)));
    } else {
        VL_WRITEF_NX("x ",0);
    }
    VL_WRITEF_NX("\nSouth FIFO c=%0#   : ",0,2,vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_south);
    if ((0U < (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_south))) {
        VL_WRITEF_NX("%0# ",0,32,((vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_south
                                   [(1U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_south))][1U] 
                                   << 0x1fU) | (vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_south
                                                [(1U 
                                                  & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_south))][0U] 
                                                >> 1U)));
    } else {
        VL_WRITEF_NX("x ",0);
    }
    if ((1U < (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_south))) {
        VL_WRITEF_NX("%0# ",0,32,((vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_south
                                   [(1U & ((IData)(1U) 
                                           + (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_south)))][1U] 
                                   << 0x1fU) | (vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_south
                                                [(1U 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_south)))][0U] 
                                                >> 1U)));
    } else {
        VL_WRITEF_NX("x ",0);
    }
    VL_WRITEF_NX("\nEast FIFO c=%0#    : ",0,2,vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_east);
    if ((0U < (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_east))) {
        VL_WRITEF_NX("%0# ",0,32,((vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_east
                                   [(1U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_east))][1U] 
                                   << 0x1fU) | (vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_east
                                                [(1U 
                                                  & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_east))][0U] 
                                                >> 1U)));
    } else {
        VL_WRITEF_NX("x ",0);
    }
    if ((1U < (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_east))) {
        VL_WRITEF_NX("%0# ",0,32,((vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_east
                                   [(1U & ((IData)(1U) 
                                           + (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_east)))][1U] 
                                   << 0x1fU) | (vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_east
                                                [(1U 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_east)))][0U] 
                                                >> 1U)));
    } else {
        VL_WRITEF_NX("x ",0);
    }
    VL_WRITEF_NX("\n",0);
    if (VL_UNLIKELY(vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__valid_out_local)) {
        VL_WRITEF_NX("IP block 0 received packet %10# from %3#,%3#\n",0,
                     32,((vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_local[1U] 
                          << 0x1fU) | (vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_local[0U] 
                                       >> 1U)),8,(0xffU 
                                                  & ((vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_local[3U] 
                                                      << 7U) 
                                                     | (vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_local[2U] 
                                                        >> 0x19U))),
                     8,(0xffU & (vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_local[2U] 
                                 >> 0x11U)));
    }
    if (VL_UNLIKELY(vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__valid_out_local)) {
        VL_WRITEF_NX("IP block 1 received packet %10# from %3#,%3#\n",0,
                     32,((vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_local[1U] 
                          << 0x1fU) | (vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_local[0U] 
                                       >> 1U)),8,(0xffU 
                                                  & ((vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_local[3U] 
                                                      << 7U) 
                                                     | (vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_local[2U] 
                                                        >> 0x19U))),
                     8,(0xffU & (vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_local[2U] 
                                 >> 0x11U)));
    }
    if (VL_UNLIKELY(vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__valid_out_local)) {
        VL_WRITEF_NX("IP block 2 received packet %10# from %3#,%3#\n",0,
                     32,((vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_local[1U] 
                          << 0x1fU) | (vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_local[0U] 
                                       >> 1U)),8,(0xffU 
                                                  & ((vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_local[3U] 
                                                      << 7U) 
                                                     | (vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_local[2U] 
                                                        >> 0x19U))),
                     8,(0xffU & (vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_local[2U] 
                                 >> 0x11U)));
    }
    if (VL_UNLIKELY(vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__valid_out_local)) {
        VL_WRITEF_NX("IP block 3 received packet %10# from %3#,%3#\n",0,
                     32,((vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_local[1U] 
                          << 0x1fU) | (vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_local[0U] 
                                       >> 1U)),8,(0xffU 
                                                  & ((vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_local[3U] 
                                                      << 7U) 
                                                     | (vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_local[2U] 
                                                        >> 0x19U))),
                     8,(0xffU & (vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_local[2U] 
                                 >> 0x11U)));
    }
    VL_WRITEF_NX("=====================================================================================\n",0);
    VL_FWRITEF_NX(vlSelfRef.mesh_onoc__DOT__f,"%0d,0,%0b,%0b,%0b,%0b,%0b,%0b,%0b,%0b,%0b,%0b,%0b,%0b,%0b,%0b,%0b,%0b,%04b,%04b,%0b\n%0d,1,%0b,%0b,%0b,%0b,%0b,%0b,%0b,%0b,%0b,%0b,%0b,%0b,%0b,%0b,%0b,%0b,%04b,%04b,%0b\n%0d,2,%0b,%0b,%0b,%0b,%0b,%0b,%0b,%0b,%0b,%0b,%0b,%0b,%0b,%0b,%0b,%0b,%04b,%04b,%0b\n%0d,3,%0b,%0b,%0b,%0b,%0b,%0b,%0b,%0b,%0b,%0b,%0b,%0b,%0b,%0b,%0b,%0b,%04b,%04b,%0b\n",0,
                  32,vlSelfRef.mesh_onoc__DOT__cycle_count,
                  1,vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide
                  [0U][0U],1,vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide
                  [0U][1U],1,vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide
                  [0U][2U],1,vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide
                  [0U][3U],1,vlSelfRef.mesh_onoc__DOT__waveguide_valid_to_photodetector
                  [0U][0U],1,vlSelfRef.mesh_onoc__DOT__waveguide_valid_to_photodetector
                  [0U][1U],1,vlSelfRef.mesh_onoc__DOT__waveguide_valid_to_photodetector
                  [0U][2U],1,vlSelfRef.mesh_onoc__DOT__waveguide_valid_to_photodetector
                  [0U][3U],1,vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router
                  [0U][0U],1,vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router
                  [0U][1U],1,vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router
                  [0U][2U],1,vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router
                  [0U][3U],1,vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator
                  [0U][0U],1,vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator
                  [0U][1U],1,vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator
                  [0U][2U],1,vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator
                  [0U][3U],4,vlSelfRef.mesh_onoc__DOT__router_request_to_send
                  [0U],4,vlSelfRef.mesh_onoc__DOT__router_granted
                  [0U],1,vlSelfRef.mesh_onoc__DOT__router_ready_for_ip
                  [0U],32,vlSelfRef.mesh_onoc__DOT__cycle_count,
                  1,vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide
                  [1U][0U],1,vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide
                  [1U][1U],1,vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide
                  [1U][2U],1,vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide
                  [1U][3U],1,vlSelfRef.mesh_onoc__DOT__waveguide_valid_to_photodetector
                  [1U][0U],1,vlSelfRef.mesh_onoc__DOT__waveguide_valid_to_photodetector
                  [1U][1U],1,vlSelfRef.mesh_onoc__DOT__waveguide_valid_to_photodetector
                  [1U][2U],1,vlSelfRef.mesh_onoc__DOT__waveguide_valid_to_photodetector
                  [1U][3U],1,vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router
                  [1U][0U],1,vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router
                  [1U][1U],1,vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router
                  [1U][2U],1,vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router
                  [1U][3U],1,vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator
                  [1U][0U],1,vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator
                  [1U][1U],1,vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator
                  [1U][2U],1,vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator
                  [1U][3U],4,vlSelfRef.mesh_onoc__DOT__router_request_to_send
                  [1U],4,vlSelfRef.mesh_onoc__DOT__router_granted
                  [1U],1,vlSelfRef.mesh_onoc__DOT__router_ready_for_ip
                  [1U],32,vlSelfRef.mesh_onoc__DOT__cycle_count,
                  1,vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide
                  [2U][0U],1,vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide
                  [2U][1U],1,vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide
                  [2U][2U],1,vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide
                  [2U][3U],1,vlSelfRef.mesh_onoc__DOT__waveguide_valid_to_photodetector
                  [2U][0U],1,vlSelfRef.mesh_onoc__DOT__waveguide_valid_to_photodetector
                  [2U][1U],1,vlSelfRef.mesh_onoc__DOT__waveguide_valid_to_photodetector
                  [2U][2U],1,vlSelfRef.mesh_onoc__DOT__waveguide_valid_to_photodetector
                  [2U][3U],1,vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router
                  [2U][0U],1,vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router
                  [2U][1U],1,vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router
                  [2U][2U],1,vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router
                  [2U][3U],1,vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator
                  [2U][0U],1,vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator
                  [2U][1U],1,vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator
                  [2U][2U],1,vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator
                  [2U][3U],4,vlSelfRef.mesh_onoc__DOT__router_request_to_send
                  [2U],4,vlSelfRef.mesh_onoc__DOT__router_granted
                  [2U],1,vlSelfRef.mesh_onoc__DOT__router_ready_for_ip
                  [2U],32,vlSelfRef.mesh_onoc__DOT__cycle_count,
                  1,vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide
                  [3U][0U],1,vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide
                  [3U][1U],1,vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide
                  [3U][2U],1,vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide
                  [3U][3U],1,vlSelfRef.mesh_onoc__DOT__waveguide_valid_to_photodetector
                  [3U][0U],1,vlSelfRef.mesh_onoc__DOT__waveguide_valid_to_photodetector
                  [3U][1U],1,vlSelfRef.mesh_onoc__DOT__waveguide_valid_to_photodetector
                  [3U][2U],1,vlSelfRef.mesh_onoc__DOT__waveguide_valid_to_photodetector
                  [3U][3U],1,vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router
                  [3U][0U],1,vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router
                  [3U][1U],1,vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router
                  [3U][2U],1,vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router
                  [3U][3U],1,vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator
                  [3U][0U],1,vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator
                  [3U][1U],1,vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator
                  [3U][2U],1,vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator
                  [3U][3U],4,vlSelfRef.mesh_onoc__DOT__router_request_to_send
                  [3U],4,vlSelfRef.mesh_onoc__DOT__router_granted
                  [3U],1,vlSelfRef.mesh_onoc__DOT__router_ready_for_ip
                  [3U]);
    vlSelfRef.mesh_onoc__DOT__cycle_count = ((IData)(1U) 
                                             + vlSelfRef.mesh_onoc__DOT__cycle_count);
}

VL_INLINE_OPT void Vmesh_onoc___024root___nba_sequent__TOP__2(Vmesh_onoc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmesh_onoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmesh_onoc___024root___nba_sequent__TOP__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mesh_onoc__DOT__waveguide_valid_to_photodetector[1U][3U] 
        = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__valid_right
        [3U];
    vlSelfRef.mesh_onoc__DOT__waveguide_valid_to_photodetector[0U][2U] 
        = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__0__KET____DOT__wg__DOT__valid_left
        [3U];
    vlSelfRef.mesh_onoc__DOT__waveguide_valid_to_photodetector[3U][3U] 
        = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__valid_right
        [3U];
    vlSelfRef.mesh_onoc__DOT__waveguide_valid_to_photodetector[2U][2U] 
        = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__1__KET____DOT__wg__DOT__valid_left
        [3U];
    vlSelfRef.mesh_onoc__DOT__waveguide_valid_to_photodetector[2U][0U] 
        = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__valid_right
        [3U];
    vlSelfRef.mesh_onoc__DOT__waveguide_valid_to_photodetector[0U][1U] 
        = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__2__KET____DOT__wg__DOT__valid_left
        [3U];
    vlSelfRef.mesh_onoc__DOT__waveguide_valid_to_photodetector[3U][0U] 
        = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__valid_right
        [3U];
    vlSelfRef.mesh_onoc__DOT__waveguide_valid_to_photodetector[1U][1U] 
        = vlSelfRef.mesh_onoc__DOT__wg_inst__BRA__3__KET____DOT__wg__DOT__valid_left
        [3U];
    vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide[0U][0U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf
        [1U];
    vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide[0U][1U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf
        [1U];
    vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide[0U][2U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf
        [1U];
    vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide[0U][3U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf
        [1U];
    vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide[1U][0U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf
        [1U];
    vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide[1U][1U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf
        [1U];
    vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide[1U][2U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf
        [1U];
    vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide[1U][3U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf
        [1U];
    vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide[2U][0U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf
        [1U];
    vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide[2U][1U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf
        [1U];
    vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide[2U][2U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf
        [1U];
    vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide[2U][3U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf
        [1U];
    vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide[3U][0U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf
        [1U];
    vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide[3U][1U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf
        [1U];
    vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide[3U][2U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf
        [1U];
    vlSelfRef.mesh_onoc__DOT__modulator_valid_to_waveguide[3U][3U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf
        [1U];
    vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router[0U][0U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf
        [1U];
    vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router[0U][1U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf
        [1U];
    vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router[0U][2U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf
        [1U];
    vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router[0U][3U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf
        [1U];
    vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router[1U][0U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf
        [1U];
    vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router[1U][1U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf
        [1U];
    vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router[1U][2U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf
        [1U];
    vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router[1U][3U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf
        [1U];
    vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router[2U][0U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf
        [1U];
    vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router[2U][1U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf
        [1U];
    vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router[2U][2U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf
        [1U];
    vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router[2U][3U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf
        [1U];
    vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router[3U][0U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf
        [1U];
    vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router[3U][1U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf
        [1U];
    vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router[3U][2U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf
        [1U];
    vlSelfRef.mesh_onoc__DOT__photodetector_valid_to_router[3U][3U] 
        = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf
        [1U];
    if (vlSelfRef.rst) {
        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__request_to_send = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__request_to_send = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__request_to_send = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__request_to_send = 0U;
    } else {
        if (vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_valid) {
            vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__request_to_send = 0U;
            vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__request_to_send 
                = ((2U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__route_dir))
                    ? ((1U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__route_dir))
                        ? (7U & (IData)(vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__request_to_send))
                        : (4U | (IData)(vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__request_to_send)))
                    : ((1U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__route_dir))
                        ? (2U | (IData)(vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__request_to_send))
                        : (0xeU & (IData)(vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__request_to_send))));
        } else {
            vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__request_to_send = 0U;
        }
        if (vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_valid) {
            vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__request_to_send = 0U;
            vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__request_to_send 
                = ((2U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_dir))
                    ? ((1U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_dir))
                        ? (8U | (IData)(vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__request_to_send))
                        : (0xbU & (IData)(vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__request_to_send)))
                    : ((1U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_dir))
                        ? (2U | (IData)(vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__request_to_send))
                        : (0xeU & (IData)(vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__request_to_send))));
        } else {
            vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__request_to_send = 0U;
        }
        if (vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_valid) {
            vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__request_to_send = 0U;
            vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__request_to_send 
                = ((2U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__route_dir))
                    ? ((1U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__route_dir))
                        ? (7U & (IData)(vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__request_to_send))
                        : (4U | (IData)(vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__request_to_send)))
                    : ((1U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__route_dir))
                        ? (0xdU & (IData)(vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__request_to_send))
                        : (1U | (IData)(vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__request_to_send))));
        } else {
            vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__request_to_send = 0U;
        }
        if (vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_valid) {
            vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__request_to_send = 0U;
            vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__request_to_send 
                = ((2U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_dir))
                    ? ((1U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_dir))
                        ? (8U | (IData)(vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__request_to_send))
                        : (0xbU & (IData)(vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__request_to_send)))
                    : ((1U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_dir))
                        ? (0xdU & (IData)(vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__request_to_send))
                        : (1U | (IData)(vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__request_to_send))));
        } else {
            vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__request_to_send = 0U;
        }
    }
    if (vlSelfRef.rst) {
        vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_valid = 0U;
    } else if (vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_valid) {
        if (VL_UNLIKELY(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_valid)) {
            vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__unnamedblk1__DOT__dest_x 
                = (0xffU & (vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[2U] 
                            >> 9U));
            vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__unnamedblk1__DOT__dest_y 
                = (0xffU & (vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[2U] 
                            >> 1U));
            VL_WRITEF_NX("Router           0 Current packet destination and router address: %1d%1d00\nRouter           0 Current valid, waiting for permission\n",0,
                         32,vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__unnamedblk1__DOT__dest_x,
                         32,vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__unnamedblk1__DOT__dest_y);
            vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__valid_out_local = 0U;
            vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__valid_out_north = 0U;
            vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__valid_out_south = 0U;
            vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__valid_out_east = 0U;
            vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__valid_out_west = 0U;
            if (VL_UNLIKELY(((0U == vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__unnamedblk1__DOT__dest_x) 
                             & (0U == vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__unnamedblk1__DOT__dest_y)))) {
                VL_WRITEF_NX("Router           0 Packet at correct destination router\n",0);
                vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_local[0U] 
                    = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[0U];
                vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_local[1U] 
                    = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[1U];
                vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_local[2U] 
                    = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[2U];
                vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_local[3U] 
                    = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[3U];
                vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__valid_out_local = 1U;
                vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_valid = 0U;
            } else if (VL_UNLIKELY((1U & (vlSelfRef.mesh_onoc__DOT__router_granted
                                          [0U] >> (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__route_dir))))) {
                VL_WRITEF_NX("Router           0 permission granted!\n",0);
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
                vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_valid = 0U;
            }
        }
    } else {
        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__valid_out_local = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__valid_out_north = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__valid_out_south = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__valid_out_east = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__valid_out_west = 0U;
        if (VL_UNLIKELY((0U < (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_local)))) {
            VL_WRITEF_NX("router 0 picking packet to process from local\n",0);
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_local 
                = (0x7fU & ((IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_local) 
                            - (IData)(1U)));
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[0U] 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_local
                [(1U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_local))][0U];
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[1U] 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_local
                [(1U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_local))][1U];
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[2U] 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_local
                [(1U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_local))][2U];
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[3U] 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_local
                [(1U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_local))][3U];
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_valid = 1U;
            vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_local 
                = (1U & ((IData)(1U) + (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_local)));
        } else if (VL_UNLIKELY((0U < (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_north)))) {
            VL_WRITEF_NX("router 0 picking packet to process from north\n",0);
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_north 
                = (3U & ((IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_north) 
                         - (IData)(1U)));
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[0U] 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_north
                [(1U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_north))][0U];
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[1U] 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_north
                [(1U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_north))][1U];
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[2U] 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_north
                [(1U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_north))][2U];
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[3U] 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_north
                [(1U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_north))][3U];
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_valid = 1U;
            vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_north 
                = (1U & ((IData)(1U) + (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_north)));
        } else if (VL_UNLIKELY((0U < (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_south)))) {
            VL_WRITEF_NX("router 0 picking packet to process from south\n",0);
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_south 
                = (3U & ((IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_south) 
                         - (IData)(1U)));
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[0U] 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_south
                [(1U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_south))][0U];
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[1U] 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_south
                [(1U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_south))][1U];
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[2U] 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_south
                [(1U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_south))][2U];
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[3U] 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_south
                [(1U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_south))][3U];
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_valid = 1U;
            vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_south 
                = (1U & ((IData)(1U) + (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_south)));
        } else if (VL_UNLIKELY((0U < (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_east)))) {
            VL_WRITEF_NX("router 0 picking packet to process from east\n",0);
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_east 
                = (3U & ((IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_east) 
                         - (IData)(1U)));
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[0U] 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_east
                [(1U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_east))][0U];
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[1U] 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_east
                [(1U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_east))][1U];
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[2U] 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_east
                [(1U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_east))][2U];
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[3U] 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_east
                [(1U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_east))][3U];
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_valid = 1U;
            vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_east 
                = (1U & ((IData)(1U) + (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_east)));
        } else if (VL_UNLIKELY((0U < (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_west)))) {
            VL_WRITEF_NX("router 0 picking packet to process from west\n",0);
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_west 
                = (3U & ((IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_west) 
                         - (IData)(1U)));
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[0U] 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_west
                [(1U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_west))][0U];
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[1U] 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_west
                [(1U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_west))][1U];
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[2U] 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_west
                [(1U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_west))][2U];
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[3U] 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_west
                [(1U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_west))][3U];
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_valid = 1U;
            vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_west 
                = (1U & ((IData)(1U) + (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_west)));
        }
    }
    if (vlSelfRef.rst) {
        vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_valid = 0U;
    } else if (vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_valid) {
        if (VL_UNLIKELY(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_valid)) {
            vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__dest_x 
                = (0xffU & (vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[2U] 
                            >> 9U));
            vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__dest_y 
                = (0xffU & (vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[2U] 
                            >> 1U));
            VL_WRITEF_NX("Router           1 Current packet destination and router address: %1d%1d10\nRouter           1 Current valid, waiting for permission\n",0,
                         32,vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__dest_x,
                         32,vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__dest_y);
            vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__valid_out_local = 0U;
            vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__valid_out_north = 0U;
            vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__valid_out_south = 0U;
            vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__valid_out_east = 0U;
            vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__valid_out_west = 0U;
            if (VL_UNLIKELY(((1U == vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__dest_x) 
                             & (0U == vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__dest_y)))) {
                VL_WRITEF_NX("Router           1 Packet at correct destination router\n",0);
                vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_local[0U] 
                    = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[0U];
                vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_local[1U] 
                    = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[1U];
                vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_local[2U] 
                    = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[2U];
                vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_local[3U] 
                    = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[3U];
                vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__valid_out_local = 1U;
                vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_valid = 0U;
            } else if (VL_UNLIKELY((1U & (vlSelfRef.mesh_onoc__DOT__router_granted
                                          [1U] >> (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_dir))))) {
                VL_WRITEF_NX("Router           1 permission granted!\n",0);
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
                vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_valid = 0U;
            }
        }
    } else {
        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__valid_out_local = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__valid_out_north = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__valid_out_south = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__valid_out_east = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__valid_out_west = 0U;
        if (VL_UNLIKELY((0U < (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_local)))) {
            VL_WRITEF_NX("router 1 picking packet to process from local\n",0);
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_local 
                = (0x7fU & ((IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_local) 
                            - (IData)(1U)));
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[0U] 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_local
                [(1U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_local))][0U];
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[1U] 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_local
                [(1U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_local))][1U];
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[2U] 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_local
                [(1U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_local))][2U];
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[3U] 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_local
                [(1U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_local))][3U];
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_valid = 1U;
            vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_local 
                = (1U & ((IData)(1U) + (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_local)));
        } else if (VL_UNLIKELY((0U < (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_north)))) {
            VL_WRITEF_NX("router 1 picking packet to process from north\n",0);
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_north 
                = (3U & ((IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_north) 
                         - (IData)(1U)));
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[0U] 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_north
                [(1U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_north))][0U];
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[1U] 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_north
                [(1U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_north))][1U];
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[2U] 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_north
                [(1U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_north))][2U];
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[3U] 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_north
                [(1U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_north))][3U];
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_valid = 1U;
            vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_north 
                = (1U & ((IData)(1U) + (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_north)));
        } else if (VL_UNLIKELY((0U < (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_south)))) {
            VL_WRITEF_NX("router 1 picking packet to process from south\n",0);
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_south 
                = (3U & ((IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_south) 
                         - (IData)(1U)));
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[0U] 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_south
                [(1U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_south))][0U];
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[1U] 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_south
                [(1U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_south))][1U];
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[2U] 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_south
                [(1U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_south))][2U];
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[3U] 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_south
                [(1U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_south))][3U];
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_valid = 1U;
            vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_south 
                = (1U & ((IData)(1U) + (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_south)));
        } else if (VL_UNLIKELY((0U < (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_east)))) {
            VL_WRITEF_NX("router 1 picking packet to process from east\n",0);
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_east 
                = (3U & ((IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_east) 
                         - (IData)(1U)));
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[0U] 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_east
                [(1U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_east))][0U];
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[1U] 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_east
                [(1U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_east))][1U];
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[2U] 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_east
                [(1U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_east))][2U];
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[3U] 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_east
                [(1U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_east))][3U];
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_valid = 1U;
            vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_east 
                = (1U & ((IData)(1U) + (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_east)));
        } else if (VL_UNLIKELY((0U < (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_west)))) {
            VL_WRITEF_NX("router 1 picking packet to process from west\n",0);
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_west 
                = (3U & ((IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_west) 
                         - (IData)(1U)));
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[0U] 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_west
                [(1U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_west))][0U];
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[1U] 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_west
                [(1U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_west))][1U];
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[2U] 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_west
                [(1U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_west))][2U];
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[3U] 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_west
                [(1U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_west))][3U];
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_valid = 1U;
            vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_west 
                = (1U & ((IData)(1U) + (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_west)));
        }
    }
    if (vlSelfRef.rst) {
        vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_valid = 0U;
    } else if (vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_valid) {
        if (VL_UNLIKELY(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_valid)) {
            vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__unnamedblk1__DOT__dest_x 
                = (0xffU & (vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[2U] 
                            >> 9U));
            vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__unnamedblk1__DOT__dest_y 
                = (0xffU & (vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[2U] 
                            >> 1U));
            VL_WRITEF_NX("Router           2 Current packet destination and router address: %1d%1d01\nRouter           2 Current valid, waiting for permission\n",0,
                         32,vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__unnamedblk1__DOT__dest_x,
                         32,vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__unnamedblk1__DOT__dest_y);
            vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__valid_out_local = 0U;
            vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__valid_out_north = 0U;
            vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__valid_out_south = 0U;
            vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__valid_out_east = 0U;
            vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__valid_out_west = 0U;
            if (VL_UNLIKELY(((0U == vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__unnamedblk1__DOT__dest_x) 
                             & (1U == vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__unnamedblk1__DOT__dest_y)))) {
                VL_WRITEF_NX("Router           2 Packet at correct destination router\n",0);
                vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_local[0U] 
                    = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[0U];
                vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_local[1U] 
                    = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[1U];
                vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_local[2U] 
                    = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[2U];
                vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_local[3U] 
                    = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[3U];
                vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__valid_out_local = 1U;
                vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_valid = 0U;
            } else if (VL_UNLIKELY((1U & (vlSelfRef.mesh_onoc__DOT__router_granted
                                          [2U] >> (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__route_dir))))) {
                VL_WRITEF_NX("Router           2 permission granted!\n",0);
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
                vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_valid = 0U;
            }
        }
    } else {
        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__valid_out_local = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__valid_out_north = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__valid_out_south = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__valid_out_east = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__valid_out_west = 0U;
        if (VL_UNLIKELY((0U < (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_local)))) {
            VL_WRITEF_NX("router 2 picking packet to process from local\n",0);
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_local 
                = (0x7fU & ((IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_local) 
                            - (IData)(1U)));
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[0U] 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_local
                [(1U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_local))][0U];
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[1U] 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_local
                [(1U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_local))][1U];
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[2U] 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_local
                [(1U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_local))][2U];
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[3U] 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_local
                [(1U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_local))][3U];
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_valid = 1U;
            vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_local 
                = (1U & ((IData)(1U) + (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_local)));
        } else if (VL_UNLIKELY((0U < (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_north)))) {
            VL_WRITEF_NX("router 2 picking packet to process from north\n",0);
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_north 
                = (3U & ((IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_north) 
                         - (IData)(1U)));
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[0U] 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_north
                [(1U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_north))][0U];
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[1U] 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_north
                [(1U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_north))][1U];
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[2U] 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_north
                [(1U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_north))][2U];
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[3U] 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_north
                [(1U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_north))][3U];
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_valid = 1U;
            vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_north 
                = (1U & ((IData)(1U) + (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_north)));
        } else if (VL_UNLIKELY((0U < (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_south)))) {
            VL_WRITEF_NX("router 2 picking packet to process from south\n",0);
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_south 
                = (3U & ((IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_south) 
                         - (IData)(1U)));
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[0U] 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_south
                [(1U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_south))][0U];
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[1U] 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_south
                [(1U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_south))][1U];
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[2U] 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_south
                [(1U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_south))][2U];
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[3U] 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_south
                [(1U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_south))][3U];
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_valid = 1U;
            vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_south 
                = (1U & ((IData)(1U) + (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_south)));
        } else if (VL_UNLIKELY((0U < (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_east)))) {
            VL_WRITEF_NX("router 2 picking packet to process from east\n",0);
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_east 
                = (3U & ((IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_east) 
                         - (IData)(1U)));
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[0U] 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_east
                [(1U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_east))][0U];
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[1U] 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_east
                [(1U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_east))][1U];
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[2U] 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_east
                [(1U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_east))][2U];
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[3U] 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_east
                [(1U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_east))][3U];
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_valid = 1U;
            vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_east 
                = (1U & ((IData)(1U) + (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_east)));
        } else if (VL_UNLIKELY((0U < (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_west)))) {
            VL_WRITEF_NX("router 2 picking packet to process from west\n",0);
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_west 
                = (3U & ((IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_west) 
                         - (IData)(1U)));
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[0U] 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_west
                [(1U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_west))][0U];
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[1U] 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_west
                [(1U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_west))][1U];
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[2U] 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_west
                [(1U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_west))][2U];
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[3U] 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__fifo_west
                [(1U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_west))][3U];
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_valid = 1U;
            vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_west 
                = (1U & ((IData)(1U) + (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__head_west)));
        }
    }
    if (vlSelfRef.rst) {
        vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_valid = 0U;
    } else if (vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_valid) {
        if (VL_UNLIKELY(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_valid)) {
            vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__dest_x 
                = (0xffU & (vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[2U] 
                            >> 9U));
            vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__dest_y 
                = (0xffU & (vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[2U] 
                            >> 1U));
            VL_WRITEF_NX("Router           3 Current packet destination and router address: %1d%1d11\nRouter           3 Current valid, waiting for permission\n",0,
                         32,vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__dest_x,
                         32,vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__dest_y);
            vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__valid_out_local = 0U;
            vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__valid_out_north = 0U;
            vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__valid_out_south = 0U;
            vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__valid_out_east = 0U;
            vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__valid_out_west = 0U;
            if (VL_UNLIKELY(((1U == vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__dest_x) 
                             & (1U == vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk1__DOT__dest_y)))) {
                VL_WRITEF_NX("Router           3 Packet at correct destination router\n",0);
                vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_local[0U] 
                    = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[0U];
                vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_local[1U] 
                    = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[1U];
                vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_local[2U] 
                    = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[2U];
                vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_local[3U] 
                    = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[3U];
                vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__valid_out_local = 1U;
                vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_valid = 0U;
            } else if (VL_UNLIKELY((1U & (vlSelfRef.mesh_onoc__DOT__router_granted
                                          [3U] >> (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_dir))))) {
                VL_WRITEF_NX("Router           3 permission granted!\n",0);
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
                vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_valid = 0U;
            }
        }
    } else {
        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__valid_out_local = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__valid_out_north = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__valid_out_south = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__valid_out_east = 0U;
        vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__valid_out_west = 0U;
        if (VL_UNLIKELY((0U < (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_local)))) {
            VL_WRITEF_NX("router 3 picking packet to process from local\n",0);
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_local 
                = (0x7fU & ((IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_local) 
                            - (IData)(1U)));
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[0U] 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_local
                [(1U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_local))][0U];
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[1U] 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_local
                [(1U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_local))][1U];
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[2U] 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_local
                [(1U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_local))][2U];
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[3U] 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_local
                [(1U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_local))][3U];
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_valid = 1U;
            vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_local 
                = (1U & ((IData)(1U) + (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_local)));
        } else if (VL_UNLIKELY((0U < (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_north)))) {
            VL_WRITEF_NX("router 3 picking packet to process from north\n",0);
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_north 
                = (3U & ((IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_north) 
                         - (IData)(1U)));
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[0U] 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_north
                [(1U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_north))][0U];
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[1U] 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_north
                [(1U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_north))][1U];
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[2U] 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_north
                [(1U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_north))][2U];
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[3U] 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_north
                [(1U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_north))][3U];
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_valid = 1U;
            vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_north 
                = (1U & ((IData)(1U) + (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_north)));
        } else if (VL_UNLIKELY((0U < (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_south)))) {
            VL_WRITEF_NX("router 3 picking packet to process from south\n",0);
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_south 
                = (3U & ((IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_south) 
                         - (IData)(1U)));
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[0U] 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_south
                [(1U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_south))][0U];
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[1U] 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_south
                [(1U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_south))][1U];
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[2U] 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_south
                [(1U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_south))][2U];
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[3U] 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_south
                [(1U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_south))][3U];
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_valid = 1U;
            vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_south 
                = (1U & ((IData)(1U) + (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_south)));
        } else if (VL_UNLIKELY((0U < (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_east)))) {
            VL_WRITEF_NX("router 3 picking packet to process from east\n",0);
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_east 
                = (3U & ((IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_east) 
                         - (IData)(1U)));
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[0U] 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_east
                [(1U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_east))][0U];
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[1U] 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_east
                [(1U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_east))][1U];
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[2U] 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_east
                [(1U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_east))][2U];
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[3U] 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_east
                [(1U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_east))][3U];
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_valid = 1U;
            vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_east 
                = (1U & ((IData)(1U) + (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_east)));
        } else if (VL_UNLIKELY((0U < (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_west)))) {
            VL_WRITEF_NX("router 3 picking packet to process from west\n",0);
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_west 
                = (3U & ((IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_west) 
                         - (IData)(1U)));
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[0U] 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_west
                [(1U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_west))][0U];
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[1U] 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_west
                [(1U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_west))][1U];
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[2U] 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_west
                [(1U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_west))][2U];
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[3U] 
                = vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__fifo_west
                [(1U & (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_west))][3U];
            vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_valid = 1U;
            vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_west 
                = (1U & ((IData)(1U) + (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__head_west)));
        }
    }
    if (vlSelfRef.rst) {
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__route_dir = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_dir = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__route_dir = 0U;
        vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_dir = 0U;
    } else {
        if (vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_valid) {
            vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__unnamedblk2__DOT__dest_x 
                = (0xffU & (vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[2U] 
                            >> 9U));
            vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__unnamedblk2__DOT__dest_y 
                = (0xffU & (vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[2U] 
                            >> 1U));
            if (VL_LTS_III(32, 0U, vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__unnamedblk2__DOT__dest_x)) {
                vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__route_dir = 2U;
            } else if (VL_GTS_III(32, 0U, vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__unnamedblk2__DOT__dest_x)) {
                vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__route_dir = 3U;
            } else if (VL_LTS_III(32, 0U, vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__unnamedblk2__DOT__dest_y)) {
                vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__route_dir = 1U;
            } else if (VL_GTS_III(32, 0U, vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__unnamedblk2__DOT__dest_y)) {
                vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__route_dir = 0U;
            }
        }
        if (vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_valid) {
            vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk2__DOT__dest_x 
                = (0xffU & (vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[2U] 
                            >> 9U));
            vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk2__DOT__dest_y 
                = (0xffU & (vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[2U] 
                            >> 1U));
            if (VL_LTS_III(32, 1U, vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk2__DOT__dest_x)) {
                vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_dir = 2U;
            } else if (VL_GTS_III(32, 1U, vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk2__DOT__dest_x)) {
                vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_dir = 3U;
            } else if (VL_LTS_III(32, 0U, vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk2__DOT__dest_y)) {
                vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_dir = 1U;
            } else if (VL_GTS_III(32, 0U, vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk2__DOT__dest_y)) {
                vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_dir = 0U;
            }
        }
        if (vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_valid) {
            vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__unnamedblk2__DOT__dest_x 
                = (0xffU & (vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[2U] 
                            >> 9U));
            vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__unnamedblk2__DOT__dest_y 
                = (0xffU & (vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[2U] 
                            >> 1U));
            if (VL_LTS_III(32, 0U, vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__unnamedblk2__DOT__dest_x)) {
                vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__route_dir = 2U;
            } else if (VL_GTS_III(32, 0U, vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__unnamedblk2__DOT__dest_x)) {
                vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__route_dir = 3U;
            } else if (VL_LTS_III(32, 1U, vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__unnamedblk2__DOT__dest_y)) {
                vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__route_dir = 1U;
            } else if (VL_GTS_III(32, 1U, vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__unnamedblk2__DOT__dest_y)) {
                vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__route_dir = 0U;
            }
        }
        if (vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_valid) {
            vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk2__DOT__dest_x 
                = (0xffU & (vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[2U] 
                            >> 9U));
            vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk2__DOT__dest_y 
                = (0xffU & (vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[2U] 
                            >> 1U));
            if (VL_LTS_III(32, 1U, vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk2__DOT__dest_x)) {
                vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_dir = 2U;
            } else if (VL_GTS_III(32, 1U, vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk2__DOT__dest_x)) {
                vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_dir = 3U;
            } else if (VL_LTS_III(32, 1U, vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk2__DOT__dest_y)) {
                vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_dir = 1U;
            } else if (VL_GTS_III(32, 1U, vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__unnamedblk2__DOT__dest_y)) {
                vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__route_dir = 0U;
            }
        }
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
    vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_north 
        = vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_north;
    vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_south 
        = vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_south;
    vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_east 
        = vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_east;
    vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_west 
        = vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_west;
    vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_local 
        = vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_local;
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
    vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_north 
        = vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_north;
    vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_south 
        = vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_south;
    vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_east 
        = vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_east;
    vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_west 
        = vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_west;
    vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_local 
        = vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_local;
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
    vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_north 
        = vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_north;
    vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_south 
        = vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_south;
    vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_east 
        = vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_east;
    vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_west 
        = vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_west;
    vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_local 
        = vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_local;
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
    vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_north 
        = vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_north;
    vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_south 
        = vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_south;
    vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_east 
        = vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_east;
    vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_west 
        = vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_west;
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
    vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_local 
        = vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_local;
    vlSelfRef.mesh_onoc__DOT__router_request_to_send[0U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__request_to_send;
    vlSelfRef.mesh_onoc__DOT____Vcellinp__wg_inst__BRA__0__KET____DOT__fp_arb__request 
        = ((2U & ((IData)(vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__request_to_send) 
                  >> 1U)) | (1U & ((IData)(vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__request_to_send) 
                                   >> 3U)));
    vlSelfRef.mesh_onoc__DOT__router_request_to_send[1U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__request_to_send;
    vlSelfRef.mesh_onoc__DOT____Vcellinp__wg_inst__BRA__2__KET____DOT__fp_arb__request 
        = ((2U & (IData)(vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__request_to_send)) 
           | (1U & (IData)(vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__request_to_send)));
    vlSelfRef.mesh_onoc__DOT__router_request_to_send[2U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__request_to_send;
    vlSelfRef.mesh_onoc__DOT____Vcellinp__wg_inst__BRA__1__KET____DOT__fp_arb__request 
        = ((2U & ((IData)(vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__request_to_send) 
                  >> 1U)) | (1U & ((IData)(vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__request_to_send) 
                                   >> 3U)));
    vlSelfRef.mesh_onoc__DOT____Vcellinp__wg_inst__BRA__3__KET____DOT__fp_arb__request 
        = ((2U & (IData)(vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__request_to_send)) 
           | (1U & (IData)(vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__request_to_send)));
    vlSelfRef.mesh_onoc__DOT__router_request_to_send[3U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__request_to_send;
    vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator[0U][0U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__valid_out_north;
    vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator[0U][1U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__valid_out_south;
    vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator[0U][2U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__valid_out_east;
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
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[0U][2U][0U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_east[0U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[0U][2U][1U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_east[1U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[0U][2U][2U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_east[2U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[0U][2U][3U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_east[3U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[0U][1U][0U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_south[0U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[0U][1U][1U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_south[1U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[0U][1U][2U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_south[2U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[0U][1U][3U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_south[3U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[0U][0U][0U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_north[0U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[0U][0U][1U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_north[1U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[0U][0U][2U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_north[2U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[0U][0U][3U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_north[3U];
    vlSelfRef.mesh_onoc__DOT__router_ready_to_receive[0U][0U] 
        = (2U > (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_north));
    vlSelfRef.mesh_onoc__DOT__router_ready_to_receive[0U][1U] 
        = (2U > (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_south));
    vlSelfRef.mesh_onoc__DOT__router_ready_to_receive[0U][2U] 
        = (2U > (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_east));
    vlSelfRef.mesh_onoc__DOT__router_ready_to_receive[0U][3U] 
        = (2U > (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_west));
    vlSelfRef.mesh_onoc__DOT__router_ready_for_ip[0U] 
        = (2U > (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_local));
    vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator[1U][0U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__valid_out_north;
    vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator[1U][1U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__valid_out_south;
    vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator[1U][2U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__valid_out_east;
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
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[1U][2U][0U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_east[0U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[1U][2U][1U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_east[1U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[1U][2U][2U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_east[2U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[1U][2U][3U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_east[3U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[1U][1U][0U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_south[0U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[1U][1U][1U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_south[1U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[1U][1U][2U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_south[2U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[1U][1U][3U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_south[3U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[1U][0U][0U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_north[0U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[1U][0U][1U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_north[1U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[1U][0U][2U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_north[2U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[1U][0U][3U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_north[3U];
    vlSelfRef.mesh_onoc__DOT__router_ready_to_receive[1U][0U] 
        = (2U > (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_north));
    vlSelfRef.mesh_onoc__DOT__router_ready_to_receive[1U][1U] 
        = (2U > (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_south));
    vlSelfRef.mesh_onoc__DOT__router_ready_to_receive[1U][2U] 
        = (2U > (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_east));
    vlSelfRef.mesh_onoc__DOT__router_ready_to_receive[1U][3U] 
        = (2U > (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_west));
    vlSelfRef.mesh_onoc__DOT__router_ready_for_ip[1U] 
        = (2U > (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_local));
    vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator[2U][0U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__valid_out_north;
    vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator[2U][1U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__valid_out_south;
    vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator[2U][2U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__valid_out_east;
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
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[2U][2U][0U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_east[0U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[2U][2U][1U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_east[1U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[2U][2U][2U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_east[2U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[2U][2U][3U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_east[3U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[2U][1U][0U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_south[0U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[2U][1U][1U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_south[1U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[2U][1U][2U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_south[2U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[2U][1U][3U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_south[3U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[2U][0U][0U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_north[0U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[2U][0U][1U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_north[1U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[2U][0U][2U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_north[2U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[2U][0U][3U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__data_out_north[3U];
    vlSelfRef.mesh_onoc__DOT__router_ready_to_receive[2U][0U] 
        = (2U > (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_north));
    vlSelfRef.mesh_onoc__DOT__router_ready_to_receive[2U][1U] 
        = (2U > (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_south));
    vlSelfRef.mesh_onoc__DOT__router_ready_to_receive[2U][2U] 
        = (2U > (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_east));
    vlSelfRef.mesh_onoc__DOT__router_ready_to_receive[2U][3U] 
        = (2U > (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_west));
    vlSelfRef.mesh_onoc__DOT__router_ready_for_ip[2U] 
        = (2U > (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__count_local));
    vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator[3U][0U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__valid_out_north;
    vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator[3U][1U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__valid_out_south;
    vlSelfRef.mesh_onoc__DOT__router_valid_to_modulator[3U][2U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__valid_out_east;
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
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[3U][2U][0U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_east[0U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[3U][2U][1U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_east[1U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[3U][2U][2U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_east[2U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[3U][2U][3U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_east[3U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[3U][1U][0U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_south[0U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[3U][1U][1U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_south[1U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[3U][1U][2U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_south[2U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[3U][1U][3U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_south[3U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[3U][0U][0U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_north[0U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[3U][0U][1U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_north[1U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[3U][0U][2U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_north[2U];
    vlSelfRef.mesh_onoc__DOT__router_to_modulator[3U][0U][3U] 
        = vlSelfRef.mesh_onoc__DOT____Vcellout__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__data_out_north[3U];
    vlSelfRef.mesh_onoc__DOT__router_ready_to_receive[3U][0U] 
        = (2U > (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_north));
    vlSelfRef.mesh_onoc__DOT__router_ready_to_receive[3U][1U] 
        = (2U > (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_south));
    vlSelfRef.mesh_onoc__DOT__router_ready_to_receive[3U][2U] 
        = (2U > (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_east));
    vlSelfRef.mesh_onoc__DOT__router_ready_to_receive[3U][3U] 
        = (2U > (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_west));
    vlSelfRef.mesh_onoc__DOT__router_ready_for_ip[3U] 
        = (2U > (IData)(vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__count_local));
    vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[0U] 
        = vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[0U];
    vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[1U] 
        = vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[1U];
    vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[2U] 
        = vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[2U];
    vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[3U] 
        = vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[3U];
    vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_valid 
        = vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_valid;
    vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[0U] 
        = vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[0U];
    vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[1U] 
        = vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[1U];
    vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[2U] 
        = vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[2U];
    vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[3U] 
        = vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[3U];
    vlSelfRef.mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_valid 
        = vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__0__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_valid;
    vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[0U] 
        = vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[0U];
    vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[1U] 
        = vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[1U];
    vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[2U] 
        = vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[2U];
    vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[3U] 
        = vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_packet[3U];
    vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_valid 
        = vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__0__KET____DOT__um_router__DOT__current_valid;
    vlSelfRef.mesh_onoc__DOT____Vcellinp__wg_inst__BRA__0__KET____DOT__fp_arb__freeze_all_grants 
        = ((2U & ((~ vlSelfRef.mesh_onoc__DOT__router_ready_to_receive
                   [0U][2U]) << 1U)) | (1U & (~ vlSelfRef.mesh_onoc__DOT__router_ready_to_receive
                                              [1U][3U])));
    vlSelfRef.mesh_onoc__DOT____Vcellinp__wg_inst__BRA__1__KET____DOT__fp_arb__freeze_all_grants 
        = ((2U & ((~ vlSelfRef.mesh_onoc__DOT__router_ready_to_receive
                   [2U][2U]) << 1U)) | (1U & (~ vlSelfRef.mesh_onoc__DOT__router_ready_to_receive
                                              [3U][3U])));
    vlSelfRef.mesh_onoc__DOT____Vcellinp__wg_inst__BRA__2__KET____DOT__fp_arb__freeze_all_grants 
        = ((2U & ((~ vlSelfRef.mesh_onoc__DOT__router_ready_to_receive
                   [0U][1U]) << 1U)) | (1U & (~ vlSelfRef.mesh_onoc__DOT__router_ready_to_receive
                                              [2U][0U])));
    vlSelfRef.mesh_onoc__DOT____Vcellinp__wg_inst__BRA__3__KET____DOT__fp_arb__freeze_all_grants 
        = ((2U & ((~ vlSelfRef.mesh_onoc__DOT__router_ready_to_receive
                   [1U][1U]) << 1U)) | (1U & (~ vlSelfRef.mesh_onoc__DOT__router_ready_to_receive
                                              [3U][0U])));
    vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[0U] 
        = vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[0U];
    vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[1U] 
        = vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[1U];
    vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[2U] 
        = vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[2U];
    vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[3U] 
        = vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_packet[3U];
    vlSelfRef.mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_valid 
        = vlSelfRef.__Vdly__mesh_onoc__DOT__rows__BRA__1__KET____DOT__cols__BRA__1__KET____DOT__um_router__DOT__current_valid;
}

void Vmesh_onoc___024root___eval_triggers__act(Vmesh_onoc___024root* vlSelf);
void Vmesh_onoc___024root___eval_act(Vmesh_onoc___024root* vlSelf);

bool Vmesh_onoc___024root___eval_phase__act(Vmesh_onoc___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmesh_onoc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmesh_onoc___024root___eval_phase__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
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
