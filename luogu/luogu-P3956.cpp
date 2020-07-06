//
// Created by byron on 2020/2/12.
//
#include <iostream>
#include <cstring>
using namespace std;
int mg[100][100];
int dp[100][100];
bool change[100][100];
int ways[4][2] = {{0,1},{1,0},{0,-1},{-1,0}};
int m,n;
int ans = 1048575;
void dfs(int x,int y,int cost){
    if (cost >= ans)
        return;
    if (x == m - 1 && y == m - 1){
        ans = min(ans,cost);
        return;
    }
    if (dp[x][y] <= cost)
        return;
    dp[x][y] = cost;
    int c1 = mg[x][y];
    for (int i = 0; i < 4; ++i) {
        int x1 = x + ways[i][0];
        int y1 = y + ways[i][1];
        if (x1 >= m || x1 < 0 || y1 >= m || y1 < 0)
            continue;
        int c2 = mg[x1][y1];
        if (change[x][y] && c2 == 0)
            continue;
        if (c1 == c2){
            dfs(x1,y1,cost);
            continue;
        }
        if (c2 == 0){
            mg[x1][y1] = c1;
            change[x1][y1] = 1;
            dfs(x1,y1,cost + 2);
            mg[x1][y1] = c2;
            dfs(x1,y1,cost + 3);
            change[x1][y1] = 0;
            mg[x1][y1] = 0;
            continue;
        }
        if (c1 != c2){
            dfs(x1,y1,cost + 1);
        }
    }
}
int func(int x,int y,int i,int j) {
    int c1, c2;
    if (x >= m || x < 0 || y >= m || y < 0)
        return 1048576;
    c1 = mg[x][y];
    c2 = mg[i][j];
    if (c1 >= 1048576)
        return 1048576;
    if (change[x][y] && c2 == 0)
        return 1048576;
    if (c2 == 0){
        mg[i][j] = c1;
        change[i][j] = 1;
        return dp[x][y] + 2;
    }
    if (c1 == c2){
        return dp[x][y];
    }
    return dp[x][y] + 1;
}

int main(){
    memset(dp,1, sizeof(dp));
    cin >> m >> n;
    for (int i = 0; i < n; ++i) {
        int a,b,c;
        cin >> a >> b >> c;
        mg[a - 1][b - 1] = c + 1;
    }
    dfs(0,0,0);
    if (ans >= 1048575)
        cout << "-1" << endl;
    else
        cout << ans << endl;
    return 0;
}
