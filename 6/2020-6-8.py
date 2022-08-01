# -*- coding: utf-8 -*-
"""
Created on Tue Nov 17 18:18:11 2020

@author: pdg26
"""

n = int(input("リストのサイズ："))
x = [0] * n
for i in range(0,n):
    x[i] = int(input("整数を入力せよ："))
print(x)