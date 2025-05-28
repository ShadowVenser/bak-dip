from amaranth.lib import wiring
from amaranth.lib.wiring import In, Out
from amaranth import *
from amaranth.back import verilog
from fifo import fifo
from math import log2, ceil
from functools import reduce

def generateClass(width=8, size=3):

    class syncMedian(wiring.Component):

        clk: In(1, init=0) # type: ignore
        clr_n: In(1, init=1) # type: ignore
        arr: In(width*size*size, init =0) #type: ignore
        en_write: In(1, init=0) # type:ignore
        
        med: Out(width, init=0) # type: ignore
        in_work_n: Out(1, init=1) # type: ignore

        def elaborate(self, _): #_ is platform
            length = size ** 2

            dev = Module()
            
            dev.domains.sync = ClockDomain("sync", async_reset=True)
            dev.d.comb += [
                ClockSignal("sync").eq(self.clk),
                ResetSignal("sync").eq(~self.clr_n)
            ]

            dev.submodules.init_fifo = init_fifo = fifo(width=width, depth=length)
            dev.submodules.low_fifo = low_fifo = fifo(width=width, depth=length)
            dev.submodules.high_fifo = high_fifo = fifo(width=width, depth=length)
            
            for f in (init_fifo, low_fifo, high_fifo):
                dev.d.comb += [
                    f.clk.eq(self.clk),
                ]

            num_buffer = Signal(unsigned(width*size*size))
            fifo_counter = Signal(unsigned(ceil(log2(length))), init=length-1)
            bit_counter = Signal(unsigned(ceil(log2(width))), init=width-1)
            buffer = Signal(unsigned(width), init=0)
            index = Signal(unsigned(ceil(log2(length))), init=0)
            total = Signal(unsigned(ceil(log2(length))), init=length)
            offset = Signal(unsigned(ceil(log2(length))), init=length-1)
            is_low = Signal()
            stable_counter = Signal(unsigned(2), init = 2)

            with dev.FSM(reset="TR") as _:
                with dev.State("TR"):
                    dev.d.comb += [self.med.eq(init_fifo.head),]
                    with dev.If(self.en_write):
                        dev.next = "INIT"
                        dev.d.sync += [
                            init_fifo.clr_n.eq(0),
                            low_fifo.clr_n.eq(0),
                            high_fifo.clr_n.eq(0),
                            self.in_work_n.eq(0),
                            num_buffer.eq(self.arr),
                        ]
                with dev.State("INIT"):
                    with dev.If(init_fifo.clr_n):
                        dev.d.sync += [
                            fifo_counter.eq(fifo_counter.init),
                            init_fifo.push.eq(1),
                        ]
                        dev.next = "RD"
                    with dev.Else():
                        dev.d.sync += [
                            init_fifo.clr_n.eq(1),
                            low_fifo.clr_n.eq(1),
                            high_fifo.clr_n.eq(1),
                        ]
                with dev.State("RD"):
                    dev.d.comb += [
                        init_fifo.wr_data.eq(num_buffer.word_select(fifo_counter, width))
                    ]
                    with dev.If(fifo_counter == 1):
                        dev.d.sync += [
                            init_fifo.pop.eq(1),
                            high_fifo.clr_n.eq(0),
                            low_fifo.clr_n.eq(0),
                        ]
                    with dev.If(fifo_counter == 0):
                        dev.d.sync += [
                            init_fifo.push.eq(0),
                            fifo_counter.eq(fifo_counter.init),
                            bit_counter.eq(bit_counter.init),
                            offset.eq(0),
                            index.eq(index.init),
                            total.eq(total.init),
                            high_fifo.clr_n.eq(1),
                            low_fifo.clr_n.eq(1),
                        ]
                        dev.next = "PR"
                    with dev.Else():
                        dev.d.sync += [
                            fifo_counter.eq(fifo_counter - 1),
                        ]
                with dev.State("PR"):
                    dev.d.comb += [
                        is_low.eq(~init_fifo.rd_data.bit_select(bit_counter, 1)),
                        high_fifo.wr_data.eq(buffer),
                        low_fifo.wr_data.eq(buffer),
                    ]
                    dev.d.sync += [
                        offset.eq(offset + is_low),
                        buffer.eq(init_fifo.rd_data),
                        high_fifo.push.eq(~is_low),
                        low_fifo.push.eq(is_low)
                    ]
                    with dev.If(fifo_counter == 1):
                        dev.d.sync += [
                            init_fifo.pop.eq(0),
                        ]
                    with dev.If(fifo_counter == 0):
                        dev.next = "ST"
                        dev.d.sync += [
                            stable_counter.eq(stable_counter.init),
                            # offset.eq(offset)
                        ]
                    with dev.Else():
                        dev.d.sync += [
                            fifo_counter.eq(fifo_counter - 1),
                        ]
                with dev.State("ST"):
                    
                    dev.d.sync += stable_counter.eq(stable_counter - 1)
                    with dev.If(stable_counter == 0):
                        with dev.If((total == 5) & (index == 4) & (offset == 1)):
                            dev.d.sync += [
                                self.in_work_n.eq(1),
                                low_fifo.pop.eq(0)
                            ]
                            dev.next = "TR"
                        with dev.Elif(low_fifo.pop):
                            dev.d.sync += [
                                init_fifo.push.eq(1),
                                total.eq(index + offset),
                                fifo_counter.eq(offset)
                            ]
                            dev.next = "LTI"
                        with dev.Else():
                            dev.d.sync += [
                                init_fifo.push.eq(1),
                                index.eq(index + offset),
                                fifo_counter.eq(total - index - offset)
                            ]
                            
                            dev.next = "HTI"
                        
                    with dev.Elif(stable_counter == 2):
                        dev.d.comb += [
                            is_low.eq(~init_fifo.rd_data.bit_select(bit_counter, 1)),
                            high_fifo.wr_data.eq(buffer),
                            low_fifo.wr_data.eq(buffer),
                        ]
                        dev.d.sync += [
                            init_fifo.clr_n.eq(0),
                            high_fifo.push.eq(0),
                            low_fifo.push.eq(0),
                        ]
                    with dev.Else():
                        dev.d.sync += init_fifo.clr_n.eq(1)
                        with dev.If((total == 5) & (index == 4) & (offset == 1)):
                            dev.d.sync += [
                                low_fifo.pop.eq(1)
                            ]
                        with dev.Elif((offset + index) <= 4):
                            dev.d.sync += [
                                
                                high_fifo.pop.eq(1)
                            ]
                        with dev.Else():
                            dev.d.sync += [
                                
                                low_fifo.pop.eq(1)
                            ]
                with dev.State("LTI"):
                    dev.d.sync += [
                        fifo_counter.eq(fifo_counter - 1),
                    ]
                    dev.d.comb += init_fifo.wr_data.eq(low_fifo.rd_data)
                    with dev.If(fifo_counter == 2):
                        dev.d.sync += [
                            low_fifo.pop.eq(0),
                            init_fifo.pop.eq(1),
                            high_fifo.clr_n.eq(0),
                            low_fifo.clr_n.eq(0),
                        ]
                    with dev.If(fifo_counter == 1):
                        dev.d.sync += [
                            init_fifo.push.eq(0),
                            fifo_counter.eq(total - index - 1),
                            offset.eq(0),
                            bit_counter.eq(bit_counter - 1),
                            high_fifo.clr_n.eq(1),
                            low_fifo.clr_n.eq(1),
                        ]
                        dev.next = "PR"
                with dev.State("HTI"):
                    dev.d.sync += [
                        fifo_counter.eq(fifo_counter - 1),
                    ]
                    dev.d.comb += init_fifo.wr_data.eq(high_fifo.rd_data)
                    with dev.If(fifo_counter == 2):
                        dev.d.sync += [
                            high_fifo.pop.eq(0),
                            init_fifo.pop.eq(1),
                            high_fifo.clr_n.eq(0),
                            low_fifo.clr_n.eq(0),
                        ]
                    with dev.If(fifo_counter == 1):
                        dev.d.sync += [
                            init_fifo.push.eq(0),
                            fifo_counter.eq(total - index - 1),
                            offset.eq(0),
                            bit_counter.eq(bit_counter - 1),
                            high_fifo.clr_n.eq(1),
                            low_fifo.clr_n.eq(1),
                        ]
                        dev.next = "PR"
                       



            return dev
    
    return syncMedian
    
if __name__ == "__main__":
    SMed = generateClass()
    dut = SMed()

    # Генерация без комментариев
    v = verilog.convert(dut, 
                        name="syncMedian", 
                        emit_src=False,
                        )
    print(v)