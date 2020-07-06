def main():
    n,m = list(map(int,input().split()))
    a = [[0] * n]  # a[层][人]
    a[0][0] = 1
    for i in range(1,m + 1) :
        b = [0] * n
        for j in range(n) :
            b[j] = a[i - 1][(j - 1 + n) % n] + a[i - 1][(j + 1) % n]
        a.append(b)
    print(a[m][0])
if __name__ == '__main__':
    main()