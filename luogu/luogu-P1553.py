def reversal(num) :
    num = str(num)
    new_num = ''
    for i in range(len(num),0,-1) :
        new_num += num[i-1]
    return new_num
ui = int(input())
