# -*- coding: utf-8 -*-
"""
Created on Thu Dec  3 17:33:44 2020

@author: pdg26
"""

def divisor(a, b):
    count = 0
    if(a <= b):
        for i in range(1,a) :
            if(a % i == 0 and b % i == 0) :
                count = count + 1
    else:
        for i in range(1,b) :
            if(a % i == 0 and b % i == 0) :
                count = count + 1
    return count

x = int(input("整数を入力して下さい：")) 
y = int(input("整数数入力して下さい：")) 
print(divisor(x, y))