package com.byron10000.P2440;

import java.util.*;

public class Main {
    public static void main(String[] args) {
        P2440 p2440 = new P2440();
        p2440.getIn();
        p2440.main();
        p2440.printResult();
    }
}

class P2440 {
    int[] logs;
    int aims;
    int sum;
    int result;

    public P2440() {
    }

    public void getIn() {
        Scanner scanner = new Scanner(System.in);
        int count = scanner.nextInt();
        aims = scanner.nextInt();
        logs = new int[count];
        for (int i = 0; i < count; i++) {
            logs[i] = scanner.nextInt();
            sum += logs[i];
        }
    }

    protected boolean pass(int value) {
        int now_result = 0;
        for (int item : logs) {
            now_result += (item / value);
        }
        return now_result >= aims;
    }

    protected int main_(int low, int high) {
        if (high <= low)
            return low;
        int middle = (low + high) / 2 + 1;
        if (middle == 0)
            return 0;
        if (pass(middle))
            return main_(middle, high);
        else
            return main_(low, middle - 1);
    }

    public void main() {
        result = main_(0, sum / aims);
    }

    public void printResult() {
        System.out.println(result);
    }
}
