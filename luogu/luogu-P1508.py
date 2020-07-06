table = []
visited = []
m,n = 0,0
under_flow = (2 ** 31) * -1
ans = under_flow
def get_in(func) :
    return list(map(func,input().split()))
def main() :
    global table, visited, m, n, under_flow, ans
    m,n = get_in(int)
    table = []
    for i in range(m) :
        visited.append([under_flow] * n)
        table.append(get_in(int))
    visited[4][1]
    dfs(n // 2,m - 1,0,0)
    dfs(n // 2 - 1,m - 1,0,0)
    dfs(n // 2 + 1,m - 1,0,0)
    print(ans)


def dfs(x:int,y:int,sum:int,l:int) :
    global table,visited,m,n,under_flow,ans
    print('*',l,x,y,sum)
    if (x >= n or x < 0 or y >= m or y < 0):
        ans = max(sum,ans)
        return 0
    if visited[y][x] == under_flow - 1:
        return under_flow
    elif visited[y][x] >= sum :
        return under_flow
    elif visited[y][x] != under_flow :
        return visited[y][x] + sum
    visited[y][x] = under_flow - 1
    a = dfs(x,y - 1,sum + table[y][x],l + 1)
    b = dfs(x + 1,y - 1,sum + table[y][x],l + 1)
    c = dfs(x - 1,y - 1,sum + table[y][x],l + 1)
    print('#',l,a,b,c,ans)
    visited[y][x] = max(a,b,c) + table[y][x]
    return visited[y][x]

if __name__ == "__main__" :
    main()
