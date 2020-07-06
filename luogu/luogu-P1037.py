visited = {}
rule = []
def dfs(string: str):
    global visited, rule
    try :
        visited[string]
    except KeyError :
        visited[string] = True
    else :
        return
    for o, n in rule:
        dfs(string.replace(o, n, 1))

def main():
    global visited, rule
    n, k = input().split()
    k = int(k)
    for i in range(k) :
        rule.append(input().split())
    dfs(n)
    print(len(visited))

if __name__ == "__main__" :
    main()
