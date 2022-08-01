# -*- coding: utf-8 -*-
"""
Created on Tue Oct 20 15:27:23 2020

@author: pdg26
"""

h = int(input("身長を入力せよ:"))
m = int(input("体重を入力せよ:"))
x = float(h/100)
BMI = float(m/(x**2))
if BMI<(22*0.8):
    print("瘦せすぎ")
elif (22*0.8)<=BMI and BMI<(22*0.9):
    print("瘦せ気味")
elif (22*0.9)<=BMI and BMI<(22*1.1):
    print("標準")
elif (22*1.1)<=BMI and BMI<(22*1.2):
    print("太り気味")
else:
    print("太りすぎ") 
