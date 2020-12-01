

import timeit, sys
# x = 47
# code = '''
# global x
# x = x + x
# '''
code = '''
n = 100000 # 100K takes 0.056 seconds on my 2019 macbook pro
ans = ''
for i in range(n):
    ans += str(i**2)
print(ans)
'''
timeit.timeit(stmt=code, number=1)