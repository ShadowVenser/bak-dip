// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VSVSIMTESTBENCH_H_
#define VERILATED_VSVSIMTESTBENCH_H_  // guard

#include "verilated.h"
#include "svdpi.h"

class VsvsimTestbench__Syms;
class VsvsimTestbench___024root;

// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) VsvsimTestbench VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    VsvsimTestbench__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    VsvsimTestbench___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit VsvsimTestbench(VerilatedContext* contextp, const char* name = "TOP");
    explicit VsvsimTestbench(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~VsvsimTestbench();
  private:
    VL_UNCOPYABLE(VsvsimTestbench);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    /// DPI Export functions
    static void getBitWidthImpl_arr_0_0(int* value);
    static void getBitWidthImpl_arr_0_1(int* value);
    static void getBitWidthImpl_arr_0_2(int* value);
    static void getBitWidthImpl_arr_1_0(int* value);
    static void getBitWidthImpl_arr_1_1(int* value);
    static void getBitWidthImpl_arr_1_2(int* value);
    static void getBitWidthImpl_arr_2_0(int* value);
    static void getBitWidthImpl_arr_2_1(int* value);
    static void getBitWidthImpl_arr_2_2(int* value);
    static void getBitWidthImpl_med(int* value);
    static void getBitsImpl_arr_0_0(svBitVecVal* value_arr_0_0);
    static void getBitsImpl_arr_0_1(svBitVecVal* value_arr_0_1);
    static void getBitsImpl_arr_0_2(svBitVecVal* value_arr_0_2);
    static void getBitsImpl_arr_1_0(svBitVecVal* value_arr_1_0);
    static void getBitsImpl_arr_1_1(svBitVecVal* value_arr_1_1);
    static void getBitsImpl_arr_1_2(svBitVecVal* value_arr_1_2);
    static void getBitsImpl_arr_2_0(svBitVecVal* value_arr_2_0);
    static void getBitsImpl_arr_2_1(svBitVecVal* value_arr_2_1);
    static void getBitsImpl_arr_2_2(svBitVecVal* value_arr_2_2);
    static void getBitsImpl_med(svBitVecVal* value_med);
    static void setBitsImpl_arr_0_0(const svBitVecVal* value_arr_0_0);
    static void setBitsImpl_arr_0_1(const svBitVecVal* value_arr_0_1);
    static void setBitsImpl_arr_0_2(const svBitVecVal* value_arr_0_2);
    static void setBitsImpl_arr_1_0(const svBitVecVal* value_arr_1_0);
    static void setBitsImpl_arr_1_1(const svBitVecVal* value_arr_1_1);
    static void setBitsImpl_arr_1_2(const svBitVecVal* value_arr_1_2);
    static void setBitsImpl_arr_2_0(const svBitVecVal* value_arr_2_0);
    static void setBitsImpl_arr_2_1(const svBitVecVal* value_arr_2_1);
    static void setBitsImpl_arr_2_2(const svBitVecVal* value_arr_2_2);
    static void simulation_disableTrace(int* success);
    static void simulation_enableTrace(int* success);
    static void simulation_initializeTrace(const char* traceFilePath);

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    /// Prepare for cloning the model at the process level (e.g. fork in Linux)
    /// Release necessary resources. Called before cloning.
    void prepareClone() const;
    /// Re-init after cloning the model at the process level (e.g. fork in Linux)
    /// Re-allocate necessary resources. Called after cloning.
    void atClone() const;
};

#endif  // guard
