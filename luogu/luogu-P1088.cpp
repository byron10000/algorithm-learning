//
// Created by byron on 2020/3/6.
//
#include <iostream>
#include <algorithm>
using namespace std;
int n, m, num[10000];
int main(){
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        cin >> num[i];
    }
    for (int i = 0; i < m; ++i) {
        next_permutation(num, num + n);
    }
    for (int i = 0; i < n; ++i) {
        cout << num[i] << ((i == n - 1)?'\n': ' ');
    }
    return 0;
}
