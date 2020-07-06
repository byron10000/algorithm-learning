n = int(input())
s = list(map(int,input().split()))
sum_ = 0
while len(s) > 1 :
    s.sort()
    m1 = s[0]
    m2 = s[1]
    s.remove(m1)
    s.remove(m2)
    s.append(m1+m2)
    sum_ += m1 + m2
print(sum_)

