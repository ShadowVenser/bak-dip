from amaranth import *
from amaranth.sim import Simulator
from median import Median
import matplotlib.pyplot as plt
import numpy as np
from PIL import Image
from time import time

DELAY = 1e-14

def get_around_array(arr, point):
    for i in range(-1, 2):
        for j in range(-1, 2):
            yield int(arr[point[0]+i][point[1]+j])

def test_iteration(ctx, arr):
    for i, elem in enumerate(arr):
        ctx.set(getattr(dut, f"arr_{i}"), elem)
    med = ctx.get(dut.med)
    return np.uint8(med)

async def testbanch(ctx):
    await ctx.delay(DELAY)
    t = time()

    image = np.array(Image.open(f'../images/rin.jpg').convert('L'))
    blur = np.copy(image)
    x, y = image.shape

    for i in range(1, x-1):
        for j in range(1, y-1):
            point = (i, j)
            arr = list(get_around_array(image, point))
            blur[i][j] = test_iteration(ctx, arr)
            await ctx.delay(DELAY)
        if (i % 20 == 0):
            print(f'Complete: {round(i / x * 100, 2)}%, Time: {(time() - t):.2f}')
    print(f'Complete: 100%, Time: {(time() - t):.2f}')

    _, (ax1, ax2) = plt.subplots(1, 2, figsize=(12, 10)) 

    ax1.imshow(image, cmap='gray')
    ax1.set_title('Rin before')
    ax1.axis('off') 

    ax2.imshow(blur, cmap='gray')
    ax2.set_title('Rin after')
    ax2.axis('off')

    plt.show()

dut = Median()

sim = Simulator(dut)
sim.add_testbench(testbanch)
with sim.write_vcd('image.vcd'):
    sim.run()