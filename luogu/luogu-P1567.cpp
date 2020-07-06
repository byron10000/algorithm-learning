//
// Created by byron on 2019/12/9.
//
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin >> n;
    int sum = 0;
    int last = 0;
    int now = 0;
    vector<int> sums;
    for (int i = 0; i < n; ++i) {
        cin >> now;
        if (now > last){
            sum ++;
        }
        else {
            sums.push_back(sum);
            sum = 0;
        }
        last = now;
    }
    sums.push_back(sum);
    sort(sums.begin(),sums.end());
    int ans = *(sums.end()-1) + 1;
    cout << ans << endl;
}
