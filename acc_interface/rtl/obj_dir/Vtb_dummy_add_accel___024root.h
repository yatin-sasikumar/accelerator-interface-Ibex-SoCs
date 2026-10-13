// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_dummy_add_accel.h for the primary calling header

#ifndef VERILATED_VTB_DUMMY_ADD_ACCEL___024ROOT_H_
#define VERILATED_VTB_DUMMY_ADD_ACCEL___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_dummy_add_accel__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_dummy_add_accel___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_dummy_add_accel__DOT__clk_i;
    CData/*0:0*/ tb_dummy_add_accel__DOT__rst_ni;
    CData/*0:0*/ tb_dummy_add_accel__DOT__start_i;
    CData/*0:0*/ tb_dummy_add_accel__DOT__busy_o;
    CData/*0:0*/ tb_dummy_add_accel__DOT__done_o;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_dummy_add_accel__DOT__clk_i__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_dummy_add_accel__DOT__rst_ni__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_dummy_add_accel__DOT__done_o__0;
    IData/*31:0*/ tb_dummy_add_accel__DOT__operand_a_i;
    IData/*31:0*/ tb_dummy_add_accel__DOT__operand_b_i;
    IData/*31:0*/ tb_dummy_add_accel__DOT__result_o;
    IData/*31:0*/ __Vi;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_he59f3b82__0;
    VlTriggerScheduler __VtrigSched_hc7c6a8b3__0;

    // INTERNAL VARIABLES
    Vtb_dummy_add_accel__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_dummy_add_accel___024root(Vtb_dummy_add_accel__Syms* symsp, const char* namep);
    ~Vtb_dummy_add_accel___024root();
    VL_UNCOPYABLE(Vtb_dummy_add_accel___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
