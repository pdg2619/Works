# -*- coding: utf-8 -*-
"""
Created on Wed Nov 18 00:50:31 2020

@author: pdg26
"""

def max(x, y):
    if (x < y) :
        return y
    else :
        return x
    
a = int(input("整数を入力して下さい："))
b = int(input("整数を入力して下さい："))
print("大きいのは", max(a, b))