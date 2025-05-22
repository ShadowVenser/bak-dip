import cocotb
from cocotb.triggers import RisingEdge, Timer
from cocotb.clock import Clock
import random

@cocotb.test()
async def mux_tb(dut):
    clock = Clock(dut.clk, 10, units="ps")
    cocotb.start_soon(clock.start())

    dut.clr_n.value = 0
    await Timer(20, units="ps")
    dut.clr_n.value = 1
    await RisingEdge(dut.clk) 

    for i in range(10):
        x1 = random.randint(0, 0xFFFF)
        x2 = random.randint(0, 0xFFFF)
        addr = random.randint(0, 1)

        dut.x1.value = x1
        dut.x2.value = x2
        dut.addr.value = addr

        await RisingEdge(dut.clk)
        await Timer(5, units="ps")

        expected = x2 if addr else x1
        actual = dut.y.value.integer

        assert actual == expected, (
            f"Iteration {i}: addr={addr}, x1={x1}, x2={x2}, "
            f"expected y={expected}, got {actual}"
        )
