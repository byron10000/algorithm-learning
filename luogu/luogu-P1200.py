def get_num(id):
    num = 1
    for i in id :
        num *= (leters.index(i.lower())+1)
    return num % 47
leters = 'abcdefghijklmnopqrstuvwxyz'
id1 = input()
id2 = input()
if get_num(id1) == get_num(id2) :
    print('GO')
else :
    print('STAY')
