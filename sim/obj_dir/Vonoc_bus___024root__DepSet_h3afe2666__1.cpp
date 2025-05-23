// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vonoc_bus.h for the primary calling header

#include "Vonoc_bus__pch.h"
#include "Vonoc_bus___024root.h"

VL_INLINE_OPT void Vonoc_bus___024root___nba_sequent__TOP__1(Vonoc_bus___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vonoc_bus__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vonoc_bus___024root___nba_sequent__TOP__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(vlSelfRef.onoc_bus__DOT__pd0__DOT__valid_buf
                    [0x18U])) {
        VL_WRITEF_NX("IP block 0 received packet from IP %0# with ID %0#\n",0,
                     32,VL_SHIFTR_III(32,32,32, vlSelfRef.ip_rx_data_0, 0x10U),
                     32,(0xffffU & vlSelfRef.ip_rx_data_0));
    }
    if (VL_UNLIKELY(vlSelfRef.onoc_bus__DOT__pd1__DOT__valid_buf
                    [0x18U])) {
        VL_WRITEF_NX("IP block 1 received packet from IP %0# with ID %0#\n",0,
                     32,VL_SHIFTR_III(32,32,32, vlSelfRef.ip_rx_data_1, 0x10U),
                     32,(0xffffU & vlSelfRef.ip_rx_data_1));
    }
}

VL_INLINE_OPT void Vonoc_bus___024root___nba_sequent__TOP__2(Vonoc_bus___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vonoc_bus__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vonoc_bus___024root___nba_sequent__TOP__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ip_rx_data_0 = ((vlSelfRef.onoc_bus__DOT__pd0__DOT__buffer
                               [0x18U][2U] << 0xfU) 
                              | (vlSelfRef.onoc_bus__DOT__pd0__DOT__buffer
                                 [0x18U][1U] >> 0x11U));
    if (vlSelfRef.__VdlySet__onoc_bus__DOT__pd0__DOT__valid_buf__v0) {
        vlSelfRef.onoc_bus__DOT__pd0__DOT__valid_buf[0U] = 0U;
        vlSelfRef.onoc_bus__DOT__pd0__DOT__valid_buf[1U] = 0U;
        vlSelfRef.onoc_bus__DOT__pd0__DOT__valid_buf[2U] = 0U;
        vlSelfRef.onoc_bus__DOT__pd0__DOT__valid_buf[3U] = 0U;
        vlSelfRef.onoc_bus__DOT__pd0__DOT__valid_buf[4U] = 0U;
        vlSelfRef.onoc_bus__DOT__pd0__DOT__valid_buf[5U] = 0U;
        vlSelfRef.onoc_bus__DOT__pd0__DOT__valid_buf[6U] = 0U;
        vlSelfRef.onoc_bus__DOT__pd0__DOT__valid_buf[7U] = 0U;
        vlSelfRef.onoc_bus__DOT__pd0__DOT__valid_buf[8U] = 0U;
        vlSelfRef.onoc_bus__DOT__pd0__DOT__valid_buf[9U] = 0U;
        vlSelfRef.onoc_bus__DOT__pd0__DOT__valid_buf[0xaU] = 0U;
        vlSelfRef.onoc_bus__DOT__pd0__DOT__valid_buf[0xbU] = 0U;
        vlSelfRef.onoc_bus__DOT__pd0__DOT__valid_buf[0xcU] = 0U;
        vlSelfRef.onoc_bus__DOT__pd0__DOT__valid_buf[0xdU] = 0U;
        vlSelfRef.onoc_bus__DOT__pd0__DOT__valid_buf[0xeU] = 0U;
        vlSelfRef.onoc_bus__DOT__pd0__DOT__valid_buf[0xfU] = 0U;
        vlSelfRef.onoc_bus__DOT__pd0__DOT__valid_buf[0x10U] = 0U;
        vlSelfRef.onoc_bus__DOT__pd0__DOT__valid_buf[0x11U] = 0U;
        vlSelfRef.onoc_bus__DOT__pd0__DOT__valid_buf[0x12U] = 0U;
        vlSelfRef.onoc_bus__DOT__pd0__DOT__valid_buf[0x13U] = 0U;
        vlSelfRef.onoc_bus__DOT__pd0__DOT__valid_buf[0x14U] = 0U;
        vlSelfRef.onoc_bus__DOT__pd0__DOT__valid_buf[0x15U] = 0U;
        vlSelfRef.onoc_bus__DOT__pd0__DOT__valid_buf[0x16U] = 0U;
        vlSelfRef.onoc_bus__DOT__pd0__DOT__valid_buf[0x17U] = 0U;
        vlSelfRef.onoc_bus__DOT__pd0__DOT__valid_buf[0x18U] = 0U;
    }
    if (vlSelfRef.__VdlySet__onoc_bus__DOT__pd0__DOT__valid_buf__v25) {
        vlSelfRef.onoc_bus__DOT__pd0__DOT__valid_buf[0U] 
            = vlSelfRef.__VdlyVal__onoc_bus__DOT__pd0__DOT__valid_buf__v25;
    }
    if (vlSelfRef.__VdlySet__onoc_bus__DOT__pd0__DOT__valid_buf__v26) {
        vlSelfRef.onoc_bus__DOT__pd0__DOT__valid_buf[1U] 
            = vlSelfRef.__VdlyVal__onoc_bus__DOT__pd0__DOT__valid_buf__v26;
    }
    if (vlSelfRef.__VdlySet__onoc_bus__DOT__pd0__DOT__valid_buf__v27) {
        vlSelfRef.onoc_bus__DOT__pd0__DOT__valid_buf[2U] 
            = vlSelfRef.__VdlyVal__onoc_bus__DOT__pd0__DOT__valid_buf__v27;
    }
    if (vlSelfRef.__VdlySet__onoc_bus__DOT__pd0__DOT__valid_buf__v28) {
        vlSelfRef.onoc_bus__DOT__pd0__DOT__valid_buf[3U] 
            = vlSelfRef.__VdlyVal__onoc_bus__DOT__pd0__DOT__valid_buf__v28;
    }
    if (vlSelfRef.__VdlySet__onoc_bus__DOT__pd0__DOT__valid_buf__v29) {
        vlSelfRef.onoc_bus__DOT__pd0__DOT__valid_buf[4U] 
            = vlSelfRef.__VdlyVal__onoc_bus__DOT__pd0__DOT__valid_buf__v29;
    }
    if (vlSelfRef.__VdlySet__onoc_bus__DOT__pd0__DOT__valid_buf__v30) {
        vlSelfRef.onoc_bus__DOT__pd0__DOT__valid_buf[5U] 
            = vlSelfRef.__VdlyVal__onoc_bus__DOT__pd0__DOT__valid_buf__v30;
    }
    if (vlSelfRef.__VdlySet__onoc_bus__DOT__pd0__DOT__valid_buf__v31) {
        vlSelfRef.onoc_bus__DOT__pd0__DOT__valid_buf[6U] 
            = vlSelfRef.__VdlyVal__onoc_bus__DOT__pd0__DOT__valid_buf__v31;
    }
    if (vlSelfRef.__VdlySet__onoc_bus__DOT__pd0__DOT__valid_buf__v32) {
        vlSelfRef.onoc_bus__DOT__pd0__DOT__valid_buf[7U] 
            = vlSelfRef.__VdlyVal__onoc_bus__DOT__pd0__DOT__valid_buf__v32;
    }
    if (vlSelfRef.__VdlySet__onoc_bus__DOT__pd0__DOT__valid_buf__v33) {
        vlSelfRef.onoc_bus__DOT__pd0__DOT__valid_buf[8U] 
            = vlSelfRef.__VdlyVal__onoc_bus__DOT__pd0__DOT__valid_buf__v33;
    }
    if (vlSelfRef.__VdlySet__onoc_bus__DOT__pd0__DOT__valid_buf__v34) {
        vlSelfRef.onoc_bus__DOT__pd0__DOT__valid_buf[9U] 
            = vlSelfRef.__VdlyVal__onoc_bus__DOT__pd0__DOT__valid_buf__v34;
    }
    if (vlSelfRef.__VdlySet__onoc_bus__DOT__pd0__DOT__valid_buf__v35) {
        vlSelfRef.onoc_bus__DOT__pd0__DOT__valid_buf[0xaU] 
            = vlSelfRef.__VdlyVal__onoc_bus__DOT__pd0__DOT__valid_buf__v35;
    }
    if (vlSelfRef.__VdlySet__onoc_bus__DOT__pd0__DOT__valid_buf__v36) {
        vlSelfRef.onoc_bus__DOT__pd0__DOT__valid_buf[0xbU] 
            = vlSelfRef.__VdlyVal__onoc_bus__DOT__pd0__DOT__valid_buf__v36;
    }
    if (vlSelfRef.__VdlySet__onoc_bus__DOT__pd0__DOT__valid_buf__v37) {
        vlSelfRef.onoc_bus__DOT__pd0__DOT__valid_buf[0xcU] 
            = vlSelfRef.__VdlyVal__onoc_bus__DOT__pd0__DOT__valid_buf__v37;
    }
    if (vlSelfRef.__VdlySet__onoc_bus__DOT__pd0__DOT__valid_buf__v38) {
        vlSelfRef.onoc_bus__DOT__pd0__DOT__valid_buf[0xdU] 
            = vlSelfRef.__VdlyVal__onoc_bus__DOT__pd0__DOT__valid_buf__v38;
    }
    if (vlSelfRef.__VdlySet__onoc_bus__DOT__pd0__DOT__valid_buf__v39) {
        vlSelfRef.onoc_bus__DOT__pd0__DOT__valid_buf[0xeU] 
            = vlSelfRef.__VdlyVal__onoc_bus__DOT__pd0__DOT__valid_buf__v39;
    }
    if (vlSelfRef.__VdlySet__onoc_bus__DOT__pd0__DOT__valid_buf__v40) {
        vlSelfRef.onoc_bus__DOT__pd0__DOT__valid_buf[0xfU] 
            = vlSelfRef.__VdlyVal__onoc_bus__DOT__pd0__DOT__valid_buf__v40;
    }
    if (vlSelfRef.__VdlySet__onoc_bus__DOT__pd0__DOT__valid_buf__v41) {
        vlSelfRef.onoc_bus__DOT__pd0__DOT__valid_buf[0x10U] 
            = vlSelfRef.__VdlyVal__onoc_bus__DOT__pd0__DOT__valid_buf__v41;
    }
    if (vlSelfRef.__VdlySet__onoc_bus__DOT__pd0__DOT__valid_buf__v42) {
        vlSelfRef.onoc_bus__DOT__pd0__DOT__valid_buf[0x11U] 
            = vlSelfRef.__VdlyVal__onoc_bus__DOT__pd0__DOT__valid_buf__v42;
    }
    if (vlSelfRef.__VdlySet__onoc_bus__DOT__pd0__DOT__valid_buf__v43) {
        vlSelfRef.onoc_bus__DOT__pd0__DOT__valid_buf[0x12U] 
            = vlSelfRef.__VdlyVal__onoc_bus__DOT__pd0__DOT__valid_buf__v43;
    }
    if (vlSelfRef.__VdlySet__onoc_bus__DOT__pd0__DOT__valid_buf__v44) {
        vlSelfRef.onoc_bus__DOT__pd0__DOT__valid_buf[0x13U] 
            = vlSelfRef.__VdlyVal__onoc_bus__DOT__pd0__DOT__valid_buf__v44;
    }
    if (vlSelfRef.__VdlySet__onoc_bus__DOT__pd0__DOT__valid_buf__v45) {
        vlSelfRef.onoc_bus__DOT__pd0__DOT__valid_buf[0x14U] 
            = vlSelfRef.__VdlyVal__onoc_bus__DOT__pd0__DOT__valid_buf__v45;
    }
    if (vlSelfRef.__VdlySet__onoc_bus__DOT__pd0__DOT__valid_buf__v46) {
        vlSelfRef.onoc_bus__DOT__pd0__DOT__valid_buf[0x15U] 
            = vlSelfRef.__VdlyVal__onoc_bus__DOT__pd0__DOT__valid_buf__v46;
    }
    if (vlSelfRef.__VdlySet__onoc_bus__DOT__pd0__DOT__valid_buf__v47) {
        vlSelfRef.onoc_bus__DOT__pd0__DOT__valid_buf[0x16U] 
            = vlSelfRef.__VdlyVal__onoc_bus__DOT__pd0__DOT__valid_buf__v47;
    }
    if (vlSelfRef.__VdlySet__onoc_bus__DOT__pd0__DOT__valid_buf__v48) {
        vlSelfRef.onoc_bus__DOT__pd0__DOT__valid_buf[0x17U] 
            = vlSelfRef.__VdlyVal__onoc_bus__DOT__pd0__DOT__valid_buf__v48;
    }
    if (vlSelfRef.__VdlySet__onoc_bus__DOT__pd0__DOT__valid_buf__v49) {
        vlSelfRef.onoc_bus__DOT__pd0__DOT__valid_buf[0x18U] 
            = vlSelfRef.__VdlyVal__onoc_bus__DOT__pd0__DOT__valid_buf__v49;
    }
    vlSelfRef.ip_rx_data_1 = ((vlSelfRef.onoc_bus__DOT__pd1__DOT__buffer
                               [0x18U][2U] << 0xfU) 
                              | (vlSelfRef.onoc_bus__DOT__pd1__DOT__buffer
                                 [0x18U][1U] >> 0x11U));
    if (vlSelfRef.__VdlySet__onoc_bus__DOT__pd1__DOT__valid_buf__v0) {
        vlSelfRef.onoc_bus__DOT__pd1__DOT__valid_buf[0U] = 0U;
        vlSelfRef.onoc_bus__DOT__pd1__DOT__valid_buf[1U] = 0U;
        vlSelfRef.onoc_bus__DOT__pd1__DOT__valid_buf[2U] = 0U;
        vlSelfRef.onoc_bus__DOT__pd1__DOT__valid_buf[3U] = 0U;
        vlSelfRef.onoc_bus__DOT__pd1__DOT__valid_buf[4U] = 0U;
        vlSelfRef.onoc_bus__DOT__pd1__DOT__valid_buf[5U] = 0U;
        vlSelfRef.onoc_bus__DOT__pd1__DOT__valid_buf[6U] = 0U;
        vlSelfRef.onoc_bus__DOT__pd1__DOT__valid_buf[7U] = 0U;
        vlSelfRef.onoc_bus__DOT__pd1__DOT__valid_buf[8U] = 0U;
        vlSelfRef.onoc_bus__DOT__pd1__DOT__valid_buf[9U] = 0U;
        vlSelfRef.onoc_bus__DOT__pd1__DOT__valid_buf[0xaU] = 0U;
        vlSelfRef.onoc_bus__DOT__pd1__DOT__valid_buf[0xbU] = 0U;
        vlSelfRef.onoc_bus__DOT__pd1__DOT__valid_buf[0xcU] = 0U;
        vlSelfRef.onoc_bus__DOT__pd1__DOT__valid_buf[0xdU] = 0U;
        vlSelfRef.onoc_bus__DOT__pd1__DOT__valid_buf[0xeU] = 0U;
        vlSelfRef.onoc_bus__DOT__pd1__DOT__valid_buf[0xfU] = 0U;
        vlSelfRef.onoc_bus__DOT__pd1__DOT__valid_buf[0x10U] = 0U;
        vlSelfRef.onoc_bus__DOT__pd1__DOT__valid_buf[0x11U] = 0U;
        vlSelfRef.onoc_bus__DOT__pd1__DOT__valid_buf[0x12U] = 0U;
        vlSelfRef.onoc_bus__DOT__pd1__DOT__valid_buf[0x13U] = 0U;
        vlSelfRef.onoc_bus__DOT__pd1__DOT__valid_buf[0x14U] = 0U;
        vlSelfRef.onoc_bus__DOT__pd1__DOT__valid_buf[0x15U] = 0U;
        vlSelfRef.onoc_bus__DOT__pd1__DOT__valid_buf[0x16U] = 0U;
        vlSelfRef.onoc_bus__DOT__pd1__DOT__valid_buf[0x17U] = 0U;
        vlSelfRef.onoc_bus__DOT__pd1__DOT__valid_buf[0x18U] = 0U;
    }
    if (vlSelfRef.__VdlySet__onoc_bus__DOT__pd1__DOT__valid_buf__v25) {
        vlSelfRef.onoc_bus__DOT__pd1__DOT__valid_buf[0U] 
            = vlSelfRef.__VdlyVal__onoc_bus__DOT__pd1__DOT__valid_buf__v25;
    }
    if (vlSelfRef.__VdlySet__onoc_bus__DOT__pd1__DOT__valid_buf__v26) {
        vlSelfRef.onoc_bus__DOT__pd1__DOT__valid_buf[1U] 
            = vlSelfRef.__VdlyVal__onoc_bus__DOT__pd1__DOT__valid_buf__v26;
    }
    if (vlSelfRef.__VdlySet__onoc_bus__DOT__pd1__DOT__valid_buf__v27) {
        vlSelfRef.onoc_bus__DOT__pd1__DOT__valid_buf[2U] 
            = vlSelfRef.__VdlyVal__onoc_bus__DOT__pd1__DOT__valid_buf__v27;
    }
    if (vlSelfRef.__VdlySet__onoc_bus__DOT__pd1__DOT__valid_buf__v28) {
        vlSelfRef.onoc_bus__DOT__pd1__DOT__valid_buf[3U] 
            = vlSelfRef.__VdlyVal__onoc_bus__DOT__pd1__DOT__valid_buf__v28;
    }
    if (vlSelfRef.__VdlySet__onoc_bus__DOT__pd1__DOT__valid_buf__v29) {
        vlSelfRef.onoc_bus__DOT__pd1__DOT__valid_buf[4U] 
            = vlSelfRef.__VdlyVal__onoc_bus__DOT__pd1__DOT__valid_buf__v29;
    }
    if (vlSelfRef.__VdlySet__onoc_bus__DOT__pd1__DOT__valid_buf__v30) {
        vlSelfRef.onoc_bus__DOT__pd1__DOT__valid_buf[5U] 
            = vlSelfRef.__VdlyVal__onoc_bus__DOT__pd1__DOT__valid_buf__v30;
    }
    if (vlSelfRef.__VdlySet__onoc_bus__DOT__pd1__DOT__valid_buf__v31) {
        vlSelfRef.onoc_bus__DOT__pd1__DOT__valid_buf[6U] 
            = vlSelfRef.__VdlyVal__onoc_bus__DOT__pd1__DOT__valid_buf__v31;
    }
    if (vlSelfRef.__VdlySet__onoc_bus__DOT__pd1__DOT__valid_buf__v32) {
        vlSelfRef.onoc_bus__DOT__pd1__DOT__valid_buf[7U] 
            = vlSelfRef.__VdlyVal__onoc_bus__DOT__pd1__DOT__valid_buf__v32;
    }
    if (vlSelfRef.__VdlySet__onoc_bus__DOT__pd1__DOT__valid_buf__v33) {
        vlSelfRef.onoc_bus__DOT__pd1__DOT__valid_buf[8U] 
            = vlSelfRef.__VdlyVal__onoc_bus__DOT__pd1__DOT__valid_buf__v33;
    }
    if (vlSelfRef.__VdlySet__onoc_bus__DOT__pd1__DOT__valid_buf__v34) {
        vlSelfRef.onoc_bus__DOT__pd1__DOT__valid_buf[9U] 
            = vlSelfRef.__VdlyVal__onoc_bus__DOT__pd1__DOT__valid_buf__v34;
    }
    if (vlSelfRef.__VdlySet__onoc_bus__DOT__pd1__DOT__valid_buf__v35) {
        vlSelfRef.onoc_bus__DOT__pd1__DOT__valid_buf[0xaU] 
            = vlSelfRef.__VdlyVal__onoc_bus__DOT__pd1__DOT__valid_buf__v35;
    }
    if (vlSelfRef.__VdlySet__onoc_bus__DOT__pd1__DOT__valid_buf__v36) {
        vlSelfRef.onoc_bus__DOT__pd1__DOT__valid_buf[0xbU] 
            = vlSelfRef.__VdlyVal__onoc_bus__DOT__pd1__DOT__valid_buf__v36;
    }
    if (vlSelfRef.__VdlySet__onoc_bus__DOT__pd1__DOT__valid_buf__v37) {
        vlSelfRef.onoc_bus__DOT__pd1__DOT__valid_buf[0xcU] 
            = vlSelfRef.__VdlyVal__onoc_bus__DOT__pd1__DOT__valid_buf__v37;
    }
    if (vlSelfRef.__VdlySet__onoc_bus__DOT__pd1__DOT__valid_buf__v38) {
        vlSelfRef.onoc_bus__DOT__pd1__DOT__valid_buf[0xdU] 
            = vlSelfRef.__VdlyVal__onoc_bus__DOT__pd1__DOT__valid_buf__v38;
    }
    if (vlSelfRef.__VdlySet__onoc_bus__DOT__pd1__DOT__valid_buf__v39) {
        vlSelfRef.onoc_bus__DOT__pd1__DOT__valid_buf[0xeU] 
            = vlSelfRef.__VdlyVal__onoc_bus__DOT__pd1__DOT__valid_buf__v39;
    }
    if (vlSelfRef.__VdlySet__onoc_bus__DOT__pd1__DOT__valid_buf__v40) {
        vlSelfRef.onoc_bus__DOT__pd1__DOT__valid_buf[0xfU] 
            = vlSelfRef.__VdlyVal__onoc_bus__DOT__pd1__DOT__valid_buf__v40;
    }
    if (vlSelfRef.__VdlySet__onoc_bus__DOT__pd1__DOT__valid_buf__v41) {
        vlSelfRef.onoc_bus__DOT__pd1__DOT__valid_buf[0x10U] 
            = vlSelfRef.__VdlyVal__onoc_bus__DOT__pd1__DOT__valid_buf__v41;
    }
    if (vlSelfRef.__VdlySet__onoc_bus__DOT__pd1__DOT__valid_buf__v42) {
        vlSelfRef.onoc_bus__DOT__pd1__DOT__valid_buf[0x11U] 
            = vlSelfRef.__VdlyVal__onoc_bus__DOT__pd1__DOT__valid_buf__v42;
    }
    if (vlSelfRef.__VdlySet__onoc_bus__DOT__pd1__DOT__valid_buf__v43) {
        vlSelfRef.onoc_bus__DOT__pd1__DOT__valid_buf[0x12U] 
            = vlSelfRef.__VdlyVal__onoc_bus__DOT__pd1__DOT__valid_buf__v43;
    }
    if (vlSelfRef.__VdlySet__onoc_bus__DOT__pd1__DOT__valid_buf__v44) {
        vlSelfRef.onoc_bus__DOT__pd1__DOT__valid_buf[0x13U] 
            = vlSelfRef.__VdlyVal__onoc_bus__DOT__pd1__DOT__valid_buf__v44;
    }
    if (vlSelfRef.__VdlySet__onoc_bus__DOT__pd1__DOT__valid_buf__v45) {
        vlSelfRef.onoc_bus__DOT__pd1__DOT__valid_buf[0x14U] 
            = vlSelfRef.__VdlyVal__onoc_bus__DOT__pd1__DOT__valid_buf__v45;
    }
    if (vlSelfRef.__VdlySet__onoc_bus__DOT__pd1__DOT__valid_buf__v46) {
        vlSelfRef.onoc_bus__DOT__pd1__DOT__valid_buf[0x15U] 
            = vlSelfRef.__VdlyVal__onoc_bus__DOT__pd1__DOT__valid_buf__v46;
    }
    if (vlSelfRef.__VdlySet__onoc_bus__DOT__pd1__DOT__valid_buf__v47) {
        vlSelfRef.onoc_bus__DOT__pd1__DOT__valid_buf[0x16U] 
            = vlSelfRef.__VdlyVal__onoc_bus__DOT__pd1__DOT__valid_buf__v47;
    }
    if (vlSelfRef.__VdlySet__onoc_bus__DOT__pd1__DOT__valid_buf__v48) {
        vlSelfRef.onoc_bus__DOT__pd1__DOT__valid_buf[0x17U] 
            = vlSelfRef.__VdlyVal__onoc_bus__DOT__pd1__DOT__valid_buf__v48;
    }
    if (vlSelfRef.__VdlySet__onoc_bus__DOT__pd1__DOT__valid_buf__v49) {
        vlSelfRef.onoc_bus__DOT__pd1__DOT__valid_buf[0x18U] 
            = vlSelfRef.__VdlyVal__onoc_bus__DOT__pd1__DOT__valid_buf__v49;
    }
    vlSelfRef.ip_0_received = vlSelfRef.onoc_bus__DOT__pd0__DOT__valid_buf
        [0x18U];
    vlSelfRef.ip_1_received = vlSelfRef.onoc_bus__DOT__pd1__DOT__valid_buf
        [0x18U];
}

void Vonoc_bus___024root___eval_triggers__act(Vonoc_bus___024root* vlSelf);
void Vonoc_bus___024root___eval_act(Vonoc_bus___024root* vlSelf);

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

void Vonoc_bus___024root___eval_nba(Vonoc_bus___024root* vlSelf);

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
