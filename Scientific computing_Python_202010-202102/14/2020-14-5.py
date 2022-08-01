# -*- coding: utf-8 -*-
"""
Created on Wed Feb  3 14:14:13 2021

@author: pdg26
"""

a = [0]*3
for i in range(0,10):
    print(a)
    k = 2
    a[k] = a[k] + 1
    while a[k]==3 and k > 0:
        a[k] = 0
        k = k - 1
        a[k] = a[k] + 1