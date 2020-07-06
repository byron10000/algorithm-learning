def main() :
    word = input().lower()
    word += ' '
    article = input().lower()
    article += ' '
    count = article.count(word)
    if not count :
        print('-1')
        return
    else :
        print(count,end = ' ')
    print(article.index(word))
main()
