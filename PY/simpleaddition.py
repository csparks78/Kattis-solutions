# Cliff Sparks
# Kattis 
# simpleaddition

def test():
    assert add(3, 3) ==  6
    assert add(100, 100) == 200
    assert add(100000, 200000) == 300000
    print("All test cases passed!")

def add(a, b):
    return(a+b)

a = int(input())
b = int(input())
test()
add(a,b)
