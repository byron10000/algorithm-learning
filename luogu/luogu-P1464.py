m = {}


def dfs(a: int, b: int, c: int):
    global m
    if (a, b, c) in m:
        return m[(a, b, c)]
    if a <= 0 or b <= 0 or c <= 0:
        return 1
    elif a > 20 or b > 20 or c > 20:
        return dfs(20, 20, 20)
    if a < b < c:
        ans = dfs(a, b, c - 1) + dfs(a, b - 1, c - 1) - dfs(a, b - 1, c)
    else:
        ans = dfs(a - 1, b, c) + dfs(a - 1, b - 1, c) + \
              dfs(a - 1, b, c - 1) - dfs(a - 1, b - 1, c - 1)
    m[(a, b, c)] = ans
    return ans


def main():
    a, b, c = map(int, input().split())
    if a == -1 and b == -1 and c == -1:
        raise AssertionError
    print(f"w({a}, {b}, {c}) = {dfs(a, b, c)}")


if __name__ == "__main__":
    try:
        while True:
            main()
    except AssertionError:
        pass
