#!/usr/bin/env python
# coding=utf-8

n = int(input())

invitados = 2 + n # Marshall, Lily y n invitados

for i in range(n):
    invitado = input()
    if invitado.find('+') != -1:
        invitados += 1

if invitados == 13:
    invitados += 1

print(100*invitados)
