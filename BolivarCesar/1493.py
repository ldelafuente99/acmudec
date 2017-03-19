#!/usr/bin/env python
# coding=utf-8

def suerte(n):
    suma_3_primeros = (n//100000)%10 + (n//10000)%10 + (n//1000)%10
    suma_3_ultimos = (n//100)%10 + (n//10)%10 + n%10
    # print(suma_3_primeros, suma_3_ultimos)
    return suma_3_primeros == suma_3_ultimos

n = int(input())
if suerte(n-1) or suerte(n+1):
    print('Yes')
else:
    print('No')
