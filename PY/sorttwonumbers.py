#!usr/bin/python3

line = input()
x, y = line.split()
x = int(x)
y = int(y)

if (x < y): print(x, y)
elif (x > y): print(y, x)
else: print(x, y)