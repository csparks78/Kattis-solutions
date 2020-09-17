# Kattis
# Cliff Sparks
# freefood

listlen = int(input())
arr = set()
for i in range(listlen):
    splitLine = list(map(lambda x: int(x), input().split(" ")))
    arr.update(range(splitLine[0], 1+splitLine[1]))
print(len(arr))

# Figure this code out!