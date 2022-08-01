# -*- coding: utf-8 -*-
"""
Created on Wed Oct 28 22:10:50 2020

@author: pdg26
"""
x = 2
sum = 0
for i in range(1,11):
    sum = sum + x
    x = x + x
print(sum)