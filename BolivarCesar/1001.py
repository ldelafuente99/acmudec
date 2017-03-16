#!/usr/bin/env python
# coding=utf-8

import math

A = ''

while True:
    try:
        A += ' ' + input()
        # print(A)
    except EOFError as eofe:
        break

# print(A)
A = list(map(int, A.split()))

# print(A)
i = len(A) - 1
while i >= 0:
    print(format(math.sqrt(A[i]), '.4f'))
    i -= 1
