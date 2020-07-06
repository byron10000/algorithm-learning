a = ""
b = ""
rule = []
used_str = {}
q = []
class Node:
    def __init__(self,string,step):
        self.string =  string
        self.step = step
def get_in(f) : return list(map(f,input().split()))
def main():
    global a,b,rule
    a,b = get_in(str)
    for i in range(6) :
        try :
            o,n = get_in(str)
        except EOFError :
            break
        rule.append([o,n])
    ans = bfs()
    if (ans >= 11) :print("NO ANSWER!")
    else : print(ans)

def bfs() :
    global a,b,rule,used_str,q
    s = Node(a,0)
    q.append(s)
    while (q) :
        u = q.pop()
        s = u.string
        try :
            used_str[u.string]
        except KeyError :
            used_str[u.string] = True
        if u.string == b : return u.step
        for o,n in rule:
            for i in range(len(s)) :
                ns = s[:i] + s[i:].replace(o,n,1)
                if ns == s : break
                v = Node(ns,u.step + 1)
                q.append(v)
if __name__ == '__main__':
    main()