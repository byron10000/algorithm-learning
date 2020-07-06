def get_in() : return list(map(int,input().split()))
code_list = '123456789abcdefghijklmnopqrstuvwxyz'
p1,p2,p3 = get_in()
string = input()
read_string = string[0]
ans = ''
for s in string[1:] :
    read_string += s
    if read_string[-2] == '-' :
        try :
            c1 = read_string[-3]
        except IndexError: continue
        c2 = s
        if not ((c1.isdigit() and c2.isdigit()) or \
                (c1.isalpha() and c2.isalpha())) : continue
        if code_list.index(c2.lower()) - code_list.index(c1.lower()) < 1:continue
        if code_list.index(c2.lower()) - code_list.index(c1.lower()) == 1 :
            ans += read_string[:-2]
            read_string = c2
            continue
        else :
            mid = ''
            if p1 != 3 :
                for i in range(code_list.index(c1.lower()) + 1,\
                               code_list.index(c2.lower())) :
                    mid += code_list[i] * p2
                if p1 == 2 : mid.upper()
                if p3 == 2 : mid = mid[::-1]
            else :
                mid  = '*' * (code_list.index(c2.lower()) - \
                       code_list.index(c1.lower()) - 1)
            ans += (read_string[:-2] + mid)
            read_string = c2
ans += read_string
print(ans)
