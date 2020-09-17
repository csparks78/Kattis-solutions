# grassseed
# Cliff Sparks

# RUNTIME Error

cost = float(input())
lawns = int(input())
temp = int(0)
total = int(0)
for i in range(lawns): 
    length = float(input())    
    width = float(input())    
    total += length * width
grand = total * cost
print("{:.7f}".format(grand))

