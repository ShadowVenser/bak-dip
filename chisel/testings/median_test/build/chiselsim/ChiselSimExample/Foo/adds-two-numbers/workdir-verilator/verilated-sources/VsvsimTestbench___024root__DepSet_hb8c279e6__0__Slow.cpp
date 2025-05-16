// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VsvsimTestbench.h for the primary calling header

#include "VsvsimTestbench__pch.h"
#include "VsvsimTestbench__Syms.h"
#include "VsvsimTestbench___024root.h"

void VsvsimTestbench___024root____Vdpiimwrap_svsimTestbench__DOT__initTestBenchScope_TOP(const VerilatedScope* __Vscopep, const char* __Vfilenamep, IData/*31:0*/ __Vlineno);

VL_ATTR_COLD void VsvsimTestbench___024root___eval_initial__TOP(VsvsimTestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VsvsimTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root___eval_initial__TOP\n"); );
    // Body
    VsvsimTestbench___024root____Vdpiimwrap_svsimTestbench__DOT__initTestBenchScope_TOP(
                                                                                (&(vlSymsp->__Vscope_svsimTestbench)), 
                                                                                "/home/venser/bak-dip/chisel/testings/median_test/build/chiselsim/ChiselSimExample/Foo/adds-two-numbers/primary-sources/../generated-sources/testbench.sv", 0x12U);
    vlSelf->svsimTestbench__DOT__simulationState = 1U;
    vlSelf->svsimTestbench__DOT__dut__DOT__unnamedblk1__DOT___RANDOM[0U] 
        = VL_RANDOM_I();
    vlSelf->svsimTestbench__DOT__dut__DOT__r = (0xffU 
                                                & vlSelf->svsimTestbench__DOT__dut__DOT__unnamedblk1__DOT___RANDOM
                                                [0U]);
}

void VsvsimTestbench___024root____Vdpiimwrap_svsimTestbench__DOT__simulation_final_TOP(const VerilatedScope* __Vscopep, const char* __Vfilenamep, IData/*31:0*/ __Vlineno);

VL_ATTR_COLD void VsvsimTestbench___024root___eval_final__TOP(VsvsimTestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VsvsimTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root___eval_final__TOP\n"); );
    // Body
    VsvsimTestbench___024root____Vdpiimwrap_svsimTestbench__DOT__simulation_final_TOP(
                                                                                (&(vlSymsp->__Vscope_svsimTestbench)), 
                                                                                "/home/venser/bak-dip/chisel/testings/median_test/build/chiselsim/ChiselSimExample/Foo/adds-two-numbers/primary-sources/../generated-sources/testbench.sv", 0x70U);
}
