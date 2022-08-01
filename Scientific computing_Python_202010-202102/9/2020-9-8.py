# -*- coding: utf-8 -*-
"""
Created on Wed Dec  9 14:04:43 2020

@author: pdg26
"""

from turtle import *
speed(0)
left(90)
def tree(l):
    if l >= 15:
        forward(l)
        left(30)
        tree(l*0.75)
        right(60)
        tree(l*0.75)
        left(30)
        backward(l)
tree(100)
done()  