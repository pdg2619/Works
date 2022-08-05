# -*- coding: utf-8 -*-
"""
Created on Fri Nov 20 00:41:54 2020

@author: pdg26
"""

def primetest(p):
    n = 1
    i = 1
    while n != 0:
        i = i + 1
        n = p % i
    if (i == p):
        return 1
    else :
        return 0
    

x = int(input("整数を入力して下さい："))    
print(primetest(x))