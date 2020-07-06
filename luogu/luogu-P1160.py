def get_in(func) :
    return list(map(func,input().split()))
def main() :
    n, = get_in(int)
    sdus = [1]
    for i in range(2,n + 1) :
        k,p = get_in(int)
        j = sdus.index(k) + p
        sdus.insert(j,i + 0)
    m, = get_in(int)
    for k in range(m) :
        i, = get_in(int)
        try :
            j = sdus.index(i)
        except ValueError :
            continue
        del sdus[j]
    print(' '.join(map(str,sdus)))

if __name__ == '__main__' :
    main()