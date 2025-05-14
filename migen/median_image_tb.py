from migen import *
import matplotlib.pyplot as plt
import numpy as np
from PIL import Image
from median import median
import time
from functools import reduce

def arr_to_num(arr):
    return reduce(lambda a, b: (int(a) << 8) + int(b), arr)
    
def get_around_array(arr, point):
    for i in range(-1, 2):
        for j in range(-1, 2):
            yield arr[point[0]+i][point[1]+j]


def testbench():
    t = time.time()

    image = np.array(Image.open(f'../images/rin.jpg').convert('L'))
    blur = np.copy(image)

    x, y = image.shape
    for i in range(1, x-1):
        for j in range(1, y-1):
            point = (i, j)
            arr = list(get_around_array(image, point))
            yield dut.arr.eq(arr_to_num(arr))
            yield
            blur[i][j] =  yield dut.med
        if (i % 20 == 0):
            print(f'Complete: {round(i / x * 100, 2)}%, Time: {(time.time() - t):.2f}')
    print(f'Complete: 100%, Time: {(time.time() - t):.2f}')

    _, (ax1, ax2) = plt.subplots(1, 2, figsize=(12, 10)) 

    ax1.imshow(image, cmap='gray')
    ax1.set_title('Rin before')
    ax1.axis('off') 

    ax2.imshow(blur, cmap='gray')
    ax2.set_title('Rin after')
    ax2.axis('off')

    plt.show()

if __name__ == "__main__":
    dut = median()
    run_simulation(dut, testbench())

