#!/usr/bin/env python
# coding=utf-8

VENTANA = 'window'
PASILLO = 'aisle'
NINGUNO = 'neither'

asiento = {}
asiento['1A'] = VENTANA
asiento['2A'] = VENTANA
asiento['1B'] = PASILLO
asiento['2B'] = PASILLO
asiento['1C'] = PASILLO
asiento['2C'] = PASILLO
asiento['1D'] = VENTANA
asiento['2D'] = VENTANA

for i in range(3, 21):
    asiento[str(i) + 'A'] = VENTANA
    asiento[str(i) + 'B'] = PASILLO
    asiento[str(i) + 'C'] = PASILLO
    asiento[str(i) + 'D'] = PASILLO
    asiento[str(i) + 'E'] = PASILLO
    asiento[str(i) + 'F'] = VENTANA

for i in range(21, 66):
    asiento[str(i) + 'A'] = VENTANA
    asiento[str(i) + 'C'] = PASILLO
    asiento[str(i) + 'D'] = PASILLO
    asiento[str(i) + 'G'] = PASILLO
    asiento[str(i) + 'H'] = PASILLO
    asiento[str(i) + 'K'] = VENTANA

a = input()
if a in asiento:
    print(asiento[a])
else:
    print(NINGUNO)
