def get_in(func) :
    return list(map(func,input().split()))
class p :
    pass
def main():
    q = []
    n,m = get_in(int)
    out = []
    for i in range(n) :
        p1 = p()
        p1.id = i + 1
        q.insert(0,p1)
    i = 1
    while len(q) != 0 :
        p1 = q.pop()
        if i >= m :
            out.append(str(p1.id))
            i = 1
        else :
            q.insert(0,p1)
            i += 1
    print(' '.join(out))

if __name__ == '__main__':
    main()