pos = []
for i in range(int(input())):
    pos.append(tuple(map(int, input().split())))
gx, gy = tuple(map(int, input().split()))
ans = 0
i = 0
for a, b, g, k in pos:
    i += 1
    if (a <= gx <= a + g) and (b <= gy <= b + k):
        ans = i
if ans == 0:
    ans = -1
print(ans)
