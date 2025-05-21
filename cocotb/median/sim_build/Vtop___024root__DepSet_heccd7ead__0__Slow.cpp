// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("median.sv", 5, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtop___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vtop___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->arr_1 = VL_RAND_RESET_I(8);
    vlSelf->arr_2 = VL_RAND_RESET_I(8);
    vlSelf->arr_3 = VL_RAND_RESET_I(8);
    vlSelf->arr_4 = VL_RAND_RESET_I(8);
    vlSelf->arr_5 = VL_RAND_RESET_I(8);
    vlSelf->arr_6 = VL_RAND_RESET_I(8);
    vlSelf->arr_7 = VL_RAND_RESET_I(8);
    vlSelf->arr_8 = VL_RAND_RESET_I(8);
    vlSelf->med = VL_RAND_RESET_I(8);
    vlSelf->arr_0 = VL_RAND_RESET_I(8);
    vlSelf->median__DOT__arr_1 = VL_RAND_RESET_I(8);
    vlSelf->median__DOT__arr_2 = VL_RAND_RESET_I(8);
    vlSelf->median__DOT__arr_3 = VL_RAND_RESET_I(8);
    vlSelf->median__DOT__arr_4 = VL_RAND_RESET_I(8);
    vlSelf->median__DOT__arr_5 = VL_RAND_RESET_I(8);
    vlSelf->median__DOT__arr_6 = VL_RAND_RESET_I(8);
    vlSelf->median__DOT__arr_7 = VL_RAND_RESET_I(8);
    vlSelf->median__DOT__arr_8 = VL_RAND_RESET_I(8);
    vlSelf->median__DOT__med = VL_RAND_RESET_I(8);
    vlSelf->median__DOT__arr_0 = VL_RAND_RESET_I(8);
    vlSelf->median__DOT__fc_0sel_0 = VL_RAND_RESET_I(1);
    vlSelf->median__DOT__fc_0sel_1 = VL_RAND_RESET_I(1);
    vlSelf->median__DOT__fc_0sel_2 = VL_RAND_RESET_I(1);
    vlSelf->median__DOT__fc_0sub_0 = VL_RAND_RESET_I(8);
    vlSelf->median__DOT__fc_0sub_1 = VL_RAND_RESET_I(8);
    vlSelf->median__DOT__fc_0sub_2 = VL_RAND_RESET_I(8);
    vlSelf->median__DOT__fc_1sel_0 = VL_RAND_RESET_I(1);
    vlSelf->median__DOT__fc_1sel_1 = VL_RAND_RESET_I(1);
    vlSelf->median__DOT__fc_1sel_2 = VL_RAND_RESET_I(1);
    vlSelf->median__DOT__fc_1sub_0 = VL_RAND_RESET_I(8);
    vlSelf->median__DOT__fc_1sub_1 = VL_RAND_RESET_I(8);
    vlSelf->median__DOT__fc_1sub_2 = VL_RAND_RESET_I(8);
    vlSelf->median__DOT__fc_2sel_0 = VL_RAND_RESET_I(1);
    vlSelf->median__DOT__fc_2sel_1 = VL_RAND_RESET_I(1);
    vlSelf->median__DOT__fc_2sel_2 = VL_RAND_RESET_I(1);
    vlSelf->median__DOT__fc_2sub_0 = VL_RAND_RESET_I(8);
    vlSelf->median__DOT__fc_2sub_1 = VL_RAND_RESET_I(8);
    vlSelf->median__DOT__fc_2sub_2 = VL_RAND_RESET_I(8);
    vlSelf->median__DOT__h0 = VL_RAND_RESET_I(8);
    vlSelf->median__DOT__h1 = VL_RAND_RESET_I(8);
    vlSelf->median__DOT__h2 = VL_RAND_RESET_I(8);
    vlSelf->median__DOT__l0 = VL_RAND_RESET_I(8);
    vlSelf->median__DOT__l1 = VL_RAND_RESET_I(8);
    vlSelf->median__DOT__l2 = VL_RAND_RESET_I(8);
    vlSelf->median__DOT__m0 = VL_RAND_RESET_I(8);
    vlSelf->median__DOT__m1 = VL_RAND_RESET_I(8);
    vlSelf->median__DOT__m2 = VL_RAND_RESET_I(8);
    vlSelf->median__DOT__sec_0 = VL_RAND_RESET_I(8);
    vlSelf->median__DOT__sec_1 = VL_RAND_RESET_I(8);
    vlSelf->median__DOT__sec_2 = VL_RAND_RESET_I(8);
    vlSelf->median__DOT__shsel_0 = VL_RAND_RESET_I(1);
    vlSelf->median__DOT__shsel_1 = VL_RAND_RESET_I(1);
    vlSelf->median__DOT__shsub_1 = VL_RAND_RESET_I(8);
    vlSelf->median__DOT__slsel_0 = VL_RAND_RESET_I(1);
    vlSelf->median__DOT__slsel_1 = VL_RAND_RESET_I(1);
    vlSelf->median__DOT__slsub_1 = VL_RAND_RESET_I(8);
    vlSelf->median__DOT__smsel_0 = VL_RAND_RESET_I(1);
    vlSelf->median__DOT__smsel_1 = VL_RAND_RESET_I(1);
    vlSelf->median__DOT__smsel_2 = VL_RAND_RESET_I(1);
    vlSelf->median__DOT__smsub_0 = VL_RAND_RESET_I(8);
    vlSelf->median__DOT__smsub_1 = VL_RAND_RESET_I(8);
    vlSelf->median__DOT__smsub_2 = VL_RAND_RESET_I(8);
    vlSelf->median__DOT__tmsel_0 = VL_RAND_RESET_I(1);
    vlSelf->median__DOT__tmsel_1 = VL_RAND_RESET_I(1);
    vlSelf->median__DOT__tmsel_2 = VL_RAND_RESET_I(1);
    vlSelf->median__DOT__tmsub_0 = VL_RAND_RESET_I(8);
    vlSelf->median__DOT__tmsub_1 = VL_RAND_RESET_I(8);
    vlSelf->median__DOT__tmsub_2 = VL_RAND_RESET_I(8);
}
