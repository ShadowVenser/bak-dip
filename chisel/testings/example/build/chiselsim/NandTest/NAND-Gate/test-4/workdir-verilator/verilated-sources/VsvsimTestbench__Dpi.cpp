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

#ifndef VL_DPIDECL_getBitWidthImpl_x1_
#define VL_DPIDECL_getBitWidthImpl_x1_
void getBitWidthImpl_x1(int* value) {
    // DPI export at /home/venser/bak-dip/chisel/testings/example/build/chiselsim/NandTest/NAND-Gate/test-4/primary-sources/../generated-sources/testbench.sv:17:17
    return VsvsimTestbench::getBitWidthImpl_x1(value);
}
#endif

#ifndef VL_DPIDECL_getBitWidthImpl_x2_
#define VL_DPIDECL_getBitWidthImpl_x2_
void getBitWidthImpl_x2(int* value) {
    // DPI export at /home/venser/bak-dip/chisel/testings/example/build/chiselsim/NandTest/NAND-Gate/test-4/primary-sources/../generated-sources/testbench.sv:34:17
    return VsvsimTestbench::getBitWidthImpl_x2(value);
}
#endif

#ifndef VL_DPIDECL_getBitWidthImpl_y_
#define VL_DPIDECL_getBitWidthImpl_y_
void getBitWidthImpl_y(int* value) {
    // DPI export at /home/venser/bak-dip/chisel/testings/example/build/chiselsim/NandTest/NAND-Gate/test-4/primary-sources/../generated-sources/testbench.sv:51:17
    return VsvsimTestbench::getBitWidthImpl_y(value);
}
#endif

#ifndef VL_DPIDECL_getBitsImpl_x1_
#define VL_DPIDECL_getBitsImpl_x1_
void getBitsImpl_x1(svBitVecVal* value_x1) {
    // DPI export at /home/venser/bak-dip/chisel/testings/example/build/chiselsim/NandTest/NAND-Gate/test-4/primary-sources/../generated-sources/testbench.sv:27:17
    return VsvsimTestbench::getBitsImpl_x1(value_x1);
}
#endif

#ifndef VL_DPIDECL_getBitsImpl_x2_
#define VL_DPIDECL_getBitsImpl_x2_
void getBitsImpl_x2(svBitVecVal* value_x2) {
    // DPI export at /home/venser/bak-dip/chisel/testings/example/build/chiselsim/NandTest/NAND-Gate/test-4/primary-sources/../generated-sources/testbench.sv:44:17
    return VsvsimTestbench::getBitsImpl_x2(value_x2);
}
#endif

#ifndef VL_DPIDECL_getBitsImpl_y_
#define VL_DPIDECL_getBitsImpl_y_
void getBitsImpl_y(svBitVecVal* value_y) {
    // DPI export at /home/venser/bak-dip/chisel/testings/example/build/chiselsim/NandTest/NAND-Gate/test-4/primary-sources/../generated-sources/testbench.sv:56:17
    return VsvsimTestbench::getBitsImpl_y(value_y);
}
#endif

#ifndef VL_DPIDECL_setBitsImpl_x1_
#define VL_DPIDECL_setBitsImpl_x1_
void setBitsImpl_x1(const svBitVecVal* value_x1) {
    // DPI export at /home/venser/bak-dip/chisel/testings/example/build/chiselsim/NandTest/NAND-Gate/test-4/primary-sources/../generated-sources/testbench.sv:22:17
    return VsvsimTestbench::setBitsImpl_x1(value_x1);
}
#endif

#ifndef VL_DPIDECL_setBitsImpl_x2_
#define VL_DPIDECL_setBitsImpl_x2_
void setBitsImpl_x2(const svBitVecVal* value_x2) {
    // DPI export at /home/venser/bak-dip/chisel/testings/example/build/chiselsim/NandTest/NAND-Gate/test-4/primary-sources/../generated-sources/testbench.sv:39:17
    return VsvsimTestbench::setBitsImpl_x2(value_x2);
}
#endif

#ifndef VL_DPIDECL_simulation_disableTrace_
#define VL_DPIDECL_simulation_disableTrace_
void simulation_disableTrace(int* success) {
    // DPI export at /home/venser/bak-dip/chisel/testings/example/build/chiselsim/NandTest/NAND-Gate/test-4/primary-sources/../generated-sources/testbench.sv:123:17
    return VsvsimTestbench::simulation_disableTrace(success);
}
#endif

#ifndef VL_DPIDECL_simulation_enableTrace_
#define VL_DPIDECL_simulation_enableTrace_
void simulation_enableTrace(int* success) {
    // DPI export at /home/venser/bak-dip/chisel/testings/example/build/chiselsim/NandTest/NAND-Gate/test-4/primary-sources/../generated-sources/testbench.sv:110:17
    return VsvsimTestbench::simulation_enableTrace(success);
}
#endif

#ifndef VL_DPIDECL_simulation_initializeTrace_
#define VL_DPIDECL_simulation_initializeTrace_
void simulation_initializeTrace(const char* traceFilePath) {
    // DPI export at /home/venser/bak-dip/chisel/testings/example/build/chiselsim/NandTest/NAND-Gate/test-4/primary-sources/../generated-sources/testbench.sv:90:17
    return VsvsimTestbench::simulation_initializeTrace(traceFilePath);
}
#endif

