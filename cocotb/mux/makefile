
TOPLEVEL_LANG = verilog
VERILOG_SOURCES = syncMux.sv
TOPLEVEL = syncMux
MODULE = mux_tb

SIM = verilator
COCOTB_SIM = 1

EXTRA_ARGS += --trace-fst --trace-structs

include $(shell cocotb-config --makefiles)/Makefile.sim
