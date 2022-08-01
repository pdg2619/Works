# -*- coding: utf-8 -*-
"""
Created on Thu Dec  3 18:12:58 2020

@author: pdg26
"""

x = [0] * 10
count = 0
for n in range(0, 10):
    x[n] = int(input("整数を入力して下さい：")) 
max = x[1]
for n in range(1, 10, 2):
    if max < x[n]:
        max = x[n]
for n in range(0, 10, 2):
    if max < x[n]:
        count = count + 1
print("奇数番目に入力した数の最大値 max：", max)
print("偶数番目に入力した数のうち、maxよりも大きい数の個数：", count)
