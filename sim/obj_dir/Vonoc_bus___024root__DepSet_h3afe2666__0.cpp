// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vonoc_bus.h for the primary calling header

#include "Vonoc_bus__pch.h"
#include "Vonoc_bus___024root.h"

void Vonoc_bus___024root___eval_act(Vonoc_bus___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vonoc_bus__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vonoc_bus___024root___eval_act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vonoc_bus___024root___nba_sequent__TOP__0(Vonoc_bus___024root* vlSelf);
void Vonoc_bus___024root___nba_sequent__TOP__1(Vonoc_bus___024root* vlSelf);

void Vonoc_bus___024root___eval_nba(Vonoc_bus___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vonoc_bus__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vonoc_bus___024root___eval_nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vonoc_bus___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vonoc_bus___024root___nba_sequent__TOP__1(vlSelf);
    }
}

VL_INLINE_OPT void Vonoc_bus___024root___nba_sequent__TOP__0(Vonoc_bus___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vonoc_bus__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vonoc_bus___024root___nba_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(vlSelfRef.onoc_bus__DOT__mod0__DOT__valid_buf
                    [1U])) {
        VL_WRITEF_NX("Modulator 0 forwarding packet ID %0#\n",0,
                     32,((vlSelfRef.onoc_bus__DOT__mod0__DOT__buffer
                          [1U][1U] << 0x1fU) | (vlSelfRef.onoc_bus__DOT__mod0__DOT__buffer
                                                [1U][0U] 
                                                >> 1U)));
    }
    if (VL_UNLIKELY(vlSelfRef.onoc_bus__DOT__mod1__DOT__valid_buf
                    [1U])) {
        VL_WRITEF_NX("Modulator 1 forwarding packet ID %0#\n",0,
                     32,((vlSelfRef.onoc_bus__DOT__mod1__DOT__buffer
                          [1U][1U] << 0x1fU) | (vlSelfRef.onoc_bus__DOT__mod1__DOT__buffer
                                                [1U][0U] 
                                                >> 1U)));
    }
    if (VL_UNLIKELY(vlSelfRef.onoc_bus__DOT__pd0__DOT__valid_buf
                    [1U])) {
        VL_WRITEF_NX("IP block 0 received packet from IP %0# with ID %0#\n",0,
                     32,VL_SHIFTR_III(32,32,32, ((vlSelfRef.onoc_bus__DOT__pd0__DOT__buffer
                                                  [1U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSelfRef.onoc_bus__DOT__pd0__DOT__buffer
                                                    [1U][1U] 
                                                    >> 1U)), 0x10U),
                     32,(0xffffU & (vlSelfRef.onoc_bus__DOT__pd0__DOT__buffer
                                    [1U][1U] >> 1U)));
    }
    if (VL_UNLIKELY(vlSelfRef.onoc_bus__DOT__pd1__DOT__valid_buf
                    [1U])) {
        VL_WRITEF_NX("IP block 1 received packet from IP %0# with ID %0#\n",0,
                     32,VL_SHIFTR_III(32,32,32, ((vlSelfRef.onoc_bus__DOT__pd1__DOT__buffer
                                                  [1U][2U] 
                                                  << 0x1fU) 
                                                 | (vlSelfRef.onoc_bus__DOT__pd1__DOT__buffer
                                                    [1U][1U] 
                                                    >> 1U)), 0x10U),
                     32,(0xffffU & (vlSelfRef.onoc_bus__DOT__pd1__DOT__buffer
                                    [1U][1U] >> 1U)));
    }
    if (VL_UNLIKELY(vlSelfRef.onoc_bus__DOT__wg__DOT__valid_right
                    [3U])) {
        VL_WRITEF_NX("Waveguide outputs packet ID %0# R-> at cycle %0t\n",0,
                     32,((vlSelfRef.onoc_bus__DOT__wg__DOT__buffer_right
                          [3U][1U] << 0x1fU) | (vlSelfRef.onoc_bus__DOT__wg__DOT__buffer_right
                                                [3U][0U] 
                                                >> 1U)),
                     64,VL_TIME_UNITED_Q(1),-12);
    }
    VL_WRITEF_NX("Fixed Priority Arbiter State:\n  request           = %b\n  done              = %b\n  grant             = %b\n  waiting_for_done  = %b\n",0,
                 2,vlSelfRef.onoc_bus__DOT__router_request,
                 2,((vlSelfRef.onoc_bus__DOT__wg__DOT__valid_left
                     [2U] << 1U) | vlSelfRef.onoc_bus__DOT__wg__DOT__valid_right
                    [2U]),2,(IData)(vlSelfRef.onoc_bus__DOT__fp_arb__DOT__current_grant),
                 1,vlSelfRef.onoc_bus__DOT__fp_arb__DOT__waiting_for_done);
}

VL_INLINE_OPT void Vonoc_bus___024root___nba_sequent__TOP__1(Vonoc_bus___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vonoc_bus__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vonoc_bus___024root___nba_sequent__TOP__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*15:0*/ __Vfunc_onoc_bus__DOT__ip_inst0__DOT__get_random_destination__0__Vfuncout;
    __Vfunc_onoc_bus__DOT__ip_inst0__DOT__get_random_destination__0__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_onoc_bus__DOT__ip_inst0__DOT__get_random_destination__0__self_id;
    __Vfunc_onoc_bus__DOT__ip_inst0__DOT__get_random_destination__0__self_id = 0;
    SData/*15:0*/ __Vfunc_onoc_bus__DOT__ip_inst0__DOT__get_random_destination__0__random_id;
    __Vfunc_onoc_bus__DOT__ip_inst0__DOT__get_random_destination__0__random_id = 0;
    CData/*7:0*/ __Vfunc_onoc_bus__DOT__ip_inst0__DOT__get_random_destination__0__rand_y;
    __Vfunc_onoc_bus__DOT__ip_inst0__DOT__get_random_destination__0__rand_y = 0;
    SData/*15:0*/ __Vfunc_onoc_bus__DOT__ip_inst0__DOT__encode_xy__1__Vfuncout;
    __Vfunc_onoc_bus__DOT__ip_inst0__DOT__encode_xy__1__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_onoc_bus__DOT__ip_inst0__DOT__encode_xy__1__y;
    __Vfunc_onoc_bus__DOT__ip_inst0__DOT__encode_xy__1__y = 0;
    SData/*15:0*/ __Vfunc_onoc_bus__DOT__ip_inst1__DOT__get_random_destination__3__Vfuncout;
    __Vfunc_onoc_bus__DOT__ip_inst1__DOT__get_random_destination__3__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_onoc_bus__DOT__ip_inst1__DOT__get_random_destination__3__self_id;
    __Vfunc_onoc_bus__DOT__ip_inst1__DOT__get_random_destination__3__self_id = 0;
    SData/*15:0*/ __Vfunc_onoc_bus__DOT__ip_inst1__DOT__get_random_destination__3__random_id;
    __Vfunc_onoc_bus__DOT__ip_inst1__DOT__get_random_destination__3__random_id = 0;
    CData/*7:0*/ __Vfunc_onoc_bus__DOT__ip_inst1__DOT__get_random_destination__3__rand_y;
    __Vfunc_onoc_bus__DOT__ip_inst1__DOT__get_random_destination__3__rand_y = 0;
    SData/*15:0*/ __Vfunc_onoc_bus__DOT__ip_inst1__DOT__encode_xy__4__Vfuncout;
    __Vfunc_onoc_bus__DOT__ip_inst1__DOT__encode_xy__4__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_onoc_bus__DOT__ip_inst1__DOT__encode_xy__4__y;
    __Vfunc_onoc_bus__DOT__ip_inst1__DOT__encode_xy__4__y = 0;
    CData/*0:0*/ __Vdly__onoc_bus__DOT__ip_inst0__DOT__pkt_sent_last_cycle;
    __Vdly__onoc_bus__DOT__ip_inst0__DOT__pkt_sent_last_cycle = 0;
    IData/*31:0*/ __Vdly__onoc_bus__DOT__ip_inst0__DOT__cycle_counter;
    __Vdly__onoc_bus__DOT__ip_inst0__DOT__cycle_counter = 0;
    SData/*15:0*/ __Vdly__onoc_bus__DOT__ip_inst0__DOT__destination;
    __Vdly__onoc_bus__DOT__ip_inst0__DOT__destination = 0;
    CData/*0:0*/ __Vdly__onoc_bus__DOT__ip_inst1__DOT__pkt_sent_last_cycle;
    __Vdly__onoc_bus__DOT__ip_inst1__DOT__pkt_sent_last_cycle = 0;
    IData/*31:0*/ __Vdly__onoc_bus__DOT__ip_inst1__DOT__cycle_counter;
    __Vdly__onoc_bus__DOT__ip_inst1__DOT__cycle_counter = 0;
    SData/*15:0*/ __Vdly__onoc_bus__DOT__ip_inst1__DOT__destination;
    __Vdly__onoc_bus__DOT__ip_inst1__DOT__destination = 0;
    CData/*0:0*/ __Vdly__onoc_bus__DOT__router0__DOT__pending_send_packet;
    __Vdly__onoc_bus__DOT__router0__DOT__pending_send_packet = 0;
    IData/*31:0*/ __Vdly__onoc_bus__DOT__router0__DOT__packet_id_counter;
    __Vdly__onoc_bus__DOT__router0__DOT__packet_id_counter = 0;
    VlWide<4>/*96:0*/ __Vdly__onoc_bus__DOT__router0__DOT__outgoing_pkt_buffer;
    VL_ZERO_W(97, __Vdly__onoc_bus__DOT__router0__DOT__outgoing_pkt_buffer);
    CData/*0:0*/ __Vdly__onoc_bus__DOT__router1__DOT__pending_send_packet;
    __Vdly__onoc_bus__DOT__router1__DOT__pending_send_packet = 0;
    IData/*31:0*/ __Vdly__onoc_bus__DOT__router1__DOT__packet_id_counter;
    __Vdly__onoc_bus__DOT__router1__DOT__packet_id_counter = 0;
    VlWide<4>/*96:0*/ __Vdly__onoc_bus__DOT__router1__DOT__outgoing_pkt_buffer;
    VL_ZERO_W(97, __Vdly__onoc_bus__DOT__router1__DOT__outgoing_pkt_buffer);
    IData/*31:0*/ __Vdly__onoc_bus__DOT__wg__DOT__current_cycle;
    __Vdly__onoc_bus__DOT__wg__DOT__current_cycle = 0;
    CData/*1:0*/ __Vdly__onoc_bus__DOT__fp_arb__DOT__current_grant;
    __Vdly__onoc_bus__DOT__fp_arb__DOT__current_grant = 0;
    CData/*0:0*/ __Vdly__onoc_bus__DOT__fp_arb__DOT__waiting_for_done;
    __Vdly__onoc_bus__DOT__fp_arb__DOT__waiting_for_done = 0;
    CData/*0:0*/ __VdlySet__onoc_bus__DOT__mod0__DOT__buffer__v0;
    __VdlySet__onoc_bus__DOT__mod0__DOT__buffer__v0 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__onoc_bus__DOT__mod0__DOT__buffer__v2;
    VL_ZERO_W(97, __VdlyVal__onoc_bus__DOT__mod0__DOT__buffer__v2);
    CData/*0:0*/ __VdlySet__onoc_bus__DOT__mod0__DOT__buffer__v2;
    __VdlySet__onoc_bus__DOT__mod0__DOT__buffer__v2 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__onoc_bus__DOT__mod0__DOT__buffer__v3;
    VL_ZERO_W(97, __VdlyVal__onoc_bus__DOT__mod0__DOT__buffer__v3);
    CData/*0:0*/ __VdlySet__onoc_bus__DOT__mod0__DOT__valid_buf__v0;
    __VdlySet__onoc_bus__DOT__mod0__DOT__valid_buf__v0 = 0;
    CData/*0:0*/ __VdlyVal__onoc_bus__DOT__mod0__DOT__valid_buf__v2;
    __VdlyVal__onoc_bus__DOT__mod0__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlySet__onoc_bus__DOT__mod0__DOT__valid_buf__v2;
    __VdlySet__onoc_bus__DOT__mod0__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlyVal__onoc_bus__DOT__mod0__DOT__valid_buf__v3;
    __VdlyVal__onoc_bus__DOT__mod0__DOT__valid_buf__v3 = 0;
    CData/*0:0*/ __VdlySet__onoc_bus__DOT__mod1__DOT__buffer__v0;
    __VdlySet__onoc_bus__DOT__mod1__DOT__buffer__v0 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__onoc_bus__DOT__mod1__DOT__buffer__v2;
    VL_ZERO_W(97, __VdlyVal__onoc_bus__DOT__mod1__DOT__buffer__v2);
    CData/*0:0*/ __VdlySet__onoc_bus__DOT__mod1__DOT__buffer__v2;
    __VdlySet__onoc_bus__DOT__mod1__DOT__buffer__v2 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__onoc_bus__DOT__mod1__DOT__buffer__v3;
    VL_ZERO_W(97, __VdlyVal__onoc_bus__DOT__mod1__DOT__buffer__v3);
    CData/*0:0*/ __VdlySet__onoc_bus__DOT__mod1__DOT__valid_buf__v0;
    __VdlySet__onoc_bus__DOT__mod1__DOT__valid_buf__v0 = 0;
    CData/*0:0*/ __VdlyVal__onoc_bus__DOT__mod1__DOT__valid_buf__v2;
    __VdlyVal__onoc_bus__DOT__mod1__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlySet__onoc_bus__DOT__mod1__DOT__valid_buf__v2;
    __VdlySet__onoc_bus__DOT__mod1__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlyVal__onoc_bus__DOT__mod1__DOT__valid_buf__v3;
    __VdlyVal__onoc_bus__DOT__mod1__DOT__valid_buf__v3 = 0;
    CData/*0:0*/ __VdlySet__onoc_bus__DOT__wg__DOT__buffer_left__v0;
    __VdlySet__onoc_bus__DOT__wg__DOT__buffer_left__v0 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__onoc_bus__DOT__wg__DOT__buffer_left__v4;
    VL_ZERO_W(97, __VdlyVal__onoc_bus__DOT__wg__DOT__buffer_left__v4);
    CData/*0:0*/ __VdlySet__onoc_bus__DOT__wg__DOT__buffer_left__v4;
    __VdlySet__onoc_bus__DOT__wg__DOT__buffer_left__v4 = 0;
    CData/*0:0*/ __VdlyVal__onoc_bus__DOT__wg__DOT__valid_left__v4;
    __VdlyVal__onoc_bus__DOT__wg__DOT__valid_left__v4 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__onoc_bus__DOT__wg__DOT__buffer_right__v4;
    VL_ZERO_W(97, __VdlyVal__onoc_bus__DOT__wg__DOT__buffer_right__v4);
    CData/*0:0*/ __VdlyVal__onoc_bus__DOT__wg__DOT__valid_right__v4;
    __VdlyVal__onoc_bus__DOT__wg__DOT__valid_right__v4 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__onoc_bus__DOT__wg__DOT__buffer_left__v5;
    VL_ZERO_W(97, __VdlyVal__onoc_bus__DOT__wg__DOT__buffer_left__v5);
    CData/*0:0*/ __VdlyVal__onoc_bus__DOT__wg__DOT__valid_left__v5;
    __VdlyVal__onoc_bus__DOT__wg__DOT__valid_left__v5 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__onoc_bus__DOT__wg__DOT__buffer_right__v5;
    VL_ZERO_W(97, __VdlyVal__onoc_bus__DOT__wg__DOT__buffer_right__v5);
    CData/*0:0*/ __VdlyVal__onoc_bus__DOT__wg__DOT__valid_right__v5;
    __VdlyVal__onoc_bus__DOT__wg__DOT__valid_right__v5 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__onoc_bus__DOT__wg__DOT__buffer_left__v6;
    VL_ZERO_W(97, __VdlyVal__onoc_bus__DOT__wg__DOT__buffer_left__v6);
    CData/*0:0*/ __VdlyVal__onoc_bus__DOT__wg__DOT__valid_left__v6;
    __VdlyVal__onoc_bus__DOT__wg__DOT__valid_left__v6 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__onoc_bus__DOT__wg__DOT__buffer_right__v6;
    VL_ZERO_W(97, __VdlyVal__onoc_bus__DOT__wg__DOT__buffer_right__v6);
    CData/*0:0*/ __VdlyVal__onoc_bus__DOT__wg__DOT__valid_right__v6;
    __VdlyVal__onoc_bus__DOT__wg__DOT__valid_right__v6 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__onoc_bus__DOT__wg__DOT__buffer_left__v7;
    VL_ZERO_W(97, __VdlyVal__onoc_bus__DOT__wg__DOT__buffer_left__v7);
    CData/*0:0*/ __VdlyVal__onoc_bus__DOT__wg__DOT__valid_left__v7;
    __VdlyVal__onoc_bus__DOT__wg__DOT__valid_left__v7 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__onoc_bus__DOT__wg__DOT__buffer_right__v7;
    VL_ZERO_W(97, __VdlyVal__onoc_bus__DOT__wg__DOT__buffer_right__v7);
    CData/*0:0*/ __VdlyVal__onoc_bus__DOT__wg__DOT__valid_right__v7;
    __VdlyVal__onoc_bus__DOT__wg__DOT__valid_right__v7 = 0;
    CData/*0:0*/ __VdlySet__onoc_bus__DOT__pd0__DOT__buffer__v0;
    __VdlySet__onoc_bus__DOT__pd0__DOT__buffer__v0 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__onoc_bus__DOT__pd0__DOT__buffer__v2;
    VL_ZERO_W(97, __VdlyVal__onoc_bus__DOT__pd0__DOT__buffer__v2);
    CData/*0:0*/ __VdlySet__onoc_bus__DOT__pd0__DOT__buffer__v2;
    __VdlySet__onoc_bus__DOT__pd0__DOT__buffer__v2 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__onoc_bus__DOT__pd0__DOT__buffer__v3;
    VL_ZERO_W(97, __VdlyVal__onoc_bus__DOT__pd0__DOT__buffer__v3);
    CData/*0:0*/ __VdlySet__onoc_bus__DOT__pd0__DOT__valid_buf__v0;
    __VdlySet__onoc_bus__DOT__pd0__DOT__valid_buf__v0 = 0;
    CData/*0:0*/ __VdlyVal__onoc_bus__DOT__pd0__DOT__valid_buf__v2;
    __VdlyVal__onoc_bus__DOT__pd0__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlySet__onoc_bus__DOT__pd0__DOT__valid_buf__v2;
    __VdlySet__onoc_bus__DOT__pd0__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlyVal__onoc_bus__DOT__pd0__DOT__valid_buf__v3;
    __VdlyVal__onoc_bus__DOT__pd0__DOT__valid_buf__v3 = 0;
    CData/*0:0*/ __VdlySet__onoc_bus__DOT__pd1__DOT__buffer__v0;
    __VdlySet__onoc_bus__DOT__pd1__DOT__buffer__v0 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__onoc_bus__DOT__pd1__DOT__buffer__v2;
    VL_ZERO_W(97, __VdlyVal__onoc_bus__DOT__pd1__DOT__buffer__v2);
    CData/*0:0*/ __VdlySet__onoc_bus__DOT__pd1__DOT__buffer__v2;
    __VdlySet__onoc_bus__DOT__pd1__DOT__buffer__v2 = 0;
    VlWide<4>/*96:0*/ __VdlyVal__onoc_bus__DOT__pd1__DOT__buffer__v3;
    VL_ZERO_W(97, __VdlyVal__onoc_bus__DOT__pd1__DOT__buffer__v3);
    CData/*0:0*/ __VdlySet__onoc_bus__DOT__pd1__DOT__valid_buf__v0;
    __VdlySet__onoc_bus__DOT__pd1__DOT__valid_buf__v0 = 0;
    CData/*0:0*/ __VdlyVal__onoc_bus__DOT__pd1__DOT__valid_buf__v2;
    __VdlyVal__onoc_bus__DOT__pd1__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlySet__onoc_bus__DOT__pd1__DOT__valid_buf__v2;
    __VdlySet__onoc_bus__DOT__pd1__DOT__valid_buf__v2 = 0;
    CData/*0:0*/ __VdlyVal__onoc_bus__DOT__pd1__DOT__valid_buf__v3;
    __VdlyVal__onoc_bus__DOT__pd1__DOT__valid_buf__v3 = 0;
    // Body
    __Vdly__onoc_bus__DOT__wg__DOT__current_cycle = vlSelfRef.onoc_bus__DOT__wg__DOT__current_cycle;
    __VdlySet__onoc_bus__DOT__pd0__DOT__buffer__v0 = 0U;
    __VdlySet__onoc_bus__DOT__pd0__DOT__buffer__v2 = 0U;
    __VdlySet__onoc_bus__DOT__pd1__DOT__buffer__v0 = 0U;
    __VdlySet__onoc_bus__DOT__pd1__DOT__buffer__v2 = 0U;
    __VdlySet__onoc_bus__DOT__pd0__DOT__valid_buf__v0 = 0U;
    __VdlySet__onoc_bus__DOT__pd0__DOT__valid_buf__v2 = 0U;
    __Vdly__onoc_bus__DOT__ip_inst0__DOT__pkt_sent_last_cycle 
        = vlSelfRef.onoc_bus__DOT__ip_inst0__DOT__pkt_sent_last_cycle;
    __Vdly__onoc_bus__DOT__ip_inst0__DOT__cycle_counter 
        = vlSelfRef.onoc_bus__DOT__ip_inst0__DOT__cycle_counter;
    __Vdly__onoc_bus__DOT__ip_inst0__DOT__destination 
        = vlSelfRef.onoc_bus__DOT__ip_inst0__DOT__destination;
    __Vdly__onoc_bus__DOT__ip_inst1__DOT__pkt_sent_last_cycle 
        = vlSelfRef.onoc_bus__DOT__ip_inst1__DOT__pkt_sent_last_cycle;
    __Vdly__onoc_bus__DOT__ip_inst1__DOT__cycle_counter 
        = vlSelfRef.onoc_bus__DOT__ip_inst1__DOT__cycle_counter;
    __Vdly__onoc_bus__DOT__ip_inst1__DOT__destination 
        = vlSelfRef.onoc_bus__DOT__ip_inst1__DOT__destination;
    __VdlySet__onoc_bus__DOT__pd1__DOT__valid_buf__v0 = 0U;
    __VdlySet__onoc_bus__DOT__pd1__DOT__valid_buf__v2 = 0U;
    __Vdly__onoc_bus__DOT__fp_arb__DOT__current_grant 
        = vlSelfRef.onoc_bus__DOT__fp_arb__DOT__current_grant;
    __Vdly__onoc_bus__DOT__fp_arb__DOT__waiting_for_done 
        = vlSelfRef.onoc_bus__DOT__fp_arb__DOT__waiting_for_done;
    __Vdly__onoc_bus__DOT__router0__DOT__outgoing_pkt_buffer[0U] 
        = vlSelfRef.onoc_bus__DOT__router0__DOT__outgoing_pkt_buffer[0U];
    __Vdly__onoc_bus__DOT__router0__DOT__outgoing_pkt_buffer[1U] 
        = vlSelfRef.onoc_bus__DOT__router0__DOT__outgoing_pkt_buffer[1U];
    __Vdly__onoc_bus__DOT__router0__DOT__outgoing_pkt_buffer[2U] 
        = vlSelfRef.onoc_bus__DOT__router0__DOT__outgoing_pkt_buffer[2U];
    __Vdly__onoc_bus__DOT__router0__DOT__outgoing_pkt_buffer[3U] 
        = vlSelfRef.onoc_bus__DOT__router0__DOT__outgoing_pkt_buffer[3U];
    __Vdly__onoc_bus__DOT__router1__DOT__outgoing_pkt_buffer[0U] 
        = vlSelfRef.onoc_bus__DOT__router1__DOT__outgoing_pkt_buffer[0U];
    __Vdly__onoc_bus__DOT__router1__DOT__outgoing_pkt_buffer[1U] 
        = vlSelfRef.onoc_bus__DOT__router1__DOT__outgoing_pkt_buffer[1U];
    __Vdly__onoc_bus__DOT__router1__DOT__outgoing_pkt_buffer[2U] 
        = vlSelfRef.onoc_bus__DOT__router1__DOT__outgoing_pkt_buffer[2U];
    __Vdly__onoc_bus__DOT__router1__DOT__outgoing_pkt_buffer[3U] 
        = vlSelfRef.onoc_bus__DOT__router1__DOT__outgoing_pkt_buffer[3U];
    __Vdly__onoc_bus__DOT__router0__DOT__pending_send_packet 
        = vlSelfRef.onoc_bus__DOT__router0__DOT__pending_send_packet;
    __Vdly__onoc_bus__DOT__router1__DOT__pending_send_packet 
        = vlSelfRef.onoc_bus__DOT__router1__DOT__pending_send_packet;
    __Vdly__onoc_bus__DOT__router0__DOT__packet_id_counter 
        = vlSelfRef.onoc_bus__DOT__router0__DOT__packet_id_counter;
    __Vdly__onoc_bus__DOT__router1__DOT__packet_id_counter 
        = vlSelfRef.onoc_bus__DOT__router1__DOT__packet_id_counter;
    __VdlySet__onoc_bus__DOT__mod0__DOT__buffer__v0 = 0U;
    __VdlySet__onoc_bus__DOT__mod0__DOT__buffer__v2 = 0U;
    __VdlySet__onoc_bus__DOT__mod1__DOT__buffer__v0 = 0U;
    __VdlySet__onoc_bus__DOT__mod1__DOT__buffer__v2 = 0U;
    __VdlySet__onoc_bus__DOT__mod0__DOT__valid_buf__v0 = 0U;
    __VdlySet__onoc_bus__DOT__mod0__DOT__valid_buf__v2 = 0U;
    __VdlySet__onoc_bus__DOT__mod1__DOT__valid_buf__v0 = 0U;
    __VdlySet__onoc_bus__DOT__mod1__DOT__valid_buf__v2 = 0U;
    __VdlySet__onoc_bus__DOT__wg__DOT__buffer_left__v0 = 0U;
    __VdlySet__onoc_bus__DOT__wg__DOT__buffer_left__v4 = 0U;
    if (vlSelfRef.rst) {
        __Vdly__onoc_bus__DOT__wg__DOT__current_cycle = 0U;
        __Vdly__onoc_bus__DOT__wg__DOT__current_cycle = 0U;
        __VdlySet__onoc_bus__DOT__pd0__DOT__buffer__v0 = 1U;
        __VdlySet__onoc_bus__DOT__pd1__DOT__buffer__v0 = 1U;
        __VdlySet__onoc_bus__DOT__pd0__DOT__valid_buf__v0 = 1U;
        __VdlySet__onoc_bus__DOT__pd1__DOT__valid_buf__v0 = 1U;
        __Vdly__onoc_bus__DOT__fp_arb__DOT__current_grant = 0U;
        __Vdly__onoc_bus__DOT__fp_arb__DOT__waiting_for_done = 0U;
        __Vdly__onoc_bus__DOT__router0__DOT__packet_id_counter = 0U;
        __Vdly__onoc_bus__DOT__router1__DOT__packet_id_counter = 0U;
        __VdlySet__onoc_bus__DOT__mod0__DOT__buffer__v0 = 1U;
        __VdlySet__onoc_bus__DOT__mod1__DOT__buffer__v0 = 1U;
        __VdlySet__onoc_bus__DOT__mod0__DOT__valid_buf__v0 = 1U;
        __VdlySet__onoc_bus__DOT__mod1__DOT__valid_buf__v0 = 1U;
        __VdlySet__onoc_bus__DOT__wg__DOT__buffer_left__v0 = 1U;
    } else {
        __Vdly__onoc_bus__DOT__wg__DOT__current_cycle 
            = ((IData)(1U) + vlSelfRef.onoc_bus__DOT__wg__DOT__current_cycle);
        __Vdly__onoc_bus__DOT__wg__DOT__current_cycle 
            = ((IData)(1U) + vlSelfRef.onoc_bus__DOT__wg__DOT__current_cycle);
        __VdlyVal__onoc_bus__DOT__pd0__DOT__buffer__v2[0U] 
            = vlSelfRef.onoc_bus__DOT__wg__DOT__buffer_left
            [3U][0U];
        __VdlyVal__onoc_bus__DOT__pd0__DOT__buffer__v2[1U] 
            = vlSelfRef.onoc_bus__DOT__wg__DOT__buffer_left
            [3U][1U];
        __VdlyVal__onoc_bus__DOT__pd0__DOT__buffer__v2[2U] 
            = vlSelfRef.onoc_bus__DOT__wg__DOT__buffer_left
            [3U][2U];
        __VdlyVal__onoc_bus__DOT__pd0__DOT__buffer__v2[3U] 
            = vlSelfRef.onoc_bus__DOT__wg__DOT__buffer_left
            [3U][3U];
        __VdlySet__onoc_bus__DOT__pd0__DOT__buffer__v2 = 1U;
        __VdlyVal__onoc_bus__DOT__pd0__DOT__buffer__v3[0U] 
            = vlSelfRef.onoc_bus__DOT__pd0__DOT__buffer
            [0U][0U];
        __VdlyVal__onoc_bus__DOT__pd0__DOT__buffer__v3[1U] 
            = vlSelfRef.onoc_bus__DOT__pd0__DOT__buffer
            [0U][1U];
        __VdlyVal__onoc_bus__DOT__pd0__DOT__buffer__v3[2U] 
            = vlSelfRef.onoc_bus__DOT__pd0__DOT__buffer
            [0U][2U];
        __VdlyVal__onoc_bus__DOT__pd0__DOT__buffer__v3[3U] 
            = vlSelfRef.onoc_bus__DOT__pd0__DOT__buffer
            [0U][3U];
        __VdlyVal__onoc_bus__DOT__pd1__DOT__buffer__v2[0U] 
            = vlSelfRef.onoc_bus__DOT__wg__DOT__buffer_right
            [3U][0U];
        __VdlyVal__onoc_bus__DOT__pd1__DOT__buffer__v2[1U] 
            = vlSelfRef.onoc_bus__DOT__wg__DOT__buffer_right
            [3U][1U];
        __VdlyVal__onoc_bus__DOT__pd1__DOT__buffer__v2[2U] 
            = vlSelfRef.onoc_bus__DOT__wg__DOT__buffer_right
            [3U][2U];
        __VdlyVal__onoc_bus__DOT__pd1__DOT__buffer__v2[3U] 
            = vlSelfRef.onoc_bus__DOT__wg__DOT__buffer_right
            [3U][3U];
        __VdlySet__onoc_bus__DOT__pd1__DOT__buffer__v2 = 1U;
        __VdlyVal__onoc_bus__DOT__pd1__DOT__buffer__v3[0U] 
            = vlSelfRef.onoc_bus__DOT__pd1__DOT__buffer
            [0U][0U];
        __VdlyVal__onoc_bus__DOT__pd1__DOT__buffer__v3[1U] 
            = vlSelfRef.onoc_bus__DOT__pd1__DOT__buffer
            [0U][1U];
        __VdlyVal__onoc_bus__DOT__pd1__DOT__buffer__v3[2U] 
            = vlSelfRef.onoc_bus__DOT__pd1__DOT__buffer
            [0U][2U];
        __VdlyVal__onoc_bus__DOT__pd1__DOT__buffer__v3[3U] 
            = vlSelfRef.onoc_bus__DOT__pd1__DOT__buffer
            [0U][3U];
        __VdlyVal__onoc_bus__DOT__pd0__DOT__valid_buf__v2 
            = vlSelfRef.onoc_bus__DOT__wg__DOT__valid_left
            [3U];
        __VdlySet__onoc_bus__DOT__pd0__DOT__valid_buf__v2 = 1U;
        __VdlyVal__onoc_bus__DOT__pd0__DOT__valid_buf__v3 
            = vlSelfRef.onoc_bus__DOT__pd0__DOT__valid_buf
            [0U];
        __VdlyVal__onoc_bus__DOT__pd1__DOT__valid_buf__v2 
            = vlSelfRef.onoc_bus__DOT__wg__DOT__valid_right
            [3U];
        __VdlySet__onoc_bus__DOT__pd1__DOT__valid_buf__v2 = 1U;
        __VdlyVal__onoc_bus__DOT__pd1__DOT__valid_buf__v3 
            = vlSelfRef.onoc_bus__DOT__pd1__DOT__valid_buf
            [0U];
        if (vlSelfRef.onoc_bus__DOT__fp_arb__DOT__waiting_for_done) {
            if ((0U != ((vlSelfRef.onoc_bus__DOT__wg__DOT__valid_left
                         [2U] << 1U) | vlSelfRef.onoc_bus__DOT__wg__DOT__valid_right
                        [2U]))) {
                __Vdly__onoc_bus__DOT__fp_arb__DOT__waiting_for_done = 0U;
            }
        } else if ((0U != ((IData)(vlSelfRef.onoc_bus__DOT__fp_arb__DOT__current_grant) 
                           & (IData)(vlSelfRef.onoc_bus__DOT__router_request)))) {
            __Vdly__onoc_bus__DOT__fp_arb__DOT__current_grant = 0U;
            __Vdly__onoc_bus__DOT__fp_arb__DOT__waiting_for_done = 1U;
        } else {
            __Vdly__onoc_bus__DOT__fp_arb__DOT__current_grant = 0U;
            vlSelfRef.onoc_bus__DOT__fp_arb__DOT__unnamedblk1__DOT__i = 0U;
            {
                while (VL_GTS_III(32, 2U, vlSelfRef.onoc_bus__DOT__fp_arb__DOT__unnamedblk1__DOT__i)) {
                    if ((1U & ((IData)(vlSelfRef.onoc_bus__DOT__router_request) 
                               >> (1U & vlSelfRef.onoc_bus__DOT__fp_arb__DOT__unnamedblk1__DOT__i)))) {
                        __Vdly__onoc_bus__DOT__fp_arb__DOT__current_grant 
                            = ((IData)(__Vdly__onoc_bus__DOT__fp_arb__DOT__current_grant) 
                               | (3U & ((IData)(1U) 
                                        << (1U & vlSelfRef.onoc_bus__DOT__fp_arb__DOT__unnamedblk1__DOT__i))));
                        goto __Vlabel1;
                    }
                    vlSelfRef.onoc_bus__DOT__fp_arb__DOT__unnamedblk1__DOT__i 
                        = ((IData)(1U) + vlSelfRef.onoc_bus__DOT__fp_arb__DOT__unnamedblk1__DOT__i);
                }
                __Vlabel1: ;
            }
        }
        __VdlyVal__onoc_bus__DOT__mod0__DOT__buffer__v2[0U] 
            = vlSelfRef.onoc_bus__DOT__modulator_input_data_0[0U];
        __VdlyVal__onoc_bus__DOT__mod0__DOT__buffer__v2[1U] 
            = vlSelfRef.onoc_bus__DOT__modulator_input_data_0[1U];
        __VdlyVal__onoc_bus__DOT__mod0__DOT__buffer__v2[2U] 
            = vlSelfRef.onoc_bus__DOT__modulator_input_data_0[2U];
        __VdlyVal__onoc_bus__DOT__mod0__DOT__buffer__v2[3U] 
            = vlSelfRef.onoc_bus__DOT__modulator_input_data_0[3U];
        __VdlySet__onoc_bus__DOT__mod0__DOT__buffer__v2 = 1U;
        __VdlyVal__onoc_bus__DOT__mod0__DOT__buffer__v3[0U] 
            = vlSelfRef.onoc_bus__DOT__mod0__DOT__buffer
            [0U][0U];
        __VdlyVal__onoc_bus__DOT__mod0__DOT__buffer__v3[1U] 
            = vlSelfRef.onoc_bus__DOT__mod0__DOT__buffer
            [0U][1U];
        __VdlyVal__onoc_bus__DOT__mod0__DOT__buffer__v3[2U] 
            = vlSelfRef.onoc_bus__DOT__mod0__DOT__buffer
            [0U][2U];
        __VdlyVal__onoc_bus__DOT__mod0__DOT__buffer__v3[3U] 
            = vlSelfRef.onoc_bus__DOT__mod0__DOT__buffer
            [0U][3U];
        __VdlyVal__onoc_bus__DOT__mod1__DOT__buffer__v2[0U] 
            = vlSelfRef.onoc_bus__DOT__modulator_input_data_1[0U];
        __VdlyVal__onoc_bus__DOT__mod1__DOT__buffer__v2[1U] 
            = vlSelfRef.onoc_bus__DOT__modulator_input_data_1[1U];
        __VdlyVal__onoc_bus__DOT__mod1__DOT__buffer__v2[2U] 
            = vlSelfRef.onoc_bus__DOT__modulator_input_data_1[2U];
        __VdlyVal__onoc_bus__DOT__mod1__DOT__buffer__v2[3U] 
            = vlSelfRef.onoc_bus__DOT__modulator_input_data_1[3U];
        __VdlySet__onoc_bus__DOT__mod1__DOT__buffer__v2 = 1U;
        __VdlyVal__onoc_bus__DOT__mod1__DOT__buffer__v3[0U] 
            = vlSelfRef.onoc_bus__DOT__mod1__DOT__buffer
            [0U][0U];
        __VdlyVal__onoc_bus__DOT__mod1__DOT__buffer__v3[1U] 
            = vlSelfRef.onoc_bus__DOT__mod1__DOT__buffer
            [0U][1U];
        __VdlyVal__onoc_bus__DOT__mod1__DOT__buffer__v3[2U] 
            = vlSelfRef.onoc_bus__DOT__mod1__DOT__buffer
            [0U][2U];
        __VdlyVal__onoc_bus__DOT__mod1__DOT__buffer__v3[3U] 
            = vlSelfRef.onoc_bus__DOT__mod1__DOT__buffer
            [0U][3U];
        __VdlyVal__onoc_bus__DOT__mod0__DOT__valid_buf__v2 
            = vlSelfRef.onoc_bus__DOT__modulator_input_valid_0;
        __VdlySet__onoc_bus__DOT__mod0__DOT__valid_buf__v2 = 1U;
        __VdlyVal__onoc_bus__DOT__mod0__DOT__valid_buf__v3 
            = vlSelfRef.onoc_bus__DOT__mod0__DOT__valid_buf
            [0U];
        __VdlyVal__onoc_bus__DOT__mod1__DOT__valid_buf__v2 
            = vlSelfRef.onoc_bus__DOT__modulator_input_valid_1;
        __VdlySet__onoc_bus__DOT__mod1__DOT__valid_buf__v2 = 1U;
        __VdlyVal__onoc_bus__DOT__mod1__DOT__valid_buf__v3 
            = vlSelfRef.onoc_bus__DOT__mod1__DOT__valid_buf
            [0U];
        __VdlyVal__onoc_bus__DOT__wg__DOT__buffer_left__v4[0U] 
            = vlSelfRef.onoc_bus__DOT__wg__DOT__buffer_left
            [2U][0U];
        __VdlyVal__onoc_bus__DOT__wg__DOT__buffer_left__v4[1U] 
            = vlSelfRef.onoc_bus__DOT__wg__DOT__buffer_left
            [2U][1U];
        __VdlyVal__onoc_bus__DOT__wg__DOT__buffer_left__v4[2U] 
            = vlSelfRef.onoc_bus__DOT__wg__DOT__buffer_left
            [2U][2U];
        __VdlyVal__onoc_bus__DOT__wg__DOT__buffer_left__v4[3U] 
            = vlSelfRef.onoc_bus__DOT__wg__DOT__buffer_left
            [2U][3U];
        __VdlySet__onoc_bus__DOT__wg__DOT__buffer_left__v4 = 1U;
        __VdlyVal__onoc_bus__DOT__wg__DOT__valid_left__v4 
            = vlSelfRef.onoc_bus__DOT__wg__DOT__valid_left
            [2U];
        __VdlyVal__onoc_bus__DOT__wg__DOT__buffer_right__v4[0U] 
            = vlSelfRef.onoc_bus__DOT__wg__DOT__buffer_right
            [2U][0U];
        __VdlyVal__onoc_bus__DOT__wg__DOT__buffer_right__v4[1U] 
            = vlSelfRef.onoc_bus__DOT__wg__DOT__buffer_right
            [2U][1U];
        __VdlyVal__onoc_bus__DOT__wg__DOT__buffer_right__v4[2U] 
            = vlSelfRef.onoc_bus__DOT__wg__DOT__buffer_right
            [2U][2U];
        __VdlyVal__onoc_bus__DOT__wg__DOT__buffer_right__v4[3U] 
            = vlSelfRef.onoc_bus__DOT__wg__DOT__buffer_right
            [2U][3U];
        __VdlyVal__onoc_bus__DOT__wg__DOT__valid_right__v4 
            = vlSelfRef.onoc_bus__DOT__wg__DOT__valid_right
            [2U];
        __VdlyVal__onoc_bus__DOT__wg__DOT__buffer_left__v5[0U] 
            = vlSelfRef.onoc_bus__DOT__wg__DOT__buffer_left
            [1U][0U];
        __VdlyVal__onoc_bus__DOT__wg__DOT__buffer_left__v5[1U] 
            = vlSelfRef.onoc_bus__DOT__wg__DOT__buffer_left
            [1U][1U];
        __VdlyVal__onoc_bus__DOT__wg__DOT__buffer_left__v5[2U] 
            = vlSelfRef.onoc_bus__DOT__wg__DOT__buffer_left
            [1U][2U];
        __VdlyVal__onoc_bus__DOT__wg__DOT__buffer_left__v5[3U] 
            = vlSelfRef.onoc_bus__DOT__wg__DOT__buffer_left
            [1U][3U];
        __VdlyVal__onoc_bus__DOT__wg__DOT__valid_left__v5 
            = vlSelfRef.onoc_bus__DOT__wg__DOT__valid_left
            [1U];
        __VdlyVal__onoc_bus__DOT__wg__DOT__buffer_right__v5[0U] 
            = vlSelfRef.onoc_bus__DOT__wg__DOT__buffer_right
            [1U][0U];
        __VdlyVal__onoc_bus__DOT__wg__DOT__buffer_right__v5[1U] 
            = vlSelfRef.onoc_bus__DOT__wg__DOT__buffer_right
            [1U][1U];
        __VdlyVal__onoc_bus__DOT__wg__DOT__buffer_right__v5[2U] 
            = vlSelfRef.onoc_bus__DOT__wg__DOT__buffer_right
            [1U][2U];
        __VdlyVal__onoc_bus__DOT__wg__DOT__buffer_right__v5[3U] 
            = vlSelfRef.onoc_bus__DOT__wg__DOT__buffer_right
            [1U][3U];
        __VdlyVal__onoc_bus__DOT__wg__DOT__valid_right__v5 
            = vlSelfRef.onoc_bus__DOT__wg__DOT__valid_right
            [1U];
        __VdlyVal__onoc_bus__DOT__wg__DOT__buffer_left__v6[0U] 
            = vlSelfRef.onoc_bus__DOT__wg__DOT__buffer_left
            [0U][0U];
        __VdlyVal__onoc_bus__DOT__wg__DOT__buffer_left__v6[1U] 
            = vlSelfRef.onoc_bus__DOT__wg__DOT__buffer_left
            [0U][1U];
        __VdlyVal__onoc_bus__DOT__wg__DOT__buffer_left__v6[2U] 
            = vlSelfRef.onoc_bus__DOT__wg__DOT__buffer_left
            [0U][2U];
        __VdlyVal__onoc_bus__DOT__wg__DOT__buffer_left__v6[3U] 
            = vlSelfRef.onoc_bus__DOT__wg__DOT__buffer_left
            [0U][3U];
        __VdlyVal__onoc_bus__DOT__wg__DOT__valid_left__v6 
            = vlSelfRef.onoc_bus__DOT__wg__DOT__valid_left
            [0U];
        __VdlyVal__onoc_bus__DOT__wg__DOT__buffer_right__v6[0U] 
            = vlSelfRef.onoc_bus__DOT__wg__DOT__buffer_right
            [0U][0U];
        __VdlyVal__onoc_bus__DOT__wg__DOT__buffer_right__v6[1U] 
            = vlSelfRef.onoc_bus__DOT__wg__DOT__buffer_right
            [0U][1U];
        __VdlyVal__onoc_bus__DOT__wg__DOT__buffer_right__v6[2U] 
            = vlSelfRef.onoc_bus__DOT__wg__DOT__buffer_right
            [0U][2U];
        __VdlyVal__onoc_bus__DOT__wg__DOT__buffer_right__v6[3U] 
            = vlSelfRef.onoc_bus__DOT__wg__DOT__buffer_right
            [0U][3U];
        __VdlyVal__onoc_bus__DOT__wg__DOT__valid_right__v6 
            = vlSelfRef.onoc_bus__DOT__wg__DOT__valid_right
            [0U];
        __VdlyVal__onoc_bus__DOT__wg__DOT__buffer_left__v7[0U] 
            = vlSelfRef.onoc_bus__DOT__mod1__DOT__buffer
            [1U][0U];
        __VdlyVal__onoc_bus__DOT__wg__DOT__buffer_left__v7[1U] 
            = vlSelfRef.onoc_bus__DOT__mod1__DOT__buffer
            [1U][1U];
        __VdlyVal__onoc_bus__DOT__wg__DOT__buffer_left__v7[2U] 
            = vlSelfRef.onoc_bus__DOT__mod1__DOT__buffer
            [1U][2U];
        __VdlyVal__onoc_bus__DOT__wg__DOT__buffer_left__v7[3U] 
            = vlSelfRef.onoc_bus__DOT__mod1__DOT__buffer
            [1U][3U];
        __VdlyVal__onoc_bus__DOT__wg__DOT__valid_left__v7 
            = vlSelfRef.onoc_bus__DOT__mod1__DOT__valid_buf
            [1U];
        __VdlyVal__onoc_bus__DOT__wg__DOT__buffer_right__v7[0U] 
            = vlSelfRef.onoc_bus__DOT__mod0__DOT__buffer
            [1U][0U];
        __VdlyVal__onoc_bus__DOT__wg__DOT__buffer_right__v7[1U] 
            = vlSelfRef.onoc_bus__DOT__mod0__DOT__buffer
            [1U][1U];
        __VdlyVal__onoc_bus__DOT__wg__DOT__buffer_right__v7[2U] 
            = vlSelfRef.onoc_bus__DOT__mod0__DOT__buffer
            [1U][2U];
        __VdlyVal__onoc_bus__DOT__wg__DOT__buffer_right__v7[3U] 
            = vlSelfRef.onoc_bus__DOT__mod0__DOT__buffer
            [1U][3U];
        __VdlyVal__onoc_bus__DOT__wg__DOT__valid_right__v7 
            = vlSelfRef.onoc_bus__DOT__mod0__DOT__valid_buf
            [1U];
    }
    VL_WRITEF_NX("  L->R  [0:%s:%0#] [1:%s:%0#] [2:%s:%0#] [3:%s:%0#] \n  R->L  [0:%s:%0#] [1:%s:%0#] [2:%s:%0#] [3:%s:%0#] \n\nCycle #%10#\n---------------------------------------------------------------------------------------------------------------------\n",0,
                 8,(vlSelfRef.onoc_bus__DOT__wg__DOT__valid_right
                    [0U] ? 0x56U : 0U),32,((vlSelfRef.onoc_bus__DOT__wg__DOT__buffer_right
                                            [0U][1U] 
                                            << 0x1fU) 
                                           | (vlSelfRef.onoc_bus__DOT__wg__DOT__buffer_right
                                              [0U][0U] 
                                              >> 1U)),
                 8,(vlSelfRef.onoc_bus__DOT__wg__DOT__valid_right
                    [1U] ? 0x56U : 0U),32,((vlSelfRef.onoc_bus__DOT__wg__DOT__buffer_right
                                            [1U][1U] 
                                            << 0x1fU) 
                                           | (vlSelfRef.onoc_bus__DOT__wg__DOT__buffer_right
                                              [1U][0U] 
                                              >> 1U)),
                 8,(vlSelfRef.onoc_bus__DOT__wg__DOT__valid_right
                    [2U] ? 0x56U : 0U),32,((vlSelfRef.onoc_bus__DOT__wg__DOT__buffer_right
                                            [2U][1U] 
                                            << 0x1fU) 
                                           | (vlSelfRef.onoc_bus__DOT__wg__DOT__buffer_right
                                              [2U][0U] 
                                              >> 1U)),
                 8,(vlSelfRef.onoc_bus__DOT__wg__DOT__valid_right
                    [3U] ? 0x56U : 0U),32,((vlSelfRef.onoc_bus__DOT__wg__DOT__buffer_right
                                            [3U][1U] 
                                            << 0x1fU) 
                                           | (vlSelfRef.onoc_bus__DOT__wg__DOT__buffer_right
                                              [3U][0U] 
                                              >> 1U)),
                 8,(vlSelfRef.onoc_bus__DOT__wg__DOT__valid_left
                    [0U] ? 0x56U : 0U),32,((vlSelfRef.onoc_bus__DOT__wg__DOT__buffer_left
                                            [0U][1U] 
                                            << 0x1fU) 
                                           | (vlSelfRef.onoc_bus__DOT__wg__DOT__buffer_left
                                              [0U][0U] 
                                              >> 1U)),
                 8,(vlSelfRef.onoc_bus__DOT__wg__DOT__valid_left
                    [1U] ? 0x56U : 0U),32,((vlSelfRef.onoc_bus__DOT__wg__DOT__buffer_left
                                            [1U][1U] 
                                            << 0x1fU) 
                                           | (vlSelfRef.onoc_bus__DOT__wg__DOT__buffer_left
                                              [1U][0U] 
                                              >> 1U)),
                 8,(vlSelfRef.onoc_bus__DOT__wg__DOT__valid_left
                    [2U] ? 0x56U : 0U),32,((vlSelfRef.onoc_bus__DOT__wg__DOT__buffer_left
                                            [2U][1U] 
                                            << 0x1fU) 
                                           | (vlSelfRef.onoc_bus__DOT__wg__DOT__buffer_left
                                              [2U][0U] 
                                              >> 1U)),
                 8,(vlSelfRef.onoc_bus__DOT__wg__DOT__valid_left
                    [3U] ? 0x56U : 0U),32,((vlSelfRef.onoc_bus__DOT__wg__DOT__buffer_left
                                            [3U][1U] 
                                            << 0x1fU) 
                                           | (vlSelfRef.onoc_bus__DOT__wg__DOT__buffer_left
                                              [3U][0U] 
                                              >> 1U)),
                 32,vlSelfRef.onoc_bus__DOT__wg__DOT__current_cycle);
    if (__VdlySet__onoc_bus__DOT__pd0__DOT__buffer__v0) {
        vlSelfRef.onoc_bus__DOT__pd0__DOT__buffer[0U][0U] = 0U;
        vlSelfRef.onoc_bus__DOT__pd0__DOT__buffer[0U][1U] = 0U;
        vlSelfRef.onoc_bus__DOT__pd0__DOT__buffer[0U][2U] = 0U;
        vlSelfRef.onoc_bus__DOT__pd0__DOT__buffer[0U][3U] = 0U;
        vlSelfRef.onoc_bus__DOT__pd0__DOT__buffer[1U][0U] = 0U;
        vlSelfRef.onoc_bus__DOT__pd0__DOT__buffer[1U][1U] = 0U;
        vlSelfRef.onoc_bus__DOT__pd0__DOT__buffer[1U][2U] = 0U;
        vlSelfRef.onoc_bus__DOT__pd0__DOT__buffer[1U][3U] = 0U;
    }
    if (__VdlySet__onoc_bus__DOT__pd0__DOT__buffer__v2) {
        vlSelfRef.onoc_bus__DOT__pd0__DOT__buffer[0U][0U] 
            = __VdlyVal__onoc_bus__DOT__pd0__DOT__buffer__v2[0U];
        vlSelfRef.onoc_bus__DOT__pd0__DOT__buffer[0U][1U] 
            = __VdlyVal__onoc_bus__DOT__pd0__DOT__buffer__v2[1U];
        vlSelfRef.onoc_bus__DOT__pd0__DOT__buffer[0U][2U] 
            = __VdlyVal__onoc_bus__DOT__pd0__DOT__buffer__v2[2U];
        vlSelfRef.onoc_bus__DOT__pd0__DOT__buffer[0U][3U] 
            = __VdlyVal__onoc_bus__DOT__pd0__DOT__buffer__v2[3U];
        vlSelfRef.onoc_bus__DOT__pd0__DOT__buffer[1U][0U] 
            = __VdlyVal__onoc_bus__DOT__pd0__DOT__buffer__v3[0U];
        vlSelfRef.onoc_bus__DOT__pd0__DOT__buffer[1U][1U] 
            = __VdlyVal__onoc_bus__DOT__pd0__DOT__buffer__v3[1U];
        vlSelfRef.onoc_bus__DOT__pd0__DOT__buffer[1U][2U] 
            = __VdlyVal__onoc_bus__DOT__pd0__DOT__buffer__v3[2U];
        vlSelfRef.onoc_bus__DOT__pd0__DOT__buffer[1U][3U] 
            = __VdlyVal__onoc_bus__DOT__pd0__DOT__buffer__v3[3U];
    }
    if (__VdlySet__onoc_bus__DOT__pd1__DOT__buffer__v0) {
        vlSelfRef.onoc_bus__DOT__pd1__DOT__buffer[0U][0U] = 0U;
        vlSelfRef.onoc_bus__DOT__pd1__DOT__buffer[0U][1U] = 0U;
        vlSelfRef.onoc_bus__DOT__pd1__DOT__buffer[0U][2U] = 0U;
        vlSelfRef.onoc_bus__DOT__pd1__DOT__buffer[0U][3U] = 0U;
        vlSelfRef.onoc_bus__DOT__pd1__DOT__buffer[1U][0U] = 0U;
        vlSelfRef.onoc_bus__DOT__pd1__DOT__buffer[1U][1U] = 0U;
        vlSelfRef.onoc_bus__DOT__pd1__DOT__buffer[1U][2U] = 0U;
        vlSelfRef.onoc_bus__DOT__pd1__DOT__buffer[1U][3U] = 0U;
    }
    if (__VdlySet__onoc_bus__DOT__pd1__DOT__buffer__v2) {
        vlSelfRef.onoc_bus__DOT__pd1__DOT__buffer[0U][0U] 
            = __VdlyVal__onoc_bus__DOT__pd1__DOT__buffer__v2[0U];
        vlSelfRef.onoc_bus__DOT__pd1__DOT__buffer[0U][1U] 
            = __VdlyVal__onoc_bus__DOT__pd1__DOT__buffer__v2[1U];
        vlSelfRef.onoc_bus__DOT__pd1__DOT__buffer[0U][2U] 
            = __VdlyVal__onoc_bus__DOT__pd1__DOT__buffer__v2[2U];
        vlSelfRef.onoc_bus__DOT__pd1__DOT__buffer[0U][3U] 
            = __VdlyVal__onoc_bus__DOT__pd1__DOT__buffer__v2[3U];
        vlSelfRef.onoc_bus__DOT__pd1__DOT__buffer[1U][0U] 
            = __VdlyVal__onoc_bus__DOT__pd1__DOT__buffer__v3[0U];
        vlSelfRef.onoc_bus__DOT__pd1__DOT__buffer[1U][1U] 
            = __VdlyVal__onoc_bus__DOT__pd1__DOT__buffer__v3[1U];
        vlSelfRef.onoc_bus__DOT__pd1__DOT__buffer[1U][2U] 
            = __VdlyVal__onoc_bus__DOT__pd1__DOT__buffer__v3[2U];
        vlSelfRef.onoc_bus__DOT__pd1__DOT__buffer[1U][3U] 
            = __VdlyVal__onoc_bus__DOT__pd1__DOT__buffer__v3[3U];
    }
    if (__VdlySet__onoc_bus__DOT__pd0__DOT__valid_buf__v0) {
        vlSelfRef.onoc_bus__DOT__pd0__DOT__valid_buf[0U] = 0U;
        vlSelfRef.onoc_bus__DOT__pd0__DOT__valid_buf[1U] = 0U;
    }
    if (__VdlySet__onoc_bus__DOT__pd0__DOT__valid_buf__v2) {
        vlSelfRef.onoc_bus__DOT__pd0__DOT__valid_buf[0U] 
            = __VdlyVal__onoc_bus__DOT__pd0__DOT__valid_buf__v2;
        vlSelfRef.onoc_bus__DOT__pd0__DOT__valid_buf[1U] 
            = __VdlyVal__onoc_bus__DOT__pd0__DOT__valid_buf__v3;
    }
    if (__VdlySet__onoc_bus__DOT__pd1__DOT__valid_buf__v0) {
        vlSelfRef.onoc_bus__DOT__pd1__DOT__valid_buf[0U] = 0U;
        vlSelfRef.onoc_bus__DOT__pd1__DOT__valid_buf[1U] = 0U;
    }
    if (__VdlySet__onoc_bus__DOT__pd1__DOT__valid_buf__v2) {
        vlSelfRef.onoc_bus__DOT__pd1__DOT__valid_buf[0U] 
            = __VdlyVal__onoc_bus__DOT__pd1__DOT__valid_buf__v2;
        vlSelfRef.onoc_bus__DOT__pd1__DOT__valid_buf[1U] 
            = __VdlyVal__onoc_bus__DOT__pd1__DOT__valid_buf__v3;
    }
    vlSelfRef.onoc_bus__DOT__fp_arb__DOT__waiting_for_done 
        = __Vdly__onoc_bus__DOT__fp_arb__DOT__waiting_for_done;
    vlSelfRef.onoc_bus__DOT__wg__DOT__current_cycle 
        = __Vdly__onoc_bus__DOT__wg__DOT__current_cycle;
    if (__VdlySet__onoc_bus__DOT__mod1__DOT__buffer__v0) {
        vlSelfRef.onoc_bus__DOT__mod1__DOT__buffer[0U][0U] = 0U;
        vlSelfRef.onoc_bus__DOT__mod1__DOT__buffer[0U][1U] = 0U;
        vlSelfRef.onoc_bus__DOT__mod1__DOT__buffer[0U][2U] = 0U;
        vlSelfRef.onoc_bus__DOT__mod1__DOT__buffer[0U][3U] = 0U;
        vlSelfRef.onoc_bus__DOT__mod1__DOT__buffer[1U][0U] = 0U;
        vlSelfRef.onoc_bus__DOT__mod1__DOT__buffer[1U][1U] = 0U;
        vlSelfRef.onoc_bus__DOT__mod1__DOT__buffer[1U][2U] = 0U;
        vlSelfRef.onoc_bus__DOT__mod1__DOT__buffer[1U][3U] = 0U;
    }
    if (__VdlySet__onoc_bus__DOT__mod1__DOT__buffer__v2) {
        vlSelfRef.onoc_bus__DOT__mod1__DOT__buffer[0U][0U] 
            = __VdlyVal__onoc_bus__DOT__mod1__DOT__buffer__v2[0U];
        vlSelfRef.onoc_bus__DOT__mod1__DOT__buffer[0U][1U] 
            = __VdlyVal__onoc_bus__DOT__mod1__DOT__buffer__v2[1U];
        vlSelfRef.onoc_bus__DOT__mod1__DOT__buffer[0U][2U] 
            = __VdlyVal__onoc_bus__DOT__mod1__DOT__buffer__v2[2U];
        vlSelfRef.onoc_bus__DOT__mod1__DOT__buffer[0U][3U] 
            = __VdlyVal__onoc_bus__DOT__mod1__DOT__buffer__v2[3U];
        vlSelfRef.onoc_bus__DOT__mod1__DOT__buffer[1U][0U] 
            = __VdlyVal__onoc_bus__DOT__mod1__DOT__buffer__v3[0U];
        vlSelfRef.onoc_bus__DOT__mod1__DOT__buffer[1U][1U] 
            = __VdlyVal__onoc_bus__DOT__mod1__DOT__buffer__v3[1U];
        vlSelfRef.onoc_bus__DOT__mod1__DOT__buffer[1U][2U] 
            = __VdlyVal__onoc_bus__DOT__mod1__DOT__buffer__v3[2U];
        vlSelfRef.onoc_bus__DOT__mod1__DOT__buffer[1U][3U] 
            = __VdlyVal__onoc_bus__DOT__mod1__DOT__buffer__v3[3U];
    }
    if (__VdlySet__onoc_bus__DOT__mod1__DOT__valid_buf__v0) {
        vlSelfRef.onoc_bus__DOT__mod1__DOT__valid_buf[0U] = 0U;
        vlSelfRef.onoc_bus__DOT__mod1__DOT__valid_buf[1U] = 0U;
    }
    if (__VdlySet__onoc_bus__DOT__mod1__DOT__valid_buf__v2) {
        vlSelfRef.onoc_bus__DOT__mod1__DOT__valid_buf[0U] 
            = __VdlyVal__onoc_bus__DOT__mod1__DOT__valid_buf__v2;
        vlSelfRef.onoc_bus__DOT__mod1__DOT__valid_buf[1U] 
            = __VdlyVal__onoc_bus__DOT__mod1__DOT__valid_buf__v3;
    }
    if (__VdlySet__onoc_bus__DOT__mod0__DOT__buffer__v0) {
        vlSelfRef.onoc_bus__DOT__mod0__DOT__buffer[0U][0U] = 0U;
        vlSelfRef.onoc_bus__DOT__mod0__DOT__buffer[0U][1U] = 0U;
        vlSelfRef.onoc_bus__DOT__mod0__DOT__buffer[0U][2U] = 0U;
        vlSelfRef.onoc_bus__DOT__mod0__DOT__buffer[0U][3U] = 0U;
        vlSelfRef.onoc_bus__DOT__mod0__DOT__buffer[1U][0U] = 0U;
        vlSelfRef.onoc_bus__DOT__mod0__DOT__buffer[1U][1U] = 0U;
        vlSelfRef.onoc_bus__DOT__mod0__DOT__buffer[1U][2U] = 0U;
        vlSelfRef.onoc_bus__DOT__mod0__DOT__buffer[1U][3U] = 0U;
    }
    if (__VdlySet__onoc_bus__DOT__mod0__DOT__buffer__v2) {
        vlSelfRef.onoc_bus__DOT__mod0__DOT__buffer[0U][0U] 
            = __VdlyVal__onoc_bus__DOT__mod0__DOT__buffer__v2[0U];
        vlSelfRef.onoc_bus__DOT__mod0__DOT__buffer[0U][1U] 
            = __VdlyVal__onoc_bus__DOT__mod0__DOT__buffer__v2[1U];
        vlSelfRef.onoc_bus__DOT__mod0__DOT__buffer[0U][2U] 
            = __VdlyVal__onoc_bus__DOT__mod0__DOT__buffer__v2[2U];
        vlSelfRef.onoc_bus__DOT__mod0__DOT__buffer[0U][3U] 
            = __VdlyVal__onoc_bus__DOT__mod0__DOT__buffer__v2[3U];
        vlSelfRef.onoc_bus__DOT__mod0__DOT__buffer[1U][0U] 
            = __VdlyVal__onoc_bus__DOT__mod0__DOT__buffer__v3[0U];
        vlSelfRef.onoc_bus__DOT__mod0__DOT__buffer[1U][1U] 
            = __VdlyVal__onoc_bus__DOT__mod0__DOT__buffer__v3[1U];
        vlSelfRef.onoc_bus__DOT__mod0__DOT__buffer[1U][2U] 
            = __VdlyVal__onoc_bus__DOT__mod0__DOT__buffer__v3[2U];
        vlSelfRef.onoc_bus__DOT__mod0__DOT__buffer[1U][3U] 
            = __VdlyVal__onoc_bus__DOT__mod0__DOT__buffer__v3[3U];
    }
    if (__VdlySet__onoc_bus__DOT__mod0__DOT__valid_buf__v0) {
        vlSelfRef.onoc_bus__DOT__mod0__DOT__valid_buf[0U] = 0U;
        vlSelfRef.onoc_bus__DOT__mod0__DOT__valid_buf[1U] = 0U;
    }
    if (__VdlySet__onoc_bus__DOT__mod0__DOT__valid_buf__v2) {
        vlSelfRef.onoc_bus__DOT__mod0__DOT__valid_buf[0U] 
            = __VdlyVal__onoc_bus__DOT__mod0__DOT__valid_buf__v2;
        vlSelfRef.onoc_bus__DOT__mod0__DOT__valid_buf[1U] 
            = __VdlyVal__onoc_bus__DOT__mod0__DOT__valid_buf__v3;
    }
    if (__VdlySet__onoc_bus__DOT__wg__DOT__buffer_left__v0) {
        vlSelfRef.onoc_bus__DOT__wg__DOT__buffer_left[0U][0U] = 0U;
        vlSelfRef.onoc_bus__DOT__wg__DOT__buffer_left[0U][1U] = 0U;
        vlSelfRef.onoc_bus__DOT__wg__DOT__buffer_left[0U][2U] = 0U;
        vlSelfRef.onoc_bus__DOT__wg__DOT__buffer_left[0U][3U] = 0U;
        vlSelfRef.onoc_bus__DOT__wg__DOT__valid_left[0U] = 0U;
        vlSelfRef.onoc_bus__DOT__wg__DOT__buffer_right[0U][0U] = 0U;
        vlSelfRef.onoc_bus__DOT__wg__DOT__buffer_right[0U][1U] = 0U;
        vlSelfRef.onoc_bus__DOT__wg__DOT__buffer_right[0U][2U] = 0U;
        vlSelfRef.onoc_bus__DOT__wg__DOT__buffer_right[0U][3U] = 0U;
        vlSelfRef.onoc_bus__DOT__wg__DOT__valid_right[0U] = 0U;
        vlSelfRef.onoc_bus__DOT__wg__DOT__buffer_left[1U][0U] = 0U;
        vlSelfRef.onoc_bus__DOT__wg__DOT__buffer_left[1U][1U] = 0U;
        vlSelfRef.onoc_bus__DOT__wg__DOT__buffer_left[1U][2U] = 0U;
        vlSelfRef.onoc_bus__DOT__wg__DOT__buffer_left[1U][3U] = 0U;
        vlSelfRef.onoc_bus__DOT__wg__DOT__valid_left[1U] = 0U;
        vlSelfRef.onoc_bus__DOT__wg__DOT__buffer_right[1U][0U] = 0U;
        vlSelfRef.onoc_bus__DOT__wg__DOT__buffer_right[1U][1U] = 0U;
        vlSelfRef.onoc_bus__DOT__wg__DOT__buffer_right[1U][2U] = 0U;
        vlSelfRef.onoc_bus__DOT__wg__DOT__buffer_right[1U][3U] = 0U;
        vlSelfRef.onoc_bus__DOT__wg__DOT__valid_right[1U] = 0U;
        vlSelfRef.onoc_bus__DOT__wg__DOT__buffer_left[2U][0U] = 0U;
        vlSelfRef.onoc_bus__DOT__wg__DOT__buffer_left[2U][1U] = 0U;
        vlSelfRef.onoc_bus__DOT__wg__DOT__buffer_left[2U][2U] = 0U;
        vlSelfRef.onoc_bus__DOT__wg__DOT__buffer_left[2U][3U] = 0U;
        vlSelfRef.onoc_bus__DOT__wg__DOT__valid_left[2U] = 0U;
        vlSelfRef.onoc_bus__DOT__wg__DOT__buffer_right[2U][0U] = 0U;
        vlSelfRef.onoc_bus__DOT__wg__DOT__buffer_right[2U][1U] = 0U;
        vlSelfRef.onoc_bus__DOT__wg__DOT__buffer_right[2U][2U] = 0U;
        vlSelfRef.onoc_bus__DOT__wg__DOT__buffer_right[2U][3U] = 0U;
        vlSelfRef.onoc_bus__DOT__wg__DOT__valid_right[2U] = 0U;
        vlSelfRef.onoc_bus__DOT__wg__DOT__buffer_left[3U][0U] = 0U;
        vlSelfRef.onoc_bus__DOT__wg__DOT__buffer_left[3U][1U] = 0U;
        vlSelfRef.onoc_bus__DOT__wg__DOT__buffer_left[3U][2U] = 0U;
        vlSelfRef.onoc_bus__DOT__wg__DOT__buffer_left[3U][3U] = 0U;
        vlSelfRef.onoc_bus__DOT__wg__DOT__valid_left[3U] = 0U;
        vlSelfRef.onoc_bus__DOT__wg__DOT__buffer_right[3U][0U] = 0U;
        vlSelfRef.onoc_bus__DOT__wg__DOT__buffer_right[3U][1U] = 0U;
        vlSelfRef.onoc_bus__DOT__wg__DOT__buffer_right[3U][2U] = 0U;
        vlSelfRef.onoc_bus__DOT__wg__DOT__buffer_right[3U][3U] = 0U;
        vlSelfRef.onoc_bus__DOT__wg__DOT__valid_right[3U] = 0U;
    }
    if (__VdlySet__onoc_bus__DOT__wg__DOT__buffer_left__v4) {
        vlSelfRef.onoc_bus__DOT__wg__DOT__buffer_left[3U][0U] 
            = __VdlyVal__onoc_bus__DOT__wg__DOT__buffer_left__v4[0U];
        vlSelfRef.onoc_bus__DOT__wg__DOT__buffer_left[3U][1U] 
            = __VdlyVal__onoc_bus__DOT__wg__DOT__buffer_left__v4[1U];
        vlSelfRef.onoc_bus__DOT__wg__DOT__buffer_left[3U][2U] 
            = __VdlyVal__onoc_bus__DOT__wg__DOT__buffer_left__v4[2U];
        vlSelfRef.onoc_bus__DOT__wg__DOT__buffer_left[3U][3U] 
            = __VdlyVal__onoc_bus__DOT__wg__DOT__buffer_left__v4[3U];
        vlSelfRef.onoc_bus__DOT__wg__DOT__valid_left[3U] 
            = __VdlyVal__onoc_bus__DOT__wg__DOT__valid_left__v4;
        vlSelfRef.onoc_bus__DOT__wg__DOT__buffer_right[3U][0U] 
            = __VdlyVal__onoc_bus__DOT__wg__DOT__buffer_right__v4[0U];
        vlSelfRef.onoc_bus__DOT__wg__DOT__buffer_right[3U][1U] 
            = __VdlyVal__onoc_bus__DOT__wg__DOT__buffer_right__v4[1U];
        vlSelfRef.onoc_bus__DOT__wg__DOT__buffer_right[3U][2U] 
            = __VdlyVal__onoc_bus__DOT__wg__DOT__buffer_right__v4[2U];
        vlSelfRef.onoc_bus__DOT__wg__DOT__buffer_right[3U][3U] 
            = __VdlyVal__onoc_bus__DOT__wg__DOT__buffer_right__v4[3U];
        vlSelfRef.onoc_bus__DOT__wg__DOT__valid_right[3U] 
            = __VdlyVal__onoc_bus__DOT__wg__DOT__valid_right__v4;
        vlSelfRef.onoc_bus__DOT__wg__DOT__buffer_left[2U][0U] 
            = __VdlyVal__onoc_bus__DOT__wg__DOT__buffer_left__v5[0U];
        vlSelfRef.onoc_bus__DOT__wg__DOT__buffer_left[2U][1U] 
            = __VdlyVal__onoc_bus__DOT__wg__DOT__buffer_left__v5[1U];
        vlSelfRef.onoc_bus__DOT__wg__DOT__buffer_left[2U][2U] 
            = __VdlyVal__onoc_bus__DOT__wg__DOT__buffer_left__v5[2U];
        vlSelfRef.onoc_bus__DOT__wg__DOT__buffer_left[2U][3U] 
            = __VdlyVal__onoc_bus__DOT__wg__DOT__buffer_left__v5[3U];
        vlSelfRef.onoc_bus__DOT__wg__DOT__valid_left[2U] 
            = __VdlyVal__onoc_bus__DOT__wg__DOT__valid_left__v5;
        vlSelfRef.onoc_bus__DOT__wg__DOT__buffer_right[2U][0U] 
            = __VdlyVal__onoc_bus__DOT__wg__DOT__buffer_right__v5[0U];
        vlSelfRef.onoc_bus__DOT__wg__DOT__buffer_right[2U][1U] 
            = __VdlyVal__onoc_bus__DOT__wg__DOT__buffer_right__v5[1U];
        vlSelfRef.onoc_bus__DOT__wg__DOT__buffer_right[2U][2U] 
            = __VdlyVal__onoc_bus__DOT__wg__DOT__buffer_right__v5[2U];
        vlSelfRef.onoc_bus__DOT__wg__DOT__buffer_right[2U][3U] 
            = __VdlyVal__onoc_bus__DOT__wg__DOT__buffer_right__v5[3U];
        vlSelfRef.onoc_bus__DOT__wg__DOT__valid_right[2U] 
            = __VdlyVal__onoc_bus__DOT__wg__DOT__valid_right__v5;
        vlSelfRef.onoc_bus__DOT__wg__DOT__buffer_left[1U][0U] 
            = __VdlyVal__onoc_bus__DOT__wg__DOT__buffer_left__v6[0U];
        vlSelfRef.onoc_bus__DOT__wg__DOT__buffer_left[1U][1U] 
            = __VdlyVal__onoc_bus__DOT__wg__DOT__buffer_left__v6[1U];
        vlSelfRef.onoc_bus__DOT__wg__DOT__buffer_left[1U][2U] 
            = __VdlyVal__onoc_bus__DOT__wg__DOT__buffer_left__v6[2U];
        vlSelfRef.onoc_bus__DOT__wg__DOT__buffer_left[1U][3U] 
            = __VdlyVal__onoc_bus__DOT__wg__DOT__buffer_left__v6[3U];
        vlSelfRef.onoc_bus__DOT__wg__DOT__valid_left[1U] 
            = __VdlyVal__onoc_bus__DOT__wg__DOT__valid_left__v6;
        vlSelfRef.onoc_bus__DOT__wg__DOT__buffer_right[1U][0U] 
            = __VdlyVal__onoc_bus__DOT__wg__DOT__buffer_right__v6[0U];
        vlSelfRef.onoc_bus__DOT__wg__DOT__buffer_right[1U][1U] 
            = __VdlyVal__onoc_bus__DOT__wg__DOT__buffer_right__v6[1U];
        vlSelfRef.onoc_bus__DOT__wg__DOT__buffer_right[1U][2U] 
            = __VdlyVal__onoc_bus__DOT__wg__DOT__buffer_right__v6[2U];
        vlSelfRef.onoc_bus__DOT__wg__DOT__buffer_right[1U][3U] 
            = __VdlyVal__onoc_bus__DOT__wg__DOT__buffer_right__v6[3U];
        vlSelfRef.onoc_bus__DOT__wg__DOT__valid_right[1U] 
            = __VdlyVal__onoc_bus__DOT__wg__DOT__valid_right__v6;
        vlSelfRef.onoc_bus__DOT__wg__DOT__buffer_left[0U][0U] 
            = __VdlyVal__onoc_bus__DOT__wg__DOT__buffer_left__v7[0U];
        vlSelfRef.onoc_bus__DOT__wg__DOT__buffer_left[0U][1U] 
            = __VdlyVal__onoc_bus__DOT__wg__DOT__buffer_left__v7[1U];
        vlSelfRef.onoc_bus__DOT__wg__DOT__buffer_left[0U][2U] 
            = __VdlyVal__onoc_bus__DOT__wg__DOT__buffer_left__v7[2U];
        vlSelfRef.onoc_bus__DOT__wg__DOT__buffer_left[0U][3U] 
            = __VdlyVal__onoc_bus__DOT__wg__DOT__buffer_left__v7[3U];
        vlSelfRef.onoc_bus__DOT__wg__DOT__valid_left[0U] 
            = __VdlyVal__onoc_bus__DOT__wg__DOT__valid_left__v7;
        vlSelfRef.onoc_bus__DOT__wg__DOT__buffer_right[0U][0U] 
            = __VdlyVal__onoc_bus__DOT__wg__DOT__buffer_right__v7[0U];
        vlSelfRef.onoc_bus__DOT__wg__DOT__buffer_right[0U][1U] 
            = __VdlyVal__onoc_bus__DOT__wg__DOT__buffer_right__v7[1U];
        vlSelfRef.onoc_bus__DOT__wg__DOT__buffer_right[0U][2U] 
            = __VdlyVal__onoc_bus__DOT__wg__DOT__buffer_right__v7[2U];
        vlSelfRef.onoc_bus__DOT__wg__DOT__buffer_right[0U][3U] 
            = __VdlyVal__onoc_bus__DOT__wg__DOT__buffer_right__v7[3U];
        vlSelfRef.onoc_bus__DOT__wg__DOT__valid_right[0U] 
            = __VdlyVal__onoc_bus__DOT__wg__DOT__valid_right__v7;
    }
    vlSelfRef.ip_rx_packet_0_data = ((vlSelfRef.onoc_bus__DOT__pd0__DOT__buffer
                                      [1U][2U] << 0x1fU) 
                                     | (vlSelfRef.onoc_bus__DOT__pd0__DOT__buffer
                                        [1U][1U] >> 1U));
    vlSelfRef.ip_rx_packet_1_data = ((vlSelfRef.onoc_bus__DOT__pd1__DOT__buffer
                                      [1U][2U] << 0x1fU) 
                                     | (vlSelfRef.onoc_bus__DOT__pd1__DOT__buffer
                                        [1U][1U] >> 1U));
    vlSelfRef.ip_0_received = vlSelfRef.onoc_bus__DOT__pd0__DOT__valid_buf
        [1U];
    vlSelfRef.ip_1_received = vlSelfRef.onoc_bus__DOT__pd1__DOT__valid_buf
        [1U];
    if (VL_LIKELY(vlSelfRef.rst)) {
        __Vdly__onoc_bus__DOT__router0__DOT__pending_send_packet = 0U;
        vlSelfRef.onoc_bus__DOT__modulator_input_data_0[0U] = 0U;
        vlSelfRef.onoc_bus__DOT__modulator_input_data_0[1U] = 0U;
        vlSelfRef.onoc_bus__DOT__modulator_input_data_0[2U] = 0U;
        vlSelfRef.onoc_bus__DOT__modulator_input_data_0[3U] = 0U;
        vlSelfRef.onoc_bus__DOT__modulator_input_valid_0 = 0U;
    } else {
        if (VL_UNLIKELY(((IData)(vlSelfRef.onoc_bus__DOT__ip_tx_valid_0) 
                         & (~ (IData)(vlSelfRef.onoc_bus__DOT__router0__DOT__pending_send_packet))))) {
            VL_WRITEF_NX("Router 0 buffered packet ID %0# from IP\n",0,
                         32,(0xffffU & (vlSelfRef.onoc_bus__DOT__ip_tx_data_0[1U] 
                                        >> 1U)));
            __Vdly__onoc_bus__DOT__router0__DOT__packet_id_counter 
                = ((IData)(1U) + vlSelfRef.onoc_bus__DOT__router0__DOT__packet_id_counter);
            __Vdly__onoc_bus__DOT__router0__DOT__outgoing_pkt_buffer[0U] 
                = vlSelfRef.onoc_bus__DOT__ip_tx_data_0[0U];
            __Vdly__onoc_bus__DOT__router0__DOT__outgoing_pkt_buffer[1U] 
                = vlSelfRef.onoc_bus__DOT__ip_tx_data_0[1U];
            __Vdly__onoc_bus__DOT__router0__DOT__outgoing_pkt_buffer[2U] 
                = vlSelfRef.onoc_bus__DOT__ip_tx_data_0[2U];
            __Vdly__onoc_bus__DOT__router0__DOT__outgoing_pkt_buffer[3U] 
                = vlSelfRef.onoc_bus__DOT__ip_tx_data_0[3U];
            __Vdly__onoc_bus__DOT__router0__DOT__pending_send_packet = 1U;
        }
        VL_WRITEF_NX("Router 0: ip_valid_in %0b: pending_send_packet %0b: permission_granted_send: %0b\n",0,
                     1,vlSelfRef.onoc_bus__DOT__ip_tx_valid_0,
                     1,(IData)(vlSelfRef.onoc_bus__DOT__router0__DOT__pending_send_packet),
                     1,(1U & (IData)(vlSelfRef.onoc_bus__DOT__fp_arb__DOT__current_grant)));
        if (VL_UNLIKELY(((IData)(vlSelfRef.onoc_bus__DOT__router0__DOT__pending_send_packet) 
                         & (IData)(vlSelfRef.onoc_bus__DOT__fp_arb__DOT__current_grant)))) {
            vlSelfRef.onoc_bus__DOT__modulator_input_data_0[0U] 
                = vlSelfRef.onoc_bus__DOT__router0__DOT__outgoing_pkt_buffer[0U];
            vlSelfRef.onoc_bus__DOT__modulator_input_data_0[1U] 
                = vlSelfRef.onoc_bus__DOT__router0__DOT__outgoing_pkt_buffer[1U];
            vlSelfRef.onoc_bus__DOT__modulator_input_data_0[2U] 
                = vlSelfRef.onoc_bus__DOT__router0__DOT__outgoing_pkt_buffer[2U];
            vlSelfRef.onoc_bus__DOT__modulator_input_data_0[3U] 
                = vlSelfRef.onoc_bus__DOT__router0__DOT__outgoing_pkt_buffer[3U];
            vlSelfRef.onoc_bus__DOT__modulator_input_valid_0 = 1U;
            __Vdly__onoc_bus__DOT__router0__DOT__pending_send_packet = 0U;
            VL_WRITEF_NX("Router 0 sends packet with timestamp %0# to modulator\n",0,
                         32,((vlSelfRef.onoc_bus__DOT__router0__DOT__outgoing_pkt_buffer[1U] 
                              << 0x1fU) | (vlSelfRef.onoc_bus__DOT__router0__DOT__outgoing_pkt_buffer[0U] 
                                           >> 1U)));
        } else {
            vlSelfRef.onoc_bus__DOT__modulator_input_valid_0 = 0U;
        }
    }
    if (VL_LIKELY(vlSelfRef.rst)) {
        __Vdly__onoc_bus__DOT__router1__DOT__pending_send_packet = 0U;
        vlSelfRef.onoc_bus__DOT__modulator_input_data_1[0U] = 0U;
        vlSelfRef.onoc_bus__DOT__modulator_input_data_1[1U] = 0U;
        vlSelfRef.onoc_bus__DOT__modulator_input_data_1[2U] = 0U;
        vlSelfRef.onoc_bus__DOT__modulator_input_data_1[3U] = 0U;
        vlSelfRef.onoc_bus__DOT__modulator_input_valid_1 = 0U;
    } else {
        if (VL_UNLIKELY(((IData)(vlSelfRef.onoc_bus__DOT__ip_tx_valid_1) 
                         & (~ (IData)(vlSelfRef.onoc_bus__DOT__router1__DOT__pending_send_packet))))) {
            VL_WRITEF_NX("Router 1 buffered packet ID %0# from IP\n",0,
                         32,(0xffffU & (vlSelfRef.onoc_bus__DOT__ip_tx_data_1[1U] 
                                        >> 1U)));
            __Vdly__onoc_bus__DOT__router1__DOT__packet_id_counter 
                = ((IData)(1U) + vlSelfRef.onoc_bus__DOT__router1__DOT__packet_id_counter);
            __Vdly__onoc_bus__DOT__router1__DOT__outgoing_pkt_buffer[0U] 
                = vlSelfRef.onoc_bus__DOT__ip_tx_data_1[0U];
            __Vdly__onoc_bus__DOT__router1__DOT__outgoing_pkt_buffer[1U] 
                = vlSelfRef.onoc_bus__DOT__ip_tx_data_1[1U];
            __Vdly__onoc_bus__DOT__router1__DOT__outgoing_pkt_buffer[2U] 
                = vlSelfRef.onoc_bus__DOT__ip_tx_data_1[2U];
            __Vdly__onoc_bus__DOT__router1__DOT__outgoing_pkt_buffer[3U] 
                = vlSelfRef.onoc_bus__DOT__ip_tx_data_1[3U];
            __Vdly__onoc_bus__DOT__router1__DOT__pending_send_packet = 1U;
        }
        VL_WRITEF_NX("Router 1: ip_valid_in %0b: pending_send_packet %0b: permission_granted_send: %0b\n",0,
                     1,vlSelfRef.onoc_bus__DOT__ip_tx_valid_1,
                     1,(IData)(vlSelfRef.onoc_bus__DOT__router1__DOT__pending_send_packet),
                     1,(1U & ((IData)(vlSelfRef.onoc_bus__DOT__fp_arb__DOT__current_grant) 
                              >> 1U)));
        if (VL_UNLIKELY(((IData)(vlSelfRef.onoc_bus__DOT__router1__DOT__pending_send_packet) 
                         & ((IData)(vlSelfRef.onoc_bus__DOT__fp_arb__DOT__current_grant) 
                            >> 1U)))) {
            vlSelfRef.onoc_bus__DOT__modulator_input_data_1[0U] 
                = vlSelfRef.onoc_bus__DOT__router1__DOT__outgoing_pkt_buffer[0U];
            vlSelfRef.onoc_bus__DOT__modulator_input_data_1[1U] 
                = vlSelfRef.onoc_bus__DOT__router1__DOT__outgoing_pkt_buffer[1U];
            vlSelfRef.onoc_bus__DOT__modulator_input_data_1[2U] 
                = vlSelfRef.onoc_bus__DOT__router1__DOT__outgoing_pkt_buffer[2U];
            vlSelfRef.onoc_bus__DOT__modulator_input_data_1[3U] 
                = vlSelfRef.onoc_bus__DOT__router1__DOT__outgoing_pkt_buffer[3U];
            vlSelfRef.onoc_bus__DOT__modulator_input_valid_1 = 1U;
            __Vdly__onoc_bus__DOT__router1__DOT__pending_send_packet = 0U;
            VL_WRITEF_NX("Router 1 sends packet with timestamp %0# to modulator\n",0,
                         32,((vlSelfRef.onoc_bus__DOT__router1__DOT__outgoing_pkt_buffer[1U] 
                              << 0x1fU) | (vlSelfRef.onoc_bus__DOT__router1__DOT__outgoing_pkt_buffer[0U] 
                                           >> 1U)));
        } else {
            vlSelfRef.onoc_bus__DOT__modulator_input_valid_1 = 0U;
        }
    }
    vlSelfRef.onoc_bus__DOT__router0__DOT__outgoing_pkt_buffer[0U] 
        = __Vdly__onoc_bus__DOT__router0__DOT__outgoing_pkt_buffer[0U];
    vlSelfRef.onoc_bus__DOT__router0__DOT__outgoing_pkt_buffer[1U] 
        = __Vdly__onoc_bus__DOT__router0__DOT__outgoing_pkt_buffer[1U];
    vlSelfRef.onoc_bus__DOT__router0__DOT__outgoing_pkt_buffer[2U] 
        = __Vdly__onoc_bus__DOT__router0__DOT__outgoing_pkt_buffer[2U];
    vlSelfRef.onoc_bus__DOT__router0__DOT__outgoing_pkt_buffer[3U] 
        = __Vdly__onoc_bus__DOT__router0__DOT__outgoing_pkt_buffer[3U];
    vlSelfRef.onoc_bus__DOT__router0__DOT__packet_id_counter 
        = __Vdly__onoc_bus__DOT__router0__DOT__packet_id_counter;
    vlSelfRef.onoc_bus__DOT__router1__DOT__outgoing_pkt_buffer[0U] 
        = __Vdly__onoc_bus__DOT__router1__DOT__outgoing_pkt_buffer[0U];
    vlSelfRef.onoc_bus__DOT__router1__DOT__outgoing_pkt_buffer[1U] 
        = __Vdly__onoc_bus__DOT__router1__DOT__outgoing_pkt_buffer[1U];
    vlSelfRef.onoc_bus__DOT__router1__DOT__outgoing_pkt_buffer[2U] 
        = __Vdly__onoc_bus__DOT__router1__DOT__outgoing_pkt_buffer[2U];
    vlSelfRef.onoc_bus__DOT__router1__DOT__outgoing_pkt_buffer[3U] 
        = __Vdly__onoc_bus__DOT__router1__DOT__outgoing_pkt_buffer[3U];
    vlSelfRef.onoc_bus__DOT__router1__DOT__packet_id_counter 
        = __Vdly__onoc_bus__DOT__router1__DOT__packet_id_counter;
    vlSelfRef.onoc_bus__DOT__fp_arb__DOT__current_grant 
        = __Vdly__onoc_bus__DOT__fp_arb__DOT__current_grant;
    vlSelfRef.router_0_sent = vlSelfRef.onoc_bus__DOT__modulator_input_valid_0;
    if (vlSelfRef.rst) {
        vlSelfRef.onoc_bus__DOT__ip_tx_data_0[0U] = 0U;
        vlSelfRef.onoc_bus__DOT__ip_tx_data_0[1U] = 0U;
        vlSelfRef.onoc_bus__DOT__ip_tx_data_0[2U] = 0U;
        vlSelfRef.onoc_bus__DOT__ip_tx_data_0[3U] = 0U;
        vlSelfRef.onoc_bus__DOT__ip_tx_valid_0 = 0U;
        __Vdly__onoc_bus__DOT__ip_inst0__DOT__pkt_sent_last_cycle = 0U;
        __Vdly__onoc_bus__DOT__ip_inst0__DOT__cycle_counter = 0U;
        vlSelfRef.onoc_bus__DOT__ip_tx_data_0[0U] = 0U;
        vlSelfRef.onoc_bus__DOT__ip_tx_data_0[1U] = 0U;
        vlSelfRef.onoc_bus__DOT__ip_tx_data_0[2U] = 0U;
        vlSelfRef.onoc_bus__DOT__ip_tx_data_0[3U] = 0U;
    } else {
        vlSelfRef.onoc_bus__DOT__ip_inst0__DOT__unnamedblk1__DOT__send_now 
            = (VL_ITOR_D_I(32, VL_MODDIV_III(32, (IData)(
                                                         VL_RANDOM_I()), (IData)(0x64U))) 
               < (50.0 + (50.0 * sin(((6.28000000000000025e+00 
                                       * VL_ISTOR_D_I(32, vlSelfRef.onoc_bus__DOT__ip_inst0__DOT__cycle_counter)) 
                                      / 50.0)))));
        if (VL_UNLIKELY((((IData)(vlSelfRef.onoc_bus__DOT__ip_inst0__DOT__unnamedblk1__DOT__send_now) 
                          & (~ (IData)(vlSelfRef.onoc_bus__DOT__router0__DOT__pending_send_packet))) 
                         & (~ (IData)(vlSelfRef.onoc_bus__DOT__ip_inst0__DOT__pkt_sent_last_cycle))))) {
            __Vfunc_onoc_bus__DOT__ip_inst0__DOT__get_random_destination__0__self_id = 0U;
            __Vfunc_onoc_bus__DOT__ip_inst0__DOT__get_random_destination__0__random_id 
                = (0xffffU & VL_URANDOM_RANGE_I(0U, 1U));
            vlSelfRef.onoc_bus__DOT__ip_tx_valid_0 = 1U;
            __Vdly__onoc_bus__DOT__ip_inst0__DOT__pkt_sent_last_cycle = 1U;
            while (((IData)(__Vfunc_onoc_bus__DOT__ip_inst0__DOT__get_random_destination__0__random_id) 
                    == (IData)(__Vfunc_onoc_bus__DOT__ip_inst0__DOT__get_random_destination__0__self_id))) {
                __Vfunc_onoc_bus__DOT__ip_inst0__DOT__get_random_destination__0__random_id 
                    = (0xffffU & VL_URANDOM_RANGE_I(0U, 1U));
            }
            __Vfunc_onoc_bus__DOT__ip_inst0__DOT__get_random_destination__0__rand_y 
                = (0xffU & (IData)(__Vfunc_onoc_bus__DOT__ip_inst0__DOT__get_random_destination__0__random_id));
            __Vfunc_onoc_bus__DOT__ip_inst0__DOT__encode_xy__1__y 
                = __Vfunc_onoc_bus__DOT__ip_inst0__DOT__get_random_destination__0__rand_y;
            __Vfunc_onoc_bus__DOT__ip_inst0__DOT__encode_xy__1__Vfuncout 
                = __Vfunc_onoc_bus__DOT__ip_inst0__DOT__encode_xy__1__y;
            __Vfunc_onoc_bus__DOT__ip_inst0__DOT__get_random_destination__0__Vfuncout 
                = __Vfunc_onoc_bus__DOT__ip_inst0__DOT__encode_xy__1__Vfuncout;
            __Vdly__onoc_bus__DOT__ip_inst0__DOT__destination 
                = __Vfunc_onoc_bus__DOT__ip_inst0__DOT__get_random_destination__0__Vfuncout;
            vlSelfRef.onoc_bus__DOT__ip_tx_data_0[0U] 
                = (1U | (vlSelfRef.onoc_bus__DOT__ip_inst0__DOT__cycle_counter 
                         << 1U));
            vlSelfRef.onoc_bus__DOT__ip_tx_data_0[1U] 
                = ((vlSelfRef.onoc_bus__DOT__ip_inst0__DOT__cycle_counter 
                    >> 0x1fU) | ((IData)((((QData)((IData)(vlSelfRef.onoc_bus__DOT__ip_inst0__DOT__destination)) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSelfRef.onoc_bus__DOT__ip_inst0__DOT__payload)))) 
                                 << 1U));
            vlSelfRef.onoc_bus__DOT__ip_tx_data_0[2U] 
                = (((IData)((((QData)((IData)(vlSelfRef.onoc_bus__DOT__ip_inst0__DOT__destination)) 
                              << 0x20U) | (QData)((IData)(vlSelfRef.onoc_bus__DOT__ip_inst0__DOT__payload)))) 
                    >> 0x1fU) | ((IData)(((((QData)((IData)(vlSelfRef.onoc_bus__DOT__ip_inst0__DOT__destination)) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlSelfRef.onoc_bus__DOT__ip_inst0__DOT__payload))) 
                                          >> 0x20U)) 
                                 << 1U));
            vlSelfRef.onoc_bus__DOT__ip_tx_data_0[3U] 
                = ((IData)(((((QData)((IData)(vlSelfRef.onoc_bus__DOT__ip_inst0__DOT__destination)) 
                              << 0x20U) | (QData)((IData)(vlSelfRef.onoc_bus__DOT__ip_inst0__DOT__payload))) 
                            >> 0x20U)) >> 0x1fU);
            VL_WRITEF_NX("IP 0 sending %11d to dest %0#\n",0,
                         32,vlSelfRef.onoc_bus__DOT__ip_inst0__DOT__payload,
                         16,(IData)(vlSelfRef.onoc_bus__DOT__ip_inst0__DOT__destination));
            vlSelfRef.onoc_bus__DOT__ip_inst0__DOT__payload 
                = ((IData)(1U) + vlSelfRef.onoc_bus__DOT__ip_inst0__DOT__payload);
        } else {
            vlSelfRef.onoc_bus__DOT__ip_tx_valid_0 = 0U;
            __Vdly__onoc_bus__DOT__ip_inst0__DOT__pkt_sent_last_cycle = 0U;
        }
        __Vdly__onoc_bus__DOT__ip_inst0__DOT__cycle_counter 
            = ((IData)(1U) + vlSelfRef.onoc_bus__DOT__ip_inst0__DOT__cycle_counter);
    }
    vlSelfRef.router_1_sent = vlSelfRef.onoc_bus__DOT__modulator_input_valid_1;
    if (vlSelfRef.rst) {
        vlSelfRef.onoc_bus__DOT__ip_tx_data_1[0U] = 0U;
        vlSelfRef.onoc_bus__DOT__ip_tx_data_1[1U] = 0U;
        vlSelfRef.onoc_bus__DOT__ip_tx_data_1[2U] = 0U;
        vlSelfRef.onoc_bus__DOT__ip_tx_data_1[3U] = 0U;
        vlSelfRef.onoc_bus__DOT__ip_tx_valid_1 = 0U;
        __Vdly__onoc_bus__DOT__ip_inst1__DOT__pkt_sent_last_cycle = 0U;
        __Vdly__onoc_bus__DOT__ip_inst1__DOT__cycle_counter = 0U;
        vlSelfRef.onoc_bus__DOT__ip_tx_data_1[0U] = 0U;
        vlSelfRef.onoc_bus__DOT__ip_tx_data_1[1U] = 0U;
        vlSelfRef.onoc_bus__DOT__ip_tx_data_1[2U] = 0U;
        vlSelfRef.onoc_bus__DOT__ip_tx_data_1[3U] = 0U;
    } else {
        vlSelfRef.onoc_bus__DOT__ip_inst1__DOT__unnamedblk1__DOT__send_now 
            = (VL_ITOR_D_I(32, VL_MODDIV_III(32, (IData)(
                                                         VL_RANDOM_I()), (IData)(0x64U))) 
               < (50.0 + (50.0 * sin(((6.28000000000000025e+00 
                                       * VL_ISTOR_D_I(32, vlSelfRef.onoc_bus__DOT__ip_inst1__DOT__cycle_counter)) 
                                      / 50.0)))));
        if (VL_UNLIKELY((((IData)(vlSelfRef.onoc_bus__DOT__ip_inst1__DOT__unnamedblk1__DOT__send_now) 
                          & (~ (IData)(vlSelfRef.onoc_bus__DOT__router1__DOT__pending_send_packet))) 
                         & (~ (IData)(vlSelfRef.onoc_bus__DOT__ip_inst1__DOT__pkt_sent_last_cycle))))) {
            __Vfunc_onoc_bus__DOT__ip_inst1__DOT__get_random_destination__3__self_id = 1U;
            __Vfunc_onoc_bus__DOT__ip_inst1__DOT__get_random_destination__3__random_id 
                = (0xffffU & VL_URANDOM_RANGE_I(0U, 1U));
            vlSelfRef.onoc_bus__DOT__ip_tx_valid_1 = 1U;
            __Vdly__onoc_bus__DOT__ip_inst1__DOT__pkt_sent_last_cycle = 1U;
            while (((IData)(__Vfunc_onoc_bus__DOT__ip_inst1__DOT__get_random_destination__3__random_id) 
                    == (IData)(__Vfunc_onoc_bus__DOT__ip_inst1__DOT__get_random_destination__3__self_id))) {
                __Vfunc_onoc_bus__DOT__ip_inst1__DOT__get_random_destination__3__random_id 
                    = (0xffffU & VL_URANDOM_RANGE_I(0U, 1U));
            }
            __Vfunc_onoc_bus__DOT__ip_inst1__DOT__get_random_destination__3__rand_y 
                = (0xffU & (IData)(__Vfunc_onoc_bus__DOT__ip_inst1__DOT__get_random_destination__3__random_id));
            __Vfunc_onoc_bus__DOT__ip_inst1__DOT__encode_xy__4__y 
                = __Vfunc_onoc_bus__DOT__ip_inst1__DOT__get_random_destination__3__rand_y;
            __Vfunc_onoc_bus__DOT__ip_inst1__DOT__encode_xy__4__Vfuncout 
                = __Vfunc_onoc_bus__DOT__ip_inst1__DOT__encode_xy__4__y;
            __Vfunc_onoc_bus__DOT__ip_inst1__DOT__get_random_destination__3__Vfuncout 
                = __Vfunc_onoc_bus__DOT__ip_inst1__DOT__encode_xy__4__Vfuncout;
            __Vdly__onoc_bus__DOT__ip_inst1__DOT__destination 
                = __Vfunc_onoc_bus__DOT__ip_inst1__DOT__get_random_destination__3__Vfuncout;
            vlSelfRef.onoc_bus__DOT__ip_tx_data_1[0U] 
                = (1U | ((IData)((((QData)((IData)(
                                                   (0x10000U 
                                                    | vlSelfRef.onoc_bus__DOT__ip_inst1__DOT__payload))) 
                                   << 0x20U) | (QData)((IData)(vlSelfRef.onoc_bus__DOT__ip_inst1__DOT__cycle_counter)))) 
                         << 1U));
            vlSelfRef.onoc_bus__DOT__ip_tx_data_1[1U] 
                = (((IData)((((QData)((IData)((0x10000U 
                                               | vlSelfRef.onoc_bus__DOT__ip_inst1__DOT__payload))) 
                              << 0x20U) | (QData)((IData)(vlSelfRef.onoc_bus__DOT__ip_inst1__DOT__cycle_counter)))) 
                    >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                            (0x10000U 
                                                             | vlSelfRef.onoc_bus__DOT__ip_inst1__DOT__payload))) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlSelfRef.onoc_bus__DOT__ip_inst1__DOT__cycle_counter))) 
                                          >> 0x20U)) 
                                 << 1U));
            vlSelfRef.onoc_bus__DOT__ip_tx_data_1[2U] 
                = ((0xfffffffeU & vlSelfRef.onoc_bus__DOT__ip_tx_data_1[2U]) 
                   | ((IData)(((((QData)((IData)((0x10000U 
                                                  | vlSelfRef.onoc_bus__DOT__ip_inst1__DOT__payload))) 
                                 << 0x20U) | (QData)((IData)(vlSelfRef.onoc_bus__DOT__ip_inst1__DOT__cycle_counter))) 
                               >> 0x20U)) >> 0x1fU));
            vlSelfRef.onoc_bus__DOT__ip_tx_data_1[2U] 
                = ((1U & vlSelfRef.onoc_bus__DOT__ip_tx_data_1[2U]) 
                   | (0xfffffffeU & (0x2000000U | ((IData)(vlSelfRef.onoc_bus__DOT__ip_inst1__DOT__destination) 
                                                   << 1U))));
            vlSelfRef.onoc_bus__DOT__ip_tx_data_1[3U] 
                = ((IData)(vlSelfRef.onoc_bus__DOT__ip_inst1__DOT__destination) 
                   >> 0x1fU);
            VL_WRITEF_NX("IP 1 sending %11d to dest %0#\n",0,
                         32,vlSelfRef.onoc_bus__DOT__ip_inst1__DOT__payload,
                         16,(IData)(vlSelfRef.onoc_bus__DOT__ip_inst1__DOT__destination));
            vlSelfRef.onoc_bus__DOT__ip_inst1__DOT__payload 
                = ((IData)(1U) + vlSelfRef.onoc_bus__DOT__ip_inst1__DOT__payload);
        } else {
            vlSelfRef.onoc_bus__DOT__ip_tx_valid_1 = 0U;
            __Vdly__onoc_bus__DOT__ip_inst1__DOT__pkt_sent_last_cycle = 0U;
        }
        __Vdly__onoc_bus__DOT__ip_inst1__DOT__cycle_counter 
            = ((IData)(1U) + vlSelfRef.onoc_bus__DOT__ip_inst1__DOT__cycle_counter);
    }
    vlSelfRef.onoc_bus__DOT__ip_inst0__DOT__pkt_sent_last_cycle 
        = __Vdly__onoc_bus__DOT__ip_inst0__DOT__pkt_sent_last_cycle;
    vlSelfRef.onoc_bus__DOT__ip_inst0__DOT__cycle_counter 
        = __Vdly__onoc_bus__DOT__ip_inst0__DOT__cycle_counter;
    vlSelfRef.onoc_bus__DOT__ip_inst0__DOT__destination 
        = __Vdly__onoc_bus__DOT__ip_inst0__DOT__destination;
    vlSelfRef.onoc_bus__DOT__router0__DOT__pending_send_packet 
        = __Vdly__onoc_bus__DOT__router0__DOT__pending_send_packet;
    vlSelfRef.onoc_bus__DOT__ip_inst1__DOT__pkt_sent_last_cycle 
        = __Vdly__onoc_bus__DOT__ip_inst1__DOT__pkt_sent_last_cycle;
    vlSelfRef.onoc_bus__DOT__ip_inst1__DOT__cycle_counter 
        = __Vdly__onoc_bus__DOT__ip_inst1__DOT__cycle_counter;
    vlSelfRef.onoc_bus__DOT__ip_inst1__DOT__destination 
        = __Vdly__onoc_bus__DOT__ip_inst1__DOT__destination;
    vlSelfRef.onoc_bus__DOT__router1__DOT__pending_send_packet 
        = __Vdly__onoc_bus__DOT__router1__DOT__pending_send_packet;
    vlSelfRef.ip_tx_packet_0_data = ((vlSelfRef.onoc_bus__DOT__ip_tx_data_0[2U] 
                                      << 0x1fU) | (
                                                   vlSelfRef.onoc_bus__DOT__ip_tx_data_0[1U] 
                                                   >> 1U));
    vlSelfRef.ip_0_sent = vlSelfRef.onoc_bus__DOT__ip_tx_valid_0;
    vlSelfRef.ip_tx_packet_1_data = ((vlSelfRef.onoc_bus__DOT__ip_tx_data_1[2U] 
                                      << 0x1fU) | (
                                                   vlSelfRef.onoc_bus__DOT__ip_tx_data_1[1U] 
                                                   >> 1U));
    vlSelfRef.ip_1_sent = vlSelfRef.onoc_bus__DOT__ip_tx_valid_1;
    vlSelfRef.onoc_bus__DOT__router_request = (((IData)(vlSelfRef.onoc_bus__DOT__router1__DOT__pending_send_packet) 
                                                << 1U) 
                                               | (IData)(vlSelfRef.onoc_bus__DOT__router0__DOT__pending_send_packet));
}

void Vonoc_bus___024root___eval_triggers__act(Vonoc_bus___024root* vlSelf);

bool Vonoc_bus___024root___eval_phase__act(Vonoc_bus___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vonoc_bus__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vonoc_bus___024root___eval_phase__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vonoc_bus___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vonoc_bus___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vonoc_bus___024root___eval_phase__nba(Vonoc_bus___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vonoc_bus__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vonoc_bus___024root___eval_phase__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vonoc_bus___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vonoc_bus___024root___dump_triggers__nba(Vonoc_bus___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vonoc_bus___024root___dump_triggers__act(Vonoc_bus___024root* vlSelf);
#endif  // VL_DEBUG

void Vonoc_bus___024root___eval(Vonoc_bus___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vonoc_bus__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vonoc_bus___024root___eval\n"); );
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
            Vonoc_bus___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("../src/../src/top/onoc_bus.sv", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vonoc_bus___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("../src/../src/top/onoc_bus.sv", 2, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vonoc_bus___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vonoc_bus___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vonoc_bus___024root___eval_debug_assertions(Vonoc_bus___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vonoc_bus__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vonoc_bus___024root___eval_debug_assertions\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelfRef.rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
