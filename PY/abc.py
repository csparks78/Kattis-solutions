# Kattis ABC
# ID abc
# Cliff Sparks

def test():
    assert(orderNum("1 5 3", "ABC") == '1 3 5')
    assert(orderNum("6 4 2", "CAB") == '6 2 4')
    assert(orderNum("56 48 79", "BAC") == '56 48 79')
    assert(orderNum("0 10 100", "CAB") == '100 0 10')
    assert(orderNum("16 35 75", "CBA") == '75 35 16')
    print("All test cases passed!")

def orderNum(number,order): 
    answer = []
    number = number.split() # splits up into list

    for i in range(len(number)):
        number[i] = int(number[i]) # create a list of integers

    number.sort() # sorts the list
    tmp = {"A":number[0], "B":number[1], "C":number[2]} # create dict of sorted numbers

    for i in order:
        answer.append(str(tmp.get(i)))

    return answer[0]+" "+answer[1]+" "+answer[2]

#test() # run test cases

number = input()
order = input()
print(orderNum(number,order))