# -*- coding: utf-8 -*-
"""
Created on Wed Oct 28 22:44:01 2020

@author: pdg26
"""

sum = 0
for i in range(1,43):
    r = 42 % i
    if(r == 0):
        sum = sum + i
print(sum)