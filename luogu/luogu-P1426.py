def main():
    #pass
    s,x = list(map(int,input().split(' ')))
    speed = 7
    distance = 0
    l = s - x
    r = s + x
    while True :
        if distance > r :
            print('n')
            return

        if distance >= l and distance <= r:
            if distance + speed  > s + x :
                print('n')
                return
            else :
                print('y')
                return
        distance += speed
        speed *= 0.98
if __name__ == '__main__':
    main()