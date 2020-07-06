n = 0
string = ""
def main() :
    global n,string
    n = int(input())
    string = input()
    work(0,len(string))
    print()

def out(s,e) :
    global string
    B = 1
    I = 1
    for i in range(e - s) :
        if string[s + i] == '1' :
            B = 0
        elif string[s + i] == '0' :
            I = 0
    if B :
        print('B',end = '')
    elif I:
        print('I',end = '')
    else:
        print('F',end = '')

def work(s,e) :
    global string
    s = int(s)
    e = int(e)
    if e - s == 1:
        out(s,e)
    else :
        work(s,s + (e - s) / 2)
        work(s + (e - s) / 2,e)
        out(s,e)

if __name__ == '__main__' :
    main()