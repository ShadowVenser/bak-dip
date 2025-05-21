from migen import *
from base import *
from random import randint

def tb_nand():
    print("nand tb")
    for i in range(4):
        yield nand.x1.eq(i % 2)
        yield nand.x2.eq(i // 2)
        yield
        print(f"Test {i+1} - ", end='')
        assert (yield nand.y) == (((i % 2) & (i // 2)) + 1) % 2
        print("Passed!")

def tb_mux():
    print("mux tb")
    for i in range(10):
        a, b = (randint(0, 65535) for i in range(2))
        addr = randint(0, 1)
        yield mux.x1.eq(a)
        yield mux.x2.eq(b)
        yield mux.addr.eq(addr)
        yield
        yield
        print(f"Test {i+1} - ", end='')
        print(f"{a, b, addr, (yield mux.y)}")
        print("Passed!")


if __name__ == "__main__":
    nand = nandGate()
    mux = syncMux()
    run_simulation(nand, tb_nand(), vcd_name="nand.vcd")
    run_simulation(mux, tb_mux(), vcd_name="mux.vcd")