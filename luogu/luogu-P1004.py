class LuoguP1004:
    size = 0
    map = {}
    dp = {}

    def __init__(self):
        self.get_input()
        self.calculation()
        self.set_output()

    def input_generator(self):
        line = input() + "\n"
        val = 0
        for char in line:
            try:
                val = val * 10 + int(char)
            except ValueError:
                if val != 0:
                    yield val
                val = 0

    def get_input(self):
        self.size = int(input())
        while True:
            try:
                row, column, val = tuple(self.input_generator())
            except ValueError:
                return
            self.map[(row, column)] = val
            if (0, 0) in self.map:
                return

    def calculation(self):
        for row1 in range(self.size):
            for column1 in range(self.size):
                for row2 in range(self.size):
                    for column2 in range(self.size):
                        self.calculation_position(row1, column1, row2, column2)

    def calculation_position(self, row1, column1, row2, column2):
        self.dp[(row1, column1, row2, column2)] = max(
            self.dp.get((row1 - 1, column1 - 1, row2, column2), 0),
            self.dp.get((row1 - 1, column1, row2 - 1, column2), 0),
            self.dp.get((row1 - 1, column1, row2, column2 - 1), 0),
            self.dp.get((row1, column1 - 1, row2, column2 - 1), 0),
        ) + self.map.get((row1, column1), 0) + self.map.get((row2, column2), 0)
        if row1 == row2 and column1 == column2:
            self.dp[(row1, column1, row2, column2)] -= self.map.get((row1, column1), 0)

    def set_output(self):
        print(self.dp[(self.size,) * 4])


if __name__ == "__main__":
    LuoguP1004()
