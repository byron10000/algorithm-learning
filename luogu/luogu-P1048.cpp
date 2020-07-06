//
// Created by byron on 2020/2/12.
//
#include <iostream>
#include <algorithm>
using namespace std;
int all_time,m;
int times[101],value[101],dp[1001] = {0};
int main(){
    cin >> all_time >> m;
    for (int i = 0; i < m; ++i) {
        cin >> times[i] >> value[i];
    }
    for (int i = 0; i < m; ++i) {
        for (int j = all_time; j >= times[i]; --j) {
            dp[j] = max(dp[j],dp[j - times[i]] + value[i]);
        }
    }
    cout << dp[all_time] << endl;
}
