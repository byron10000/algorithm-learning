def P1010(n):
    if n == 2 :
        return "2"
    if n == 0 :
        return "0"
    if n == 1 :
        return "2(0)"
    s = []
    x = bin(n)[2:]
    for i in range(len(x)) :
        x1 = x[i]
        if (x1 == "1") :
            s.append("2({})".format(P1010(len(x) - i - 1)))
    return '+'.join(s)
if __name__ == '__main__':
    x = int(input())
    print(P1010(x).replace("2(2(0))","2"))