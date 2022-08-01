# -*- coding: utf-8 -*-
"""
Created on Wed Oct 28 22:52:01 2020

@author: pdg26
"""

min = 100
for i in range(1,6):
    a = int(input("自然数を入力してください:"))
    if(min > a):
        min = a
print("最小の入力は",min,"です")