# -*- coding: utf-8 -*-
"""
Created on Thu Dec 15 13:01:37 2022

@author: pdg26
"""


import re

my_str = '552 1 -3 14';
sum_main = 0;

#=======================================================
match = re.search('\d+', my_str);

if int(match.group()) > 0:
    sum_main = sum_main + int(match.group())
    my_str = re.sub(match.group() + ' ','', my_str)
else:
    sum_main = sum_main + 0
    my_str = re.sub('-' + match.group() + ' ','', my_str)
    
print(my_str)
#=======================================================   
match = re.search('\d+', my_str);

if int(match.group()) > 0:
    sum_main = sum_main + int(match.group())
    my_str = re.sub(match.group() + ' ','', my_str)
else:
    sum_main = sum_main + 0
    my_str = re.sub('-' + match.group() + ' ','', my_str)
    
print(my_str)
#=======================================================   
match = re.search('\d+', my_str);

if int(match.group()) > 0:
    sum_main = sum_main + int(match.group())
    my_str = re.sub(match.group() + ' ','', my_str)
else:
    sum_main = sum_main + 0
    my_str = re.sub('-' + match.group() + ' ','', my_str)

print(my_str)
#=======================================================   
match = re.search('\d+', my_str);

if int(match.group()) > 0:
    sum_main = sum_main + int(match.group())
    my_str = re.sub(match.group() + ' ','', my_str)
else:
    sum_main = sum_main + 0
    my_str = re.sub('-' + match.group() + ' ','', my_str)

print(my_str)
#======================================================= 
print(my_str)
print(sum_main)