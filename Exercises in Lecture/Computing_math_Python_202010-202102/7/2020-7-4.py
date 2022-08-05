# -*- coding: utf-8 -*-
"""
Created on Wed Nov 18 00:58:22 2020

@author: pdg26
"""

def sigma(x):
    if(n == 0) :
        return 0
    else :
        return (n*(n+1))/2
    
n = int(input("整数を入力して下さい："))
print("Σ(i=1, n) =", sigma(n))