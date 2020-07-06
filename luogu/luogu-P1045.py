def main():
    p = int(input())
    ans = [2] + [0] * 499
    for i in range(1,p) :
        j = 0
        for k,l in zip(ans,range(500)) :
            k1 = k * 2 + j
            if k1 >= 10 :
                j = 1
                k1 = k1 % 10
            else: j = 0
            ans[l] = k1
    ans[0] -= 1
    ans.reverse()
    for k,l in zip(ans,range(500)) :
        print(k , end = '')
        if l % 50 == 49 :
            print()
if __name__ == '__main__':
    main()