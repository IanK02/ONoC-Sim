// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vonoc_bus.h for the primary calling header

#ifndef VERILATED_VONOC_BUS___024ROOT_H_
#define VERILATED_VONOC_BUS___024ROOT_H_  // guard

#include "verilated.h"


class Vonoc_bus__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vonoc_bus___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_OUT8(ip_0_sent,0,0);
    VL_OUT8(ip_1_sent,0,0);
    VL_OUT8(ip_0_received,0,0);
    VL_OUT8(ip_1_received,0,0);
    VL_OUT8(router_0_sent,0,0);
    VL_OUT8(router_1_sent,0,0);
    CData/*0:0*/ onoc_bus__DOT__ip_tx_valid_0;
    CData/*0:0*/ onoc_bus__DOT__ip_tx_valid_1;
    CData/*0:0*/ onoc_bus__DOT__modulator_input_valid_0;
    CData/*0:0*/ onoc_bus__DOT__modulator_input_valid_1;
    CData/*1:0*/ onoc_bus__DOT__router_request;
    CData/*0:0*/ onoc_bus__DOT__ip_inst0__DOT__pkt_sent_last_cycle;
    CData/*0:0*/ onoc_bus__DOT__ip_inst0__DOT__unnamedblk1__DOT__send_now;
    CData/*0:0*/ onoc_bus__DOT__ip_inst1__DOT__pkt_sent_last_cycle;
    CData/*0:0*/ onoc_bus__DOT__ip_inst1__DOT__unnamedblk1__DOT__send_now;
    CData/*0:0*/ onoc_bus__DOT__router0__DOT__pending_send_packet;
    CData/*0:0*/ onoc_bus__DOT__router1__DOT__pending_send_packet;
    CData/*1:0*/ onoc_bus__DOT__fp_arb__DOT__current_grant;
    CData/*0:0*/ onoc_bus__DOT__fp_arb__DOT__waiting_for_done;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst__0;
    CData/*0:0*/ __VactContinue;
    SData/*15:0*/ onoc_bus__DOT__ip_inst0__DOT__destination;
    SData/*15:0*/ onoc_bus__DOT__ip_inst1__DOT__destination;
    VL_OUT(ip_tx_packet_0_data,31,0);
    VL_OUT(ip_tx_packet_1_data,31,0);
    VL_OUT(ip_rx_packet_0_data,31,0);
    VL_OUT(ip_rx_packet_1_data,31,0);
    IData/*31:0*/ onoc_bus__DOT__ip_inst0__DOT__payload;
    IData/*31:0*/ onoc_bus__DOT__ip_inst0__DOT__cycle_counter;
    IData/*31:0*/ onoc_bus__DOT__ip_inst1__DOT__payload;
    IData/*31:0*/ onoc_bus__DOT__ip_inst1__DOT__cycle_counter;
    IData/*31:0*/ onoc_bus__DOT__router0__DOT__packet_id_counter;
    IData/*31:0*/ onoc_bus__DOT__router1__DOT__packet_id_counter;
    IData/*31:0*/ onoc_bus__DOT__wg__DOT__current_cycle;
    IData/*31:0*/ onoc_bus__DOT__fp_arb__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ __VactIterCount;
    VlWide<4>/*96:0*/ onoc_bus__DOT__ip_tx_data_0;
    VlWide<4>/*96:0*/ onoc_bus__DOT__ip_tx_data_1;
    VlWide<4>/*96:0*/ onoc_bus__DOT__modulator_input_data_0;
    VlWide<4>/*96:0*/ onoc_bus__DOT__modulator_input_data_1;
    VlWide<4>/*96:0*/ onoc_bus__DOT__router0__DOT__outgoing_pkt_buffer;
    VlWide<4>/*96:0*/ onoc_bus__DOT__router1__DOT__outgoing_pkt_buffer;
    VlUnpacked<VlWide<4>/*96:0*/, 2> onoc_bus__DOT__mod0__DOT__buffer;
    VlUnpacked<CData/*0:0*/, 2> onoc_bus__DOT__mod0__DOT__valid_buf;
    VlUnpacked<VlWide<4>/*96:0*/, 2> onoc_bus__DOT__mod1__DOT__buffer;
    VlUnpacked<CData/*0:0*/, 2> onoc_bus__DOT__mod1__DOT__valid_buf;
    VlUnpacked<VlWide<4>/*96:0*/, 4> onoc_bus__DOT__wg__DOT__buffer_left;
    VlUnpacked<CData/*0:0*/, 4> onoc_bus__DOT__wg__DOT__valid_left;
    VlUnpacked<VlWide<4>/*96:0*/, 4> onoc_bus__DOT__wg__DOT__buffer_right;
    VlUnpacked<CData/*0:0*/, 4> onoc_bus__DOT__wg__DOT__valid_right;
    VlUnpacked<VlWide<4>/*96:0*/, 2> onoc_bus__DOT__pd0__DOT__buffer;
    VlUnpacked<CData/*0:0*/, 2> onoc_bus__DOT__pd0__DOT__valid_buf;
    VlUnpacked<VlWide<4>/*96:0*/, 2> onoc_bus__DOT__pd1__DOT__buffer;
    VlUnpacked<CData/*0:0*/, 2> onoc_bus__DOT__pd1__DOT__valid_buf;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vonoc_bus__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vonoc_bus___024root(Vonoc_bus__Syms* symsp, const char* v__name);
    ~Vonoc_bus___024root();
    VL_UNCOPYABLE(Vonoc_bus___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
