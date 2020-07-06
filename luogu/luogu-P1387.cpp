//
// Created by byron on 2020/2/3.
//
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    int ans = 0;
    int table[110][110];
    int f[110][110];
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            int q;
            cin >> q;
            table[i][j] = q;
            if (q == 1) {
                f[i][j] = min(min(f[i][j -1 ],
                        f[i - 1][j]),f[i - 1][j - 1]) + 1;
                ans = max(ans,f[i][j]);
            }
        }
    }
    cout << ans<< endl;
    return 0;
}
