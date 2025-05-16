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
    // DPI export at /home/venser/bak-dip/chisel/testings/median_test/build/chiselsim/ChiselSimExample/Bar/terminates-cleanly-before-11-cycles-have-elapsed/primary-sources/../generated-sources/testbench.sv:15:17
    extern void getBitWidthImpl_clock(int* value);
    // DPI export at /home/venser/bak-dip/chisel/testings/median_test/build/chiselsim/ChiselSimExample/Bar/terminates-cleanly-before-11-cycles-have-elapsed/primary-sources/../generated-sources/testbench.sv:32:17
    extern void getBitWidthImpl_reset(int* value);
    // DPI export at /home/venser/bak-dip/chisel/testings/median_test/build/chiselsim/ChiselSimExample/Bar/terminates-cleanly-before-11-cycles-have-elapsed/primary-sources/../generated-sources/testbench.sv:25:17
    extern void getBitsImpl_clock(svBitVecVal* value_clock);
    // DPI export at /home/venser/bak-dip/chisel/testings/median_test/build/chiselsim/ChiselSimExample/Bar/terminates-cleanly-before-11-cycles-have-elapsed/primary-sources/../generated-sources/testbench.sv:42:17
    extern void getBitsImpl_reset(svBitVecVal* value_reset);
    // DPI export at /home/venser/bak-dip/chisel/testings/median_test/build/chiselsim/ChiselSimExample/Bar/terminates-cleanly-before-11-cycles-have-elapsed/primary-sources/../generated-sources/testbench.sv:20:17
    extern void setBitsImpl_clock(const svBitVecVal* value_clock);
    // DPI export at /home/venser/bak-dip/chisel/testings/median_test/build/chiselsim/ChiselSimExample/Bar/terminates-cleanly-before-11-cycles-have-elapsed/primary-sources/../generated-sources/testbench.sv:37:17
    extern void setBitsImpl_reset(const svBitVecVal* value_reset);
    // DPI export at /home/venser/bak-dip/chisel/testings/median_test/build/chiselsim/ChiselSimExample/Bar/terminates-cleanly-before-11-cycles-have-elapsed/primary-sources/../generated-sources/testbench.sv:109:17
    extern void simulation_disableTrace(int* success);
    // DPI export at /home/venser/bak-dip/chisel/testings/median_test/build/chiselsim/ChiselSimExample/Bar/terminates-cleanly-before-11-cycles-have-elapsed/primary-sources/../generated-sources/testbench.sv:96:17
    extern void simulation_enableTrace(int* success);
    // DPI export at /home/venser/bak-dip/chisel/testings/median_test/build/chiselsim/ChiselSimExample/Bar/terminates-cleanly-before-11-cycles-have-elapsed/primary-sources/../generated-sources/testbench.sv:76:17
    extern void simulation_initializeTrace(const char* traceFilePath);

    // DPI IMPORTS
    // DPI import at /home/venser/bak-dip/chisel/testings/median_test/build/chiselsim/ChiselSimExample/Bar/terminates-cleanly-before-11-cycles-have-elapsed/primary-sources/../generated-sources/testbench.sv:10:40
    extern void initTestBenchScope();
    // DPI import at /home/venser/bak-dip/chisel/testings/median_test/build/chiselsim/ChiselSimExample/Bar/terminates-cleanly-before-11-cycles-have-elapsed/primary-sources/../generated-sources/testbench.sv:70:32
    extern void run_simulation(int timesteps, int* done);
    // DPI import at /home/venser/bak-dip/chisel/testings/median_test/build/chiselsim/ChiselSimExample/Bar/terminates-cleanly-before-11-cycles-have-elapsed/primary-sources/../generated-sources/testbench.sv:48:31
    extern int simulation_body();
    // DPI import at /home/venser/bak-dip/chisel/testings/median_test/build/chiselsim/ChiselSimExample/Bar/terminates-cleanly-before-11-cycles-have-elapsed/primary-sources/../generated-sources/testbench.sv:58:31
    extern int simulation_final();

#ifdef __cplusplus
}
#endif

#endif  // guard
