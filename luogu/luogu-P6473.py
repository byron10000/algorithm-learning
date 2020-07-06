import fractions
import bisect


def calculation_time(magic_list, speed):
    magic_list.sort(reverse=True)
    last = 0
    for magic in magic_list:
        yield last
        last += fractions.Fraction(magic, speed)


def main():
    (_, hillside_length, speed), magic_list = list(map(int, input().split())), list(map(int, input().split()))
    time_list = list(calculation_time(magic_list, speed))
    for _ in range(int(input())):
        index = bisect.bisect_left(time_list, int(input()) - fractions.Fraction(hillside_length, speed))
        if index >= len(time_list):
            yield "-1"
        else:
            yield str(index)


if __name__ == '__main__':
    print('\n'.join(list(main())))
