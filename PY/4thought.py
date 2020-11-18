# Kattis 4 thought
# ID 4thought
# Cliff Sparks



def createVal(values, signs):
    for x in signs:
        for y in signs:
            for z in signs:
                val_str = "4{:s}4{:s}4{:s}4".format(x, y, z)
                val = eval(val_str)
                values[val] = val_str.replace('//', '/') + " = {:d}".format(val)                

def test(values, signs):
    n = 9
    assert(values[n] == '4 / 4 + 4 + 4 = 9')
    n = 0
    assert(values[n] == '4 / 4 / 4 / 4 = 0')
    n = 7
    assert(values[n] == '4 - 4 / 4 + 4 = 7')
    n = -8
    assert(values[n] == '4 - 4 * 4 + 4 = -8')
    n = 24
    assert(values[n] == '4 * 4 + 4 + 4 = 24')
    print("all test cases passed!")

signs = [' + ', ' - ', ' * ', ' // ']
values = {}

createVal(values, signs)

#test(values, signs) # Test cases

for i in range(0, int(input())):
    n = int(input())
    if n < -60 or n > 256 or n not in values:
        print("no solution")
    else:
        print(values[n])

