# -*- coding: utf-8 -*-
"""
Created on Thu Aug 25 18:35:27 2022

@author: Eukarya(pdg2619)
@source: ©teamLab
"""

"""

切手・切手・切手

205円切手が30枚、82円切手が40枚、30円切手が30枚あります。
 
これらの切手の全部または一部（1枚以上）を使って額面の和として表せる金額は何通りあるか、求めてください。
 
∴ 7036

"""

price = 0;
P = [] ;

for i in range(0,31):
    for j in range(0,41):
        for k in range(0,31):
           price = 205*i+82*j+30*k
           if price > 0 :
               if price not in P:
                   P.append(price)
               
print(len(P))