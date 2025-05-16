// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VsvsimTestbench.h for the primary calling header

#include "VsvsimTestbench__pch.h"
#include "VsvsimTestbench___024root.h"

void VsvsimTestbench___024root___act_sequent__TOP__0(VsvsimTestbench___024root* vlSelf);

void VsvsimTestbench___024root___eval_act(VsvsimTestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VsvsimTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root___eval_act\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VsvsimTestbench___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void VsvsimTestbench___024root___nba_sequent__TOP__0(VsvsimTestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VsvsimTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root___nba_sequent__TOP__0\n"); );
    // Body
    if (VL_UNLIKELY(((~ (IData)(vlSelf->svsimTestbench__DOT__reset)) 
                     & (9U == (IData)(vlSelf->svsimTestbench__DOT__dut__DOT__done_c_value))))) {
        VL_FINISH_MT("/home/venser/bak-dip/chisel/testings/median_test/build/chiselsim/ChiselSimExample/Bar/terminates-cleanly-before-11-cycles-have-elapsed/primary-sources/../primary-sources/verification/Bar_Verification.sv", 20, "");
    }
    vlSelf->svsimTestbench__DOT__dut__DOT__done_c_value 
        = ((IData)(vlSelf->svsimTestbench__DOT__reset)
            ? 0U : ((IData)(vlSelf->svsimTestbench__DOT__dut__DOT__done)
                     ? 0U : (0xfU & ((IData)(1U) + (IData)(vlSelf->svsimTestbench__DOT__dut__DOT__done_c_value)))));
    vlSelf->svsimTestbench__DOT__dut__DOT__done = (9U 
                                                   == (IData)(vlSelf->svsimTestbench__DOT__dut__DOT__done_c_value));
}

void VsvsimTestbench___024root___eval_nba(VsvsimTestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VsvsimTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root___eval_nba\n"); );
    // Body
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VsvsimTestbench___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void VsvsimTestbench___024root___eval_triggers__act(VsvsimTestbench___024root* vlSelf);

bool VsvsimTestbench___024root___eval_phase__act(VsvsimTestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VsvsimTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VsvsimTestbench___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VsvsimTestbench___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VsvsimTestbench___024root___eval_phase__nba(VsvsimTestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VsvsimTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VsvsimTestbench___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VsvsimTestbench___024root___dump_triggers__nba(VsvsimTestbench___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VsvsimTestbench___024root___dump_triggers__act(VsvsimTestbench___024root* vlSelf);
#endif  // VL_DEBUG

void VsvsimTestbench___024root___eval(VsvsimTestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VsvsimTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VsvsimTestbench___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/home/venser/bak-dip/chisel/testings/median_test/build/chiselsim/ChiselSimExample/Bar/terminates-cleanly-before-11-cycles-have-elapsed/primary-sources/../generated-sources/testbench.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VsvsimTestbench___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/home/venser/bak-dip/chisel/testings/median_test/build/chiselsim/ChiselSimExample/Bar/terminates-cleanly-before-11-cycles-have-elapsed/primary-sources/../generated-sources/testbench.sv", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VsvsimTestbench___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VsvsimTestbench___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VsvsimTestbench___024root___eval_debug_assertions(VsvsimTestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VsvsimTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
