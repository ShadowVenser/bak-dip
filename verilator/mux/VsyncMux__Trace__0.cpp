// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "VsyncMux__Syms.h"


void VsyncMux___024root__trace_chg_0_sub_0(VsyncMux___024root* vlSelf, VerilatedFst::Buffer* bufp);

void VsyncMux___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsyncMux___024root__trace_chg_0\n"); );
    // Init
    VsyncMux___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VsyncMux___024root*>(voidSelf);
    VsyncMux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VsyncMux___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VsyncMux___024root__trace_chg_0_sub_0(VsyncMux___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VsyncMux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsyncMux___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgSData(oldp+0,(vlSelf->x1),16);
    bufp->chgSData(oldp+1,(vlSelf->x2),16);
    bufp->chgBit(oldp+2,(vlSelf->addr));
    bufp->chgBit(oldp+3,(vlSelf->clk));
    bufp->chgBit(oldp+4,(vlSelf->clr_n));
    bufp->chgSData(oldp+5,(vlSelf->y),16);
    bufp->chgSData(oldp+6,(((IData)(vlSelf->addr) ? (IData)(vlSelf->x2)
                             : (IData)(vlSelf->x1))),16);
}

void VsyncMux___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsyncMux___024root__trace_cleanup\n"); );
    // Init
    VsyncMux___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VsyncMux___024root*>(voidSelf);
    VsyncMux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
