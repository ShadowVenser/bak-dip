// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Implementation of DPI export functions.
//
// Verilator compiles this file in when DPI functions are used.
// If you have multiple Verilated designs with the same DPI exported
// function names, you will get multiple definition link errors from here.
// This is an unfortunate result of the DPI specification.
// To solve this, either
//    1. Call VsvsimTestbench::{export_function} instead,
//       and do not even bother to compile this file
// or 2. Compile all __Dpi.cpp files in the same compiler run,
//       and #ifdefs already inserted here will sort everything out.

#include "VsvsimTestbench__Dpi.h"
#include "VsvsimTestbench.h"

#ifndef VL_DPIDECL_getBitWidthImpl_clock_
#define VL_DPIDECL_getBitWidthImpl_clock_
void getBitWidthImpl_clock(int* value) {
    // DPI export at /home/venser/bak-dip/chisel/testings/median_test/build/chiselsim/ChiselSimExample/Baz/asserts-success-before-21-cycles-have-elapsed/primary-sources/../generated-sources/testbench.sv:17:17
    return VsvsimTestbench::getBitWidthImpl_clock(value);
}
#endif

#ifndef VL_DPIDECL_getBitWidthImpl_reset_
#define VL_DPIDECL_getBitWidthImpl_reset_
void getBitWidthImpl_reset(int* value) {
    // DPI export at /home/venser/bak-dip/chisel/testings/median_test/build/chiselsim/ChiselSimExample/Baz/asserts-success-before-21-cycles-have-elapsed/primary-sources/../generated-sources/testbench.sv:34:17
    return VsvsimTestbench::getBitWidthImpl_reset(value);
}
#endif

#ifndef VL_DPIDECL_getBitWidthImpl_success_
#define VL_DPIDECL_getBitWidthImpl_success_
void getBitWidthImpl_success(int* value) {
    // DPI export at /home/venser/bak-dip/chisel/testings/median_test/build/chiselsim/ChiselSimExample/Baz/asserts-success-before-21-cycles-have-elapsed/primary-sources/../generated-sources/testbench.sv:51:17
    return VsvsimTestbench::getBitWidthImpl_success(value);
}
#endif

#ifndef VL_DPIDECL_getBitsImpl_clock_
#define VL_DPIDECL_getBitsImpl_clock_
void getBitsImpl_clock(svBitVecVal* value_clock) {
    // DPI export at /home/venser/bak-dip/chisel/testings/median_test/build/chiselsim/ChiselSimExample/Baz/asserts-success-before-21-cycles-have-elapsed/primary-sources/../generated-sources/testbench.sv:27:17
    return VsvsimTestbench::getBitsImpl_clock(value_clock);
}
#endif

#ifndef VL_DPIDECL_getBitsImpl_reset_
#define VL_DPIDECL_getBitsImpl_reset_
void getBitsImpl_reset(svBitVecVal* value_reset) {
    // DPI export at /home/venser/bak-dip/chisel/testings/median_test/build/chiselsim/ChiselSimExample/Baz/asserts-success-before-21-cycles-have-elapsed/primary-sources/../generated-sources/testbench.sv:44:17
    return VsvsimTestbench::getBitsImpl_reset(value_reset);
}
#endif

#ifndef VL_DPIDECL_getBitsImpl_success_
#define VL_DPIDECL_getBitsImpl_success_
void getBitsImpl_success(svBitVecVal* value_success) {
    // DPI export at /home/venser/bak-dip/chisel/testings/median_test/build/chiselsim/ChiselSimExample/Baz/asserts-success-before-21-cycles-have-elapsed/primary-sources/../generated-sources/testbench.sv:56:17
    return VsvsimTestbench::getBitsImpl_success(value_success);
}
#endif

#ifndef VL_DPIDECL_setBitsImpl_clock_
#define VL_DPIDECL_setBitsImpl_clock_
void setBitsImpl_clock(const svBitVecVal* value_clock) {
    // DPI export at /home/venser/bak-dip/chisel/testings/median_test/build/chiselsim/ChiselSimExample/Baz/asserts-success-before-21-cycles-have-elapsed/primary-sources/../generated-sources/testbench.sv:22:17
    return VsvsimTestbench::setBitsImpl_clock(value_clock);
}
#endif

#ifndef VL_DPIDECL_setBitsImpl_reset_
#define VL_DPIDECL_setBitsImpl_reset_
void setBitsImpl_reset(const svBitVecVal* value_reset) {
    // DPI export at /home/venser/bak-dip/chisel/testings/median_test/build/chiselsim/ChiselSimExample/Baz/asserts-success-before-21-cycles-have-elapsed/primary-sources/../generated-sources/testbench.sv:39:17
    return VsvsimTestbench::setBitsImpl_reset(value_reset);
}
#endif

#ifndef VL_DPIDECL_simulation_disableTrace_
#define VL_DPIDECL_simulation_disableTrace_
void simulation_disableTrace(int* success) {
    // DPI export at /home/venser/bak-dip/chisel/testings/median_test/build/chiselsim/ChiselSimExample/Baz/asserts-success-before-21-cycles-have-elapsed/primary-sources/../generated-sources/testbench.sv:123:17
    return VsvsimTestbench::simulation_disableTrace(success);
}
#endif

#ifndef VL_DPIDECL_simulation_enableTrace_
#define VL_DPIDECL_simulation_enableTrace_
void simulation_enableTrace(int* success) {
    // DPI export at /home/venser/bak-dip/chisel/testings/median_test/build/chiselsim/ChiselSimExample/Baz/asserts-success-before-21-cycles-have-elapsed/primary-sources/../generated-sources/testbench.sv:110:17
    return VsvsimTestbench::simulation_enableTrace(success);
}
#endif

#ifndef VL_DPIDECL_simulation_initializeTrace_
#define VL_DPIDECL_simulation_initializeTrace_
void simulation_initializeTrace(const char* traceFilePath) {
    // DPI export at /home/venser/bak-dip/chisel/testings/median_test/build/chiselsim/ChiselSimExample/Baz/asserts-success-before-21-cycles-have-elapsed/primary-sources/../generated-sources/testbench.sv:90:17
    return VsvsimTestbench::simulation_initializeTrace(traceFilePath);
}
#endif

