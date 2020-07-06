from math import sqrt
def is_primer_number(n):
    if (n < 2) : return False
    if (n > 1 and n < 6) :return True
    for i in range(2,int(sqrt(n))+1) :
        if n%i == 0 : return False
    return True
def get_huiwen_number(old,new,need_double):
    if old == 0 :
        if need_double : return new*11
        else : return new
    back_old = 0
    k = old * 1
    while(int(k)!=0) :
        back_old=back_old*10+k%10
        k=int(k/10)
    lenght = len(str(old))
    if need_double :
        return old * (10 ** (lenght + 2)) + new * 11 *\
        (10 ** (lenght)) + back_old
    else :
        return old * (10 ** (lenght + 1)) + new * \
        (10 ** (lenght)) + back_old
def get_primer_huiwen_numbers(min,max) :
    def get_primer_huiwen_numbers1(now_digit,digit,num,level = ''):
        level += '|'
        print(level,'call',now_digit,num,digit)
        if now_digit == digit - 1 :
            print('end one')
            if digit % 2 == 1:
                print('undouble')
                for i in range(0,10):
                    print(get_huiwen_number(num*1,i,False),'#')
            else :
                print('double')
                for i in range(0,10):
                    print(get_huiwen_number(num*1,i,True))
        else :
            for i in range(0,10):
                get_primer_huiwen_numbers1(now_digit+1,\
                digit,num*10 + i,level)
                level = level[:-1]
    level = ''
    for i in range(1,4) :
        #digit = i
        get_primer_huiwen_numbers1(0,i,0)
if __name__ == '__main__':
    print(get_primer_huiwen_numbers(5,100))
