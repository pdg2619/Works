# -*- coding: utf-8 -*-
"""
Created on Thu Aug 25 09:57:21 2022

@author: pdg26
"""
import itertools
import csv

ch = ['A','B','C','D','E','F','J','K','Q','T','V','W','X','Y','Z']
words = [];

words = list(itertools.product(ch,repeat=5));

fields = ['digit1','digit2','digit3','digit4','digit5']

rows = words

with open('strdata.csv', 'w',newline='') as f: 
    write = csv.writer(f) 

    write.writerow(fields) 
    write.writerows(rows)