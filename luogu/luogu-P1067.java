package com.byron10000;

import java.util.*;

public class Main {
    static int[] coefficient_numbers;

    public static void main(String[] args) {
        getInput();
        process();
    }

    static void getInput() {
        Scanner scanner = new Scanner(System.in);
        coefficient_numbers = new int[scanner.nextInt() + 1];
        for (int i = 0; i < coefficient_numbers.length; i++) {
            coefficient_numbers[i] = scanner.nextInt();
        }
    }

    static void process() {
        boolean first_flag = true;
        for (int i = 0; i < coefficient_numbers.length; i++) {
            if (coefficient_numbers[i] == 0)
                continue;
            if (coefficient_numbers[i] >= 0 && !first_flag)
                print('+');
            if (i == coefficient_numbers.length - 1) {
                print(coefficient_numbers[i]);
            } else {
                if (Math.abs(coefficient_numbers[i]) == 1) {
                    if (coefficient_numbers[i] == -1)
                        print('-');
                } else
                    print(coefficient_numbers[i]);
                print('x');
                if (coefficient_numbers.length - i - 1 != 1) {
                    print('^');
                    print(coefficient_numbers.length - i - 1);
                }
            }
            first_flag = false;
        }
    }

    static void print(int value) {
        System.out.print(value);
    }

    static void print(char ch) {
        System.out.print(ch);
    }
}
