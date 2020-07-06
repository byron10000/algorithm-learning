//
// Created by byron on 2020/1/28.
//
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
int t[10001],v[10001];
bool c[10001];
int sum = 0;
int tt,m;
void dfs(int left,int msum){
    if (left < 0) return;
    if (msum > sum) sum = msum;
    for (int i = 0; i < m; ++i) {
        c[i] = true;
        int z = left / t[i];
        if(z <= 0)
            continue;
        dfs(left - z * t[i],msum + z * v[i]);
        c[i] = false;
    }
}
int main(){
    memset(c,0, sizeof(c));
    cin >> tt >> m;
    for (int i = 0; i < m; ++i) {
        cin >> t[i] >> v[i];
    }
    dfs(tt,0);
    cout << sum;
    return 0;
}
