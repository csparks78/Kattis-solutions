# Kattis odd man out
# Cliff Sparks

import collections

N = int(input())

for i in range(N): # Takes input and fills array
    G = input()
    codes = [int(x) for x in input().split(' ')]

    c = collections.Counter(codes) # Counts number in collection


    print("Case #" + str(i + 1) + ": " + str(c.most_common()[len(c) - 1][0]))


    

