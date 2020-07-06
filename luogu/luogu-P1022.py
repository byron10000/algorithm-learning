num_list = '1234567890.'


def main():
    equ = input() + '='
    coefficient = 0
    constant = 0
    unknown_num = ''
    coefficient_of_obj = 1
    read = ''
    for e in equ:
        if e in '+-=':
            try:
                constant += (int(read) * coefficient_of_obj)
            except ValueError:
                try:
                    coefficient += (int(read[:-1]) * coefficient_of_obj)
                    unknown_num = read[-1]
                except ValueError:
                    if read[0] == '-':
                        coefficient += (-1 * coefficient_of_obj)
                        unknown_num = read[1]
                    else:
                        coefficient += (1 * coefficient_of_obj)
                        unknown_num = read
            if e == '=':
                coefficient_of_obj *= -1
                read = ''
            else:
                read = e
        else:
            read += e
    print('{}={:.3f}'.format(unknown_num, -constant / coefficient))


if __name__ == '__main__':
    main()
