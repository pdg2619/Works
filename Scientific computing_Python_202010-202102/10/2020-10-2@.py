# -*- coding: utf-8 -*-
"""
Created on Wed Dec 23 21:04:06 2020

@author: pdg26
"""

n = 0
p = 1
sum = 1
while(2*9*p/(n+1) > 0.000001):
     n = n + 1
     p = p * 2 / n
     sum = sum + p
print(n, sum) 