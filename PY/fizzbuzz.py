#!usr/bin/python3


input = input()
x, y, n = input.split()
#print(x, y, n)
x = int(x) #2
y = int(y) #3
n = int(n) #7
for i in range(1, n + 1):
    if i % x == 0 and i % y == 0: print('fizzbuzz')
    elif i % x == 0: print('Fizz')
    elif i % y == 0: print('Buzz')
    else: print(i)