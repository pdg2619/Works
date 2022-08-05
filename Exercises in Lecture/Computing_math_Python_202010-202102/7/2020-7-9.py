# -*- coding: utf-8 -*-
"""
Created on Wed Nov 18 00:56:52 2020

@author: pdg26
"""

def gcd(x, y):
    r = x % y
    if r == 0 :
        return y
    else :
        return gcd(y, r)

print(gcd(30, 42))
print(gcd(164, 287))