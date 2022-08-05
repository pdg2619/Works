# -*- coding: utf-8 -*-
"""
Created on Wed Jan 20 22:38:22 2021

@author: pdg26
"""

x = [0]*10
count = 0
for i in range(0,10):
    x[i] = int(input("整数を入力して下さい:"))
max = x[0]
min = x[0]
for i in range(0,10):
    if x[i] < min:
        min = x[i]
    if max < x[i]:
        max = x[i]
for i in range(0,10):
     if x[i] != min and x[i] != max:
         count = count + 1
print("最大値でも最小値でもない数は",count,"個です。")