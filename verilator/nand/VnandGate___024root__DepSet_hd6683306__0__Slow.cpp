// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VnandGate.h for the primary calling header

#include "VnandGate__pch.h"
#include "VnandGate__Syms.h"
#include "VnandGate___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VnandGate___024root___dump_triggers__stl(VnandGate___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VnandGate___024root___eval_triggers__stl(VnandGate___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VnandGate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VnandGate___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VnandGate___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
