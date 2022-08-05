# -*- coding: utf-8 -*-
"""
Created on Wed Dec  9 14:08:20 2020

@author: pdg26
"""

colors = ['Dark Salmon','Salmon','Light Salmon','Orange','Dark Orange',
          'Coral','Light Coral','Tomato','Orange Red','Red','Yellow',
          'Crimson','Light Yellow']
from turtle import *
from random import *
speed(0)
for i in range(100):
    k = randint(0,len(colors)-1)
    color(colors[k])
    circle(100)
    left(5)
done()