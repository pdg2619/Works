# -*- coding: utf-8 -*-
"""
Created on Wed Dec  2 17:00:21 2020

@author: pdg26
"""

def f(n):
    sum = 0
    for i in range(1, n+1):
            if (n % i == 0):
                sum = sum + i
            else :
                sum = sum + 0
    return sum
    

x = int(input("自然数を入力して下さい："))    
print(f(x))