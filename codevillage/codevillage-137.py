num_list = []
sons_list = {}
father_list = {}
walked = {}
count = 0
ans = 2 ** 127 - 1


def get_value(num, node):
    return num ** 2 * num_list[node][0] + num * num_list[node][1] + num_list[node][2]


def dfs(now_count, result, now_node, rollback=False):
    global ans, count
    if result >= ans:
        return
    if now_count == count:
        result += get_value(now_count, now_node)
        ans = min(ans, result)
        return
    flag = False
    if sons_list[now_node][0] != -1 and \
            (sons_list[now_node][0] not in walked or not walked[sons_list[now_node][0]]):
        walked[sons_list[now_node][0]] = True
        dfs(now_count + 1, result + (get_value(now_count, now_node) if not rollback else 0), sons_list[now_node][0])
        walked[sons_list[now_node][0]] = False
        flag = True
    if sons_list[now_node][1] != -1 and \
            (sons_list[now_node][1] not in walked or not walked[sons_list[now_node][1]]):
        walked[sons_list[now_node][1]] = True
        dfs(now_count + 1, result + (get_value(now_count, now_node) if not rollback else 0), sons_list[now_node][1])
        walked[sons_list[now_node][1]] = False
        flag = True
    if not flag:
        dfs(now_count, result + get_value(now_count, now_node), father_list[now_node], True)


def main():
    global count
    count = int(input())
    for _ in range(count):
        num_list.append(tuple(map(int, input().split())))
    for father in range(count):
        l_son, r_son = tuple(map(lambda x: int(x) - 1, input().split()))
        if l_son != -1:
            father_list[l_son] = father
        if r_son != -1:
            father_list[r_son] = father
        sons_list[father] = (l_son, r_son)
    dfs(1, 0, 0)
    print(ans)


if __name__ == "__main__":
    main()
