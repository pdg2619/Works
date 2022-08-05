# -*- coding: utf-8 -*-
"""
Created on Wed Jan 13 20:35:17 2021

@author: pdg26
"""

import random
x = [0]*100
x[0] = 1
for i in range(1,100):
    x[i] = x[i-1] + random.randint(1,2)
for i in range(0,100):
    print (i,x[i])
n = int(input("自然数を入力して下さい："))
#これより上は変えない
m = 0
left = 0 
right = 99

while left <= right:
    mid = int((left+right) // 2)
    print(mid)
    if x[mid] == n:
        m = mid
        break
    elif x[mid] > n:
        right = mid - 1
    else :
        left = mid + 1
        
if m > 0:
    print(n,"は x(i) の中に存在します。")
else:
    print(n,"は x(i) の中に存在しません。")
