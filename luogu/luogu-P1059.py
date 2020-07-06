n = int(input())
nums = list(map(int,input().split()))
nnums = []
for n in nums :
    if n not in nnums :
        nnums.append(n)
nnums.sort()
print(len(nnums))
print(' '.join(list(map(str,nnums))))