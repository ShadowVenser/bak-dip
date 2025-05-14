from amaranth import *
from amaranth.sim import Simulator
from median import Median
from random import randint
import statistics

DELAY = 1e-14

def test_iteration(ctx, arr):
    print(f'Массив: {arr}, Медиана: {statistics.median(arr)}')
    for i, elem in enumerate(arr):
        ctx.set(getattr(dut, f"arr_{i}"), elem)
    med = ctx.get(dut.med)
    print(f'Получено: {med}')
    return med

async def testbanch(ctx):
    await ctx.delay(DELAY)
    for j in range(9):
        print(f'test: {j+1}')
        arr = [(j+a) % 9 for a in range(9)]
        assert test_iteration(ctx, arr) == 4
        print(f'test {j+1} passed')
        await ctx.delay(DELAY)
    for j in range(9, 30):
        print(f'test: {j+1}')
        arr = [randint(0, 255) for _ in range(9)]
        assert test_iteration(ctx, arr) == statistics.median(arr)
        print(f'test {j+1} passed')
        await ctx.delay(DELAY)

dut = Median()

sim = Simulator(dut)
sim.add_testbench(testbanch)
with sim.write_vcd('example.vcd'):
    sim.run()