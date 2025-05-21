// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VsyncMux.h for the primary calling header

#include "VsyncMux__pch.h"
#include "VsyncMux___024root.h"

void VsyncMux___024root___eval_act(VsyncMux___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VsyncMux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsyncMux___024root___eval_act\n"); );
}

VL_INLINE_OPT void VsyncMux___024root___nba_sequent__TOP__0(VsyncMux___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VsyncMux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsyncMux___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->y = ((IData)(vlSelf->clr_n) ? ((IData)(vlSelf->addr)
                                            ? (IData)(vlSelf->x2)
                                            : (IData)(vlSelf->x1))
                  : 0U);
}

void VsyncMux___024root___eval_nba(VsyncMux___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VsyncMux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsyncMux___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VsyncMux___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void VsyncMux___024root___eval_triggers__act(VsyncMux___024root* vlSelf);

bool VsyncMux___024root___eval_phase__act(VsyncMux___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VsyncMux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsyncMux___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VsyncMux___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VsyncMux___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VsyncMux___024root___eval_phase__nba(VsyncMux___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VsyncMux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsyncMux___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VsyncMux___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VsyncMux___024root___dump_triggers__nba(VsyncMux___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VsyncMux___024root___dump_triggers__act(VsyncMux___024root* vlSelf);
#endif  // VL_DEBUG

void VsyncMux___024root___eval(VsyncMux___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VsyncMux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsyncMux___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VsyncMux___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("syncMux.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VsyncMux___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("syncMux.sv", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VsyncMux___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VsyncMux___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VsyncMux___024root___eval_debug_assertions(VsyncMux___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VsyncMux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsyncMux___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->addr & 0xfeU))) {
        Verilated::overWidthError("addr");}
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->clr_n & 0xfeU))) {
        Verilated::overWidthError("clr_n");}
}
#endif  // VL_DEBUG
