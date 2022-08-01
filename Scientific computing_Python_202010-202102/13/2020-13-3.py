# -*- coding: utf-8 -*-
"""
Created on Wed Jan 20 19:53:04 2021

@author: pdg26
"""

import math
def f(x):
    return x * x * x - x
def next(x):
    return x - f(x)/(3 * x * x - 1)
e = 0.000001
N = 100
k = 1
x = 1 / math.sqrt(5)
x = next(x)
while (f(x)<-e or e<f(x)) and (k <= N):
    print(k, x)
    k = k + 1
    x = next(x)
if(k <= N):
    print("近似解は",x,"です。")
else:
    print("近似解は求まりませんでした。")