// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vd_ff_reset.h for the primary calling header

#include "Vd_ff_reset__pch.h"
#include "Vd_ff_reset___024root.h"

VL_ATTR_COLD void Vd_ff_reset___024root___eval_static(Vd_ff_reset___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vd_ff_reset__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vd_ff_reset___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vd_ff_reset___024root___eval_final(Vd_ff_reset___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vd_ff_reset__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vd_ff_reset___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vd_ff_reset___024root___eval_settle(Vd_ff_reset___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vd_ff_reset__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vd_ff_reset___024root___eval_settle\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vd_ff_reset___024root___dump_triggers__act(Vd_ff_reset___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vd_ff_reset__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vd_ff_reset___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_d_ff_reset.clk or posedge tb_d_ff_reset.rst)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge tb_d_ff_reset.clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vd_ff_reset___024root___dump_triggers__nba(Vd_ff_reset___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vd_ff_reset__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vd_ff_reset___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_d_ff_reset.clk or posedge tb_d_ff_reset.rst)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge tb_d_ff_reset.clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vd_ff_reset___024root___ctor_var_reset(Vd_ff_reset___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vd_ff_reset__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vd_ff_reset___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->tb_d_ff_reset__DOT__D = VL_RAND_RESET_I(1);
    vlSelf->tb_d_ff_reset__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_d_ff_reset__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->tb_d_ff_reset__DOT__Q = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_d_ff_reset__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_d_ff_reset__DOT__rst__0 = VL_RAND_RESET_I(1);
}
