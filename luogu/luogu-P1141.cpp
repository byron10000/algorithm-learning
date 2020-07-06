//
// Created by byron on 2020/1/21.
//
#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int can_arrives[100000] = {0};
int pos[4][2] = {{1,0},{-1,0},{0,1},{0,-1}};
int n,m;
int l;
bool mg[1001][1001];
bool arrived[1001][1001];
int visited[1001][1001];
void work(int x,int y){
    if (visited[x][y] != l && visited[x][y] != 0) {
        can_arrives[l] = can_arrives[visited[x][y]];
        return;
    }
    can_arrives[l] ++;
    arrived[x][y] = 1;
    visited[x][y] = l;
    for (int i = 0; i < 4; ++i) {
        int nx,ny;
        nx = pos[i][0] + x;
        ny = pos[i][1] + y;
        if (nx >= n||nx < 0||ny >= n ||ny < 0) continue;
        if (mg[nx][ny] !=  mg[x][y] && !arrived[nx][ny])
            work(nx,ny);
    }
}
int main(){
    int k = 0;
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        string in;
        cin >> in;
        for (int j = 0; j < n; ++j) {
            mg[i][j] = in[j] - '0';
        }
    }
    for (int i = 1; i <= m; ++i) {
        int x, y;
        l = i;
        cin >> x >> y;
        work(x - 1,y - 1);
    }
    for (int i = 1; i <= m; ++i) {
        cout << can_arrives[i] << endl;
    }
}
