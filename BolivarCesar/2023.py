#!/usr/bin/env python
# coding=utf-8

case = {
    'Alice': 0,
    'Ariel': 0,
    'Aurora': 0,
    'Phil': 0,
    'Peter': 0,
    'Olaf': 0,
    'Phoebus': 0,
    'Ralph': 0,
    'Robin': 0,

    'Bambi': 1,
    'Belle': 1,
    'Bolt': 1,
    'Mulan': 1,
    'Mowgli': 1,
    'Mickey': 1,
    'Silver': 1,
    'Simba': 1,
    'Stitch': 1,

    'Dumbo': 2,
    'Genie': 2,
    'Jiminy': 2,
    'Kuzko': 2,
    'Kida': 2,
    'Kenai': 2,
    'Tarzan': 2,
    'Tiana': 2,
    'Winnie': 2
}


n = int(input())
steps = 0
current_position = 0

for i in range(n):
    character = input()
    steps += abs(current_position - case[character])
    current_position = case[character]

print(steps)
