
# Kattis - babelfish
# Cliff Sparks

import sys
from collections import defaultdict

    
def split(str):
    temp = line.split()
    dic[temp[1]] = temp[0]

def printit():
    print(dic[line[0:-1]])

dic = defaultdict(lambda: 'eh')
data = True
#print(split(line = 'dog cat'))

for line in sys.stdin:
        if data:
            if line == '\n':
                data = False
            else:
                temp = line
                split(temp)
        else: printit()


