//
// Created by byron on 2020/4/11.
//
#include <iostream>
#include <algorithm>
using namespace std;
int m, n;
int fsxes[100000];
int sum;
int main(){
    cin >> m >> n;
    for (int i = 0; i < m; ++i) {
        cin >> fsxes[i];
    }
    sort(fsxes, fsxes + m);
    for (int j = 0; j < n; ++j) {
        int fs; cin >> fs;
        int* zjdfsxes = lower_bound(fsxes, fsxes + m, fs);
        if (zjdfsxes != fsxes)
            sum += min(abs(*zjdfsxes - fs), abs(fs - *(zjdfsxes - 1)));
        else
            sum += *zjdfsxes - fs;
    }
    cout << sum << endl;
}
