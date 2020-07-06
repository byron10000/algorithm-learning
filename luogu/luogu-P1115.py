def get_in(func) :
    return list(map(func,input().split()))
def main() :
    n, = get_in(int)
    mlist = get_in(int)
    maxI = mlist[0]
    sums = maxI
    for i in range(1,len(mlist)) :
        if sums < 0 : sums = 0
        sums += mlist[i]
        maxI = max(maxI,sums)
    print(maxI)

if __name__ == '__main__':
    main()

