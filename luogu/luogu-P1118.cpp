//
// Created by byron on 2020/1/25.
//
#include <iostream>
using namespace std;
int base[12][12] =
        {{1},
         {1,1},
         {1,2,1},
         {1,3,3,1},
         {1,4,6,4,1},
         {1,5,10,10,5,1},
         {1,6,15,20,15,6,1},
         {1,7,21,35,35,21,7,1},
         {1,8,28,56,70,56,28,8,1},
         {1,9,36,84,126,126,84,36,9,1},
         {1,10,45,120,210,252,210,120,45,10,1},
         {1,11,55,165,330,462,462,330,165,55,11,1}};
int n,sum;
void dfs(int l,int sum1,bool used[13],int ans[12]){
    if(l == n){
        if (sum1 == sum){
            for (int i = 0; i < n; ++i) {
                cout << ans[i];
                if (i != n - 1) cout << " ";
                else cout << endl;
            }
            exit(0);
        }
    }
    for (int i = 1; i <= n; ++i) {
        if(used[i]) continue;
        int sum2 = sum1 + i * base[n - 1][l];
        if (sum1 >= sum) continue;
        used[i] = 1;
        ans[l] = i;
        dfs(l + 1,sum2,used,ans);
        used[i] = 0;
    }
}
int main(){
    bool used[13] = {0};
    int ans[12] = {0};
    cin >> n >> sum;
    dfs(0,0,used,ans);
    return 0;
}
