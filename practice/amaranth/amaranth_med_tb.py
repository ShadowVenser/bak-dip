from syncMedian import *
from amaranth import *
from amaranth.sim import Simulator
from random import randint
from statistics import median

DELAY = 1e-14
WIDTH = 16
SIZE = 5

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
    for _ in range(SIZE ** 2):
        rand_x = randint(0, 2 ** WIDTH)
        val <<= WIDTH
        val += rand_x
        arr.append(rand_x)
    print(arr)
    return val , median(arr)
    # return arr

# def get_rnd_arr():
#     val = 0
#     for elem in [166, 149, 117, 163, 227, 170, 144, 76, 236]:
#         val <<= WIDTH
#         val += elem
#     return val , median([166, 149, 117, 163, 227, 170, 144, 76, 236])
#     # return arr

async def median_tb(ctx):
    # for i in range(1):
        arr, me = get_rnd_arr()
        await tick(ctx, dut)
        ctx.set(dut.arr, arr)
        ctx.set(dut.en_write, 1)
        await tick(ctx, dut)
        ctx.set(dut.arr, 0)
        ctx.set(dut.en_write, 0)
        is_worked_n = 0
        iter = 1000
        while (not is_worked_n) and (iter > 0):
            await tick(ctx, dut)
            is_worked_n = ctx.get(dut.in_work_n)
            iter -= 1
        await tick(ctx, dut)
        assert ctx.get(dut.med) == me, f"curr: {ctx.get(dut.med)}, true: {me}"
        # print(f"{i+1}. Correct")
        print(f"curr: {ctx.get(dut.med)}, true: {me}")

SMed = generateClass(width=WIDTH, size=SIZE)
dut = SMed()


for _ in range(100):
    sim = Simulator(dut)
    sim.add_testbench(median_tb)
    with sim.write_vcd('median.vcd'):
        sim.run()