from amaranth import *
from amaranth.cli import main

if __name__ == "__main__":
    
    clk = ClockDomain("clk", clk_edge="pos")
    clr_n = ClockDomain("clr", clk_edge="neg")

    clr_n.clk = clk.clk
    clk.rst   = clr_n.rst


    m = Module()
    m.domains += [clk, clr_n]


    #input/output
    wr_data = Signal(unsigned(32))
    cs = Signal()
    wr_n = Signal()
    addr = Signal(2)
    rd_data = Signal(unsigned(32))
    pwm_out = Signal(unsigned(8))

    #Registers and wires
    div = Signal(unsigned(32))
    duty_a = Signal(unsigned(32))
    duty_b = Signal(unsigned(32))
    counter = Signal(unsigned(32))
    off_a = Signal()
    off_b = Signal()
    div_en = Signal()
    duty_en = Signal()
    duty_a_en = Signal()
    duty_b_en = Signal()

    #chip select and address decoder
    m.d.comb += [
        div_en.eq(cs & ~wr_n & ~addr[1]),
        duty_en.eq(cs & ~wr_n & addr[1]),
        duty_a_en.eq(duty_en & ~addr[0]),
        duty_b_en.eq(duty_en & addr[0])
    ]

    #register write
    with m.If(div_en):
        m.d.clk += div.eq(wr_data)
    with m.If(duty_a_en):
        m.d.clk += duty_a.eq(wr_data)
    with m.If(duty_b_en):
        m.d.clk += duty_b.eq(wr_data)

    #register read
    with m.If(~addr[1]):
        m.d.comb += rd_data.eq(div)
    with m.Elif(~addr[0]):
        m.d.comb += rd_data.eq(duty_a)
    with m.Else():
        m.d.comb += rd_data.eq(duty_b)

    #///// PWM Logic /////#
    
    # PWM counter
    with m.If(counter >= div):
        m.d.clk += counter.eq(0)
    with m.Else():
        m.d.clk += counter.eq(counter + 1)

    #PWM compare
    with m.If(counter >= duty_a):
        m.d.clk += off_a.eq(1)
    with m.Elif(counter == 0):
        m.d.clk += off_a.eq(0)
    with m.Else():
        m.d.clk += off_a.eq(off_a)

    with m.If(counter >= duty_b):
        m.d.clk += off_b.eq(1)
    with m.Elif(counter == 0):
        m.d.clk += off_b.eq(0)
    with m.Else():
        m.d.clk += off_b.eq(off_b)

    m.d.comb += pwm_out.eq((Cat(~off_a for i in range(4)) << 4) + Cat(~off_b for i in range(4)))


    main(m, ports=[
        clk.clk, 
        clr_n.rst, 
        wr_data,
        cs,
        wr_n,
        addr,
        rd_data,
        pwm_out
    ])