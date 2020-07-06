//
// Created by byron on 2020/2/21.
//dfs
#include <iostream>
using namespace std;
int ans = 0;
int n,k;
void dfs(int level, int sum, int max_num){
    if (sum > n)
        return;
    if (level == k) {
        if (sum == n)
            ans++;
        return;
    }
    for (int i = max_num; sum + i * (k - level) <= n; ++i) {
        dfs(level + 1, sum + i, i);
    }

}
int main(){
    cin >> n >> k;
    dfs(0,0,1);
    cout << ans << endl;
}
