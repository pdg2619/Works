# -*- coding: utf-8 -*-
"""
Created on Thu Nov  5 15:46:54 2020

@author: pdg26
"""

n = 1
while 1/(n*n) > 0.01:
    print(n, 1/(n*n))
    n = n + 1