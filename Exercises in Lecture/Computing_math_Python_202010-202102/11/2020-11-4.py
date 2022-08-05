# -*- coding: utf-8 -*-
"""
Created on Wed Dec 23 22:42:23 2020

@author: pdg26
"""

n = 1
p = 1
q = 1
sum = 1
while(p/(n+1)/(n+2) > 0.000001):
    n = n + 2
    p = p / (n-1) / n
    q = -q
    sum = sum + p * q
print(n, sum)