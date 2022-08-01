# -*- coding: utf-8 -*-
"""
Created on Wed Nov 18 00:38:24 2020

@author: pdg26
"""

def abs(x):
    if (x > 0) :
        return x
    else :
        return -x
    
a = int(input("整数を入力して下さい："))
print(abs(a))