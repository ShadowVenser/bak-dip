// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VnandGate__Syms.h"


VL_ATTR_COLD void VnandGate___024root__trace_init_sub__TOP__0(VnandGate___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VnandGate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VnandGate___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,0,"x1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"x2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("nandGate", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"x1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"x2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
}

VL_ATTR_COLD void VnandGate___024root__trace_init_top(VnandGate___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VnandGate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VnandGate___024root__trace_init_top\n"); );
    // Body
    VnandGate___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VnandGate___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VnandGate___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VnandGate___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VnandGate___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VnandGate___024root__trace_register(VnandGate___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VnandGate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VnandGate___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&VnandGate___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&VnandGate___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&VnandGate___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&VnandGate___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VnandGate___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VnandGate___024root__trace_const_0\n"); );
    // Init
    VnandGate___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VnandGate___024root*>(voidSelf);
    VnandGate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void VnandGate___024root__trace_full_0_sub_0(VnandGate___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VnandGate___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VnandGate___024root__trace_full_0\n"); );
    // Init
    VnandGate___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VnandGate___024root*>(voidSelf);
    VnandGate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VnandGate___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VnandGate___024root__trace_full_0_sub_0(VnandGate___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VnandGate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VnandGate___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->x1));
    bufp->fullBit(oldp+2,(vlSelf->x2));
    bufp->fullBit(oldp+3,(vlSelf->y));
}
