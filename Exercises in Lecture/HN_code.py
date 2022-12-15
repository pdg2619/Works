# -*- coding: utf-8 -*-
"""
Created on Wed Dec 14 18:01:25 2022

@author: pdg26
"""

import re

def go(string, sum_main):
    string0 = string
    match = re.search('-?\d+', string)
    if string.isspace():
        return sum_main
    else:
        if int(match.group()) > 0:
            sum_main = sum_main + int(match.group())
            string = re.sub(match.group() + ' ','', string)
            if (string == string0):
                print(sum_main)
                return sum_main
            else:
                print(string,sum_main)
                go(string,sum_main)
        else:
            sum_main = sum_main + 0
            string = re.sub(match.group() + ' ','', string)
            print(string,sum_main)
            return go(string,sum_main)

#def main():
   
    #if __name__ == "__main__":
#my_str = '552 -1 1 14'
my_str = '552 -1 1 14'
print(go(my_str,0))


