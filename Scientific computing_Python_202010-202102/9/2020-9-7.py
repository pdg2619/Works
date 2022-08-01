# -*- coding: utf-8 -*-
"""
Created on Wed Dec  9 14:04:01 2020

@author: pdg26
"""

from turtle import *
length = 10
fillcolor("gray")
begin_fill()
for i in range(0,100):
 circle(length)
 left(90)
 length=length*1.05
end_fill()
done()
