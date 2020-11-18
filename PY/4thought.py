# Kattis 4 thought
# ID 4thought
# Cliff Sparks


signs = [' + ', ' - ', ' * ', ' // ']

values = {}
for x in signs:
    for y in signs:
        for z in signs:
            val_str = "4{:s}4{:s}4{:s}4".format(x, y, z)
            val = eval(val_str)
            values[val] = val_str.replace('//', '/') + " = {:d}".format(val)

for i in range(0, int(input())):
    n = int(input())
    if n < -60 or n > 256 or n not in values:
        print("no solution")
    else:
        print(values[n])

