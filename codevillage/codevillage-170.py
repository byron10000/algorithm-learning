mod_num = 10 ** 9 + 7


def main():
    global mod_num
    n, m = tuple(map(int, input().split()))
    if m <= 2 or n <= 0:
        print(0)
        return
    result = m * (m - 1) * (m - 2)
    mul_num = (m - 1) * (m - 2) * max(m - 3, 1)
    for i in range(n - 1):
        result = result % mod_num
        result *= mul_num
    result = result % mod_num
    print(result)


if __name__ == '__main__':
    main()
