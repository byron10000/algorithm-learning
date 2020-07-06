

def main():
    m = {}
    count = int(input())
    for i in range(count):
        x, y, t = map(int, input().split())
        try:
            m[(x, y)] = min(t, m[(x, y)])
        except KeyError:
            m[(x, y)] = t
        try:
            m[(x + 1, y)] = min(t, m[(x + 1, y)])
        except KeyError:
            m[(x + 1, y)] = t
        try:
            m[(x - 1, y)] = min(t, m[(x - 1, y)])
        except KeyError:
            m[(x - 1, y)] = t
        try:
            m[(x, y + 1)] = min(t, m[(x, y + 1)])
        except KeyError:
            m[(x, y + 1)] = t
        try:
            m[(x, y - 1)] = min(t, m[(x, y - 1)])
        except KeyError:
            m[(x, y - 1)] = t
    walked = {(0, 0)}
    queue = [((0, 0), 0)]
    while node := queue.pop():
        if node[0] not in m:
            print(node[1])
            return
        for new_node in [((node[0][0] + 1, node[0][1]), node[1] + 1),
                         ((node[0][0], node[0][1] + 1), node[1] + 1),
                         ((node[0][0] - 1, node[0][1]), node[1] + 1),
                         ((node[0][0], node[0][1] - 1), node[1] + 1)]:
            if not (new_node[0] not in walked):
                continue
            if not (new_node[0] not in m or m[new_node[0]] > new_node[1]):
                continue
            if not (new_node[0][0] >= 0 and new_node[0][1] >= 0):
                continue
            walked.add(new_node[0])
            queue.insert(0, new_node)


if __name__ == "__main__":
    try:
        main()
    except IndexError:
        print(-1)

