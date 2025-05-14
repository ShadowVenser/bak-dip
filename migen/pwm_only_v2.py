from migen import *
from migen.fhdl import verilog

class pwm_only_v2(Module) :
    def __init__(self):

        self.wr_data = Signal(32)
        self.cs = Signal()
        self.wr_n = Signal()
        self.addr = Signal(2)
        self.rd_data = Signal(32)
        self.pwm_out = Signal(8)

        #registers
        self.div = Signal(32)
        self.duty_a = Signal(32)
        self.duty_b = Signal(32)
        self.counter = Signal(32)
        self.off_a = Signal()
        self.off_b = Signal()

        #chip select and address decoder
        self.div_en = Signal()
        self.duty_en = Signal()
        self.duty_a_en = Signal()
        self.duty_b_en = Signal()

        self.comb += self.div_en.eq(self.cs & ~self.wr_n & ~self.addr[1])
        self.comb += self.duty_en.eq(self.cs & ~self.wr_n & self.addr[1])
        self.comb += self.duty_a_en.eq(self.duty_en & ~self.addr[0])
        self.comb += self.duty_b_en.eq(self.duty_en & self.addr[0])

        #register write
        self.sync += If(self.div_en, self.div.eq(self.wr_data))
        self.sync += If(self.duty_a_en, self.duty_a.eq(self.wr_data))
        self.sync += If(self.duty_b_en, self.duty_b.eq(self.wr_data))

        #register read
        self.comb += If(self.addr[1] == 0, 
                        self.rd_data.eq(self.div)
                        ).Else(
                            If(self.addr[0] == 0,
                               self.rd_data.eq(self.duty_a)
                               ).Else(
                                   self.rd_data.eq(self.duty_b)
                               )
                        )
        
        #//////PWM logic//////
        
        #PWM counter
        self.sync += If(self.counter >= self.div, 
                        self.counter.eq(0)
                        ).Else(
                            self.counter.eq(self.counter + 1)
                        )

        #PWM compare
        self.sync += If(self.counter >= self.duty_a,
                        self.off_a.eq(1)
                        ).Elif(self.counter == 0, 
                               self.off_a.eq(0)
                               ).Else(self.off_a.eq(self.off_a))
        
        self.sync += If(self.counter >= self.duty_b,
                        self.off_b.eq(1)
                        ).Elif(self.counter == 0, 
                               self.off_b.eq(0)
                               ).Else(self.off_b.eq(self.off_b))
        
        self.comb += self.pwm_out.eq((Replicate(~self.off_a, 4) << 4) | Replicate(~self.off_b, 4))

if (__name__ == "__main__"):
    m = pwm_only_v2()
    print(verilog.convert(m, {m.wr_data, m.cs, m.wr_n, m.addr, m.rd_data, m.pwm_out}))
