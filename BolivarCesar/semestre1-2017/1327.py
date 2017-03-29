#!/usr/bin/env python
# coding=utf-8

A = int(input())
B = int(input())

# que seria de mi sin list comprehension

# Basicamente, sumo 1 por cada numero impar en el rango [A, B]
# Como los numeros impares modulo 2 dan 1 y los numeros pares dan 0 (lo
# cual no afecta a la suma total) basta con sumar todos los modulos en el
# rango dado
print(sum((i % 2 for i in range(A, B + 1))))
