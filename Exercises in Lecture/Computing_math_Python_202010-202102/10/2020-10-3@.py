# -*- coding: utf-8 -*-
"""
Created on Wed Dec 23 21:11:50 2020

@author: pdg26
"""

n = 0
p = 1
q = 1 
sum = 0
while(p/(n+1) > 0.000001):
     n = n + 1
     p = p / n
     q = -q
     sum = sum + p * q
print(n, sum) 