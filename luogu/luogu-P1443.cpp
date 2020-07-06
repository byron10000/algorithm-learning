//
// Created by byron on 2020/2/13.
//
#include <iostream>
#include <queue>
#include <iomanip>
using namespace std;
int hp[400][400];
int pos[8][2] = {{2, 1}, {-2, 1}, {2, -1}, {-2, -1},
                 {1, 2}, {-1, 2}, {1, -2}, {-1, -2}};
int main(){
    int n, m, hx, hy;
    cin >> n >> m >> hx >> hy;
    queue<int> x, y;
    x.push(hx - 1);
    y.push(hy - 1);
    while(!(x.empty() && y.empty())){
        int nx = x.front(), ny = y.front();
        x.pop();
        y.pop();
        for (int i = 0; i < 8; ++i) {
            int nx1 = nx + pos[i][0], ny1 = ny + pos[i][1];
            if (nx1 >= n || ny1 >= m || nx1 < 0 || ny1 < 0)
                continue;
            if (hp[nx1][ny1])
                continue;
            hp[nx1][ny1] = hp[nx][ny] + 1;
            x.push(nx1);
            y.push(ny1);
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (i == hx - 1 && j == hy - 1)
                cout << setw(5) << setiosflags(ios::left) << "0";
            else {
                if (hp[i][j] == 0) {
                    cout << setw(5) << setiosflags(ios::left) << "-1";
                } else
                    cout << setw(5) << setiosflags(ios::left) << hp[i][j];
            }
        }
        cout << endl;
    }
}
