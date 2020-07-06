package com.byron10000;

import java.util.*;

public class Main {
    public static void main(String[] args) {
        P1873 p1873 = new P1873();
        p1873.getIn();
        p1873.main();
        p1873.printResult();
    }
}

class P1873 {
    int[] logs;
    int aim;
    int result;
    int max;

    public void getIn() {
        Scanner scanner = new Scanner(System.in);
        logs = new int[scanner.nextInt()];
        aim = scanner.nextInt();
        for (int i = 0; i < logs.length; i++) {
            logs[i] = scanner.nextInt();
            max = Math.max(logs[i], max);
        }
    }

    boolean pass(int value) {
        int now_result = 0;
        for (int item : logs) {
            now_result += Math.max(0, item - value);
            if (now_result >= aim)
                return true;
        }
        return false;
    }

    public void main() {
        int low = 0;
        int high = max;
        int lastHigh = -1;
        int lastLow = -1;
        while (true) {
            if (high <= low) {
                result = low;
                return;
            }
            if (lastHigh == high && lastLow == low)
                if (pass(low)) {
                    result = low;
                    return;
                } else {
                    result = high;
                    return;
                }
            lastHigh = high;
            lastLow = low;
            if (pass((low + high) / 2))
                low = (low + high) / 2 + 1;
            else
                high = (low + high) / 2 - 1;
        }

    }

    public void printResult() {
        System.out.println(result);
    }
}