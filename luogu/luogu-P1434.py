visited = []
field = []
r = 0
c = 0
def get_in(f) : return list(map(f,input().split()))
def main():
    global r,c,visited,field
    r,c = get_in(int)
    field = [get_in(int) for i in range(r)]
    visited = [[0] * c] * r
    ind = -1,-1
    tmax = -1
    for r1 in range(r) :
        for c1 in range(c):
            if field[r1][c1] > tmax :
                tmax = field[r1][c1]
                ind = r1,c1
    dfs(*ind)
def dfs(x,y) :
    if visited[x][y] : return