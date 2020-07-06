//
// Created by byron on 2020/3/18.
//
#include <iostream>
using namespace std;
int n;
int dp[256];
int money[256][256];
int main(){
    cin >> n;
    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            cin >> money[i][j];
        }
    }
    dp[0] = 0;
    for (int i = 1; i < n; ++i) {
        dp[i] = 2147483647;
        for (int j = 0; j < i; ++j) {
            dp[i] = min(dp[i], dp[j] + money[j][i]);
        }
    }
    cout << dp[n - 1] << endl;
}
