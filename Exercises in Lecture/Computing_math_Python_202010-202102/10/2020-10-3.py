# -*- coding: utf-8 -*-
"""
Created on Wed Dec 16 21:36:21 2020

@author: pdg26
"""

n = 1
p = -1
sum = 0
while(abs(3*p/(n+1)) > 0.000001):
     n = n + 1
     if(n % 2 == 0) :
         p = (-1) * (p / n)
     else :
         p = (-1) * (p / n)
     sum = sum + p
     print(n,p,sum) 
print(n, sum) 