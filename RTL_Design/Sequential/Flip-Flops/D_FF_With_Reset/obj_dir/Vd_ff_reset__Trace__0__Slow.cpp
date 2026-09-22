// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vd_ff_reset__Syms.h"


VL_ATTR_COLD void Vd_ff_reset___024root__trace_init_sub__TOP__0(Vd_ff_reset___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vd_ff_reset__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vd_ff_reset___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("tb_d_ff_reset", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"Q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("DUT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vd_ff_reset___024root__trace_init_top(Vd_ff_reset___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vd_ff_reset__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vd_ff_reset___024root__trace_init_top\n"); );
    // Body
    Vd_ff_reset___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vd_ff_reset___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp);
VL_ATTR_COLD void Vd_ff_reset___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vd_ff_reset___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vd_ff_reset___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vd_ff_reset___024root__trace_register(Vd_ff_reset___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vd_ff_reset__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vd_ff_reset___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vd_ff_reset___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vd_ff_reset___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vd_ff_reset___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vd_ff_reset___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vd_ff_reset___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vd_ff_reset___024root__trace_const_0\n"); );
    // Init
    Vd_ff_reset___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vd_ff_reset___024root*>(voidSelf);
    Vd_ff_reset__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vd_ff_reset___024root__trace_full_0_sub_0(Vd_ff_reset___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vd_ff_reset___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vd_ff_reset___024root__trace_full_0\n"); );
    // Init
    Vd_ff_reset___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vd_ff_reset___024root*>(voidSelf);
    Vd_ff_reset__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vd_ff_reset___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vd_ff_reset___024root__trace_full_0_sub_0(Vd_ff_reset___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vd_ff_reset__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vd_ff_reset___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->tb_d_ff_reset__DOT__D));
    bufp->fullBit(oldp+2,(vlSelf->tb_d_ff_reset__DOT__clk));
    bufp->fullBit(oldp+3,(vlSelf->tb_d_ff_reset__DOT__rst));
    bufp->fullBit(oldp+4,(vlSelf->tb_d_ff_reset__DOT__Q));
}
