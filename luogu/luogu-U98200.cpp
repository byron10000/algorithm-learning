//
// Created by byron on 2019/12/9.
//
#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;
int cnt[15];
int main() {
    int m,n;
    cin >> m >>n;
    bool alive[15];
    string votes[1001];
    for (int i = 0; i < n; ++i) { //
        cin >> votes[i];
    }
    memset(alive,1,sizeof(alive));
    int pas = m;
    while(pas > 1 ){
        memset(cnt,0, sizeof(cnt));
        for (int i = 0; i < n ; ++i) {
            cnt[votes[i][0] - '0'] ++;
        }
        int smallset = 2147483647;
        for (int i = 1; i <= m; ++i) {
            if (smallset > cnt[i])
                smallset = cnt[i];
        }
        for (int i = 1; i <= m; ++i) {
            if (cnt[i] <= smallset) {
                alive[i] = 0;
                pas -- ;
            }
        }
        for (int i = 0; i < n; ++i) {
            if (!alive[votes[i][0] - '0']) votes[i] = votes[i].substr(1);
        }
        if (pas == 0){
            smallset *= -1;
            cout << smallset << endl;
            return 0;
        }
    }
    for (int i = 1; i <= m; ++i) {
        if (alive[i]) {
            cout << i << endl;
            return 0;
        }
    }
    return 0;
}