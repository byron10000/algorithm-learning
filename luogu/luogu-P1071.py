from pprint import pprint
s1 = input().strip().upper()
s2 = input().strip().upper()
s3 = input().strip().upper()
words1 = {}
words2 = {}
def main() :
    if (len(s1) != len(s2)) : print('Failed')
    for i in range(min([len(s1),len(s2)])) :
        words1.setdefault(s1[i],s2[i])
        words2.setdefault(s2[i],s1[i])
    if len(words1) != len(words2) or len(words1)!= 26 :
        print('Failed')
        return
    print(''.join([words1[s].upper() for s in s3]))

if __name__ == '__main__':
    main()