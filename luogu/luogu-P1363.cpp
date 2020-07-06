//
// Created by byron on 2020/1/22.
//
#include <iostream>
#include <cstring>
#include <string>
using namespace std;
bool is_end = false;
bool ans = false;
bool mg[1600][1600];
int pos[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1 ,0}};
void work(int x, int y, int m, int n, bool c){
    if (is_end || !mg[x][y]) {
        return;
    }
    if (c){
        is_end = true;
        ans = true;
        return;
    }
    mg[x][y] = false;
    for(auto & po: pos){
        int ax = po[0];
        int ay = po[1];
        int nx = (x + ax + m) % m;
        int ny = (y + ay + n) % n;
        work(nx, ny, m, n, (nx != x + ax || ny != y + ay));
    }
}
int main(){
    int n = 0,m = 0;
    while (cin >> n >> m){
        int sx = 0, sy = 0;
        for (int i = 0; i < n; ++i) { // y
            string in;
            cin >> in;
            for (int j = 0; j < m; ++j) { // x
                char c = in[j];
                if (c == 'S'){
                    sx = j;
                    sy = i;
                }
                mg[j][i] = (c != '#');
            }
        }
        work(sx, sy, m, n, false);
        cout << (ans? "Yes": "No");
        ans = false;
        is_end = false;
        memset(mg, false, sizeof(mg));
    }
}