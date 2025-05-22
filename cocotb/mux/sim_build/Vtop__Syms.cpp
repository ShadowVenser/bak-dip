// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtop__pch.h"
#include "Vtop.h"
#include "Vtop___024root.h"

// FUNCTIONS
Vtop__Syms::~Vtop__Syms()
{

    // Tear down scope hierarchy
    __Vhier.remove(0, &__Vscope_syncMux);

}

Vtop__Syms::Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_TOP.configure(this, name(), "TOP", "TOP", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_syncMux.configure(this, name(), "syncMux", "syncMux", -9, VerilatedScope::SCOPE_MODULE);

    // Set up scope hierarchy
    __Vhier.add(0, &__Vscope_syncMux);

    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_TOP.varInsert(__Vfinal,"addr", &(TOP.addr), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"clk", &(TOP.clk), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"clr_n", &(TOP.clr_n), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"x1", &(TOP.x1), false, VLVT_UINT16,VLVD_IN|VLVF_PUB_RW,1 ,15,0);
        __Vscope_TOP.varInsert(__Vfinal,"x2", &(TOP.x2), false, VLVT_UINT16,VLVD_IN|VLVF_PUB_RW,1 ,15,0);
        __Vscope_TOP.varInsert(__Vfinal,"y", &(TOP.y), false, VLVT_UINT16,VLVD_OUT|VLVF_PUB_RW,1 ,15,0);
        __Vscope_syncMux.varInsert(__Vfinal,"\\$1 ", &(TOP.syncMux__DOT____0241), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,15,0);
        __Vscope_syncMux.varInsert(__Vfinal,"addr", &(TOP.syncMux__DOT__addr), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_syncMux.varInsert(__Vfinal,"clk", &(TOP.syncMux__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_syncMux.varInsert(__Vfinal,"\\clk$6 ", &(TOP.syncMux__DOT__clk__0246), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_syncMux.varInsert(__Vfinal,"clr_n", &(TOP.syncMux__DOT__clr_n), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_syncMux.varInsert(__Vfinal,"rst", &(TOP.syncMux__DOT__rst), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_syncMux.varInsert(__Vfinal,"x1", &(TOP.syncMux__DOT__x1), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,15,0);
        __Vscope_syncMux.varInsert(__Vfinal,"x2", &(TOP.syncMux__DOT__x2), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,15,0);
        __Vscope_syncMux.varInsert(__Vfinal,"y", &(TOP.syncMux__DOT__y), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,15,0);
    }
}
