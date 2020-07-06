def main():
    pos = ((0, -1), (-1, 0), (0, 1), (1, 0))
    n, m = list(map(int, input().split()))
    mg = []
    # mg[n][m]
    x, y = 0, 0
    ns = True
    for i in range(n):
        k = input()
        if ns and k.find("S") != -1:
            x, y = i, k.find("S")
            ns = False
        mg.append(k)
    stack = [(x, y)]
    vis = {}

    while len(stack) > 0:
        f = False
        print(x, y)
        old_x, old_y = stack.pop()
        x = (old_x + n) % n
        y = (old_y + m) % m
        if (x != x or y != y):
            f = True
        try:
            vis[(x, y)]
        except KeyError:
            vis[(x, y)] = True
        else:
            continue
        vis[(x, y)] = True
        c = mg[x][y]
        if c == "#":
            continue
        if f:
            return True
        for ax, ay in pos:
            x1 = x + ax
            y1 = y + ay
            stack.append((x1, y1))
    return False

if __name__ == "__main__":
    anss = []
    for _ in range(1):
        try:
            anss.append(main())
        except EOFError:
            continue
    for ans in anss:
        if ans:
            print("Yes")
        else:
            print("No")
