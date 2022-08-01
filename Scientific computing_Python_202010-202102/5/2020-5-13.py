# -*- coding: utf-8 -*-
"""
Created on Thu Nov  5 15:59:47 2020

@author: pdg26
"""

a = int(input("自然数を入力せよ："))
b = int(input("自然数を入力せよ："))
c = a % b
while c > 0:
    a = b
    b = c
    c = a % b
print("最大公約数は",b)
