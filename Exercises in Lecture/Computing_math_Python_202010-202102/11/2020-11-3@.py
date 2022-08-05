# -*- coding: utf-8 -*-
"""
Created on Wed Dec 23 23:07:02 2020

@author: pdg26
"""

n = 0
p = 1
sum = 0
while(1 / (n+1) > 0.000001):
    n = n + 1
    p = p / 2
    sum = sum - p/n
print(n, sum) 