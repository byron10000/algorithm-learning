def get_in(func) :
    return list(map(func,input().split()))

class Stack :
    def __init__(self):
        self.stack = []
    def push(self,item):
        self.stack.append(item)
    def pop(self):
        return self.stack.pop()
    def __repr__(self):
        return self.stack

def main() :
    string = input()[:-1]
    nums = Stack()
    for s in string.split('.') :
        str1 = ''
        for s1 in s :
            if s1.isnumeric() :
                str1 += s1
            else :
                h1 = nums.pop()
                h2 = nums.pop()
                h3 = eval("{}{}{}".format(h2,s1,h1))
                nums.push(h3)
        if str1 :
            nums.push(int(str1))
    print(nums.stack[0])

if __name__ == '__main__':
    main()
