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

num = 0;
size = 40; 'even number'
C = 0;
C = 2 + 4*(int(size*0.5)-1);
SET1 = [0];
SET2 = [];
ch = ["A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"];
result = [];
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
    result.insert(-i,ch[SET2[i]])
    result.insert(i,ch[SET1[i]])
       
answer = "".join(result)
print(answer)
    