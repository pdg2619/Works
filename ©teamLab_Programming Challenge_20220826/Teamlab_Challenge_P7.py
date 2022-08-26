# -*- coding: utf-8 -*-
"""
Created on Thu Aug 25 18:49:13 2022

@author: pdg26
@source: ©teamLab
"""

"""

アルファベット渦巻き

縦横6マスのマス目をもつ盤があります。この盤の各マスを左上から始めて「渦巻き」上にたどっていって、
その順にA，B，C，D，E……のアルファベット文字を書いていきます。
（Zまで使い切ったら、またAから始めます。）全てのマスに文字を書き終えると、以下の図のようになります。

        →→→→→→→→→→→→→→→→
        A  B  C  D  E  F↓
        →→→→→→→→→→→→→   ↓
      ↑ T  U  V  W  X↓ G↓
      ↑    →→→→→→→   ↓  ↓
      ↑ S ↑F  G  H↓ Y↓ H↓
      ↑   ↑   →   ↓  ↓  ↓
      ↑ R ↑E ↑J  I↓ Z↓ I↓
      ↑   ↑   ←←←←   ↓  ↓
      ↑ Q ↑D  C  B  A↓ J↓
      ↑    ←←←←←←←←←←   ↓
      ↑ P  O  N  M  L  K↓
       ←←←←←←←←←←←←←←←←←←
      
文字を書き終えた盤
ここで、左上から右下に降りる対角線に沿って文字を読むと「AUGIAK」となりました。

それでは、縦横40マス目をもつ盤について、同様の方法で「渦巻き」状にアルファベット文字を書いて、
さらに左上から右下への対角線に沿って文字を読んで得られる文字列は何か、求めてください。

∴AASCEYKOKYECSAASCEYKMEOQKWAWKQOEMMEOQKWA

"""
"1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26"
"A B C D E F G H I J  K  L  M  N  O  P  Q  R  S  T  U  V  W  X  Y  Z"
num = 1;
size = 40; 'even number'
C = 0;
C = 2 + 4*(int(size*0.5)-1);
SET1 = [1];
SET2 = [];
ch = [];
answer = 0;

if size % 2 == 0:
    while(C > 2):
        num = num + C
        SET2.append((num % 26))
        num = num + C
        SET1.append((num % 26))
        C = C - 4

num = num + 2        
SET2.append(num % 26)

for i in range(0, int(size*0.5)):
    if SET1[i] == 1:
        ch.append('A')
    if SET1[i] == 2:
        ch.append('B')
    if SET1[i] == 3:
        ch.append('C')
    if SET1[i] == 4:
        ch.append('D')
    if SET1[i] == 5:
        ch.append('E')
    if SET1[i] == 6:
        ch.append('F')
    if SET1[i] == 7:
        ch.append('G')
    if SET1[i] == 8:
        ch.append('H')
    if SET1[i] == 9:
        ch.append('I')
    if SET1[i] == 10:
        ch.append('J')
    if SET1[i] == 11:
        ch.append('K')
    if SET1[i] == 12:
        ch.append('L')
    if SET1[i] == 13:
        ch.append('M')
    if SET1[i] == 14:
        ch.append('N')
    if SET1[i] == 15:
        ch.append('O')
    if SET1[i] == 16:
        ch.append('P')
    if SET1[i] == 17:
        ch.append('Q')
    if SET1[i] == 18:
        ch.append('R')
    if SET1[i] == 19:
        ch.append('S')
    if SET1[i] == 20:
        ch.append('T')
    if SET1[i] == 21:
        ch.append('U')
    if SET1[i] == 22:
        ch.append('V')
    if SET1[i] == 23:
        ch.append('W')
    if SET1[i] == 24:
        ch.append('X')
    if SET1[i] == 25:
        ch.append('Y')
    if SET1[i] == 26:
        ch.append('Z')

for i in range(0, int(size*0.5)):
    if SET2[19-i] == 1:
        ch.append('A')
    if SET2[19-i] == 2:
        ch.append('B')
    if SET2[19-i] == 3:
        ch.append('C')
    if SET2[19-i] == 4:
        ch.append('D')
    if SET2[19-i] == 5:
        ch.append('E')
    if SET2[19-i] == 6:
        ch.append('F')
    if SET2[19-i] == 7:
        ch.append('G')
    if SET2[19-i] == 8:
        ch.append('H')
    if SET2[19-i] == 9:
        ch.append('I')
    if SET2[19-i] == 10:
        ch.append('J')
    if SET2[19-i] == 11:
        ch.append('K')
    if SET2[19-i] == 12:
        ch.append('L')
    if SET2[19-i] == 13:
        ch.append('M')
    if SET2[19-i] == 14:
        ch.append('N')
    if SET2[19-i] == 15:
        ch.append('O')
    if SET2[19-i] == 16:
        ch.append('P')
    if SET2[19-i] == 17:
        ch.append('Q')
    if SET2[19-i] == 18:
        ch.append('R')
    if SET2[19-i] == 19:
        ch.append('S')
    if SET2[19-i] == 20:
        ch.append('T')
    if SET2[19-i] == 21:
        ch.append('U')
    if SET2[19-i] == 22:
        ch.append('V')
    if SET2[19-i] == 23:
        ch.append('W')
    if SET2[19-i] == 24:
        ch.append('X')
    if SET2[19-i] == 25:
        ch.append('Y')
    if SET2[19-i] == 26:
        ch.append('Z')

answer = "".join(ch)
print(answer)