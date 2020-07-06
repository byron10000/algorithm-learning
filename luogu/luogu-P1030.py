def main() :
    zh = input()
    hh = input()
    work(zh,hh)

def out(s) :
    print(s,end = '')

def work(zh,hh) :
    if len(zh) == 0 :
        return
    if len(zh) == 1 :
        out(zh)
        return
    for i in range(len(hh)- 1,-1,-1) :
        mid = zh.find(hh[i])
        if mid != -1 :
            out(zh[mid])
            work(zh[:mid],hh)
            work(zh[mid + 1:],hh)
            break

if __name__ == '__main__' :
    main()