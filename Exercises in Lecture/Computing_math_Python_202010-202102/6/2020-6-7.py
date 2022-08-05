# -*- coding: utf-8 -*-
"""
Created on Tue Nov 17 18:18:10 2020

@author: pdg26
"""

x = []
n = int(input("リストのサイズ："))
for i in range(0,n):
    a = int(input("整数をにゅせよ："))
    x = x + [a]
print(x)