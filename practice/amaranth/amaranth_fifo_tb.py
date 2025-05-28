from fifo import *
from amaranth import *
from amaranth.sim import Simulator
from random import randint
from statistics import median

DELAY = 1e-14
WIDTH = 8
SIZE = 3

async def tick(ctx, dut):
    for i in range(2):
        ctx.set(dut.clk, i)
        await ctx.delay(DELAY)
        

async def reset(ctx, dut):
    for i in range(2):
        ctx.set(dut.clk, i)
        ctx.set(dut.clr_n, i)
        await ctx.delay(DELAY)

def get_rnd_arr():
    val = 0
    arr = []
    for _ in range(SIZE ** 2 + 1):
        rand_x = randint(0, 255)
        val <<= 8
        val += rand_x
        arr.append(rand_x)
    # return val, median(arr)
    return arr

async def median_tb(ctx):
    
    arr = get_rnd_arr()
    print(arr)

    ctx.set(dut.push, 1)
    for elem in arr:
        ctx.set(dut.wr_data, elem)
        await tick(ctx, dut)
        

    ctx.set(dut.push, 0)
    ctx.set(dut.pop, 1)
    await tick(ctx, dut)
    for i in range(SIZE ** 2 + 1):
        print(f"{i+1}. {ctx.get(dut.rd_data)}")
        await tick(ctx, dut)

dut = fifo(width=WIDTH, depth=SIZE**2)

sim = Simulator(dut)
sim.add_testbench(median_tb)
with sim.write_vcd('fifo.vcd'):
    sim.run()