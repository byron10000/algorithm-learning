id = int(input())
now = 1
now_sum = 0
while True :
    if now_sum + now >= id :
        if now % 2 == 0 :
            left = id - now_sum
            print('{}/{}'.format(str(left),str(now+1-left)))
            break
        else :
            left = id - now_sum
            print('{}/{}'.format(str(now+1-left), str(left)))
            break
    now_sum += now
    now += 1