# -*- coding: utf-8 -*-
"""
Created on Wed Dec 23 21:14:04 2020

@author: pdg26
"""

n = 0
q = -1
sum = 0
while(1 / (n+1) > 0.000001):
    n = n + 1
    q = -q
    sum = sum + q/n
print(n, sum) 