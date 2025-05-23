// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vonoc_bus.h for the primary calling header

#include "Vonoc_bus__pch.h"
#include "Vonoc_bus___024root.h"

VL_ATTR_COLD void Vonoc_bus___024root___eval_static(Vonoc_bus___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vonoc_bus__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vonoc_bus___024root___eval_static\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vonoc_bus___024root___eval_initial(Vonoc_bus___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vonoc_bus__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vonoc_bus___024root___eval_initial\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst__0 = vlSelfRef.rst;
}

VL_ATTR_COLD void Vonoc_bus___024root___eval_final(Vonoc_bus___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vonoc_bus__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vonoc_bus___024root___eval_final\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vonoc_bus___024root___dump_triggers__stl(Vonoc_bus___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vonoc_bus___024root___eval_phase__stl(Vonoc_bus___024root* vlSelf);

VL_ATTR_COLD void Vonoc_bus___024root___eval_settle(Vonoc_bus___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vonoc_bus__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vonoc_bus___024root___eval_settle\n"); );
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
            Vonoc_bus___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("../src/../src/top/onoc_bus.sv", 2, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vonoc_bus___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vonoc_bus___024root___dump_triggers__stl(Vonoc_bus___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vonoc_bus__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vonoc_bus___024root___dump_triggers__stl\n"); );
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

VL_ATTR_COLD void Vonoc_bus___024root___stl_sequent__TOP__0(Vonoc_bus___024root* vlSelf);

VL_ATTR_COLD void Vonoc_bus___024root___eval_stl(Vonoc_bus___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vonoc_bus__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vonoc_bus___024root___eval_stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vonoc_bus___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vonoc_bus___024root___stl_sequent__TOP__0(Vonoc_bus___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vonoc_bus__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vonoc_bus___024root___stl_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ip_0_sent = vlSelfRef.onoc_bus__DOT__ip_tx_valid_0;
    vlSelfRef.ip_1_sent = vlSelfRef.onoc_bus__DOT__ip_tx_valid_1;
    vlSelfRef.ip_0_received = vlSelfRef.onoc_bus__DOT__pd0__DOT__valid_buf
        [1U];
    vlSelfRef.ip_1_received = vlSelfRef.onoc_bus__DOT__pd1__DOT__valid_buf
        [1U];
    vlSelfRef.router_0_sent = vlSelfRef.onoc_bus__DOT__modulator_input_valid_0;
    vlSelfRef.router_1_sent = vlSelfRef.onoc_bus__DOT__modulator_input_valid_1;
    vlSelfRef.ip_tx_packet_0_data = ((vlSelfRef.onoc_bus__DOT__ip_tx_data_0[2U] 
                                      << 0x1fU) | (
                                                   vlSelfRef.onoc_bus__DOT__ip_tx_data_0[1U] 
                                                   >> 1U));
    vlSelfRef.ip_tx_packet_1_data = ((vlSelfRef.onoc_bus__DOT__ip_tx_data_1[2U] 
                                      << 0x1fU) | (
                                                   vlSelfRef.onoc_bus__DOT__ip_tx_data_1[1U] 
                                                   >> 1U));
    vlSelfRef.ip_rx_packet_0_data = ((vlSelfRef.onoc_bus__DOT__pd0__DOT__buffer
                                      [1U][2U] << 0x1fU) 
                                     | (vlSelfRef.onoc_bus__DOT__pd0__DOT__buffer
                                        [1U][1U] >> 1U));
    vlSelfRef.ip_rx_packet_1_data = ((vlSelfRef.onoc_bus__DOT__pd1__DOT__buffer
                                      [1U][2U] << 0x1fU) 
                                     | (vlSelfRef.onoc_bus__DOT__pd1__DOT__buffer
                                        [1U][1U] >> 1U));
    vlSelfRef.onoc_bus__DOT__router_request = (((IData)(vlSelfRef.onoc_bus__DOT__router1__DOT__pending_send_packet) 
                                                << 1U) 
                                               | (IData)(vlSelfRef.onoc_bus__DOT__router0__DOT__pending_send_packet));
}

VL_ATTR_COLD void Vonoc_bus___024root___eval_triggers__stl(Vonoc_bus___024root* vlSelf);

VL_ATTR_COLD bool Vonoc_bus___024root___eval_phase__stl(Vonoc_bus___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vonoc_bus__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vonoc_bus___024root___eval_phase__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vonoc_bus___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vonoc_bus___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vonoc_bus___024root___dump_triggers__act(Vonoc_bus___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vonoc_bus__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vonoc_bus___024root___dump_triggers__act\n"); );
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
VL_ATTR_COLD void Vonoc_bus___024root___dump_triggers__nba(Vonoc_bus___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vonoc_bus__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vonoc_bus___024root___dump_triggers__nba\n"); );
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

VL_ATTR_COLD void Vonoc_bus___024root___ctor_var_reset(Vonoc_bus___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vonoc_bus__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vonoc_bus___024root___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->ip_0_sent = VL_RAND_RESET_I(1);
    vlSelf->ip_1_sent = VL_RAND_RESET_I(1);
    vlSelf->ip_0_received = VL_RAND_RESET_I(1);
    vlSelf->ip_1_received = VL_RAND_RESET_I(1);
    vlSelf->router_0_sent = VL_RAND_RESET_I(1);
    vlSelf->router_1_sent = VL_RAND_RESET_I(1);
    vlSelf->ip_tx_packet_0_data = VL_RAND_RESET_I(32);
    vlSelf->ip_tx_packet_1_data = VL_RAND_RESET_I(32);
    vlSelf->ip_rx_packet_0_data = VL_RAND_RESET_I(32);
    vlSelf->ip_rx_packet_1_data = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(97, vlSelf->onoc_bus__DOT__ip_tx_data_0);
    VL_RAND_RESET_W(97, vlSelf->onoc_bus__DOT__ip_tx_data_1);
    vlSelf->onoc_bus__DOT__ip_tx_valid_0 = VL_RAND_RESET_I(1);
    vlSelf->onoc_bus__DOT__ip_tx_valid_1 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(97, vlSelf->onoc_bus__DOT__modulator_input_data_0);
    VL_RAND_RESET_W(97, vlSelf->onoc_bus__DOT__modulator_input_data_1);
    vlSelf->onoc_bus__DOT__modulator_input_valid_0 = VL_RAND_RESET_I(1);
    vlSelf->onoc_bus__DOT__modulator_input_valid_1 = VL_RAND_RESET_I(1);
    vlSelf->onoc_bus__DOT__router_request = VL_RAND_RESET_I(2);
    vlSelf->onoc_bus__DOT__ip_inst0__DOT__payload = VL_RAND_RESET_I(32);
    vlSelf->onoc_bus__DOT__ip_inst0__DOT__pkt_sent_last_cycle = VL_RAND_RESET_I(1);
    vlSelf->onoc_bus__DOT__ip_inst0__DOT__cycle_counter = VL_RAND_RESET_I(32);
    vlSelf->onoc_bus__DOT__ip_inst0__DOT__destination = VL_RAND_RESET_I(16);
    vlSelf->onoc_bus__DOT__ip_inst0__DOT__unnamedblk1__DOT__send_now = VL_RAND_RESET_I(1);
    vlSelf->onoc_bus__DOT__ip_inst1__DOT__payload = VL_RAND_RESET_I(32);
    vlSelf->onoc_bus__DOT__ip_inst1__DOT__pkt_sent_last_cycle = VL_RAND_RESET_I(1);
    vlSelf->onoc_bus__DOT__ip_inst1__DOT__cycle_counter = VL_RAND_RESET_I(32);
    vlSelf->onoc_bus__DOT__ip_inst1__DOT__destination = VL_RAND_RESET_I(16);
    vlSelf->onoc_bus__DOT__ip_inst1__DOT__unnamedblk1__DOT__send_now = VL_RAND_RESET_I(1);
    vlSelf->onoc_bus__DOT__router0__DOT__pending_send_packet = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(97, vlSelf->onoc_bus__DOT__router0__DOT__outgoing_pkt_buffer);
    vlSelf->onoc_bus__DOT__router0__DOT__packet_id_counter = VL_RAND_RESET_I(32);
    vlSelf->onoc_bus__DOT__router1__DOT__pending_send_packet = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(97, vlSelf->onoc_bus__DOT__router1__DOT__outgoing_pkt_buffer);
    vlSelf->onoc_bus__DOT__router1__DOT__packet_id_counter = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(97, vlSelf->onoc_bus__DOT__mod0__DOT__buffer[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->onoc_bus__DOT__mod0__DOT__valid_buf[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(97, vlSelf->onoc_bus__DOT__mod1__DOT__buffer[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->onoc_bus__DOT__mod1__DOT__valid_buf[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(97, vlSelf->onoc_bus__DOT__wg__DOT__buffer_left[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->onoc_bus__DOT__wg__DOT__valid_left[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(97, vlSelf->onoc_bus__DOT__wg__DOT__buffer_right[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->onoc_bus__DOT__wg__DOT__valid_right[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->onoc_bus__DOT__wg__DOT__current_cycle = VL_RAND_RESET_I(32);
    vlSelf->onoc_bus__DOT__fp_arb__DOT__current_grant = VL_RAND_RESET_I(2);
    vlSelf->onoc_bus__DOT__fp_arb__DOT__waiting_for_done = VL_RAND_RESET_I(1);
    vlSelf->onoc_bus__DOT__fp_arb__DOT__unnamedblk1__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(97, vlSelf->onoc_bus__DOT__pd0__DOT__buffer[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->onoc_bus__DOT__pd0__DOT__valid_buf[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(97, vlSelf->onoc_bus__DOT__pd1__DOT__buffer[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->onoc_bus__DOT__pd1__DOT__valid_buf[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst__0 = VL_RAND_RESET_I(1);
}
