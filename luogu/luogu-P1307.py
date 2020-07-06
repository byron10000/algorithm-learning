def main() :
    old_num = input()
    symbol = '+'
    if old_num[0] == '-' :
        symbol = '-'
        old_num = old_num[1:]
    new_num = []
    for n in old_num :
        new_num.insert(0,n)
    new_num.insert(0,symbol)
    print(int(''.join(new_num)))

if __name__ == '__main__':
    main()