# -*- coding: utf-8 -*-
"""
Created on Wed Jan 13 18:45:18 2021

@author: pdg26
"""

def f(x) :
    return x*x-3
k = 1
a = 0
b = 2
c = (a + b) / 2
e = 0.000001
while f(c)!=0 and 2*e<b-a:
    if f(c) > 0:
        b = c
    else:
        a = c
    k = k + 1
    c = (a + b) / 2
print(c,k)