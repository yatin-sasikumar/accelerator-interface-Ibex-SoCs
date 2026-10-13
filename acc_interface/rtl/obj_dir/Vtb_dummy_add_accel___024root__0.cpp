// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_dummy_add_accel.h for the primary calling header

#include "Vtb_dummy_add_accel__pch.h"

VlCoroutine Vtb_dummy_add_accel___024root___eval_initial__TOP__Vtiming__0(Vtb_dummy_add_accel___024root* vlSelf);
VlCoroutine Vtb_dummy_add_accel___024root___eval_initial__TOP__Vtiming__1(Vtb_dummy_add_accel___024root* vlSelf);
VlCoroutine Vtb_dummy_add_accel___024root___eval_initial__TOP__Vtiming__2(Vtb_dummy_add_accel___024root* vlSelf);

void Vtb_dummy_add_accel___024root___eval_initial(Vtb_dummy_add_accel___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dummy_add_accel___024root___eval_initial\n"); );
    Vtb_dummy_add_accel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_dummy_add_accel___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_dummy_add_accel___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtb_dummy_add_accel___024root___eval_initial__TOP__Vtiming__2(vlSelf);
}

void Vtb_dummy_add_accel___024root___eval_sample(Vtb_dummy_add_accel___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dummy_add_accel___024root___eval_sample\n"); );
    Vtb_dummy_add_accel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_dummy_add_accel___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtb_dummy_add_accel___024root___eval_ico(Vtb_dummy_add_accel___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dummy_add_accel___024root___eval_ico\n"); );
    Vtb_dummy_add_accel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_dummy_add_accel___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    return (0U);
}

void Vtb_dummy_add_accel___024root___timing_ready(Vtb_dummy_add_accel___024root* vlSelf);
void Vtb_dummy_add_accel___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_dummy_add_accel___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vtb_dummy_add_accel___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vtb_dummy_add_accel___024root___timing_resume(Vtb_dummy_add_accel___024root* vlSelf);

bool Vtb_dummy_add_accel___024root___eval_act(Vtb_dummy_add_accel___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dummy_add_accel___024root___eval_act\n"); );
    Vtb_dummy_add_accel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((((IData)(vlSelfRef.tb_dummy_add_accel__DOT__done_o) 
                                                           != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_dummy_add_accel__DOT__done_o__0)) 
                                                          << 4U) 
                                                         | (((((~ (IData)(vlSelfRef.tb_dummy_add_accel__DOT__clk_i)) 
                                                               & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_dummy_add_accel__DOT__clk_i__0)) 
                                                              << 3U) 
                                                             | (vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                                << 2U)) 
                                                            | ((((~ (IData)(vlSelfRef.tb_dummy_add_accel__DOT__rst_ni)) 
                                                                 & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_dummy_add_accel__DOT__rst_ni__0)) 
                                                                << 1U) 
                                                               | ((IData)(vlSelfRef.tb_dummy_add_accel__DOT__clk_i) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_dummy_add_accel__DOT__clk_i__0))))))));
        vlSelfRef.__Vtrigprevexpr___TOP__tb_dummy_add_accel__DOT__clk_i__0 
            = vlSelfRef.tb_dummy_add_accel__DOT__clk_i;
        vlSelfRef.__Vtrigprevexpr___TOP__tb_dummy_add_accel__DOT__rst_ni__0 
            = vlSelfRef.tb_dummy_add_accel__DOT__rst_ni;
        vlSelfRef.__Vtrigprevexpr___TOP__tb_dummy_add_accel__DOT__done_o__0 
            = vlSelfRef.tb_dummy_add_accel__DOT__done_o;
    }
    Vtb_dummy_add_accel___024root___timing_ready(vlSelf);
    Vtb_dummy_add_accel___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_dummy_add_accel___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb_dummy_add_accel___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb_dummy_add_accel___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vtb_dummy_add_accel___024root___timing_resume(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_dummy_add_accel___024root___eval_inact(Vtb_dummy_add_accel___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dummy_add_accel___024root___eval_inact\n"); );
    Vtb_dummy_add_accel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tb_dummy_add_accel.sv", 4, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vtb_dummy_add_accel___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out);

bool Vtb_dummy_add_accel___024root___eval_nba(Vtb_dummy_add_accel___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dummy_add_accel___024root___eval_nba\n"); );
    Vtb_dummy_add_accel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_dummy_add_accel___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_body__nba
            if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
                {
                    // Inlined CFunc: _nba_sequent__TOP__0
                    CData/*0:0*/ __Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0___Vdly__tb_dummy_add_accel__DOT__busy_o;
                    __Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0___Vdly__tb_dummy_add_accel__DOT__busy_o = 0;
                    __Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0___Vdly__tb_dummy_add_accel__DOT__busy_o 
                        = vlSelfRef.tb_dummy_add_accel__DOT__busy_o;
                    if (vlSelfRef.tb_dummy_add_accel__DOT__rst_ni) {
                        vlSelfRef.tb_dummy_add_accel__DOT__done_o = 0U;
                        if (((IData)(vlSelfRef.tb_dummy_add_accel__DOT__start_i) 
                             & (~ (IData)(vlSelfRef.tb_dummy_add_accel__DOT__busy_o)))) {
                            vlSelfRef.tb_dummy_add_accel__DOT__result_o 
                                = (vlSelfRef.tb_dummy_add_accel__DOT__operand_a_i 
                                   + vlSelfRef.tb_dummy_add_accel__DOT__operand_b_i);
                            __Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0___Vdly__tb_dummy_add_accel__DOT__busy_o = 1U;
                        } else if (vlSelfRef.tb_dummy_add_accel__DOT__busy_o) {
                            __Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0___Vdly__tb_dummy_add_accel__DOT__busy_o = 0U;
                            vlSelfRef.tb_dummy_add_accel__DOT__done_o = 1U;
                        }
                    } else {
                        __Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0___Vdly__tb_dummy_add_accel__DOT__busy_o = 0U;
                        vlSelfRef.tb_dummy_add_accel__DOT__done_o = 0U;
                        vlSelfRef.tb_dummy_add_accel__DOT__result_o = 0U;
                    }
                    vlSelfRef.tb_dummy_add_accel__DOT__busy_o 
                        = __Vinline_0__eval_body__nba___Vinline_0__nba_sequent__TOP__0___Vdly__tb_dummy_add_accel__DOT__busy_o;
                }
            }
        }
        Vtb_dummy_add_accel___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

bool Vtb_dummy_add_accel___024root___eval_obs(Vtb_dummy_add_accel___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dummy_add_accel___024root___eval_obs\n"); );
    Vtb_dummy_add_accel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vtb_dummy_add_accel___024root___eval_react(Vtb_dummy_add_accel___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dummy_add_accel___024root___eval_react\n"); );
    Vtb_dummy_add_accel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

void Vtb_dummy_add_accel___024root___eval_postponed(Vtb_dummy_add_accel___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dummy_add_accel___024root___eval_postponed\n"); );
    Vtb_dummy_add_accel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vtb_dummy_add_accel___024root____VbeforeTrig_he59f3b82__0(Vtb_dummy_add_accel___024root* vlSelf, const char* __VeventDescription);
void Vtb_dummy_add_accel___024root____VbeforeTrig_hc7c6a8b3__0(Vtb_dummy_add_accel___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtb_dummy_add_accel___024root___eval_initial__TOP__Vtiming__0(Vtb_dummy_add_accel___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dummy_add_accel___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_dummy_add_accel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_dummy_add_accel__DOT__clk_i = 0U;
    vlSelfRef.tb_dummy_add_accel__DOT__rst_ni = 0U;
    vlSelfRef.tb_dummy_add_accel__DOT__start_i = 0U;
    vlSelfRef.tb_dummy_add_accel__DOT__operand_a_i = 0U;
    vlSelfRef.tb_dummy_add_accel__DOT__operand_b_i = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002ee0ULL, 
                                         nullptr, "tb_dummy_add_accel.sv", 
                                         40);
    vlSelfRef.tb_dummy_add_accel__DOT__rst_ni = 1U;
    Vtb_dummy_add_accel___024root____VbeforeTrig_he59f3b82__0(vlSelf, 
                                                              "@(negedge tb_dummy_add_accel.clk_i)");
    co_await vlSelfRef.__VtrigSched_he59f3b82__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_dummy_add_accel.clk_i)", 
                                                         "tb_dummy_add_accel.sv", 
                                                         46);
    vlSelfRef.tb_dummy_add_accel__DOT__operand_a_i = 0x0000000aU;
    vlSelfRef.tb_dummy_add_accel__DOT__operand_b_i = 0x00000014U;
    vlSelfRef.tb_dummy_add_accel__DOT__start_i = 1U;
    Vtb_dummy_add_accel___024root____VbeforeTrig_he59f3b82__0(vlSelf, 
                                                              "@(negedge tb_dummy_add_accel.clk_i)");
    co_await vlSelfRef.__VtrigSched_he59f3b82__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_dummy_add_accel.clk_i)", 
                                                         "tb_dummy_add_accel.sv", 
                                                         51);
    vlSelfRef.tb_dummy_add_accel__DOT__start_i = 0U;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_dummy_add_accel__DOT__busy_o)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_dummy_add_accel.sv:55: Assertion failed in %m: TEST 1 FAILED: busy_o not asserted\n",3, 'M',vlSymsp->name(),"tb_dummy_add_accel", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("tb_dummy_add_accel.sv", 55, "", false);
    }
    while ((1U & (~ (IData)(vlSelfRef.tb_dummy_add_accel__DOT__done_o)))) {
        Vtb_dummy_add_accel___024root____VbeforeTrig_hc7c6a8b3__0(vlSelf, 
                                                                  "@( tb_dummy_add_accel.done_o)");
        co_await vlSelfRef.__VtrigSched_hc7c6a8b3__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( tb_dummy_add_accel.done_o)", 
                                                             "tb_dummy_add_accel.sv", 
                                                             57);
    }
    if (VL_UNLIKELY(((0x0000001eU != vlSelfRef.tb_dummy_add_accel__DOT__result_o)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_dummy_add_accel.sv:60: Assertion failed in %m: TEST 1 FAILED: result=%0d\n",4, 'M',vlSymsp->name(),"tb_dummy_add_accel", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',32,vlSelfRef.tb_dummy_add_accel__DOT__result_o);
        VL_STOP_MT("tb_dummy_add_accel.sv", 60, "", false);
    }
    VL_WRITEF_NX("TEST 1 PASSED: 10 + 20 = %0d\n",1
                 , '#',32,vlSelfRef.tb_dummy_add_accel__DOT__result_o);
    Vtb_dummy_add_accel___024root____VbeforeTrig_he59f3b82__0(vlSelf, 
                                                              "@(negedge tb_dummy_add_accel.clk_i)");
    co_await vlSelfRef.__VtrigSched_he59f3b82__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_dummy_add_accel.clk_i)", 
                                                         "tb_dummy_add_accel.sv", 
                                                         67);
    vlSelfRef.tb_dummy_add_accel__DOT__operand_a_i = 0x00000064U;
    vlSelfRef.tb_dummy_add_accel__DOT__operand_b_i = 0x000000c8U;
    vlSelfRef.tb_dummy_add_accel__DOT__start_i = 1U;
    Vtb_dummy_add_accel___024root____VbeforeTrig_he59f3b82__0(vlSelf, 
                                                              "@(negedge tb_dummy_add_accel.clk_i)");
    co_await vlSelfRef.__VtrigSched_he59f3b82__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_dummy_add_accel.clk_i)", 
                                                         "tb_dummy_add_accel.sv", 
                                                         72);
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_dummy_add_accel__DOT__busy_o)))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_dummy_add_accel.sv:76: Assertion failed in %m: TEST 2 FAILED: busy_o not asserted\n",3, 'M',vlSymsp->name(),"tb_dummy_add_accel", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("tb_dummy_add_accel.sv", 76, "", false);
    }
    vlSelfRef.tb_dummy_add_accel__DOT__start_i = 0U;
    while ((1U & (~ (IData)(vlSelfRef.tb_dummy_add_accel__DOT__done_o)))) {
        Vtb_dummy_add_accel___024root____VbeforeTrig_hc7c6a8b3__0(vlSelf, 
                                                                  "@( tb_dummy_add_accel.done_o)");
        co_await vlSelfRef.__VtrigSched_hc7c6a8b3__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( tb_dummy_add_accel.done_o)", 
                                                             "tb_dummy_add_accel.sv", 
                                                             78);
    }
    if (VL_UNLIKELY(((0x0000012cU != vlSelfRef.tb_dummy_add_accel__DOT__result_o)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_dummy_add_accel.sv:81: Assertion failed in %m: TEST 2 FAILED: result=%0d\n",4, 'M',vlSymsp->name(),"tb_dummy_add_accel", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',32,vlSelfRef.tb_dummy_add_accel__DOT__result_o);
        VL_STOP_MT("tb_dummy_add_accel.sv", 81, "", false);
    }
    VL_WRITEF_NX("TEST 2 PASSED: 100 + 200 = %0d\nALL TESTS PASSED\n",1
                 , '#',32,vlSelfRef.tb_dummy_add_accel__DOT__result_o);
    VL_FINISH_MT("tb_dummy_add_accel.sv", 87, "");
    co_return;
}

VlCoroutine Vtb_dummy_add_accel___024root___eval_initial__TOP__Vtiming__1(Vtb_dummy_add_accel___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dummy_add_accel___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_dummy_add_accel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x00000000000f4240ULL, 
                                         nullptr, "tb_dummy_add_accel.sv", 
                                         92);
    VL_WRITEF_NX("[%0t] %%Fatal: tb_dummy_add_accel.sv:93: Assertion failed in %m: TIMEOUT: Simulation did not finish\n",3, 'M',vlSymsp->name(),"tb_dummy_add_accel", 'T',-9
                 , '#',64,VL_TIME_UNITED_Q(1000));
    VL_STOP_MT("tb_dummy_add_accel.sv", 93, "", false);
    co_return;
}

VlCoroutine Vtb_dummy_add_accel___024root___eval_initial__TOP__Vtiming__2(Vtb_dummy_add_accel___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dummy_add_accel___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vtb_dummy_add_accel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "tb_dummy_add_accel.sv", 
                                             29);
        vlSelfRef.tb_dummy_add_accel__DOT__clk_i = 
            (1U & (~ (IData)(vlSelfRef.tb_dummy_add_accel__DOT__clk_i)));
    }
    co_return;
}

bool Vtb_dummy_add_accel___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dummy_add_accel___024root___trigger_anySet__ico\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

bool Vtb_dummy_add_accel___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dummy_add_accel___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vtb_dummy_add_accel___024root___timing_ready(Vtb_dummy_add_accel___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dummy_add_accel___024root___timing_ready\n"); );
    Vtb_dummy_add_accel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((8ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_he59f3b82__0.ready("@(negedge tb_dummy_add_accel.clk_i)");
    }
    if ((0x0000000000000010ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_hc7c6a8b3__0.ready("@( tb_dummy_add_accel.done_o)");
    }
}

void Vtb_dummy_add_accel___024root___timing_resume(Vtb_dummy_add_accel___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dummy_add_accel___024root___timing_resume\n"); );
    Vtb_dummy_add_accel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_he59f3b82__0.moveToResumeQueue(
                                                          "@(negedge tb_dummy_add_accel.clk_i)");
    vlSelfRef.__VtrigSched_hc7c6a8b3__0.moveToResumeQueue(
                                                          "@( tb_dummy_add_accel.done_o)");
    vlSelfRef.__VtrigSched_he59f3b82__0.resume("@(negedge tb_dummy_add_accel.clk_i)");
    vlSelfRef.__VtrigSched_hc7c6a8b3__0.resume("@( tb_dummy_add_accel.done_o)");
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_dummy_add_accel___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dummy_add_accel___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

void Vtb_dummy_add_accel___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dummy_add_accel___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

void Vtb_dummy_add_accel___024root____VbeforeTrig_he59f3b82__0(Vtb_dummy_add_accel___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dummy_add_accel___024root____VbeforeTrig_he59f3b82__0\n"); );
    Vtb_dummy_add_accel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)((((~ (IData)(vlSelfRef.tb_dummy_add_accel__DOT__clk_i)) 
                                   & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_dummy_add_accel__DOT__clk_i__0)) 
                                  << 3U)));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_dummy_add_accel__DOT__clk_i__0 
        = vlSelfRef.tb_dummy_add_accel__DOT__clk_i;
    if ((8ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_he59f3b82__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he59f3b82__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he59f3b82__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_he59f3b82__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vtb_dummy_add_accel___024root____VbeforeTrig_hc7c6a8b3__0(Vtb_dummy_add_accel___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dummy_add_accel___024root____VbeforeTrig_hc7c6a8b3__0\n"); );
    Vtb_dummy_add_accel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)((((IData)(vlSelfRef.tb_dummy_add_accel__DOT__done_o) 
                                   != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_dummy_add_accel__DOT__done_o__0)) 
                                  << 4U)));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_dummy_add_accel__DOT__done_o__0 
        = vlSelfRef.tb_dummy_add_accel__DOT__done_o;
    if ((0x0000000000000010ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hc7c6a8b3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc7c6a8b3__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vtb_dummy_add_accel___024root___eval_debug_assertions(Vtb_dummy_add_accel___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dummy_add_accel___024root___eval_debug_assertions\n"); );
    Vtb_dummy_add_accel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
