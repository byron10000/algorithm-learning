package com.byron10000;

import java.util.Scanner;

public class Main {
    static int n, result;

    public static void main(String[] args) {
        try {
            getInput();
        } catch (Exception e) {
            System.out.println(0);
            return;
        }
        main();
        System.out.println(result);
    }

    static void getInput() throws Exception{
        Scanner scanner = new Scanner(System.in);
        int x = scanner.nextInt();
        int y = scanner.nextInt();
        n = y / x;
        if (y % x != 0)
            throw new Exception();
    }

    static void main() {
        for (int i = 1; i <= n; i++) {
            if (n % i == 0) {
                if (coprime(i, n / i)) {
                    result++;
                }
            }
        }
    }

    public static boolean coprime(int a, int b) {
        if (a < b) {
            int tmp = a;
            a = b;
            b = tmp;
        }
        int c;
        while ((c = a % b) != 0) {
            a = b;
            b = c;
        }
        return b == 1;
    }
}
