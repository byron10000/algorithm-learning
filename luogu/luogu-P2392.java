package com.byron10000.P2392;

import java.util.*;

public class Main {
    public static void main(String[] args) {
        P2392 p2392 = new P2392();
        p2392.getIn();
        p2392.process();
        p2392.printOut();
    }
}

class P2392 {
    int[] subject1;
    int[] subject2;
    int[] subject3;
    int[] subject4;
    int subject1_len;
    int subject2_len;
    int subject3_len;
    int subject4_len;

    int result;

    public void getIn() {
        Scanner scanner = new Scanner(System.in);
        subject1_len = scanner.nextInt();
        subject2_len = scanner.nextInt();
        subject3_len = scanner.nextInt();
        subject4_len = scanner.nextInt();
        subject1 = getListIn(scanner, subject1_len);
        subject2 = getListIn(scanner, subject2_len);
        subject3 = getListIn(scanner, subject3_len);
        subject4 = getListIn(scanner, subject4_len);

    }

    public void process() {
        result = processOne(subject1, subject1_len)
                + processOne(subject2, subject2_len)
                + processOne(subject3, subject3_len)
                + processOne(subject4, subject4_len);
    }

    int processOne(int[] list, int size) {
        if (size == 1) {
            return list[0];
        } else if (size == 2) {
            return Math.max(list[0], list[1]);
        } else {
            return (new DFS(list, size)).getResult();
        }
    }

    public void printOut() {
        System.out.println(result);
    }

    int[] getListIn(Scanner scanner, int count) {
        int[] list = new int[count];
        for (int i = 0; i < count; i++) {
            list[i] = scanner.nextInt();
        }
        return list;
    }
}

class DFS {
    protected int[] list;
    protected int size;
    protected int sum;
    protected int result = 2147483647;

    public DFS(int[] list, int size) {
        this.list = list;
        this.size = size;
        for (int item : list) {
            sum += item;
        }
        main(0, 0);
    }

    public void main(int now, int c) {
        result = Math.min(result, Math.abs(now - (sum - now)));
        for (int i = c; i < size; i++) {
            main(now + list[i], i + 1);
        }
    }

    public int getResult() {
        return (sum - result) / 2 + result;
    }

}