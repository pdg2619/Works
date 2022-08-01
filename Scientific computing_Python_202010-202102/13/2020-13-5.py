# -*- coding: utf-8 -*-
"""
Created on Wed Jan 20 19:55:39 2021

@author: pdg26
"""

def f(x):
    return x * x * x - 5
def next(x):
    return x - f(x)/(3 * x * x)
e = 0.000001
N = 1023
k = 1
x = 10
x = next(x)
while (f(x)<-e or e<f(x)) and (k <= N):
    print(k, x)
    k = k + 1
    x = next(x)
if(k <= N):
    print("近似解は",x,"です。")
else:
    print("近似解は求まりませんでした。")