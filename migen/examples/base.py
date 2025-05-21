from migen import *
from migen.fhdl import verilog

class nandGate(Module):

    def __init__(self):

        self.x1 = Signal(name="x1")
        self.x2 = Signal(name="x2")
        self.y = Signal(name="y")
        and_signal = Signal()

        self.comb += [
            and_signal.eq(self.x1 & self.x2),
            self.y.eq(~and_signal),
        ]

class syncMux(Module):

    def __init__(self):

        self.x1 = Signal(16, name="x1")
        self.x2 = Signal(16, name="x2")
        self.y = Signal(16, name="y")
        self.addr = Signal(name="addr")
        out_value = Signal(16)

        self.comb += If(self.addr, out_value.eq(self.x2)).Else(out_value.eq(self.x1))
        self.sync += self.y.eq(out_value)

if (__name__ == "__main__"):
    
    nand = nandGate()
    mux = syncMux()
    print(verilog.convert(nand, {nand.x1, nand.x2, nand.y}, name='nandGate'))
    # print(verilog.convert(mux, {mux.x1, mux.x2, mux.y, mux.addr}, name='syncMux'))