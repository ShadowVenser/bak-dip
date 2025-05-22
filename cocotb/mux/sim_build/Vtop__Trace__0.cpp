// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelf->addr));
    bufp->chgBit(oldp+1,(vlSelf->clk));
    bufp->chgBit(oldp+2,(vlSelf->clr_n));
    bufp->chgSData(oldp+3,(vlSelf->x1),16);
    bufp->chgSData(oldp+4,(vlSelf->x2),16);
    bufp->chgSData(oldp+5,(vlSelf->y),16);
    bufp->chgSData(oldp+6,(vlSelf->syncMux__DOT____0241),16);
    bufp->chgBit(oldp+7,(vlSelf->syncMux__DOT__addr));
    bufp->chgBit(oldp+8,(vlSelf->syncMux__DOT__clk));
    bufp->chgBit(oldp+9,(vlSelf->syncMux__DOT__clk__0246));
    bufp->chgBit(oldp+10,(vlSelf->syncMux__DOT__clr_n));
    bufp->chgBit(oldp+11,(vlSelf->syncMux__DOT__rst));
    bufp->chgSData(oldp+12,(vlSelf->syncMux__DOT__x1),16);
    bufp->chgSData(oldp+13,(vlSelf->syncMux__DOT__x2),16);
    bufp->chgSData(oldp+14,(vlSelf->syncMux__DOT__y),16);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
