#!/usr/bin/env python
# coding=utf-8

n = int(input())

count = {
	'Emperor Penguin':  0,
	'Macaroni Penguin':  0,
	'Little Penguin':  0
}

largest = None
blah = 0

for i in range(n):
	s = input()
	count[s] += 1
	if count[s] > blah:
		largest = s
		blah = count[s]

print(largest)
