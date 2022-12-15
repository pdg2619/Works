# -*- coding: utf-8 -*-
"""
Created on Wed Dec 14 18:01:25 2022

@author: pdg26
"""

def main():
    import re
    def go(string, sum_main):
        match = re.search('\d+', string)
        if string.isspace():
           return sum_main
        else:    
            if int(match.group()) > 0:
                sum_main = sum_main + int(match.group())
                string = re.sub(match.group() + ' ','', string)
                return main(string)
            else:
                sum_main = sum_main + 0
                return main(string)

my_str = '552 -1 1 14';

main()

go(my_str,0)
         

