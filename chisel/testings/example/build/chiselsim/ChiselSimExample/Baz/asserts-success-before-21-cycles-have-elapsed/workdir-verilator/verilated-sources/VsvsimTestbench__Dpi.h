// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VSVSIMTESTBENCH__DPI_H_
#define VERILATED_VSVSIMTESTBENCH__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI EXPORTS
    // DPI export at /home/venser/bak-dip/chisel/testings/median_test/build/chiselsim/ChiselSimExample/Baz/asserts-success-before-21-cycles-have-elapsed/primary-sources/../generated-sources/testbench.sv:17:17
    extern void getBitWidthImpl_clock(int* value);
    // DPI export at /home/venser/bak-dip/chisel/testings/median_test/build/chiselsim/ChiselSimExample/Baz/asserts-success-before-21-cycles-have-elapsed/primary-sources/../generated-sources/testbench.sv:34:17
    extern void getBitWidthImpl_reset(int* value);
    // DPI export at /home/venser/bak-dip/chisel/testings/median_test/build/chiselsim/ChiselSimExample/Baz/asserts-success-before-21-cycles-have-elapsed/primary-sources/../generated-sources/testbench.sv:51:17
    extern void getBitWidthImpl_success(int* value);
    // DPI export at /home/venser/bak-dip/chisel/testings/median_test/build/chiselsim/ChiselSimExample/Baz/asserts-success-before-21-cycles-have-elapsed/primary-sources/../generated-sources/testbench.sv:27:17
    extern void getBitsImpl_clock(svBitVecVal* value_clock);
    // DPI export at /home/venser/bak-dip/chisel/testings/median_test/build/chiselsim/ChiselSimExample/Baz/asserts-success-before-21-cycles-have-elapsed/primary-sources/../generated-sources/testbench.sv:44:17
    extern void getBitsImpl_reset(svBitVecVal* value_reset);
    // DPI export at /home/venser/bak-dip/chisel/testings/median_test/build/chiselsim/ChiselSimExample/Baz/asserts-success-before-21-cycles-have-elapsed/primary-sources/../generated-sources/testbench.sv:56:17
    extern void getBitsImpl_success(svBitVecVal* value_success);
    // DPI export at /home/venser/bak-dip/chisel/testings/median_test/build/chiselsim/ChiselSimExample/Baz/asserts-success-before-21-cycles-have-elapsed/primary-sources/../generated-sources/testbench.sv:22:17
    extern void setBitsImpl_clock(const svBitVecVal* value_clock);
    // DPI export at /home/venser/bak-dip/chisel/testings/median_test/build/chiselsim/ChiselSimExample/Baz/asserts-success-before-21-cycles-have-elapsed/primary-sources/../generated-sources/testbench.sv:39:17
    extern void setBitsImpl_reset(const svBitVecVal* value_reset);
    // DPI export at /home/venser/bak-dip/chisel/testings/median_test/build/chiselsim/ChiselSimExample/Baz/asserts-success-before-21-cycles-have-elapsed/primary-sources/../generated-sources/testbench.sv:123:17
    extern void simulation_disableTrace(int* success);
    // DPI export at /home/venser/bak-dip/chisel/testings/median_test/build/chiselsim/ChiselSimExample/Baz/asserts-success-before-21-cycles-have-elapsed/primary-sources/../generated-sources/testbench.sv:110:17
    extern void simulation_enableTrace(int* success);
    // DPI export at /home/venser/bak-dip/chisel/testings/median_test/build/chiselsim/ChiselSimExample/Baz/asserts-success-before-21-cycles-have-elapsed/primary-sources/../generated-sources/testbench.sv:90:17
    extern void simulation_initializeTrace(const char* traceFilePath);

    // DPI IMPORTS
    // DPI import at /home/venser/bak-dip/chisel/testings/median_test/build/chiselsim/ChiselSimExample/Baz/asserts-success-before-21-cycles-have-elapsed/primary-sources/../generated-sources/testbench.sv:12:40
    extern void initTestBenchScope();
    // DPI import at /home/venser/bak-dip/chisel/testings/median_test/build/chiselsim/ChiselSimExample/Baz/asserts-success-before-21-cycles-have-elapsed/primary-sources/../generated-sources/testbench.sv:84:32
    extern void run_simulation(int timesteps, int* done);
    // DPI import at /home/venser/bak-dip/chisel/testings/median_test/build/chiselsim/ChiselSimExample/Baz/asserts-success-before-21-cycles-have-elapsed/primary-sources/../generated-sources/testbench.sv:62:31
    extern int simulation_body();
    // DPI import at /home/venser/bak-dip/chisel/testings/median_test/build/chiselsim/ChiselSimExample/Baz/asserts-success-before-21-cycles-have-elapsed/primary-sources/../generated-sources/testbench.sv:72:31
    extern int simulation_final();

#ifdef __cplusplus
}
#endif

#endif  // guard
