from modules import *
from amaranth import *
from amaranth.sim import Simulator
from random import randint

DELAY = 1e-14

async def tick(ctx, dut):
    for i in range(2):
        ctx.set(dut.clk, i)
        await ctx.delay(DELAY)
        

async def reset(ctx, dut):
    for i in range(2):
        ctx.set(dut.clk, i)
        ctx.set(dut.clr_n, i)
        await ctx.delay(DELAY)

async def mux_tb(ctx):
    ctx.set(mux.clk, 1)
    ctx.set(mux.clr_n, 1)
    await ctx.delay(DELAY)
    await reset(ctx, mux)
    for i in range(10):
        x1 = randint(0, 65535)
        x2 = randint(0, 65535)
        addr = randint(0, 1)
        ctx.set(mux.x1, x1)
        ctx.set(mux.x2, x2)
        ctx.set(mux.addr, addr)
        await tick(ctx, mux)
        assert ctx.get(mux.y) == (x2 if addr else x1)
        print(f"test {i+1} - passed")

async def nand_tb(ctx):
    for i in range(4):
        ctx.set(nand.x1, i // 2)
        ctx.set(nand.x2, i % 2)
        await ctx.delay(DELAY)
        assert ctx.get(nand.y) == (0 if i == 3 else 1)
        print(f"test {i+1} - passed")

nand = nandGate()
sim = Simulator(nand)
sim.add_testbench(nand_tb)
with sim.write_vcd('nand.vcd'):
    print("Start NAND testbench")
    sim.run()

mux = syncMux()
sim = Simulator(mux)
sim.add_testbench(mux_tb)
with sim.write_vcd('mux.vcd'):
    print("Start MUX testbench")
    sim.run()