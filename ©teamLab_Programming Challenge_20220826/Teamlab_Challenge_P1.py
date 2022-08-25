# -*- coding: utf-8 -*-
"""
Created on Wed Aug 24 09:47:09 2022

@author: Eukarya(pdg2619)
@source: ©teamLab
"""

"""

羊が一匹、二匹

次の規則に従って一つの長い文字列を作ります。
1 から 100000 までの整数を順に並べる。
それぞれの整数の後に「SHEEP」を付ける。
結果の文字列(100000 個)を全部連結する。
 先頭(1 番目)からの 20 文字は以下のようになります。
1SHEEP2SHEEP3SHEEP4S
 
それでは、33333 番目からの 20 文字はどうなるかを求めてください

∴ HEEP3828SHEEP3829SHE

"""


counts = 0;
i = 0;

while(counts <= 33333):
    i += 1
    if i < 10 :
        counts = counts + 6
        print("{}SHEEP".format(i))
    elif i < 100:
        counts = counts + 7
        print("{}SHEEP".format(i))
    elif i < 1000:
        counts = counts + 8
        print("{}SHEEP".format(i))
    elif i < 10000:
        counts = counts + 9
        print("{}SHEEP".format(i))   
    else:
        counts = counts + 10
        print("{}SHEEP".format(i))
print(counts)