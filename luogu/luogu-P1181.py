def get_in() : return list(map(int,input().split()))
n,m = get_in()
A = get_in()
sum_ = 0
sum1 = 0
for a in A :
    if (a + sum1 > m) :
        sum1 = a
        sum_ += 1
    else :
        sum1 += a
if sum1 != 0 : sum_ += 1
print(sum_)