// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vd_ff_reset.h for the primary calling header

#include "Vd_ff_reset__pch.h"
#include "Vd_ff_reset___024root.h"

VL_ATTR_COLD void Vd_ff_reset___024root___eval_initial__TOP(Vd_ff_reset___024root* vlSelf);
VlCoroutine Vd_ff_reset___024root___eval_initial__TOP__Vtiming__0(Vd_ff_reset___024root* vlSelf);
VlCoroutine Vd_ff_reset___024root___eval_initial__TOP__Vtiming__1(Vd_ff_reset___024root* vlSelf);

void Vd_ff_reset___024root___eval_initial(Vd_ff_reset___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vd_ff_reset__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vd_ff_reset___024root___eval_initial\n"); );
    // Body
    Vd_ff_reset___024root___eval_initial__TOP(vlSelf);
    Vd_ff_reset___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vd_ff_reset___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__tb_d_ff_reset__DOT__clk__0 
        = vlSelf->tb_d_ff_reset__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__tb_d_ff_reset__DOT__rst__0 
        = vlSelf->tb_d_ff_reset__DOT__rst;
}

VL_INLINE_OPT VlCoroutine Vd_ff_reset___024root___eval_initial__TOP__Vtiming__0(Vd_ff_reset___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vd_ff_reset__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vd_ff_reset___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSelf->tb_d_ff_reset__DOT__clk = 0U;
    while (1U) {
        co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                           "tb_d_ff_reset.v", 
                                           12);
        vlSelf->tb_d_ff_reset__DOT__clk = (1U & (~ (IData)(vlSelf->tb_d_ff_reset__DOT__clk)));
    }
}

VL_INLINE_OPT VlCoroutine Vd_ff_reset___024root___eval_initial__TOP__Vtiming__1(Vd_ff_reset___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vd_ff_reset__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vd_ff_reset___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Init
    CData/*0:0*/ __Vtask_tb_d_ff_reset__DOT__check__0__expected;
    __Vtask_tb_d_ff_reset__DOT__check__0__expected = 0;
    CData/*0:0*/ __Vtask_tb_d_ff_reset__DOT__check__1__expected;
    __Vtask_tb_d_ff_reset__DOT__check__1__expected = 0;
    CData/*0:0*/ __Vtask_tb_d_ff_reset__DOT__check__2__expected;
    __Vtask_tb_d_ff_reset__DOT__check__2__expected = 0;
    CData/*0:0*/ __Vtask_tb_d_ff_reset__DOT__check__3__expected;
    __Vtask_tb_d_ff_reset__DOT__check__3__expected = 0;
    CData/*0:0*/ __Vtask_tb_d_ff_reset__DOT__check__4__expected;
    __Vtask_tb_d_ff_reset__DOT__check__4__expected = 0;
    CData/*0:0*/ __Vtask_tb_d_ff_reset__DOT__check__5__expected;
    __Vtask_tb_d_ff_reset__DOT__check__5__expected = 0;
    CData/*0:0*/ __Vtask_tb_d_ff_reset__DOT__check__6__expected;
    __Vtask_tb_d_ff_reset__DOT__check__6__expected = 0;
    CData/*0:0*/ __Vtask_tb_d_ff_reset__DOT__check__7__expected;
    __Vtask_tb_d_ff_reset__DOT__check__7__expected = 0;
    // Body
    vlSelf->tb_d_ff_reset__DOT__D = 0U;
    vlSelf->tb_d_ff_reset__DOT__rst = 1U;
    co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                       "tb_d_ff_reset.v", 
                                       31);
    __Vtask_tb_d_ff_reset__DOT__check__0__expected = 0U;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb_d_ff_reset.v", 
                                       18);
    if (((IData)(vlSelf->tb_d_ff_reset__DOT__Q) != (IData)(__Vtask_tb_d_ff_reset__DOT__check__0__expected))) {
        VL_WRITEF("FAIL: t=%0t Q=%b expected=%b\n",
                  64,VL_TIME_UNITED_Q(1),-12,1,(IData)(vlSelf->tb_d_ff_reset__DOT__Q),
                  1,__Vtask_tb_d_ff_reset__DOT__check__0__expected);
    } else {
        VL_WRITEF("PASS: t=%0t Q=%b\n",64,VL_TIME_UNITED_Q(1),
                  -12,1,(IData)(vlSelf->tb_d_ff_reset__DOT__Q));
    }
    vlSelf->tb_d_ff_reset__DOT__rst = 0U;
    co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                       "tb_d_ff_reset.v", 
                                       37);
    __Vtask_tb_d_ff_reset__DOT__check__1__expected = 0U;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb_d_ff_reset.v", 
                                       18);
    if (((IData)(vlSelf->tb_d_ff_reset__DOT__Q) != (IData)(__Vtask_tb_d_ff_reset__DOT__check__1__expected))) {
        VL_WRITEF("FAIL: t=%0t Q=%b expected=%b\n",
                  64,VL_TIME_UNITED_Q(1),-12,1,(IData)(vlSelf->tb_d_ff_reset__DOT__Q),
                  1,__Vtask_tb_d_ff_reset__DOT__check__1__expected);
    } else {
        VL_WRITEF("PASS: t=%0t Q=%b\n",64,VL_TIME_UNITED_Q(1),
                  -12,1,(IData)(vlSelf->tb_d_ff_reset__DOT__Q));
    }
    vlSelf->tb_d_ff_reset__DOT__D = 1U;
    co_await vlSelf->__VtrigSched_h68952b7e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_d_ff_reset.clk)", 
                                                       "tb_d_ff_reset.v", 
                                                       41);
    __Vtask_tb_d_ff_reset__DOT__check__2__expected = 1U;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb_d_ff_reset.v", 
                                       18);
    if (((IData)(vlSelf->tb_d_ff_reset__DOT__Q) != (IData)(__Vtask_tb_d_ff_reset__DOT__check__2__expected))) {
        VL_WRITEF("FAIL: t=%0t Q=%b expected=%b\n",
                  64,VL_TIME_UNITED_Q(1),-12,1,(IData)(vlSelf->tb_d_ff_reset__DOT__Q),
                  1,__Vtask_tb_d_ff_reset__DOT__check__2__expected);
    } else {
        VL_WRITEF("PASS: t=%0t Q=%b\n",64,VL_TIME_UNITED_Q(1),
                  -12,1,(IData)(vlSelf->tb_d_ff_reset__DOT__Q));
    }
    vlSelf->tb_d_ff_reset__DOT__D = 0U;
    co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                       "tb_d_ff_reset.v", 
                                       46);
    __Vtask_tb_d_ff_reset__DOT__check__3__expected = 1U;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb_d_ff_reset.v", 
                                       18);
    if (((IData)(vlSelf->tb_d_ff_reset__DOT__Q) != (IData)(__Vtask_tb_d_ff_reset__DOT__check__3__expected))) {
        VL_WRITEF("FAIL: t=%0t Q=%b expected=%b\n",
                  64,VL_TIME_UNITED_Q(1),-12,1,(IData)(vlSelf->tb_d_ff_reset__DOT__Q),
                  1,__Vtask_tb_d_ff_reset__DOT__check__3__expected);
    } else {
        VL_WRITEF("PASS: t=%0t Q=%b\n",64,VL_TIME_UNITED_Q(1),
                  -12,1,(IData)(vlSelf->tb_d_ff_reset__DOT__Q));
    }
    co_await vlSelf->__VtrigSched_h68952b7e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_d_ff_reset.clk)", 
                                                       "tb_d_ff_reset.v", 
                                                       50);
    __Vtask_tb_d_ff_reset__DOT__check__4__expected = 0U;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb_d_ff_reset.v", 
                                       18);
    if (((IData)(vlSelf->tb_d_ff_reset__DOT__Q) != (IData)(__Vtask_tb_d_ff_reset__DOT__check__4__expected))) {
        VL_WRITEF("FAIL: t=%0t Q=%b expected=%b\n",
                  64,VL_TIME_UNITED_Q(1),-12,1,(IData)(vlSelf->tb_d_ff_reset__DOT__Q),
                  1,__Vtask_tb_d_ff_reset__DOT__check__4__expected);
    } else {
        VL_WRITEF("PASS: t=%0t Q=%b\n",64,VL_TIME_UNITED_Q(1),
                  -12,1,(IData)(vlSelf->tb_d_ff_reset__DOT__Q));
    }
    vlSelf->tb_d_ff_reset__DOT__rst = 1U;
    co_await vlSelf->__VdlySched.delay(2ULL, nullptr, 
                                       "tb_d_ff_reset.v", 
                                       54);
    __Vtask_tb_d_ff_reset__DOT__check__5__expected = 0U;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb_d_ff_reset.v", 
                                       18);
    if (((IData)(vlSelf->tb_d_ff_reset__DOT__Q) != (IData)(__Vtask_tb_d_ff_reset__DOT__check__5__expected))) {
        VL_WRITEF("FAIL: t=%0t Q=%b expected=%b\n",
                  64,VL_TIME_UNITED_Q(1),-12,1,(IData)(vlSelf->tb_d_ff_reset__DOT__Q),
                  1,__Vtask_tb_d_ff_reset__DOT__check__5__expected);
    } else {
        VL_WRITEF("PASS: t=%0t Q=%b\n",64,VL_TIME_UNITED_Q(1),
                  -12,1,(IData)(vlSelf->tb_d_ff_reset__DOT__Q));
    }
    vlSelf->tb_d_ff_reset__DOT__rst = 0U;
    vlSelf->tb_d_ff_reset__DOT__D = 1U;
    __Vtask_tb_d_ff_reset__DOT__check__6__expected = 0U;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb_d_ff_reset.v", 
                                       18);
    if (((IData)(vlSelf->tb_d_ff_reset__DOT__Q) != (IData)(__Vtask_tb_d_ff_reset__DOT__check__6__expected))) {
        VL_WRITEF("FAIL: t=%0t Q=%b expected=%b\n",
                  64,VL_TIME_UNITED_Q(1),-12,1,(IData)(vlSelf->tb_d_ff_reset__DOT__Q),
                  1,__Vtask_tb_d_ff_reset__DOT__check__6__expected);
    } else {
        VL_WRITEF("PASS: t=%0t Q=%b\n",64,VL_TIME_UNITED_Q(1),
                  -12,1,(IData)(vlSelf->tb_d_ff_reset__DOT__Q));
    }
    co_await vlSelf->__VtrigSched_h68952b7e__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_d_ff_reset.clk)", 
                                                       "tb_d_ff_reset.v", 
                                                       64);
    __Vtask_tb_d_ff_reset__DOT__check__7__expected = 1U;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb_d_ff_reset.v", 
                                       18);
    if (((IData)(vlSelf->tb_d_ff_reset__DOT__Q) != (IData)(__Vtask_tb_d_ff_reset__DOT__check__7__expected))) {
        VL_WRITEF("FAIL: t=%0t Q=%b expected=%b\n",
                  64,VL_TIME_UNITED_Q(1),-12,1,(IData)(vlSelf->tb_d_ff_reset__DOT__Q),
                  1,__Vtask_tb_d_ff_reset__DOT__check__7__expected);
    } else {
        VL_WRITEF("PASS: t=%0t Q=%b\n",64,VL_TIME_UNITED_Q(1),
                  -12,1,(IData)(vlSelf->tb_d_ff_reset__DOT__Q));
    }
    VL_FINISH_MT("tb_d_ff_reset.v", 67, "");
}

void Vd_ff_reset___024root___eval_act(Vd_ff_reset___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vd_ff_reset__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vd_ff_reset___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vd_ff_reset___024root___nba_sequent__TOP__0(Vd_ff_reset___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vd_ff_reset__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vd_ff_reset___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->tb_d_ff_reset__DOT__Q = ((~ (IData)(vlSelf->tb_d_ff_reset__DOT__rst)) 
                                     & (IData)(vlSelf->tb_d_ff_reset__DOT__D));
}

void Vd_ff_reset___024root___eval_nba(Vd_ff_reset___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vd_ff_reset__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vd_ff_reset___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vd_ff_reset___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vd_ff_reset___024root___timing_resume(Vd_ff_reset___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vd_ff_reset__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vd_ff_reset___024root___timing_resume\n"); );
    // Body
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h68952b7e__0.resume("@(posedge tb_d_ff_reset.clk)");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vd_ff_reset___024root___timing_commit(Vd_ff_reset___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vd_ff_reset__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vd_ff_reset___024root___timing_commit\n"); );
    // Body
    if ((! (4ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h68952b7e__0.commit("@(posedge tb_d_ff_reset.clk)");
    }
}

void Vd_ff_reset___024root___eval_triggers__act(Vd_ff_reset___024root* vlSelf);

bool Vd_ff_reset___024root___eval_phase__act(Vd_ff_reset___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vd_ff_reset__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vd_ff_reset___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vd_ff_reset___024root___eval_triggers__act(vlSelf);
    Vd_ff_reset___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vd_ff_reset___024root___timing_resume(vlSelf);
        Vd_ff_reset___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vd_ff_reset___024root___eval_phase__nba(Vd_ff_reset___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vd_ff_reset__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vd_ff_reset___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vd_ff_reset___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vd_ff_reset___024root___dump_triggers__nba(Vd_ff_reset___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vd_ff_reset___024root___dump_triggers__act(Vd_ff_reset___024root* vlSelf);
#endif  // VL_DEBUG

void Vd_ff_reset___024root___eval(Vd_ff_reset___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vd_ff_reset__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vd_ff_reset___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vd_ff_reset___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb_d_ff_reset.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vd_ff_reset___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb_d_ff_reset.v", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vd_ff_reset___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vd_ff_reset___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vd_ff_reset___024root___eval_debug_assertions(Vd_ff_reset___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vd_ff_reset__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vd_ff_reset___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
