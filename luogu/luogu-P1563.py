def get_dir(peo_dir,com_dir) :
    if peo_dir == '0' :
        if com_dir == 0 : return -1
        else : return 1
    else :
        if com_dir == 0 : return 1
        else : return -1
n,m = list(map(int,input().split()))
people = [(0,0)] * n
command = [(0,0)] * m
for i in range(n) :
    people[i] = list(map(str,input().split())) + [i]
for i in range(m) :
    command[i] = list(map(int,input().split()))
now_people = people[0]
for dir,num in command :
    now_people = people[(get_dir(now_people[0],dir) * num + now_people[2] + n) % n]
print(now_people[1])