//
// Created by byron on 2020/2/11.
//
#include <iostream>
using namespace std;
int n,m,t;
int s_x,s_y,e_x,e_y;
int all[6][6];
int sum;
bool out_range(int x,int y){
    return x >= n||x < 0||y >= m||y < 0;
}
void walk(int x,int y){
    if(out_range(x,y)||all[x][y]) return;
    if (x == e_x && y == e_y) {
        sum ++;
        return;
    }
    all[x][y] = 1;
    walk(x + 1,y);
    walk(x,y + 1);
    walk(x - 1,y);
    walk(x,y - 1);
    all[x][y] = 0;
}
int main(){
    cin >> n >> m;
    cin >> t;
    cin >> s_x >> s_y >> e_x >> e_y;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            all[i][j] = 0;
        }
    }
    for (int i = 0; i < t; ++i) {
        int a,b;
        cin >> a >> b;
        all[a-1][b-1] = 1;
    }
    s_x -= 1;
    s_y -= 1;
    e_x -= 1;
    e_y -= 1;
    walk(s_x,s_y);
    cout << sum << endl;
}
