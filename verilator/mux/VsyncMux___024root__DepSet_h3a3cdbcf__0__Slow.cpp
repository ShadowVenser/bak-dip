// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VsyncMux.h for the primary calling header

#include "VsyncMux__pch.h"
#include "VsyncMux___024root.h"

VL_ATTR_COLD void VsyncMux___024root___eval_static(VsyncMux___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VsyncMux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsyncMux___024root___eval_static\n"); );
}

VL_ATTR_COLD void VsyncMux___024root___eval_initial(VsyncMux___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VsyncMux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsyncMux___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__clr_n__0 = vlSelf->clr_n;
}

VL_ATTR_COLD void VsyncMux___024root___eval_final(VsyncMux___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VsyncMux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsyncMux___024root___eval_final\n"); );
}

VL_ATTR_COLD void VsyncMux___024root___eval_settle(VsyncMux___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VsyncMux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsyncMux___024root___eval_settle\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VsyncMux___024root___dump_triggers__act(VsyncMux___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VsyncMux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsyncMux___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk or negedge clr_n)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VsyncMux___024root___dump_triggers__nba(VsyncMux___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VsyncMux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsyncMux___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk or negedge clr_n)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VsyncMux___024root___ctor_var_reset(VsyncMux___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VsyncMux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsyncMux___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->x1 = VL_RAND_RESET_I(16);
    vlSelf->x2 = VL_RAND_RESET_I(16);
    vlSelf->y = VL_RAND_RESET_I(16);
    vlSelf->addr = VL_RAND_RESET_I(1);
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->clr_n = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__clr_n__0 = VL_RAND_RESET_I(1);
}
