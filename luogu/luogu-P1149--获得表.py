cost = [6,2,5,5,4,5,6,3,7,6]
def main(n) :
    all_ans = 0
    n-=4
    for i in range(0,1000) :
        for j in range(0,1000) :
            m = n - get_all_cost(i) - get_all_cost(j)
            if m == get_all_cost(i + j) :
                all_ans += 1
    print(all_ans)
def get_all_cost(n) :
    all_ans = 0
    for i in str(n) :
        all_ans += cost[int(i)]
    return all_ans
if __name__ == '__main__':
    for i in range(1,25) :
        print(i)
        main(i)
