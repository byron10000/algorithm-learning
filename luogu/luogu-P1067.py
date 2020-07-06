n = int(input())
a = list(map(int,input().split()))
ans = ''
a = a[::-1]
for i in range(n,-1,-1) :
    if i == 0 :
        ans += '{:+}'.format(a[i])
    elif a[i] == 0 :
        continue
    elif a[i] == 1 :
        if i == n :
            ans += 'x^{}'.format(i)
        else :
            ans += '+x^{}'.format(i)
    elif a[i] == -1 :
        ans += '-x^{}'.format(i)
    else :
        if i == n :
            ans += '{}x^{}'.format(a[i],i)
        else :
            ans += '{:+}x^{}'.format(a[i],i)
if ans[0] == '+' : ans = ans[1:]
print(ans)