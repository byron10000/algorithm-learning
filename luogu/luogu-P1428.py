input();
lovely = list(map(int,input().split(' ')))
less_lovely = [0] * len(lovely)
for i in range(len(lovely)) :
    l = lovely[i]
    for v in lovely[0:i] :
        if v < l :
            less_lovely[i] += 1
print(' '.join(list(map(str,less_lovely))))
