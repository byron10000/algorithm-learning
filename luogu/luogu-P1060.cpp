//
// Created by byron on 2020/1/28.
//
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
int main(){
    int n,m;
    int a[26],b[26],f[50000];
    memset(f,0, sizeof(f));
    cin >> n >> m;
    for (int i = 0; i < m; ++i) {
        cin >> a[i] >> b [i];
    }
    for (int i = 0; i < m; ++i) {
        for (int j = n; j >= a[i]; --j) {
            f[j] = max(f[j],f[j - a[i]] + a[i] * b[i]);
        }
    }
    cout << f[n] << endl;
}
