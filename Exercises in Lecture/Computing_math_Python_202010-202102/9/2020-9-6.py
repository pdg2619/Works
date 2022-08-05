# -*- coding: utf-8 -*-
"""
Created on Wed Dec  9 13:59:03 2020

@author: pdg26
"""

x = int(input("3以上の自然数を入力して下さい：")) 
y = 2*x + 1
angle = (180 - (180 / y))
from turtle import *
for i in range(0,y):
 forward(100)
 right(angle)
done()