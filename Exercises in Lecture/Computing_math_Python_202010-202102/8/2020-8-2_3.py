# -*- coding: utf-8 -*-
"""
Created on Thu Dec  3 14:42:40 2020

@author: pdg26
"""

#Quick sort
def quick_sort(arr):
    if len(arr) <= 1:
        return arr
    pivot = arr[len(arr) // 2]
    prev_arr, mid_arr, next_arr = [], [], []
    for num in arr:
        if num < pivot:
             prev_arr.append(num)
        elif num > pivot:
             next_arr.append(num)
        else:
             mid_arr.append(num)
    return quick_sort(prev_arr) + mid_arr + quick_sort(next_arr)
#Quick sort
x = [0] * 10
for n in range(0, 10):
    x[n] = int(input("整数を入力して下さい：")) 
y = quick_sort(x)
print(y)
print("最小値：", y[0], "最大値：", y[9])
print(y[1:8])