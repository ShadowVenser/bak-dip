
TOPLEVEL_LANG = verilog
VERILOG_SOURCES = nandGate.sv
TOPLEVEL = nandGate
MODULE = nand_tb

SIM = verilator
COCOTB_SIM = 1

EXTRA_ARGS += --trace-fst --trace-structs

include $(shell cocotb-config --makefiles)/Makefile.sim