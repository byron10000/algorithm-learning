//
// Created by byron on 2020/1/28.
//
#include <iostream>
#include <algorithm>
using namespace std;
#define N 105
int a[N],f[N],r[N];
int n;
int main(){
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        f[i] = 1;
        r[i] = 1;
    }
    for (int i = n - 2; i > -1; --i) {
        for (int j = i + 1; j < n; ++j){
            if (a[i] > a[j])
                f[i] = max(f[i],f[j] + 1);

        }
    }
    for (int i = 1; i < n; ++i) {
        for (int j = i - 1; j > -1 ; --j) {
            if (a[i] > a[j])
                r[i] = max(r[i],r[j] + 1);
        }
    }
    int maxn = 0;
    for (int i = 0; i < n; ++i) {
        maxn = max(maxn,f[i] + r[i] - 1);
    }
    cout << n - maxn;
}
