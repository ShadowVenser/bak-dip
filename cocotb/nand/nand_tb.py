import cocotb
from cocotb.triggers import Timer


@cocotb.test()
async def nand_tb(dut):
    test_vectors = [
        (0, 0, 1),
        (0, 1, 1),
        (1, 0, 1),
        (1, 1, 0)
    ]

    for a, b, expected in test_vectors:
        dut.x1.value = a
        dut.x2.value = b
        await Timer(5, units='ps')
        assert dut.y.value == expected, f"NAND({a}, {b}) != {expected}, got {dut.y.value}"
