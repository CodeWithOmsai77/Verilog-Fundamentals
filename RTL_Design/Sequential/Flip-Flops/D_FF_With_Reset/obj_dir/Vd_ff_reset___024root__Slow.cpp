// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vd_ff_reset.h for the primary calling header

#include "Vd_ff_reset__pch.h"
#include "Vd_ff_reset__Syms.h"
#include "Vd_ff_reset___024root.h"

void Vd_ff_reset___024root___ctor_var_reset(Vd_ff_reset___024root* vlSelf);

Vd_ff_reset___024root::Vd_ff_reset___024root(Vd_ff_reset__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vd_ff_reset___024root___ctor_var_reset(this);
}

void Vd_ff_reset___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vd_ff_reset___024root::~Vd_ff_reset___024root() {
}
