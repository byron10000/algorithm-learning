n,a,b = 0,0,0
visited = []
k = []
ans = 2147483647

def get_in(func) :
    return list(map(func,input().split()))

def main():
    global n,a,b,visited,ans,k
    n,a,b = get_in(int)
    k = get_in(int)
    visited = [0] * (n + 1)
    work(a,0)
    if ans == 2147483647 : print(-1)
    else : print(ans)

def work(now,l) :
    global n, a, b, visited, ans, k
    if now > n or now <= 0 :
        return -1
    if now == b :
        ans = min([ans,l])
        return 0
    elif l > ans :
        return -1
    if visited[now] == -1 :
        return -1
    elif visited[now] != 0 :
        ans = min([ans,l + visited[now]])
        return visited[now] + 1
    if k[now - 1] == 0 :
        return -1
    visited[now] = -1
    x = work(now + k[now - 1],l + 1)
    y = work(now - k[now - 1],l + 1)
    if (x != -1 and y != -1) :
        visited[now] = min(x,y) + 1
        return min(x,y) + 1
    if (x != -1 or y != -1) :
        visited[now] = max(x,y) + 1
        return max(x,y) + 1
    return -1

if __name__ == '__main__':
    main()