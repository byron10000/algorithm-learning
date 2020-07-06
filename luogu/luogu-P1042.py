def get_in() :
    com = []
    while True:
        inp = input()
        for i in inp:
            if i == 'E': return com
            com.append(i)
def main() :
    com = get_in()
    a = 0;b = 0
    for c in com :
        if c == 'W' :
            a += 1
        else :
            b += 1
        if (a >= 11 and a - b >= 2) :
            print('{}:{}'.format(a,b))
            a = 0;b = 0
        elif (b >= 11 and b - a >= 2) :
            print('{}:{}'.format(a, b))
            a = 0;b = 0
    if (a != 0 and b != 0) :
        print('{}:{}'.format(a, b))
    print()
    a = 0;
    b = 0
    for c in com:
        if c == 'W':
            a += 1
        else:
            b += 1
        if (a >= 21 and a - b >= 2):
            print('{}:{}'.format(a, b))
            a = 0;b = 0
        elif (b >= 21 and b - a >= 2):
            print('{}:{}'.format(a, b))
            a = 0;b = 0
    if (a != 0 and b != 0):
        print('{}:{}'.format(a, b))
if __name__ == '__main__':
    main()