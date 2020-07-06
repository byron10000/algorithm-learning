//
// Created by byron on 2020/2/13.
//
#include <iostream>
using namespace std;
int nums[1024][1024];
int dp[1024][1024];
int main(){
    int r;
    cin >> r;
    for (int i = 1; i <= r; ++i) {
        for (int j = 1; j < i + 1; ++j) {
            cin >> nums[i][j];
        }
    }
    for (int i = 1; i <= r; ++i) {
        for (int j = 1; j < i + 1; ++j) {
            dp[i][j] = max(dp[i - 1][j],dp[i - 1][j - 1]) + nums[i][j];
        }
    }
    int maxn = 0;
    for (int i = 0; i < r + 1; ++i) {
        maxn = max(dp[r][i],maxn);
    }
    cout << maxn << endl;
}
