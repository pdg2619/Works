# -*- coding: utf-8 -*-
"""
Created on Fri Nov 20 01:43:00 2020

@author: pdg26
"""

def countprime(a):
    count = 0
    for p in range(2, a+1):
            n = 1
            i = 1
            while n != 0:
                i = i + 1
                n = p % i
            if (i == p):
                count = count + 1
            else :
                count = count + 0
    return count
    

x = int(input("整数を入力して下さい："))    
print(countprime(x))