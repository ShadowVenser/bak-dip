// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->median__DOT__arr_1 = vlSelf->arr_1;
    vlSelf->median__DOT__arr_2 = vlSelf->arr_2;
    vlSelf->median__DOT__arr_3 = vlSelf->arr_3;
    vlSelf->median__DOT__arr_4 = vlSelf->arr_4;
    vlSelf->median__DOT__arr_5 = vlSelf->arr_5;
    vlSelf->median__DOT__arr_6 = vlSelf->arr_6;
    vlSelf->median__DOT__arr_7 = vlSelf->arr_7;
    vlSelf->median__DOT__arr_8 = vlSelf->arr_8;
    vlSelf->median__DOT__arr_0 = vlSelf->arr_0;
    vlSelf->median__DOT__fc_2sel_0 = ((IData)(vlSelf->arr_6) 
                                      > (IData)(vlSelf->arr_7));
    vlSelf->median__DOT__fc_0sel_0 = ((IData)(vlSelf->arr_0) 
                                      > (IData)(vlSelf->arr_1));
    vlSelf->median__DOT__fc_1sel_0 = ((IData)(vlSelf->arr_3) 
                                      > (IData)(vlSelf->arr_4));
    if (vlSelf->median__DOT__fc_2sel_0) {
        vlSelf->median__DOT__fc_2sub_0 = vlSelf->arr_6;
        vlSelf->median__DOT__fc_2sub_1 = vlSelf->arr_7;
    } else {
        vlSelf->median__DOT__fc_2sub_0 = vlSelf->arr_7;
        vlSelf->median__DOT__fc_2sub_1 = vlSelf->arr_6;
    }
    if (vlSelf->median__DOT__fc_0sel_0) {
        vlSelf->median__DOT__fc_0sub_0 = vlSelf->arr_0;
        vlSelf->median__DOT__fc_0sub_1 = vlSelf->arr_1;
    } else {
        vlSelf->median__DOT__fc_0sub_0 = vlSelf->arr_1;
        vlSelf->median__DOT__fc_0sub_1 = vlSelf->arr_0;
    }
    if (vlSelf->median__DOT__fc_1sel_0) {
        vlSelf->median__DOT__fc_1sub_0 = vlSelf->arr_3;
        vlSelf->median__DOT__fc_1sub_1 = vlSelf->arr_4;
    } else {
        vlSelf->median__DOT__fc_1sub_0 = vlSelf->arr_4;
        vlSelf->median__DOT__fc_1sub_1 = vlSelf->arr_3;
    }
    vlSelf->median__DOT__fc_2sel_1 = ((IData)(vlSelf->median__DOT__fc_2sub_1) 
                                      > (IData)(vlSelf->arr_8));
    vlSelf->median__DOT__fc_0sel_1 = ((IData)(vlSelf->median__DOT__fc_0sub_1) 
                                      > (IData)(vlSelf->arr_2));
    vlSelf->median__DOT__fc_1sel_1 = ((IData)(vlSelf->median__DOT__fc_1sub_1) 
                                      > (IData)(vlSelf->arr_5));
    if (vlSelf->median__DOT__fc_2sel_1) {
        vlSelf->median__DOT__l2 = vlSelf->arr_8;
        vlSelf->median__DOT__fc_2sub_2 = vlSelf->median__DOT__fc_2sub_1;
    } else {
        vlSelf->median__DOT__l2 = vlSelf->median__DOT__fc_2sub_1;
        vlSelf->median__DOT__fc_2sub_2 = vlSelf->arr_8;
    }
    if (vlSelf->median__DOT__fc_0sel_1) {
        vlSelf->median__DOT__l0 = vlSelf->arr_2;
        vlSelf->median__DOT__fc_0sub_2 = vlSelf->median__DOT__fc_0sub_1;
    } else {
        vlSelf->median__DOT__l0 = vlSelf->median__DOT__fc_0sub_1;
        vlSelf->median__DOT__fc_0sub_2 = vlSelf->arr_2;
    }
    if (vlSelf->median__DOT__fc_1sel_1) {
        vlSelf->median__DOT__l1 = vlSelf->arr_5;
        vlSelf->median__DOT__fc_1sub_2 = vlSelf->median__DOT__fc_1sub_1;
    } else {
        vlSelf->median__DOT__l1 = vlSelf->median__DOT__fc_1sub_1;
        vlSelf->median__DOT__fc_1sub_2 = vlSelf->arr_5;
    }
    vlSelf->median__DOT__fc_2sel_2 = ((IData)(vlSelf->median__DOT__fc_2sub_0) 
                                      > (IData)(vlSelf->median__DOT__fc_2sub_2));
    vlSelf->median__DOT__fc_0sel_2 = ((IData)(vlSelf->median__DOT__fc_0sub_0) 
                                      > (IData)(vlSelf->median__DOT__fc_0sub_2));
    vlSelf->median__DOT__shsel_0 = ((IData)(vlSelf->median__DOT__l0) 
                                    < (IData)(vlSelf->median__DOT__l1));
    vlSelf->median__DOT__fc_1sel_2 = ((IData)(vlSelf->median__DOT__fc_1sub_0) 
                                      > (IData)(vlSelf->median__DOT__fc_1sub_2));
    if (vlSelf->median__DOT__fc_2sel_2) {
        vlSelf->median__DOT__h2 = vlSelf->median__DOT__fc_2sub_0;
        vlSelf->median__DOT__m2 = vlSelf->median__DOT__fc_2sub_2;
    } else {
        vlSelf->median__DOT__h2 = vlSelf->median__DOT__fc_2sub_2;
        vlSelf->median__DOT__m2 = vlSelf->median__DOT__fc_2sub_0;
    }
    if (vlSelf->median__DOT__fc_0sel_2) {
        vlSelf->median__DOT__h0 = vlSelf->median__DOT__fc_0sub_0;
        vlSelf->median__DOT__m0 = vlSelf->median__DOT__fc_0sub_2;
    } else {
        vlSelf->median__DOT__h0 = vlSelf->median__DOT__fc_0sub_2;
        vlSelf->median__DOT__m0 = vlSelf->median__DOT__fc_0sub_0;
    }
    vlSelf->median__DOT__shsub_1 = ((IData)(vlSelf->median__DOT__shsel_0)
                                     ? (IData)(vlSelf->median__DOT__l1)
                                     : (IData)(vlSelf->median__DOT__l0));
    if (vlSelf->median__DOT__fc_1sel_2) {
        vlSelf->median__DOT__h1 = vlSelf->median__DOT__fc_1sub_0;
        vlSelf->median__DOT__m1 = vlSelf->median__DOT__fc_1sub_2;
    } else {
        vlSelf->median__DOT__h1 = vlSelf->median__DOT__fc_1sub_2;
        vlSelf->median__DOT__m1 = vlSelf->median__DOT__fc_1sub_0;
    }
    vlSelf->median__DOT__shsel_1 = ((IData)(vlSelf->median__DOT__shsub_1) 
                                    > (IData)(vlSelf->median__DOT__l2));
    vlSelf->median__DOT__slsel_0 = ((IData)(vlSelf->median__DOT__h0) 
                                    > (IData)(vlSelf->median__DOT__h1));
    vlSelf->median__DOT__smsel_0 = ((IData)(vlSelf->median__DOT__m0) 
                                    > (IData)(vlSelf->median__DOT__m1));
    vlSelf->median__DOT__sec_2 = ((IData)(vlSelf->median__DOT__shsel_1)
                                   ? (IData)(vlSelf->median__DOT__shsub_1)
                                   : (IData)(vlSelf->median__DOT__l2));
    vlSelf->median__DOT__slsub_1 = ((IData)(vlSelf->median__DOT__slsel_0)
                                     ? (IData)(vlSelf->median__DOT__h1)
                                     : (IData)(vlSelf->median__DOT__h0));
    if (vlSelf->median__DOT__smsel_0) {
        vlSelf->median__DOT__smsub_0 = vlSelf->median__DOT__m0;
        vlSelf->median__DOT__smsub_1 = vlSelf->median__DOT__m1;
    } else {
        vlSelf->median__DOT__smsub_0 = vlSelf->median__DOT__m1;
        vlSelf->median__DOT__smsub_1 = vlSelf->median__DOT__m0;
    }
    vlSelf->median__DOT__slsel_1 = ((IData)(vlSelf->median__DOT__slsub_1) 
                                    > (IData)(vlSelf->median__DOT__h2));
    vlSelf->median__DOT__smsel_1 = ((IData)(vlSelf->median__DOT__smsub_1) 
                                    > (IData)(vlSelf->median__DOT__m2));
    vlSelf->median__DOT__sec_0 = ((IData)(vlSelf->median__DOT__slsel_1)
                                   ? (IData)(vlSelf->median__DOT__h2)
                                   : (IData)(vlSelf->median__DOT__slsub_1));
    vlSelf->median__DOT__smsub_2 = ((IData)(vlSelf->median__DOT__smsel_1)
                                     ? (IData)(vlSelf->median__DOT__smsub_1)
                                     : (IData)(vlSelf->median__DOT__m2));
    vlSelf->median__DOT__smsel_2 = ((IData)(vlSelf->median__DOT__smsub_0) 
                                    > (IData)(vlSelf->median__DOT__smsub_2));
    vlSelf->median__DOT__sec_1 = ((IData)(vlSelf->median__DOT__smsel_2)
                                   ? (IData)(vlSelf->median__DOT__smsub_2)
                                   : (IData)(vlSelf->median__DOT__smsub_0));
    vlSelf->median__DOT__tmsel_0 = ((IData)(vlSelf->median__DOT__sec_0) 
                                    > (IData)(vlSelf->median__DOT__sec_1));
    if (vlSelf->median__DOT__tmsel_0) {
        vlSelf->median__DOT__tmsub_0 = vlSelf->median__DOT__sec_0;
        vlSelf->median__DOT__tmsub_1 = vlSelf->median__DOT__sec_1;
    } else {
        vlSelf->median__DOT__tmsub_0 = vlSelf->median__DOT__sec_1;
        vlSelf->median__DOT__tmsub_1 = vlSelf->median__DOT__sec_0;
    }
    vlSelf->median__DOT__tmsel_1 = ((IData)(vlSelf->median__DOT__tmsub_1) 
                                    > (IData)(vlSelf->median__DOT__sec_2));
    vlSelf->median__DOT__tmsub_2 = ((IData)(vlSelf->median__DOT__tmsel_1)
                                     ? (IData)(vlSelf->median__DOT__tmsub_1)
                                     : (IData)(vlSelf->median__DOT__sec_2));
    vlSelf->median__DOT__tmsel_2 = ((IData)(vlSelf->median__DOT__tmsub_0) 
                                    > (IData)(vlSelf->median__DOT__tmsub_2));
    vlSelf->med = ((IData)(vlSelf->median__DOT__tmsel_2)
                    ? (IData)(vlSelf->median__DOT__tmsub_2)
                    : (IData)(vlSelf->median__DOT__tmsub_0));
    vlSelf->median__DOT__med = vlSelf->med;
}

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtop___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Vtop___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtop___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtop___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtop___024root___eval_phase__nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtop___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("median.sv", 5, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vtop___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("median.sv", 5, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("median.sv", 5, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtop___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtop___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
