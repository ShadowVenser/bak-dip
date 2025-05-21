// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VsvsimTestbench.h for the primary calling header

#include "VsvsimTestbench__pch.h"
#include "VsvsimTestbench___024root.h"

VL_ATTR_COLD void VsvsimTestbench___024root___eval_static__TOP(VsvsimTestbench___024root* vlSelf);

VL_ATTR_COLD void VsvsimTestbench___024root___eval_static(VsvsimTestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VsvsimTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root___eval_static\n"); );
    // Body
    VsvsimTestbench___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void VsvsimTestbench___024root___eval_static__TOP(VsvsimTestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VsvsimTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->svsimTestbench__DOT__clock = 0U;
    vlSelf->svsimTestbench__DOT__reset = 0U;
    vlSelf->svsimTestbench__DOT__a = 0U;
    vlSelf->svsimTestbench__DOT__b = 0U;
    vlSelf->svsimTestbench__DOT__simulationState = 0U;
}

VL_ATTR_COLD void VsvsimTestbench___024root___eval_initial__TOP(VsvsimTestbench___024root* vlSelf);

VL_ATTR_COLD void VsvsimTestbench___024root___eval_initial(VsvsimTestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VsvsimTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root___eval_initial\n"); );
    // Body
    VsvsimTestbench___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__svsimTestbench__DOT__simulationState__0 = 1U;
    vlSelf->__Vtrigprevexpr___TOP__svsimTestbench__DOT__clock__0 
        = vlSelf->svsimTestbench__DOT__clock;
}

VL_ATTR_COLD void VsvsimTestbench___024root___eval_final__TOP(VsvsimTestbench___024root* vlSelf);

VL_ATTR_COLD void VsvsimTestbench___024root___eval_final(VsvsimTestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VsvsimTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root___eval_final\n"); );
    // Body
    VsvsimTestbench___024root___eval_final__TOP(vlSelf);
}

VL_ATTR_COLD void VsvsimTestbench___024root___eval_settle(VsvsimTestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VsvsimTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root___eval_settle\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VsvsimTestbench___024root___dump_triggers__act(VsvsimTestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VsvsimTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: Internal 'act' trigger - DPI export trigger\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([changed] svsimTestbench.simulationState)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge svsimTestbench.clock)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VsvsimTestbench___024root___dump_triggers__nba(VsvsimTestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VsvsimTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: Internal 'nba' trigger - DPI export trigger\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([changed] svsimTestbench.simulationState)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge svsimTestbench.clock)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VsvsimTestbench___024root___ctor_var_reset(VsvsimTestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VsvsimTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->svsimTestbench__DOT__clock = VL_RAND_RESET_I(1);
    vlSelf->svsimTestbench__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->svsimTestbench__DOT__a = VL_RAND_RESET_I(8);
    vlSelf->svsimTestbench__DOT__b = VL_RAND_RESET_I(8);
    vlSelf->svsimTestbench__DOT__simulationState = 0;
    vlSelf->svsimTestbench__DOT__dut__DOT__r = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->svsimTestbench__DOT__dut__DOT__unnamedblk1__DOT___RANDOM[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__Vdpi_export_trigger = 0;
    vlSelf->__Vtrigprevexpr___TOP__svsimTestbench__DOT__simulationState__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__svsimTestbench__DOT__clock__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
}
