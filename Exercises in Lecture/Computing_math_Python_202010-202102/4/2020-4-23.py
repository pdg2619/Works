# -*- coding: utf-8 -*-
"""
Created on Wed Oct 28 23:11:43 2020

@author: pdg26
"""

x = int(input("自然数を入力してください:"))
y = 0
for i in range(2,x):
    if x%i == 0:
        y=1
        
if y==0:
    print("この数は素数です")
else:
    print("この数は素数ではないです")