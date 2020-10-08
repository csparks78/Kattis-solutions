
import sys



def answer(temps: str):
    input(tempsList = temps.split())
    count = 0
    for t in tempsList:
        if int(t) < 0:
            count += 1
    return count

answer
