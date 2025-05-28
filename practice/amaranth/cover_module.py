from amaranth import *
from amaranth.back import verilog
from syncMedian import generateClass
import argparse

class CoverMedian(Elaboratable):

    def __init__(self, width=8, size=3):
        self.clk = Signal()
        self.clr_n = Signal()
        self.arr = [Signal(unsigned(width), name=f"arr_{i}") for i in range(size ** 2)]
        self.med = Signal(unsigned(width))

        self.WIDTH = width
        self.SIZE = size
    
    def elaborate(self, _):
        dev = Module()

        Median = generateClass(width=self.WIDTH, size=self.SIZE)
        median = Median()

        dev.submodules.med = median
        dev.d.comb += [ 
            median.clk.eq(self.clk),
            median.clr_n.eq(self.clr_n),
            median.arr.eq(Cat(*self.arr)),
            self.med.eq(median.med)
        ]
        
        return dev


if __name__ == "__main__":
    parser = argparse.ArgumentParser()
    parser.add_argument("--width", type=int, default=8)
    parser.add_argument("--size", type=int, default=3)
    parser.add_argument("--name", type=str, default="innerMedian")
    args = parser.parse_args()

    dut = CoverMedian(width=args.width, size=args.size)

    # Генерация без комментариев
    v = verilog.convert(dut, 
                        ports= [
                            dut.clk,
                            dut.clr_n,
                            *dut.arr,
                            dut.med
                        ],
                        name=args.name, 
                        emit_src=False,
                        )
    print(v.replace("(* top =  1  *)\n", ""))

