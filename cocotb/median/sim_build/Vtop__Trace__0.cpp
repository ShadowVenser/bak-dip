// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgCData(oldp+0,(vlSelf->arr_0),8);
    bufp->chgCData(oldp+1,(vlSelf->arr_1),8);
    bufp->chgCData(oldp+2,(vlSelf->arr_2),8);
    bufp->chgCData(oldp+3,(vlSelf->arr_3),8);
    bufp->chgCData(oldp+4,(vlSelf->arr_4),8);
    bufp->chgCData(oldp+5,(vlSelf->arr_5),8);
    bufp->chgCData(oldp+6,(vlSelf->arr_6),8);
    bufp->chgCData(oldp+7,(vlSelf->arr_7),8);
    bufp->chgCData(oldp+8,(vlSelf->arr_8),8);
    bufp->chgCData(oldp+9,(vlSelf->med),8);
    bufp->chgCData(oldp+10,(vlSelf->median__DOT__arr_0),8);
    bufp->chgCData(oldp+11,(vlSelf->median__DOT__arr_1),8);
    bufp->chgCData(oldp+12,(vlSelf->median__DOT__arr_2),8);
    bufp->chgCData(oldp+13,(vlSelf->median__DOT__arr_3),8);
    bufp->chgCData(oldp+14,(vlSelf->median__DOT__arr_4),8);
    bufp->chgCData(oldp+15,(vlSelf->median__DOT__arr_5),8);
    bufp->chgCData(oldp+16,(vlSelf->median__DOT__arr_6),8);
    bufp->chgCData(oldp+17,(vlSelf->median__DOT__arr_7),8);
    bufp->chgCData(oldp+18,(vlSelf->median__DOT__arr_8),8);
    bufp->chgBit(oldp+19,(vlSelf->median__DOT__fc_0sel_0));
    bufp->chgBit(oldp+20,(vlSelf->median__DOT__fc_0sel_1));
    bufp->chgBit(oldp+21,(vlSelf->median__DOT__fc_0sel_2));
    bufp->chgCData(oldp+22,(vlSelf->median__DOT__fc_0sub_0),8);
    bufp->chgCData(oldp+23,(vlSelf->median__DOT__fc_0sub_1),8);
    bufp->chgCData(oldp+24,(vlSelf->median__DOT__fc_0sub_2),8);
    bufp->chgBit(oldp+25,(vlSelf->median__DOT__fc_1sel_0));
    bufp->chgBit(oldp+26,(vlSelf->median__DOT__fc_1sel_1));
    bufp->chgBit(oldp+27,(vlSelf->median__DOT__fc_1sel_2));
    bufp->chgCData(oldp+28,(vlSelf->median__DOT__fc_1sub_0),8);
    bufp->chgCData(oldp+29,(vlSelf->median__DOT__fc_1sub_1),8);
    bufp->chgCData(oldp+30,(vlSelf->median__DOT__fc_1sub_2),8);
    bufp->chgBit(oldp+31,(vlSelf->median__DOT__fc_2sel_0));
    bufp->chgBit(oldp+32,(vlSelf->median__DOT__fc_2sel_1));
    bufp->chgBit(oldp+33,(vlSelf->median__DOT__fc_2sel_2));
    bufp->chgCData(oldp+34,(vlSelf->median__DOT__fc_2sub_0),8);
    bufp->chgCData(oldp+35,(vlSelf->median__DOT__fc_2sub_1),8);
    bufp->chgCData(oldp+36,(vlSelf->median__DOT__fc_2sub_2),8);
    bufp->chgCData(oldp+37,(vlSelf->median__DOT__h0),8);
    bufp->chgCData(oldp+38,(vlSelf->median__DOT__h1),8);
    bufp->chgCData(oldp+39,(vlSelf->median__DOT__h2),8);
    bufp->chgCData(oldp+40,(vlSelf->median__DOT__l0),8);
    bufp->chgCData(oldp+41,(vlSelf->median__DOT__l1),8);
    bufp->chgCData(oldp+42,(vlSelf->median__DOT__l2),8);
    bufp->chgCData(oldp+43,(vlSelf->median__DOT__m0),8);
    bufp->chgCData(oldp+44,(vlSelf->median__DOT__m1),8);
    bufp->chgCData(oldp+45,(vlSelf->median__DOT__m2),8);
    bufp->chgCData(oldp+46,(vlSelf->median__DOT__med),8);
    bufp->chgCData(oldp+47,(vlSelf->median__DOT__sec_0),8);
    bufp->chgCData(oldp+48,(vlSelf->median__DOT__sec_1),8);
    bufp->chgCData(oldp+49,(vlSelf->median__DOT__sec_2),8);
    bufp->chgBit(oldp+50,(vlSelf->median__DOT__shsel_0));
    bufp->chgBit(oldp+51,(vlSelf->median__DOT__shsel_1));
    bufp->chgCData(oldp+52,(vlSelf->median__DOT__shsub_1),8);
    bufp->chgBit(oldp+53,(vlSelf->median__DOT__slsel_0));
    bufp->chgBit(oldp+54,(vlSelf->median__DOT__slsel_1));
    bufp->chgCData(oldp+55,(vlSelf->median__DOT__slsub_1),8);
    bufp->chgBit(oldp+56,(vlSelf->median__DOT__smsel_0));
    bufp->chgBit(oldp+57,(vlSelf->median__DOT__smsel_1));
    bufp->chgBit(oldp+58,(vlSelf->median__DOT__smsel_2));
    bufp->chgCData(oldp+59,(vlSelf->median__DOT__smsub_0),8);
    bufp->chgCData(oldp+60,(vlSelf->median__DOT__smsub_1),8);
    bufp->chgCData(oldp+61,(vlSelf->median__DOT__smsub_2),8);
    bufp->chgBit(oldp+62,(vlSelf->median__DOT__tmsel_0));
    bufp->chgBit(oldp+63,(vlSelf->median__DOT__tmsel_1));
    bufp->chgBit(oldp+64,(vlSelf->median__DOT__tmsel_2));
    bufp->chgCData(oldp+65,(vlSelf->median__DOT__tmsub_0),8);
    bufp->chgCData(oldp+66,(vlSelf->median__DOT__tmsub_1),8);
    bufp->chgCData(oldp+67,(vlSelf->median__DOT__tmsub_2),8);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
