# -*- coding: utf-8 -*-
"""
Created on Tue Nov 17 18:33:00 2020

@author: pdg26
"""

x = [3, 5, 1, 2, 6, 4]
print(x)
for i in range(5):
    for j in range(5):
         if(x[j] > x[j+1]):
             tmp = x[j]
             x[j] = x[j+1]
             x[j+1] = tmp
print(x) 