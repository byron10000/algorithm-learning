def change(list,from_pos,to_pos,value):
    for i in range(from_pos,to_pos) :
        list[i] = value
l,m = list(map(int,input().split(' ')))
trees = [1] * (l+1)
for i in range(m):
    from_pos,to_pos = list(map(int,input().split(' ')))
    change(trees,from_pos,to_pos+1,0)
print(sum(trees))
