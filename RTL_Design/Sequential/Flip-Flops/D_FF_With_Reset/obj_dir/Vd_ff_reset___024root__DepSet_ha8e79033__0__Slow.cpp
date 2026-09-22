// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vd_ff_reset.h for the primary calling header

#include "Vd_ff_reset__pch.h"
#include "Vd_ff_reset__Syms.h"
#include "Vd_ff_reset___024root.h"

VL_ATTR_COLD void Vd_ff_reset___024root___eval_initial__TOP(Vd_ff_reset___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vd_ff_reset__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vd_ff_reset___024root___eval_initial__TOP\n"); );
    // Body
    vlSymsp->_vm_contextp__->dumpfile(std::string{"dump.vcd"});
    vlSymsp->_traceDumpOpen();
}
