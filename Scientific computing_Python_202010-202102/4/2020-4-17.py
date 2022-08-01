# -*- coding: utf-8 -*-
"""
Created on Wed Oct 28 23:05:06 2020

@author: pdg26
"""

x = 1
sum = 0
for i in range(1,21):
    x = x*i
    sum = sum + 1/x
    print(x)
    print(sum)
print(sum)