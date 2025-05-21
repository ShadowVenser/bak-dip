// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VnandGate.h for the primary calling header

#include "VnandGate__pch.h"
#include "VnandGate___024root.h"

VL_INLINE_OPT void VnandGate___024root___ico_sequent__TOP__0(VnandGate___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VnandGate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VnandGate___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->y = (1U & (~ ((IData)(vlSelf->x1) & (IData)(vlSelf->x2))));
}

void VnandGate___024root___eval_ico(VnandGate___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VnandGate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VnandGate___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VnandGate___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void VnandGate___024root___eval_triggers__ico(VnandGate___024root* vlSelf);

bool VnandGate___024root___eval_phase__ico(VnandGate___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VnandGate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VnandGate___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VnandGate___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        VnandGate___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VnandGate___024root___eval_act(VnandGate___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VnandGate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VnandGate___024root___eval_act\n"); );
}

void VnandGate___024root___eval_nba(VnandGate___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VnandGate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VnandGate___024root___eval_nba\n"); );
}

void VnandGate___024root___eval_triggers__act(VnandGate___024root* vlSelf);

bool VnandGate___024root___eval_phase__act(VnandGate___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VnandGate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VnandGate___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VnandGate___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VnandGate___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VnandGate___024root___eval_phase__nba(VnandGate___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VnandGate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VnandGate___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VnandGate___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VnandGate___024root___dump_triggers__ico(VnandGate___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VnandGate___024root___dump_triggers__nba(VnandGate___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VnandGate___024root___dump_triggers__act(VnandGate___024root* vlSelf);
#endif  // VL_DEBUG

void VnandGate___024root___eval(VnandGate___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VnandGate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VnandGate___024root___eval\n"); );
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
            VnandGate___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("nandGate.sv", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VnandGate___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VnandGate___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("nandGate.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VnandGate___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("nandGate.sv", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VnandGate___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VnandGate___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VnandGate___024root___eval_debug_assertions(VnandGate___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VnandGate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VnandGate___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->x1 & 0xfeU))) {
        Verilated::overWidthError("x1");}
    if (VL_UNLIKELY((vlSelf->x2 & 0xfeU))) {
        Verilated::overWidthError("x2");}
}
#endif  // VL_DEBUG
