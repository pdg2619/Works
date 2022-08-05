# -*- coding: utf-8 -*-
"""
Created on Wed Nov 18 02:17:06 2020

@author: pdg26
"""

def power(x, y):
    z = 1
    for i in range(0, y):
        z = x * z
    return z

a = int(input("整数を入力して下さい："))    
n = int(input("整数を入力して下さい："))
print("a^n =", power(a, n))