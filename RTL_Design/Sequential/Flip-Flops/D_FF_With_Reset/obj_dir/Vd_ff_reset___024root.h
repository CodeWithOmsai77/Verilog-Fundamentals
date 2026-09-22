// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vd_ff_reset.h for the primary calling header

#ifndef VERILATED_VD_FF_RESET___024ROOT_H_
#define VERILATED_VD_FF_RESET___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vd_ff_reset__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vd_ff_reset___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_d_ff_reset__DOT__clk;
    CData/*0:0*/ tb_d_ff_reset__DOT__rst;
    CData/*0:0*/ tb_d_ff_reset__DOT__D;
    CData/*0:0*/ tb_d_ff_reset__DOT__Q;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_d_ff_reset__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_d_ff_reset__DOT__rst__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h68952b7e__0;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vd_ff_reset__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vd_ff_reset___024root(Vd_ff_reset__Syms* symsp, const char* v__name);
    ~Vd_ff_reset___024root();
    VL_UNCOPYABLE(Vd_ff_reset___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
