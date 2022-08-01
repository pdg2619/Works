# -*- coding: utf-8 -*-
"""
Created on Wed Dec  9 14:34:00 2020

@author: pdg26
"""

from turtle import *
speed(5) 
color('white') 
left(90)
forward(200)
right(90)
for i in range(0, 16):
    if(i % 4 == 0) :
        backward(280)
        right(90)
        forward(70)
        left(90)
        if(i % 2 == 0) :
            begin_fill()
            color("skyblue")
            setheading(45)
            circle(50, steps = 4)
            end_fill()
            setheading(0)
        else :
            begin_fill()
            color("indigo")
            setheading(45)
            circle(50, steps = 4)
            end_fill()
            setheading(0)
        forward(70)
    else :
        if(i % 2 == 0) :
            begin_fill()
            color("indigo")
            setheading(45)
            circle(50, steps = 4)
            end_fill()
            setheading(0)
        else :
            begin_fill()
            color("skyblue")
            setheading(45)
            circle(50, steps = 4)
            end_fill()
            setheading(0)
        color('white') 
        forward(70)
done() 