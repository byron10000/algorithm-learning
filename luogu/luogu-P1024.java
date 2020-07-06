package com.byron10000;

import java.util.*;

public class Main {
    static StringBuilder log = new StringBuilder();

    public static void main(String[] args) {
        getInput();
        process(11);
        System.out.println();
        process(21);
    }

    public static void getInput() {
        String nowStr;
        Scanner scanner = new Scanner(System.in);
        while (true) {
            nowStr = scanner.next();
            for (int i = 0; i < nowStr.length(); i++) {
                if (nowStr.charAt(i) == 'E') return;
                log.append(nowStr.charAt(i));
            }
        }
    }

    public static void process(int point) {
        Game game = new Game(point);
        boolean flag;
        if (log.length() == 0) {
            game.print();
            return;
        }

        for (int i = 0; i < log.length(); i++) {
            char charAt = log.charAt(i);
            if (charAt == 'W')
                flag = game.addL();
            else
                flag = game.addR();
            if (flag) {
                game.print();
                game = new Game(point);
            }
        }
        game.print();
    }
}

class Game {
    int l, r, point;
    boolean secondStage;

    public Game(int point) {
        this.point = point;
    }

    public boolean addL() {
        l += 1;
        return check();
    }

    public boolean addR() {
        r += 1;
        return check();
    }

    boolean check() {
        if (l == r && l == point - 1) {
            secondStage = true;
            return false;
        }
        if (secondStage) {
            return Math.abs(l - r) == 2;
        } else {
            return l == point || r == point;
        }
    }

    public void print() {
        System.out.println(l + ":" + r);
    }

}
