import cocotb
from cocotb.triggers import Timer
from PIL import Image
import numpy as np
import matplotlib.pyplot as plt
from time import time


@cocotb.test()
async def median_tb(dut):
    image = np.array(Image.open('../images/rin.jpg').convert('L'))
    blur = np.copy(image)
    x, y = image.shape
    delay = 1 
    t_start = time()

    for i in range(1, x - 1):
        for j in range(1, y - 1):
            region = image[i - 1:i + 2, j - 1:j + 2].flatten()

            
            for idx, val in enumerate(region):
                getattr(dut, f'arr_{idx}').value = int(val)

            await Timer(delay, units="ps")

            blur[i][j] = dut.med.value.integer

        if i % 20 == 0:
            percent = round(i / x * 100, 2)
            print(f'Complete: {percent}%, Time: {time() - t_start:.2f}s')

    print(f'Complete: 100%, Time: {time() - t_start:.2f}s')

    _, (ax1, ax2) = plt.subplots(1, 2, figsize=(12, 10))

    ax1.imshow(image, cmap='gray')
    ax1.set_title('Original')
    ax1.axis('off')

    ax2.imshow(blur, cmap='gray')
    ax2.set_title('Filtered')
    ax2.axis('off')

    # plt.show()
    plt.savefig("rin_filtered.png")