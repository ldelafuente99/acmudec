#!/usr/bin/env python
# coding=utf-8
import math

primera_linea = input().split()

h = int(primera_linea[0])
w = int(primera_linea[1])
n = int(primera_linea[2])

simbolos = 0
lineas = 1

for i in range(n):
    palabra = input()
    # print(palabra)
    if simbolos == 0:
        simbolos = len(palabra)
    else:
        if simbolos + 1 + len(palabra) > w:
            lineas += 1
            simbolos = len(palabra)
        else:
            simbolos += 1 + len(palabra)
    # porque se me olvida comentar estas cosas?
    # print('simbolos', simbolos, 'lineas', lineas)

print(math.ceil(lineas/h))
