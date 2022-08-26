# -*- coding: utf-8 -*-
"""
Created on Thu Aug 25 18:24:49 2022

@author: Eukarya(pdg2619)
@source: ©teamLab
"""

"""

ピタゴラスな三角形

三辺の長さが3，4，5である三角形は直角三角形です。これは「ピタゴラスの定理」から示されます。
 
【ピタゴラスの定理】 直角三角形について、直角をはさむ2辺の長さがaとbで斜辺の長さがcであるとき a2 + b2 = c2 が成り立つ。
つまり、32 + 42 = 52（ = 25）が成立するので直角三角形といえるのです。
 
三辺の長さが整数で面積が5000以下である直角三角形は何種類あるかを求めてください。
 
※合同なもの（例えば“3，4，5”と“5，4，3”）は区別せず1種類として数えます。


∴ 105

"""

gr = [];
S = 0;
X = 0;

for i in range(1, 10001):
    for j in  range(i, 10001):
        S = i*j;
        if S <= 10000:
            X = (i**2+j**2)**(0.5)
            if int(X) == X:
                gr.append([i,j])

print(len(gr))
            
        
