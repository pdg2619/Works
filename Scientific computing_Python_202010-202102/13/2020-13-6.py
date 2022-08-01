# -*- coding: utf-8 -*-
"""
Created on Wed Jan 20 22:08:13 2021

@author: pdg26
"""

import math
def f(x):
    return math.cos(x)
def next(x):
    return x + f(x)/(math.sin(x))
e = 0.000001
N = 1001
k = 1
x = 2
x = next(x)
while (f(x)<-e or e<f(x)) and (k <= N):
    print(k, x)
    k = k + 1
    x = next(x)
if(k <= N):
    print("近似解は",x,"です。")
else:
    print("近似解は求まりませんでした。")