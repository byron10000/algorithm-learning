def main():
    n = int(input())
    ns = list(map(int,input().split()))
    to = sum(ns) / n
    ans = 0
    for i in range(int(n/2)) :
        if ns[i] != to :
            ns[i+1] -= (to - ns[i])
            ans += 1
        if ns[n-i-1] != to :
            ns[n-i-2] -= (to - ns[n-i-1])
            ans += 1
    print(ans)
if __name__ == '__main__':
    main()