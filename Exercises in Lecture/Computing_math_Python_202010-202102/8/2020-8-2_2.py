# -*- coding: utf-8 -*-
"""
Created on Wed Dec  2 17:43:44 2020

@author: pdg26
"""

x = [0] * 10
for n in range(0, 10):
    x[n] = int(input("整数を入力して下さい：")) 
#Bubble sort
for i in range(9): 
    for j in range(9):
        if(x[j] > x[j+1]):
            tmp = x[j]
            x[j] = x[j+1]
            x[j+1] = tmp
#Bubble sort
print("最小値：", x[0], "最大値：", x[9])
print(x[1:8])