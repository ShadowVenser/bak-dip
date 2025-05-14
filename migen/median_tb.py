from functools import reduce
from random import randint
import statistics
from migen import *
from median import median

def arr_to_num(arr):
    return reduce(lambda a, b: (a << 8) + b, arr)

def tb_iteration(id, data):
    try:
        ans = statistics.median(data)
        yield dut.arr.eq(arr_to_num(data))
        yield
        med = yield dut.med
        assert (med == ans)
        print(f'{id+1}. Correct!, data: {data}; median: {ans}')
    except AssertionError as _:
        print(f'{id+1}. Error: data: {data}: correct: {ans}; current: {med}')

def tb():
    for i in range(9):
        data = [j for j in range(9)]
        data[4], data[i] = data[i], data[4]
        yield from tb_iteration(i, data=data)
    for i in range(9, 35):
        data = [randint(0, 255) for j in range(9)]
        yield from tb_iteration(i, data=data)
            
if __name__ == "__main__":
    dut = median()
    run_simulation(dut, tb())
