//
// Created by byron on 2020/1/25.
//
#include <iostream>
#include <algorithm>
using namespace std;
struct pos{
    int x = -1,y = -1;
    int hi = -1;
}field[1000][1000],his[100000];
int anss [1000][1000];
bool cmp(pos a,pos b) {return a.hi > b.hi;}
int ans = 0;
const int MAXN = 2147483647;
int n,m;
void dfs(int x,int y,int c,int o){
    if (x >= n||x < 0||y >= n||y < 0) return;
    if (field[x][y].hi >= o) return;
    if(anss[x][y] >= c) return;
    anss[x][y] = c;
    if(c > ans) ans = c;
    dfs(x + 1,y,c + 1,field[x][y].hi);
    dfs(x,y + 1,c + 1,field[x][y].hi);
    dfs(x - 1,y,c + 1,field[x][y].hi);
    dfs(x,y - 1,c + 1,field[x][y].hi);
}
int main(){
    cin >> n >> m;
    int k = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> field[i][j].hi;
            field[i][j].x = i;
            field[i][j].y = j;
            anss[i][j] = -1;
            his[k] = field[i][j];
            k ++;
        }
    }
    sort(his,his + 100000,cmp);
    for (int i = 0; i < 100000; ++i) {
        dfs(his[i].x,his[i].y,1,MAXN);
        if (his[i].hi == -1) {
            cout << ans << endl;
            return 0;
        }
    }

}
