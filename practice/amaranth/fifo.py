from amaranth import *
from amaranth.back import verilog
from math import log2, ceil

class fifo(Elaboratable):

    def __init__(self, width=8, depth=9):
        self.width = width
        self.depth = depth
        
        self.head = Signal(unsigned(width))
        self.push = Signal(init=0)
        self.pop = Signal(init=0)
        self.wr_data = Signal(unsigned(width))
        self.rd_data = Signal(unsigned(width))
        self.clk = Signal()
        self.clr_n = Signal(init=1)

    def elaborate(self, _):
        f = Module()

        f.domains.sync = ClockDomain("sync")
        f.d.comb += [
            ClockSignal("sync").eq(self.clk),
            ResetSignal("sync").eq(~self.clr_n)
        ]

        f.submodules.memory = memory = Memory(width=self.width, depth=self.depth, init=0)
        w_addr = Signal(unsigned(ceil(log2(self.depth))))
        r_addr = Signal(unsigned(ceil(log2(self.depth))))

        bypass_port = memory.read_port(domain="comb")

        f.d.comb += [
            bypass_port.addr.eq(0),
            self.head.eq(bypass_port.data)
        ]

        wr_port = memory.write_port(domain="sync")
        
        f.d.comb += wr_port.en.eq(self.push)
        f.d.sync += wr_port.addr.eq(w_addr)
        with f.If(self.push):
            with f.If(w_addr == (self.depth-1)):
                 f.d.sync += w_addr.eq(0),
            with f.Else():
                 f.d.sync += w_addr.eq(w_addr + 1),
            f.d.comb += [
                wr_port.data.eq(self.wr_data)
            ]
        
        rd_port = memory.read_port(domain="sync")
        f.d.comb += rd_port.en.eq(self.pop)
        f.d.sync += rd_port.addr.eq(r_addr)
        with f.If(self.pop):
            with f.If(r_addr == (self.depth-1)):
                 f.d.sync += r_addr.eq(0)
            with f.Else():
                 f.d.sync += r_addr.eq(r_addr + 1)
        f.d.comb += [
            self.rd_data.eq(rd_port.data),
        ]

        with f.If(~self.clr_n):
            f.d.sync += [
                wr_port.addr.eq(0),
                rd_port.addr.eq(0),
            ]
        
        return f
        
    
if __name__ == "__main__":
    dut = fifo()

    # Генерация без комментариев
    v = verilog.convert(dut, 
                        ports=[dut.pop, dut.push, dut.wr_data,
                               dut.rd_data, dut.clk, dut.clr_n],
                        name="fifo", 
                        emit_src=False,
                        )
    print(v)