# -*- coding: utf-8 -*-
"""
Created on Tue Oct 20 15:20:12 2020

@author: pdg26
"""

x = int(input("整数を入力せよ:"))
if 0<=x & x<60:
    print("不可")
elif 60<=x & x<70:
    print("可")
elif 70<=x & x <80:
    print("良")
elif 80<=x & x<90:
    print("優")
elif 90<=x & x<=100:
    print("秀") 
else:
    print("エラー")