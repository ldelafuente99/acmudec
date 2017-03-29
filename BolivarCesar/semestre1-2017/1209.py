#!/usr/bin/env python
# coding=utf-8

n = int(input())

ones = set()
ones.add(1)

i = 1
zeros = 0
while i < 2**32:
	i += zeros
	ones.add(i)
	zeros += 1

print(len(ones))
for j in range(n):
	x = int(input())
	if x in ones:
		print('1', end=' ')
	else:
		print('0', end=' ')
