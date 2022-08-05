# -*- coding: utf-8 -*-
"""
Created on Tue Feb  2 17:24:42 2021

@author: pdg26
"""

n = 0
p = 1
q = 1 
sum = 1
while(abs(2*p/(n+1)) > 0.000001):
     n = n + 1
     p = 2 * p / n
     q = -q
     sum = sum + p * q
print(n, sum) 