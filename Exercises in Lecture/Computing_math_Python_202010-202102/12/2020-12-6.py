# -*- coding: utf-8 -*-
"""
Created on Wed Jan 13 20:07:51 2021

@author: pdg26
"""

import random

a = int(input("ジャンケンポン (グー 0, チョキ 1, パー 2):"));
b = random.randint(0,2);
print("コンピューターは",b,"です。");    
while a == b :
    a = int(input("あいこです。あいこでしょ (グー 0, チョキ 1, パー 2):"));
    b = random.randint(0,2);
    print("コンピューターは",b,"です。");
if (a == 0 and b == 2) or (a == 2 and b == 1) or (a == 1 and b == 0): 
    print("コンピュータの勝ちです。");
elif (a == 2 and b == 0) or (a == 1 and b == 2) or (a == 0 and b == 1):
    print("あなたの勝ちです。");
    