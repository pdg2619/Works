# -*- coding: utf-8 -*-
"""
Created on Wed Dec  9 13:52:44 2020

@author: pdg26
"""

x = int(input("3以上の自然数を入力して下さい：")) 
angle = 360/x
from turtle import *
for i in range(0,x):
 forward(100)
 left(angle)
done()