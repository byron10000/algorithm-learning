//
// Created by byron on 2020/2/12.
//
#include <iostream>
#include <algorithm>
using namespace std;
int value,m;
int values[20001],dp[20001] = {0};
int main(){
    cin >> value >> m;
    for (int i = 0; i < m; ++i) {
        cin >> values[i];
    }
    for (int i = 0; i < m; ++i) {
        for (int j = value; j >= values[i]; --j) {
            dp[j] = max(dp[j],dp[j - values[i]] + values[i]);
        }
    }
    cout << value - dp[value] << endl;
}
