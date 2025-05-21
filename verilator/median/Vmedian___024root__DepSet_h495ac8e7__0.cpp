// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmedian.h for the primary calling header

#include "Vmedian__pch.h"
#include "Vmedian___024root.h"

VL_INLINE_OPT void Vmedian___024root___ico_sequent__TOP__0(Vmedian___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmedian__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmedian___024root___ico_sequent__TOP__0\n"); );
    // Body
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
    vlSelf->median__DOT__shsub_1 = (((IData)(vlSelf->median__DOT__l0) 
                                     < (IData)(vlSelf->median__DOT__l1))
                                     ? (IData)(vlSelf->median__DOT__l1)
                                     : (IData)(vlSelf->median__DOT__l0));
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
    vlSelf->median__DOT__sec_2 = (((IData)(vlSelf->median__DOT__shsub_1) 
                                   > (IData)(vlSelf->median__DOT__l2))
                                   ? (IData)(vlSelf->median__DOT__shsub_1)
                                   : (IData)(vlSelf->median__DOT__l2));
    if (vlSelf->median__DOT__fc_1sel_2) {
        vlSelf->median__DOT__h1 = vlSelf->median__DOT__fc_1sub_0;
        vlSelf->median__DOT__m1 = vlSelf->median__DOT__fc_1sub_2;
    } else {
        vlSelf->median__DOT__h1 = vlSelf->median__DOT__fc_1sub_2;
        vlSelf->median__DOT__m1 = vlSelf->median__DOT__fc_1sub_0;
    }
    vlSelf->median__DOT__slsub_1 = (((IData)(vlSelf->median__DOT__h0) 
                                     > (IData)(vlSelf->median__DOT__h1))
                                     ? (IData)(vlSelf->median__DOT__h1)
                                     : (IData)(vlSelf->median__DOT__h0));
    vlSelf->median__DOT__smsel_0 = ((IData)(vlSelf->median__DOT__m0) 
                                    > (IData)(vlSelf->median__DOT__m1));
    vlSelf->median__DOT__sec_0 = (((IData)(vlSelf->median__DOT__slsub_1) 
                                   > (IData)(vlSelf->median__DOT__h2))
                                   ? (IData)(vlSelf->median__DOT__h2)
                                   : (IData)(vlSelf->median__DOT__slsub_1));
    if (vlSelf->median__DOT__smsel_0) {
        vlSelf->median__DOT__smsub_0 = vlSelf->median__DOT__m0;
        vlSelf->median__DOT__smsub_1 = vlSelf->median__DOT__m1;
    } else {
        vlSelf->median__DOT__smsub_0 = vlSelf->median__DOT__m1;
        vlSelf->median__DOT__smsub_1 = vlSelf->median__DOT__m0;
    }
    vlSelf->median__DOT__smsub_2 = (((IData)(vlSelf->median__DOT__smsub_1) 
                                     > (IData)(vlSelf->median__DOT__m2))
                                     ? (IData)(vlSelf->median__DOT__smsub_1)
                                     : (IData)(vlSelf->median__DOT__m2));
    vlSelf->median__DOT__sec_1 = (((IData)(vlSelf->median__DOT__smsub_0) 
                                   > (IData)(vlSelf->median__DOT__smsub_2))
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
    vlSelf->median__DOT__tmsub_2 = (((IData)(vlSelf->median__DOT__tmsub_1) 
                                     > (IData)(vlSelf->median__DOT__sec_2))
                                     ? (IData)(vlSelf->median__DOT__tmsub_1)
                                     : (IData)(vlSelf->median__DOT__sec_2));
    vlSelf->med = (((IData)(vlSelf->median__DOT__tmsub_0) 
                    > (IData)(vlSelf->median__DOT__tmsub_2))
                    ? (IData)(vlSelf->median__DOT__tmsub_2)
                    : (IData)(vlSelf->median__DOT__tmsub_0));
}

void Vmedian___024root___eval_ico(Vmedian___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmedian__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmedian___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vmedian___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vmedian___024root___eval_triggers__ico(Vmedian___024root* vlSelf);

bool Vmedian___024root___eval_phase__ico(Vmedian___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmedian__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmedian___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vmedian___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Vmedian___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vmedian___024root___eval_act(Vmedian___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmedian__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmedian___024root___eval_act\n"); );
}

void Vmedian___024root___eval_nba(Vmedian___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmedian__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmedian___024root___eval_nba\n"); );
}

void Vmedian___024root___eval_triggers__act(Vmedian___024root* vlSelf);

bool Vmedian___024root___eval_phase__act(Vmedian___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmedian__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmedian___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vmedian___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vmedian___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vmedian___024root___eval_phase__nba(Vmedian___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmedian__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmedian___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vmedian___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmedian___024root___dump_triggers__ico(Vmedian___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmedian___024root___dump_triggers__nba(Vmedian___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmedian___024root___dump_triggers__act(Vmedian___024root* vlSelf);
#endif  // VL_DEBUG

void Vmedian___024root___eval(Vmedian___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmedian__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmedian___024root___eval\n"); );
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
            Vmedian___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("median.sv", 5, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vmedian___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vmedian___024root___dump_triggers__nba(vlSelf);
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
                Vmedian___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("median.sv", 5, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vmedian___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vmedian___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vmedian___024root___eval_debug_assertions(Vmedian___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmedian__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmedian___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
