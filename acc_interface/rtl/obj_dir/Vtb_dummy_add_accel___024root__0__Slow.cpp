// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_dummy_add_accel.h for the primary calling header

#include "Vtb_dummy_add_accel__pch.h"

void Vtb_dummy_add_accel___024root___timing_ready(Vtb_dummy_add_accel___024root* vlSelf);

VL_ATTR_COLD void Vtb_dummy_add_accel___024root___eval_static(Vtb_dummy_add_accel___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dummy_add_accel___024root___eval_static\n"); );
    Vtb_dummy_add_accel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (0x0000000000000010ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_dummy_add_accel__DOT__clk_i__0 
        = vlSelfRef.tb_dummy_add_accel__DOT__clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_dummy_add_accel__DOT__rst_ni__0 
        = vlSelfRef.tb_dummy_add_accel__DOT__rst_ni;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_dummy_add_accel__DOT__done_o__0 
        = vlSelfRef.tb_dummy_add_accel__DOT__done_o;
    Vtb_dummy_add_accel___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_dummy_add_accel___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtb_dummy_add_accel___024root___eval_stl(Vtb_dummy_add_accel___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dummy_add_accel___024root___eval_stl\n"); );
    Vtb_dummy_add_accel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_dummy_add_accel___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    return (0U);
}

VL_ATTR_COLD void Vtb_dummy_add_accel___024root___eval_dump_triggers__stl(Vtb_dummy_add_accel___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dummy_add_accel___024root___eval_dump_triggers__stl\n"); );
    Vtb_dummy_add_accel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vtb_dummy_add_accel___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_dummy_add_accel___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_dummy_add_accel___024root___eval_dump_triggers__ico(Vtb_dummy_add_accel___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dummy_add_accel___024root___eval_dump_triggers__ico\n"); );
    Vtb_dummy_add_accel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vtb_dummy_add_accel___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_dummy_add_accel___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_dummy_add_accel___024root___eval_dump_triggers__act(Vtb_dummy_add_accel___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dummy_add_accel___024root___eval_dump_triggers__act\n"); );
    Vtb_dummy_add_accel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vtb_dummy_add_accel___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
}

VL_ATTR_COLD void Vtb_dummy_add_accel___024root___eval_dump_triggers__nba(Vtb_dummy_add_accel___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dummy_add_accel___024root___eval_dump_triggers__nba\n"); );
    Vtb_dummy_add_accel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vtb_dummy_add_accel___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
}

VL_ATTR_COLD void Vtb_dummy_add_accel___024root___eval_dump_triggers__obs(Vtb_dummy_add_accel___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dummy_add_accel___024root___eval_dump_triggers__obs\n"); );
    Vtb_dummy_add_accel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_dummy_add_accel___024root___eval_dump_triggers__react(Vtb_dummy_add_accel___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dummy_add_accel___024root___eval_dump_triggers__react\n"); );
    Vtb_dummy_add_accel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_dummy_add_accel___024root___eval_final(Vtb_dummy_add_accel___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dummy_add_accel___024root___eval_final\n"); );
    Vtb_dummy_add_accel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD bool Vtb_dummy_add_accel___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_dummy_add_accel___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dummy_add_accel___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_dummy_add_accel___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtb_dummy_add_accel___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dummy_add_accel___024root___trigger_anySet__stl\n"); );
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

bool Vtb_dummy_add_accel___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_dummy_add_accel___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dummy_add_accel___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_dummy_add_accel___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vtb_dummy_add_accel___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_dummy_add_accel___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dummy_add_accel___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_dummy_add_accel___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge tb_dummy_add_accel.clk_i)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge tb_dummy_add_accel.rst_ni)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @(negedge tb_dummy_add_accel.clk_i)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 4 is active: @( tb_dummy_add_accel.done_o)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_dummy_add_accel___024root___ctor_var_reset(Vtb_dummy_add_accel___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_dummy_add_accel___024root___ctor_var_reset\n"); );
    Vtb_dummy_add_accel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb_dummy_add_accel__DOT__clk_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5237106762524760873ull);
    vlSelf->tb_dummy_add_accel__DOT__rst_ni = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16240178427188744315ull);
    vlSelf->tb_dummy_add_accel__DOT__start_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14871244740642398550ull);
    vlSelf->tb_dummy_add_accel__DOT__operand_a_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15976203553588785759ull);
    vlSelf->tb_dummy_add_accel__DOT__operand_b_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5454475806953055329ull);
    vlSelf->tb_dummy_add_accel__DOT__busy_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2596278301141893918ull);
    vlSelf->tb_dummy_add_accel__DOT__done_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15534181428993156346ull);
    vlSelf->tb_dummy_add_accel__DOT__result_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1389886250393015990ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__tb_dummy_add_accel__DOT__clk_i__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_dummy_add_accel__DOT__rst_ni__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_dummy_add_accel__DOT__done_o__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
}
