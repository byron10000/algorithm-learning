points = [[0,0,1,1,0],
          [1,0,0,1,0],
          [0,1,0,0,1],
          [0,0,1,0,1],
          [1,1,0,0,0]]
N,ar,br = list(map(int,input().split()))
ars = list(map(int,input().split()))
brs = list(map(int,input().split()))
aso = 0
bso = 0
for i in range(0,N) :
    a = ars[i % ar]
    b = brs[i % br]
    aso += points[a][b]
    bso += points[b][a]
print(aso,bso)