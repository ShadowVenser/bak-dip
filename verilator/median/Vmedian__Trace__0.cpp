// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vmedian__Syms.h"


void Vmedian___024root__trace_chg_0_sub_0(Vmedian___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vmedian___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmedian___024root__trace_chg_0\n"); );
    // Init
    Vmedian___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmedian___024root*>(voidSelf);
    Vmedian__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vmedian___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vmedian___024root__trace_chg_0_sub_0(Vmedian___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vmedian__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmedian___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->median__DOT__fc_0sel_0));
        bufp->chgBit(oldp+1,(vlSelf->median__DOT__fc_0sel_1));
        bufp->chgBit(oldp+2,(vlSelf->median__DOT__fc_0sel_2));
        bufp->chgCData(oldp+3,(vlSelf->median__DOT__fc_0sub_0),8);
        bufp->chgCData(oldp+4,(vlSelf->median__DOT__fc_0sub_1),8);
        bufp->chgCData(oldp+5,(vlSelf->median__DOT__fc_0sub_2),8);
        bufp->chgBit(oldp+6,(vlSelf->median__DOT__fc_1sel_0));
        bufp->chgBit(oldp+7,(vlSelf->median__DOT__fc_1sel_1));
        bufp->chgBit(oldp+8,(vlSelf->median__DOT__fc_1sel_2));
        bufp->chgCData(oldp+9,(vlSelf->median__DOT__fc_1sub_0),8);
        bufp->chgCData(oldp+10,(vlSelf->median__DOT__fc_1sub_1),8);
        bufp->chgCData(oldp+11,(vlSelf->median__DOT__fc_1sub_2),8);
        bufp->chgBit(oldp+12,(vlSelf->median__DOT__fc_2sel_0));
        bufp->chgBit(oldp+13,(vlSelf->median__DOT__fc_2sel_1));
        bufp->chgBit(oldp+14,(vlSelf->median__DOT__fc_2sel_2));
        bufp->chgCData(oldp+15,(vlSelf->median__DOT__fc_2sub_0),8);
        bufp->chgCData(oldp+16,(vlSelf->median__DOT__fc_2sub_1),8);
        bufp->chgCData(oldp+17,(vlSelf->median__DOT__fc_2sub_2),8);
        bufp->chgCData(oldp+18,(vlSelf->median__DOT__h0),8);
        bufp->chgCData(oldp+19,(vlSelf->median__DOT__h1),8);
        bufp->chgCData(oldp+20,(vlSelf->median__DOT__h2),8);
        bufp->chgCData(oldp+21,(vlSelf->median__DOT__l0),8);
        bufp->chgCData(oldp+22,(vlSelf->median__DOT__l1),8);
        bufp->chgCData(oldp+23,(vlSelf->median__DOT__l2),8);
        bufp->chgCData(oldp+24,(vlSelf->median__DOT__m0),8);
        bufp->chgCData(oldp+25,(vlSelf->median__DOT__m1),8);
        bufp->chgCData(oldp+26,(vlSelf->median__DOT__m2),8);
        bufp->chgCData(oldp+27,(vlSelf->median__DOT__sec_0),8);
        bufp->chgCData(oldp+28,(vlSelf->median__DOT__sec_1),8);
        bufp->chgCData(oldp+29,(vlSelf->median__DOT__sec_2),8);
        bufp->chgBit(oldp+30,(((IData)(vlSelf->median__DOT__l0) 
                               < (IData)(vlSelf->median__DOT__l1))));
        bufp->chgBit(oldp+31,(((IData)(vlSelf->median__DOT__shsub_1) 
                               > (IData)(vlSelf->median__DOT__l2))));
        bufp->chgCData(oldp+32,(vlSelf->median__DOT__shsub_1),8);
        bufp->chgBit(oldp+33,(((IData)(vlSelf->median__DOT__h0) 
                               > (IData)(vlSelf->median__DOT__h1))));
        bufp->chgBit(oldp+34,(((IData)(vlSelf->median__DOT__slsub_1) 
                               > (IData)(vlSelf->median__DOT__h2))));
        bufp->chgCData(oldp+35,(vlSelf->median__DOT__slsub_1),8);
        bufp->chgBit(oldp+36,(vlSelf->median__DOT__smsel_0));
        bufp->chgBit(oldp+37,(((IData)(vlSelf->median__DOT__smsub_1) 
                               > (IData)(vlSelf->median__DOT__m2))));
        bufp->chgBit(oldp+38,(((IData)(vlSelf->median__DOT__smsub_0) 
                               > (IData)(vlSelf->median__DOT__smsub_2))));
        bufp->chgCData(oldp+39,(vlSelf->median__DOT__smsub_0),8);
        bufp->chgCData(oldp+40,(vlSelf->median__DOT__smsub_1),8);
        bufp->chgCData(oldp+41,(vlSelf->median__DOT__smsub_2),8);
        bufp->chgBit(oldp+42,(vlSelf->median__DOT__tmsel_0));
        bufp->chgBit(oldp+43,(((IData)(vlSelf->median__DOT__tmsub_1) 
                               > (IData)(vlSelf->median__DOT__sec_2))));
        bufp->chgBit(oldp+44,(((IData)(vlSelf->median__DOT__tmsub_0) 
                               > (IData)(vlSelf->median__DOT__tmsub_2))));
        bufp->chgCData(oldp+45,(vlSelf->median__DOT__tmsub_0),8);
        bufp->chgCData(oldp+46,(vlSelf->median__DOT__tmsub_1),8);
        bufp->chgCData(oldp+47,(vlSelf->median__DOT__tmsub_2),8);
    }
    bufp->chgCData(oldp+48,(vlSelf->arr_0),8);
    bufp->chgCData(oldp+49,(vlSelf->arr_1),8);
    bufp->chgCData(oldp+50,(vlSelf->arr_2),8);
    bufp->chgCData(oldp+51,(vlSelf->arr_3),8);
    bufp->chgCData(oldp+52,(vlSelf->arr_4),8);
    bufp->chgCData(oldp+53,(vlSelf->arr_5),8);
    bufp->chgCData(oldp+54,(vlSelf->arr_6),8);
    bufp->chgCData(oldp+55,(vlSelf->arr_7),8);
    bufp->chgCData(oldp+56,(vlSelf->arr_8),8);
    bufp->chgCData(oldp+57,(vlSelf->med),8);
}

void Vmedian___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmedian___024root__trace_cleanup\n"); );
    // Init
    Vmedian___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmedian___024root*>(voidSelf);
    Vmedian__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
