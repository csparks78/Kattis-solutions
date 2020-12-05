# Kattis Pig Latin
# ID piglatin
# Cliff Sparks 

import sys

def test():
    assert(word("hello") == "ellohay")
    assert(word("ordinary") == "ordinaryyay")
    assert(word("python") == "ythonpay")
    assert(word("cliff") == "iffclay")
    assert(word("another") == "anotheryay")   
    print("all test cases passed")

vowel = {'a', 'e', 'i', 'o', 'u', 'y'}

def word(string):
    if string[0] not in vowel:
        for i, x in enumerate(string):
            if x in vowel:
                return string[i:] + string[:i] + 'ay'
    else:
        return string + 'yay'

#test()

for line in sys.stdin:
    print(" ".join(map(word, line.split())))