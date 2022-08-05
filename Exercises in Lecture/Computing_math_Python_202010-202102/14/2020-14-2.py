# -*- coding: utf-8 -*-
"""
Created on Tue Feb  2 13:24:05 2021

@author: pdg26
"""

def f(x) :
    return x*x+x-5 
i = 1
a = 1
b = 2
c = (a + b) / 2
e = 0.000001
while 2*e <= b-a:
    print(i, a, b)
    if f(c) > 0:
        b = c
    else:
        a = c
    c = (a + b) / 2
    i = i + 1
print(c,f(c))

