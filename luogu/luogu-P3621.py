def main():
    """
    COW -> COWWCO -> COWWCOOCOWWC
    :return:
    """
    s, n = input().split()
    n = int(n)
    sl = len(s)
    for i in range(1, 64):
        if n < sl:
            return s[n]
        if sl * 2 >= n > sl:
            n = sl - (sl * 2 - n) + 1
            sl = int(sl / 2)
        else:
            sl *= 2


if __name__ == '__main__':
    print(main())
