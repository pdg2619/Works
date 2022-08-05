# -*- coding: utf-8 -*-
"""
Created on Wed Nov 18 00:36:17 2020

@author: pdg26
"""

def gcd(x, y):
    n = 1
    for i in range(1,x) :
        if(x % i == 0 and y % i == 0) :
            n = i
    return n

print(gcd(30, 42))
print(gcd(164, 287))