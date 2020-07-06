def sort(lis) :
    nlis = []
    m = []
    for i in lis :
        if com(i,m) :
            m = i
    return m


def com(lis1,lis2) : # lis 1比2大
    if len(lis1) > len(lis2) :
        return True
    elif len(lis2) > len(lis1) :
        return False
    for i in range(max(len(lis1),len(lis2)),) :
        a = lis1[i]
        b = lis2[i]
        if(a>b) :
            return True
        else : return False
    return False
people = []
n = int(input())
for i in range(0,n+1) :
    people.append(list(input()))
best = sort(people)
print(people.index(best)+1)
print(''.join(map(str,best)))