# -*- coding: utf-8 -*-
"""
Created on Wed Dec  9 15:36:20 2020

@author: pdg26
"""

from turtle import *
speed(0) 
color('white') 
left(90)
forward(300)
right(90)
backward(400)
x = 12
for i in range(1, x+1):
    for j in range(1, x+1):
        if(((i % 2 == 0) & (j % 2 == 0)) | ((i % 2 != 0) & (j % 2 != 0))) :
            begin_fill()
            color("greenyellow")
            setheading(45)
            circle(50, steps = 4)
            end_fill()
            setheading(0)
        elif(((i % 2 != 0) & (j % 2 == 0)) | ((i % 2 == 0) & (j % 2 != 0))) :
            begin_fill()
            color("tomato")
            setheading(45)
            circle(50, steps = 4)
            end_fill()
            setheading(0)
        if(j % x == 0) :
            color('white')
            backward(70*x)
            right(90)
            forward(70)
            left(90)
        color('white')
        forward(70)
done() 