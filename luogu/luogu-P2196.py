def main():
    n = int(input())
    dl = list(map(int, input().split()))
    con = []
    for i in range(n):
        con.append([False] * i)
        for j, h in enumerate(input().split()):
            if int(h):
                con[i][j + 1] = True


if __name__ == '__main__':
    main()
