#!/usr/bin/env python
# coding=utf-8

# Cuando el juez tira wrong answer, python es la solución.
# Realmente no entiendo cual era el problema en C, si el programa hacía
# exactamente lo mismo...
MAX = 45
n = int(input())

B = [0 for i in range(MAX + 1)]
B[1] = 1
B[2] = 1
B[3] = 2
B[4] = 3

for i in range(5, n + 1):
    B[i] = B[i - 2] + 2 * B[i - 3] + B[i - 4]

print(2 * B[n])
