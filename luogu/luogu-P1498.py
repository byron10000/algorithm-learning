base_str = ' /\\\n/__\\'
endl = '\n'
def main():
    n = int(input())
    nstr,l = work(n)
    print('\n'.join(nstr))
def work(n):
    if n == 1 :
        return base_str.split('\n'),4
    last,lenght = work(n - 1)
    nstr = ''
    for i in range(int(lenght / 2)) :
        nstr += ' ' * int (lenght / 2) + last[i] + endl
    for i in range(int(lenght / 2)) :
        nstr +=  last[i] + ' ' * int((lenght / 2 - 1) - i) + last[i] + endl
    return nstr.split('\n'),lenght * 2
if __name__ == '__main__':
    main()