from amaranth.lib import wiring
from amaranth.lib.wiring import In, Out
from amaranth import *
from amaranth.back import verilog

class nandGate(wiring.Component):

    x1: In(1, init=0) # type: ignore
    x2: In(1, init=0) # type: ignore

    y: Out(1) # type: ignore

    def elaborate(self, _): #_ is platform
        dut = Module()
        dut.d.comb += self.y.eq(~(self.x1 & self.x2))

        return dut

class syncMux(wiring.Component):

    x1: In(16, init=0) # type: ignore
    x2: In(16, init=0) # type: ignore
    addr: In(1, init=0) # type: ignore
    clk: In(1, init=0) # type: ignore
    clr_n: In(1, init=1) # type: ignore

    y: Out(16, init=0) # type: ignore

    def elaborate(self, _): #_ is platform
        dut = Module()
        dut.domains.sync = ClockDomain("sync", async_reset=True)

        dut.d.comb += [
            ClockSignal("sync").eq(self.clk),
            ResetSignal("sync").eq(~self.clr_n)
        ]

        dut.d.sync += self.y.eq(Mux(self.addr, self.x2, self.x1))

        return dut

if __name__ == "__main__":
    nand = nandGate()
    mux = syncMux()

    # Генерация без комментариев
    v = verilog.convert(nand, 
                        name="nandGate", 
                        emit_src=False,
                        )
    print(v)
    v = verilog.convert(mux, 
                        name="syncMux", 
                        emit_src=False,
                        )
    print(v)
