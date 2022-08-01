# -*- coding: utf-8 -*-
"""
Created on Thu Dec  3 14:12:49 2020

@author: pdg26
"""

x = [0] * 10
for n in range(0, 10):
    x[n] = int(input("整数を入力して下さい：")) 
x.sort()
print("最小値：", x[0], "最大値：", x[9])
print(x[1:8])