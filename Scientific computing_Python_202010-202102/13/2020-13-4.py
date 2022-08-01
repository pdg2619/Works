# -*- coding: utf-8 -*-
"""
Created on Wed Jan 20 19:55:38 2021

@author: pdg26
"""

def f(x):
    return x * x - 5
def next(x):
    return x - f(x)/(2 * x)
e = 0.000001
N = 512
k = 1
x = 5
x = next(x)
while (f(x)<-e or e<f(x)) and (k <= N):
    print(k, x)
    k = k + 1
    x = next(x)
if(k <= N):
    print("近似解は",x,"です。")
else:
    print("近似解は求まりませんでした。")