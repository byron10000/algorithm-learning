import itertools
import math
nums = list(itertools.permutations("123456789",9))
a,b,c = list(map(int,input().split(' ')))
list_range = len(nums)
had_answer = False
for j in range(list_range):
    i = nums[j]
    str_i = ''.join(list(i))
    na = int(str_i[0:3])
    nb = int(str_i[3:6])
    nc = int(str_i[6:9])
    if (na / a) == (nb / b) == (nc / c) :
        print(na,nb,nc,end='\n')
        had_answer = True
if not had_answer : print("NO!!!")