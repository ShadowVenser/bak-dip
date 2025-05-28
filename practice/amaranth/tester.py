from functools import reduce
from random import randint
from math import ceil, log2

t = [randint(0, 255) for i in range(9)]
print(t)

x = 3
x += 1
x <<= 81

print(x)