# -*- coding: utf-8 -*-
"""
Created on Wed Oct 28 22:44:00 2020

@author: pdg26
"""

max = 1
for i in range(1,6):
    a = int(input("自然数を入力してください:"))
    if(max < a):
        max = a
print("最大の入力は",max,"です")