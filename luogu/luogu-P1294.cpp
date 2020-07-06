//
// Created by byron on 2020/3/3.
//
#include <iostream>
using namespace std;
int ans;
int table[24][24];
bool vis[24];
void search(int l, int s){
    if (vis[l])
        return;
    ans = max(ans, s);
    vis[l] = true;
    for (int i = 0; i < 24; ++i) {
        if (table[l][i])
            search(i, s + table[l][i]);
    }
    vis[l] = false;
}
int main(){
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; ++i) {
        int x, y, l;
        cin >> x >> y >> l;
        table[x - 1][y - 1] = l;
        table[y - 1][x - 1] = l;
    }
    for (int i = 0; i < n; ++i) {
        search(i, 0);
    }
    cout << ans << endl;
}