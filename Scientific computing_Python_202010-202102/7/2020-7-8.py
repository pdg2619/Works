# -*- coding: utf-8 -*-
"""
Created on Wed Nov 18 00:55:40 2020

@author: pdg26
"""

def gcd(x, y):
    r = x % y
    while r > 0 :
        x = y
        y = r
        r = x % y
    return y

print(gcd(30, 42))
print(gcd(164, 287))