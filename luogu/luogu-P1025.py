sums = 0
n = 0
k = 0
def main():
    global n,k
    n,k = list(map(int,input().split()))
    work(0,n,1)
    print(sums)

def work(l,f,s) :
    global sums,n,k
    if (l == k and f == 0) :
        sums += 1
        return
    elif (f <= 0) :
        return
    for i in range(s,n) :
        work(l + 1,f - i,i)
if __name__ == '__main__':
    main()