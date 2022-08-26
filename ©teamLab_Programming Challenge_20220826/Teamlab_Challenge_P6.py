# -*- coding: utf-8 -*-
"""
Created on Thu Aug 25 18:43:05 2022

@author: Eukarya(pdg2619)
@source: ©teamLab
"""

"""

掛け算耐性

整数に対して、「一桁ことにばらして各桁の数字の積を求める」という操作を考えます。
 
123 → 1 × 2 × 3 = 6
666 → 6 × 6 × 6 = 216
1024 → 1 × 0 × 2 × 4 = 0
任意の整数について、「操作」を繰り返し適用すると、最終的には一桁の数に到達します。
 
77 → 49 → 36 → 18 → 8
123456 → 720 → 0
一桁の数に到達するのに必要な「操作」の回数は、77では4回、123456では2回となります。
 
それでは、1000000以下の整数のうち、一桁の数に到達するのに必要な「操作」の回数が4回となるものはいくつあるかを、求めてください。
 
∴ 66772

"""
from functools import reduce

num = 0;
Z = [];
SET = [];

for i in range(10, 1000001):
    num = 0;
    num = i;
    Z = [int(num) for num in str(num)];
    Z = reduce(lambda x, y: x*y, Z)
    if Z > 9:
        Z = [int(Z) for Z in str(Z)];
        Z = reduce(lambda x, y: x*y, Z)
        if Z > 9:
            Z = [int(Z) for Z in str(Z)];
            Z = reduce(lambda x, y: x*y, Z)
            if Z > 9:
                Z = [int(Z) for Z in str(Z)];
                Z = reduce(lambda x, y: x*y, Z)
                if Z < 10:
                    SET.append(num)

print(len(SET)) 