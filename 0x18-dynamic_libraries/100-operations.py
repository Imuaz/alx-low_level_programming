#!/usr/bin/python3
import random
import ctypes
cops = ctypes.CDLL('./100-operations.so')
a = random.randint(-100, 100)
print("{} * {}".format(a, cops.square(a)))
