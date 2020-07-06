//
// Created by byron on 2020/1/20.
//
#include <iostream>
#include <cstring>
using namespace std;
char words[101][101]; // [row][col]
char ans[101][101]; // [row][col]
int pos[8][2] = {{0,1},{0,-1},{1,-1},{1,0},{1,1},
                  {-1,-1},{-1,0},{-1,1}};
int n;
bool search(int x,int y,int ax,int ay){
    string s;
    for (int i = 0; i < 7; ++i) {
        if (x >= n || x < 0 || y >= n || y < 0)
            return false;
        s += words[x][y];
        x += ax;
        y += ay;
    }
    if (s == string("yizhong")) {
        for (int i = 0; i < 7; ++i) {
            y -= ay;
            x -= ax;
            ans[x][y] = words[x][y];
        }
        return true;
    }
    return false;
}
int main(){
    memset(ans,'*', sizeof(ans));
    cin >> n;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> words[i][j];
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (words[i][j] != 'y')
                continue;
            for (int k = 0; k < 8; ++k) {

                search(i,j,pos[k][0],pos[k][1]);

            }
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << ans[i][j];
        }
        cout << endl;
    }
}