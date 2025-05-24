// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmesh_onoc.h for the primary calling header

#ifndef VERILATED_VMESH_ONOC___024ROOT_H_
#define VERILATED_VMESH_ONOC___024ROOT_H_  // guard

#include "verilated.h"


class Vmesh_onoc__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vmesh_onoc___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst,0,0);
        CData/*3:0*/ mesh_onoc__DOT__router_request;
        CData/*0:0*/ mesh_onoc__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__ip_inst__valid_out;
        CData/*0:0*/ mesh_onoc__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__ip_inst__valid_out;
        CData/*0:0*/ mesh_onoc__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__ip_inst__valid_out;
        CData/*0:0*/ mesh_onoc__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__ip_inst__valid_out;
        CData/*3:0*/ mesh_onoc__DOT__packet_done_gen__BRA__0__KET____DOT__reduced;
        CData/*3:0*/ mesh_onoc__DOT__packet_done_gen__BRA__1__KET____DOT__reduced;
        CData/*3:0*/ mesh_onoc__DOT__packet_done_gen__BRA__2__KET____DOT__reduced;
        CData/*3:0*/ mesh_onoc__DOT__packet_done_gen__BRA__3__KET____DOT__reduced;
        CData/*3:0*/ mesh_onoc__DOT__arb__DOT__current_grant;
        CData/*0:0*/ mesh_onoc__DOT__arb__DOT__waiting_for_done;
        CData/*0:0*/ mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__pkt_sent_last_cycle;
        CData/*0:0*/ mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__unnamedblk1__DOT__send_now;
        CData/*0:0*/ mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_valid;
        CData/*0:0*/ mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__pending_send_packet;
        CData/*4:0*/ mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__out_dir;
        CData/*0:0*/ mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__pkt_sent_last_cycle;
        CData/*0:0*/ mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__unnamedblk1__DOT__send_now;
        CData/*0:0*/ mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_valid;
        CData/*0:0*/ mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__pending_send_packet;
        CData/*4:0*/ mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__out_dir;
        CData/*0:0*/ mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__pkt_sent_last_cycle;
        CData/*0:0*/ mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__unnamedblk1__DOT__send_now;
        CData/*0:0*/ mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_valid;
        CData/*0:0*/ mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__pending_send_packet;
        CData/*4:0*/ mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__out_dir;
        CData/*0:0*/ mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__pkt_sent_last_cycle;
        CData/*0:0*/ mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__unnamedblk1__DOT__send_now;
        CData/*0:0*/ mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_valid;
        CData/*0:0*/ mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__pending_send_packet;
        CData/*4:0*/ mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__out_dir;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__rst__0;
        CData/*0:0*/ __VactContinue;
        SData/*15:0*/ mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__destination;
        SData/*15:0*/ mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__destination;
        SData/*15:0*/ mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__destination;
        SData/*15:0*/ mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__destination;
        IData/*31:0*/ mesh_onoc__DOT__arb__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__payload;
        IData/*31:0*/ mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__cycle_counter;
        IData/*31:0*/ mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__payload;
        IData/*31:0*/ mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__cycle_counter;
        IData/*31:0*/ mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__payload;
        IData/*31:0*/ mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__ip_inst__DOT__cycle_counter;
        IData/*31:0*/ mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__payload;
        IData/*31:0*/ mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__ip_inst__DOT__cycle_counter;
        IData/*31:0*/ mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__current_cycle;
        IData/*31:0*/ mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__current_cycle;
        IData/*31:0*/ mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__current_cycle;
        IData/*31:0*/ mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__current_cycle;
        IData/*31:0*/ mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__current_cycle;
        IData/*31:0*/ mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__current_cycle;
        IData/*31:0*/ mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__current_cycle;
        IData/*31:0*/ mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__current_cycle;
        IData/*31:0*/ __VactIterCount;
        VlWide<4>/*96:0*/ mesh_onoc__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__ip_inst__packet_out;
        VlWide<4>/*96:0*/ mesh_onoc__DOT____Vcellout__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__ip_inst__packet_out;
        VlWide<4>/*96:0*/ mesh_onoc__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__ip_inst__packet_out;
        VlWide<4>/*96:0*/ mesh_onoc__DOT____Vcellout__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__ip_inst__packet_out;
        VlWide<4>/*96:0*/ mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_data;
    };
    struct {
        VlWide<4>/*96:0*/ mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_data;
        VlWide<4>/*96:0*/ mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__um_router__DOT__packet_data;
        VlWide<4>/*96:0*/ mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__um_router__DOT__packet_data;
        VL_OUT8(router_sent[4],0,0);
        VlUnpacked<VlUnpacked<VlWide<4>/*96:0*/, 4>, 4> mesh_onoc__DOT__modulator_to_waveguide;
        VlUnpacked<VlUnpacked<CData/*0:0*/, 4>, 4> mesh_onoc__DOT__modulator_valid_to_waveguide;
        VlUnpacked<VlUnpacked<VlWide<4>/*96:0*/, 4>, 4> mesh_onoc__DOT__waveguide_to_photodetector;
        VlUnpacked<VlUnpacked<CData/*0:0*/, 4>, 4> mesh_onoc__DOT__waveguide_valid_to_photodetector;
        VlUnpacked<VlUnpacked<VlWide<4>/*96:0*/, 4>, 4> mesh_onoc__DOT__photodetector_to_router;
        VlUnpacked<VlUnpacked<CData/*0:0*/, 4>, 4> mesh_onoc__DOT__photodetector_valid_to_router;
        VlUnpacked<VlUnpacked<VlWide<4>/*96:0*/, 4>, 4> mesh_onoc__DOT__router_to_modulator;
        VlUnpacked<VlUnpacked<CData/*0:0*/, 4>, 4> mesh_onoc__DOT__router_valid_to_modulator;
        VlUnpacked<VlUnpacked<CData/*1:0*/, 4>, 4> mesh_onoc__DOT__wg_packet_done;
        VlUnpacked<VlWide<4>/*96:0*/, 2> mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer;
        VlUnpacked<CData/*0:0*/, 2> mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf;
        VlUnpacked<VlWide<4>/*96:0*/, 2> mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer;
        VlUnpacked<CData/*0:0*/, 2> mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf;
        VlUnpacked<VlWide<4>/*96:0*/, 2> mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer;
        VlUnpacked<CData/*0:0*/, 2> mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf;
        VlUnpacked<VlWide<4>/*96:0*/, 2> mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer;
        VlUnpacked<CData/*0:0*/, 2> mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf;
        VlUnpacked<VlWide<4>/*96:0*/, 2> mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer;
        VlUnpacked<CData/*0:0*/, 2> mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf;
        VlUnpacked<VlWide<4>/*96:0*/, 2> mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer;
        VlUnpacked<CData/*0:0*/, 2> mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf;
        VlUnpacked<VlWide<4>/*96:0*/, 2> mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer;
        VlUnpacked<CData/*0:0*/, 2> mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf;
        VlUnpacked<VlWide<4>/*96:0*/, 2> mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer;
        VlUnpacked<CData/*0:0*/, 2> mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf;
        VlUnpacked<VlWide<4>/*96:0*/, 2> mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer;
        VlUnpacked<CData/*0:0*/, 2> mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf;
        VlUnpacked<VlWide<4>/*96:0*/, 2> mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer;
        VlUnpacked<CData/*0:0*/, 2> mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf;
        VlUnpacked<VlWide<4>/*96:0*/, 2> mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer;
        VlUnpacked<CData/*0:0*/, 2> mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf;
        VlUnpacked<VlWide<4>/*96:0*/, 2> mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer;
        VlUnpacked<CData/*0:0*/, 2> mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf;
        VlUnpacked<VlWide<4>/*96:0*/, 2> mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer;
        VlUnpacked<CData/*0:0*/, 2> mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf;
        VlUnpacked<VlWide<4>/*96:0*/, 2> mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer;
        VlUnpacked<CData/*0:0*/, 2> mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf;
        VlUnpacked<VlWide<4>/*96:0*/, 2> mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer;
        VlUnpacked<CData/*0:0*/, 2> mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf;
        VlUnpacked<VlWide<4>/*96:0*/, 2> mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer;
        VlUnpacked<CData/*0:0*/, 2> mesh_onoc__DOT__row__BRA__0__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf;
        VlUnpacked<VlWide<4>/*96:0*/, 2> mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer;
        VlUnpacked<CData/*0:0*/, 2> mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf;
        VlUnpacked<VlWide<4>/*96:0*/, 2> mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer;
        VlUnpacked<CData/*0:0*/, 2> mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf;
        VlUnpacked<VlWide<4>/*96:0*/, 2> mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer;
        VlUnpacked<CData/*0:0*/, 2> mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf;
        VlUnpacked<VlWide<4>/*96:0*/, 2> mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer;
        VlUnpacked<CData/*0:0*/, 2> mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf;
        VlUnpacked<VlWide<4>/*96:0*/, 2> mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer;
        VlUnpacked<CData/*0:0*/, 2> mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf;
        VlUnpacked<VlWide<4>/*96:0*/, 2> mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer;
        VlUnpacked<CData/*0:0*/, 2> mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf;
        VlUnpacked<VlWide<4>/*96:0*/, 2> mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer;
        VlUnpacked<CData/*0:0*/, 2> mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf;
        VlUnpacked<VlWide<4>/*96:0*/, 2> mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer;
        VlUnpacked<CData/*0:0*/, 2> mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__0__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf;
        VlUnpacked<VlWide<4>/*96:0*/, 2> mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__buffer;
        VlUnpacked<CData/*0:0*/, 2> mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_mod__DOT__valid_buf;
        VlUnpacked<VlWide<4>/*96:0*/, 2> mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__buffer;
    };
    struct {
        VlUnpacked<CData/*0:0*/, 2> mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__0__KET____DOT__u_pd__DOT__valid_buf;
        VlUnpacked<VlWide<4>/*96:0*/, 2> mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__buffer;
        VlUnpacked<CData/*0:0*/, 2> mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_mod__DOT__valid_buf;
        VlUnpacked<VlWide<4>/*96:0*/, 2> mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__buffer;
        VlUnpacked<CData/*0:0*/, 2> mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__1__KET____DOT__u_pd__DOT__valid_buf;
        VlUnpacked<VlWide<4>/*96:0*/, 2> mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__buffer;
        VlUnpacked<CData/*0:0*/, 2> mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_mod__DOT__valid_buf;
        VlUnpacked<VlWide<4>/*96:0*/, 2> mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__buffer;
        VlUnpacked<CData/*0:0*/, 2> mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__2__KET____DOT__u_pd__DOT__valid_buf;
        VlUnpacked<VlWide<4>/*96:0*/, 2> mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__buffer;
        VlUnpacked<CData/*0:0*/, 2> mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_mod__DOT__valid_buf;
        VlUnpacked<VlWide<4>/*96:0*/, 2> mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__buffer;
        VlUnpacked<CData/*0:0*/, 2> mesh_onoc__DOT__row__BRA__1__KET____DOT__col__BRA__1__KET____DOT__photonics_per_dir__BRA__3__KET____DOT__u_pd__DOT__valid_buf;
        VlUnpacked<VlWide<4>/*96:0*/, 4> mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left;
        VlUnpacked<CData/*0:0*/, 4> mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_left;
        VlUnpacked<VlWide<4>/*96:0*/, 4> mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right;
        VlUnpacked<CData/*0:0*/, 4> mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_right;
        VlUnpacked<VlWide<4>/*96:0*/, 4> mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left;
        VlUnpacked<CData/*0:0*/, 4> mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_left;
        VlUnpacked<VlWide<4>/*96:0*/, 4> mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right;
        VlUnpacked<CData/*0:0*/, 4> mesh_onoc__DOT__wg_mesh__BRA__0__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_right;
        VlUnpacked<VlWide<4>/*96:0*/, 4> mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_left;
        VlUnpacked<CData/*0:0*/, 4> mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_left;
        VlUnpacked<VlWide<4>/*96:0*/, 4> mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__buffer_right;
        VlUnpacked<CData/*0:0*/, 4> mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__1__KET____DOT__south_wg__DOT__south_wg_cond__DOT__wg__DOT__valid_right;
        VlUnpacked<VlWide<4>/*96:0*/, 4> mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left;
        VlUnpacked<CData/*0:0*/, 4> mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_left;
        VlUnpacked<VlWide<4>/*96:0*/, 4> mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right;
        VlUnpacked<CData/*0:0*/, 4> mesh_onoc__DOT__wg_mesh__BRA__1__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_right;
        VlUnpacked<VlWide<4>/*96:0*/, 4> mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left;
        VlUnpacked<CData/*0:0*/, 4> mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_left;
        VlUnpacked<VlWide<4>/*96:0*/, 4> mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right;
        VlUnpacked<CData/*0:0*/, 4> mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_right;
        VlUnpacked<VlWide<4>/*96:0*/, 4> mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_left;
        VlUnpacked<CData/*0:0*/, 4> mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_left;
        VlUnpacked<VlWide<4>/*96:0*/, 4> mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__buffer_right;
        VlUnpacked<CData/*0:0*/, 4> mesh_onoc__DOT__wg_mesh__BRA__2__KET____DOT__wg_link__BRA__2__KET____DOT__east_wg__DOT__wg__DOT__valid_right;
        VlUnpacked<VlWide<4>/*96:0*/, 4> mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_left;
        VlUnpacked<CData/*0:0*/, 4> mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_left;
        VlUnpacked<VlWide<4>/*96:0*/, 4> mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__buffer_right;
        VlUnpacked<CData/*0:0*/, 4> mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__0__KET____DOT__north_wg__DOT__wg__DOT__valid_right;
        VlUnpacked<VlWide<4>/*96:0*/, 4> mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_left;
        VlUnpacked<CData/*0:0*/, 4> mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_left;
        VlUnpacked<VlWide<4>/*96:0*/, 4> mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__buffer_right;
        VlUnpacked<CData/*0:0*/, 4> mesh_onoc__DOT__wg_mesh__BRA__3__KET____DOT__wg_link__BRA__3__KET____DOT__west_wg__DOT__wg__DOT__valid_right;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vmesh_onoc__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmesh_onoc___024root(Vmesh_onoc__Syms* symsp, const char* v__name);
    ~Vmesh_onoc___024root();
    VL_UNCOPYABLE(Vmesh_onoc___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
