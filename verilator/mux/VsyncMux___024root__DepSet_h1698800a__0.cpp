// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VsyncMux.h for the primary calling header

#include "VsyncMux__pch.h"
#include "VsyncMux__Syms.h"
#include "VsyncMux___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VsyncMux___024root___dump_triggers__act(VsyncMux___024root* vlSelf);
#endif  // VL_DEBUG

void VsyncMux___024root___eval_triggers__act(VsyncMux___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VsyncMux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsyncMux___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))) 
                                     | ((~ (IData)(vlSelf->clr_n)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__clr_n__0))));
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__clr_n__0 = vlSelf->clr_n;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VsyncMux___024root___dump_triggers__act(vlSelf);
    }
#endif
}
