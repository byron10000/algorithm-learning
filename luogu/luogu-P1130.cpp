//
// Created by byron on 2020/3/18.
//
#include <iostream>
using namespace std;
int dp[2048][2048]; // dp[i][j] 表示第i步由第j组的工作人员所需要的最少天数
int map[2048][2048]; // map[i][j] 表示j组第i名工作人员处理所需天数
int n, m; // 步数、 小组数
int min(int a, int b){
    if (a > b)
        return b;
    return a;
}
int get(int i, int j){
    j = (j + m) % m;
    return dp[i][j];
}

int main() {
    cin >> n >> m;
    for (int j = 0; j < m; ++j) {
        for (int i = 0; i < n; ++i) {
            cin >> map[i][j];
        }
    }
    for (int j = 0; j < m; ++j) {
        dp[0][j] = map[0][j];
    }
    for (int i = 1; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            dp[i][j] = min(get(i - 1, j), get(i - 1, j - 1)) + map[i][j];
        }
    }
    int minn = 2147483647;
    for (int j = 0; j < m; ++j) {
        minn = min(minn, get(n - 1, j));
    }
    cout << minn << endl;
    return 0;
}