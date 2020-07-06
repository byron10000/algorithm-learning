sum_ = 0

f = open('num.txt', 'w')


def main(n):
    global sum_
    sum_ = 0
    handler([n])
    print(sum_, '            ', n)
    print(sum_, ',\n', file=f)


def handler(n):
    global sum_
    sum_ += 1
    for j in range(1, int(n[-1] / 2) + 1):
        handler(n + [j])


if __name__ == '__main__':
    for i in range(0, 1001):
        main(i)
