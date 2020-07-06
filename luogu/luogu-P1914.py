n = int(input())
string = input()
leters = 'abcdefghijklmnopqrstuvwxyz'
for l in string :
    id = leters.index(l)
    id += n
    nl = leters[id % 26]
    print(nl,end = '')
