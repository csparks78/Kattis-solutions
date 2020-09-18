# Kattis lastfactorialdigit
# Cliff Sparks

def testFact(): #test the get factorial function
    assert getFact(5) == 120
    assert getFact(10) == 3628800
    assert getFact(3) == 6    

def getFact(n): # Function to get n!
    fact = 1    
    if int(n) >= 1:
        for i in range (1, int(n) + 1): 
            fact = fact * i
    return(fact % 10) # Returns the last number of the result of n!

#testFact() # Testing of the getFact(n) function
lst = []
x = int(input())
for i in range(0, x):
    fill = getFact(input())
    lst.append(fill)
for i in range(len(lst)):
    print (lst[i])
