# -*- coding: utf-8 -*-
"""
Created on Tue Nov 17 18:12:27 2020

@author: pdg26
"""

x = [80, 56, 68, 75, 45]
print(x)
avg = 0
sum = 0
for i in range(0,5) : 
    sum = sum + x[i]
avg = sum / 5
print("平均：", avg)
for i in range(0,5) : 
    if x[i] > avg :
     print (x[i])
    