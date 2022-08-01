# -*- coding: utf-8 -*-
"""
Created on Tue Nov 17 18:31:13 2020

@author: pdg26
"""

x = [1]*101
for i in range(2,101):
    for j in range(2*i, 101, i):
        x[j]=0
print("2 から 100 までの素数は次の通り")
for i in range(2,101):
    if(x[i]==1):
        print(i)