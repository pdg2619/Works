# -*- coding: utf-8 -*-
"""
Created on Wed Dec 16 14:51:26 2020

@author: pdg26
"""

n = 0
p = 1
sum = 1
while(3*p/(n+1) > 0.000001):
     n = n + 1
     p = p / n
     sum = sum + p
print(n, sum) 