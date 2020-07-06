line = iter(input())


def read():
    global line
    result = ""
    try:
        while True:
            char = next(line)
            if char == '[':
                num = int(next(line))
                try:
                    result += read() * num
                except RuntimeError as err:
                    num = num * 10 + err.args[0]
                    result += read() * num
            elif char.isdigit():
                raise RuntimeError(int(char))
            elif char == ']':
                return result
            else:
                result += char

    except StopIteration:
        return result


if __name__ == "__main__":
    print(read())
