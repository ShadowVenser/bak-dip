from migen import *
from migen.fhdl import verilog

class median(Module):

    def __init__(self):

        self.arr = Signal(8*9, name="arr")
        self.med = Signal(8, name="med")

        rows = [[self.arr[(i*8*3):(i+1)*8*3][(j*8):(j+1)*8] for j in range(3)] for i in range(3)]

        f_high, f_med, f_low = [], [], []

        for row in rows:
            h, m, l = (Signal(8) for _ in range(3))
            self.my_comp(*row, h, l, m)
            f_high.append(h)
            f_med.append(m)
            f_low.append(l)

        s_high, s_med, s_low = [Signal(8) for _ in range(3)]

        self.my_comp(*f_high, l_out=s_high, mode='low')
        self.my_comp(*f_med, m_out=s_med, mode='med')
        self.my_comp(*f_low, h_out=s_low, mode='high')

        self.my_comp(s_high, s_med, s_low, m_out=self.med, mode='med')

        
    def my_comp(self, a, b, c, h_out=None, l_out=None, m_out=None, mode='full'):
        match mode:
            case 'full':
                sels = [Signal() for _ in range(3)]
                subs = [Signal(8) for _ in range(3)]

                self.comb += sels[0].eq(a > b)
                self.comb += If(sels[0], subs[0].eq(a)).Else(subs[0].eq(b))
                self.comb += If(sels[0], subs[1].eq(b)).Else(subs[1].eq(a))

                self.comb += sels[1].eq(subs[1] > c)
                self.comb += If(sels[1], subs[2].eq(subs[1])).Else(subs[2].eq(c))
                self.comb += If(sels[1], l_out.eq(c)).Else(l_out.eq(subs[1]))
                
                self.comb += sels[2].eq(subs[0] > subs[2])
                self.comb += If(sels[2], h_out.eq(subs[0])).Else(h_out.eq(subs[2]))
                self.comb += If(sels[2], m_out.eq(subs[2])).Else(m_out.eq(subs[0]))

            case 'low':
                sels = [Signal() for _ in range(2)]
                sub = Signal(8)

                self.comb += sels[0].eq(a > b)
                self.comb += If(sels[0], sub.eq(b)).Else(sub.eq(a))

                self.comb += sels[1].eq(sub > c)
                self.comb += If(sels[1], l_out.eq(c)).Else(l_out.eq(sub))

            case 'high':
                sels = [Signal() for _ in range(2)]
                sub = Signal(8)

                self.comb += sels[0].eq(a < b)
                self.comb += If(sels[0], sub.eq(b)).Else(sub.eq(a))

                self.comb += sels[1].eq(sub < c)
                self.comb += If(sels[1], h_out.eq(c)).Else(h_out.eq(sub))

            case 'med':
                sels = [Signal() for _ in range(3)]
                subs = [Signal(8) for _ in range(3)]

                self.comb += sels[0].eq(a > b)
                self.comb += If(sels[0], subs[0].eq(a)).Else(subs[0].eq(b))
                self.comb += If(sels[0], subs[1].eq(b)).Else(subs[1].eq(a))

                self.comb += sels[1].eq(subs[1] > c)
                self.comb += If(sels[1], subs[2].eq(subs[1])).Else(subs[2].eq(c))
                
                self.comb += sels[2].eq(subs[0] > subs[2])
                self.comb += If(sels[2], m_out.eq(subs[2])).Else(m_out.eq(subs[0]))
                

if (__name__ == "__main__"):
    
    dut = median()
    print(verilog.convert(dut, {dut.arr, dut.med}, name='median'))
