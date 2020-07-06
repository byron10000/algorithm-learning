a = {}
def main():
    b,p,k = list(map(int,input().split()))
    a[0] = 1 % k
    a[1] = b % k
    #print(work(b,p,k))
    ans = work(b,p,k)
    print("{}^{} mod {}={}".format(b,p,k,ans))

def work(b,p,k):
    p = int(p)
    try :
        a[p]
    except KeyError : pass
    else :
        return a[p]
    bp = bin(p)[2:]
    if (bp.count('1') == 1) :
        ans = work(b,p / 2,k) ** 2 % k
        a[p] = ans
        return ans
    else :
        ans = 1
        for i in range(0,len(bp)) :
            if bp[len(bp) - i - 1] == '1' :
                ans *= work(b,2 ** i,k)
        ans = ans % k
        a[p] = ans
        return ans
if __name__ == '__main__':
    main()