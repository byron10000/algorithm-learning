def cin():
    return map(int, input().split())


def main():
    n, _ = cin()

    roads = set()
    shortcuts = {}
    start = None
    exit_ = None

    doors = {}

    for i in range(n):
        for j, char in enumerate(input()):
            if char == "#":
                continue
            if char == "@":
                start = (i, j)
            elif char == "=":
                exit_ = (i, j)
            elif char == ".":
                roads.add((i, j))
            else:
                if char in doors:
                    shortcuts[(i, j)] = doors[char]
                    shortcuts[doors[char]] = (i, j)
                    del doors[char]
                else:
                    doors[char] = (i, j)

    queue = [(start, 0)]
    walked = set()
    while True:
        node = queue.pop()
        pos = node[0]
        for n_pos in ((pos[0] + 1, pos[1]), (pos[0] - 1, pos[1]),
                      (pos[0], pos[1] + 1), (pos[0], pos[1] - 1)):
            if n_pos in walked:
                continue
            if n_pos == exit_:
                print(node[1] + 1)
                return
            walked.add(n_pos)
            if n_pos in roads:
                queue.insert(0, (n_pos, node[1] + 1))
            elif n_pos in shortcuts:
                queue.insert(0, (shortcuts[n_pos], node[1] + 1))


if __name__ == '__main__':
    main()
