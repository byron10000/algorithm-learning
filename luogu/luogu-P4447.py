def main():
    input()
    people_list = list(map(int, input().split()))
    group_list = []
    index_list = {}
    people_list.sort()
    for people in people_list:
        try:
            index = index_list[people]
        except KeyError:
            group_list.append(1)
            index_list.setdefault(people + 1, set())
            index_list[people + 1].add(len(group_list) - 1)
        else:
            min_len = 32767
            min_id = -1
            for i in index:
                if len(group_list[i]) < min_len:
                    min_id = i
            group_list[min_id] += 1
            index_list[people].remove(min_id)
            index_list.setdefault(people + 1, set())
            index_list[people + 1].add(min_id)
    print(min(group_list))


if __name__ == '__main__':
    main()

