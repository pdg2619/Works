# -*- coding: utf-8 -*-
"""
Created on Thu Dec  3 19:46:22 2020

@author: pdg26
"""
#function
 #2^n
def power(a):
    b = 1
    for i in range(0, a):
        b = 2 * b
    return b
 #n!
def fact(a):
    b = 1
    for i in range(1, a+1):
        b = i * b
    return b
#function
#main
n = 0
x = 1
while (x > 0.000001) :
    n = n+1
    x = power(n)/fact(n) 
    #check 
    #print("n = ", n, ":", power(n),"/", fact(n))
    #check
print("2^n/n! ≤ 0.000001 をみたす最小の自然数n：",n)
#main