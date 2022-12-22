# -*- coding: utf-8 -*-
"""
Created on Wed Dec 14 18:01:25 2022

@author: pdg26
"""

import re

def summation(string, sum_main):
    string0 = string
    match = re.search('-?\d+', string)
    if string.isspace():
        return sum_main
    else:
        if int(match.group()) > 0:
            sum_main = sum_main + int(match.group())
            string = re.sub(match.group() + ' ','', string)
            if (string == string0):
                return sum_main
            else:
                summation(string,sum_main)
        else:
            sum_main = sum_main + 0
            string = re.sub(match.group() + ' ','', string)
            return summation(string,sum_main)
        
def go(N, result):
    if int(N) > 0 :
        n = 0;
        n = input()
        if n.isdigit():
            if int(N) > 0 and int(N) <= 100:
                string = input()
                if (string[1:len(string)-1].count(' ') + 1) == int(n):
                    k = summation(string, 0) # return values is Volatility value
                    N = int(N)-1
                    print(k)
                    result = result + str(k)
                    print(result)
                    go(N, result)
                else:
                    print("Error : Please enter enough numbers or Please make the space between the numbers one space.")
            else:
                print("Error : Please input number(interger) in range 1 to 100") 
        else : 
            print("Error : Please input number(interger)")
    else :
         return result

#============================================================================            
N = 0
N = input()
output = ''

if N.isdigit():
    if int(N) > 0 and int(N) <= 100:
        go(N, output)
    else:
       print("Error : Please input number(interger) in range 1 to 100") 
else:
    print("Error : Please input number(interger)")
    
#def main():
       
        #if __name__ == "__main__":
    
#my_str = '552 -1 1 14'
#summation(my_str,0)


