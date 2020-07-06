words = ['zero','one', 'two', 'three', 'four', 'five', 'six', 'seven',
         'eight', 'nine', 'ten', 'eleven', 'twelve', 'thirteen',
         'fourteen', 'fifteen', 'sixteen', 'seventeen',
         'eighteen', 'nineteen', 'twenty']
def main() :
    string = input().lower()
    nums = []
    for i in range(21):
        w = words[i]
        c = string.count(w)
        nums += [str((i ** 2) % 100).rjust(2,'0')] * c
    if not nums : print('0')
    else :
if __name__ == '__main__':
    main()