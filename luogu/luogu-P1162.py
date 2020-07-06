pos = [[1, 0], [0, 1], [-1, 0], [0, -1]]
mg = []
ar = []
def main():
    n = int(input())
    for i in range(n):
        k = input().split()
        for j in range(n):
            if k[j] == '0':
                k[j] = '2'
        ar.append([0] * n)
        mg.append(k)
    for i in range(n) :
        dfs(0,i)
        dfs(n - 1,i)
        dfs(i,0)
        dfs(i,n - 1)
    for i in range(n) :
        print(' '.join(mg[i]))


def dfs(x, y):
    #print("x : {},y : {}".format(x,y))
    if mg[x][y] == '1' : return
    if ar[x][y] == 1 : return
    ar[x][y] = 1
    if mg[x][y] == '2': mg[x][y] = '0'
    for p in pos:
        nx = x + p[0]
        ny = y + p[1]
        try:
            m = mg[nx][ny]
        except IndexError:
            continue
        dfs(nx, ny)

if __name__ == '__main__':
    main()