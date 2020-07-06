//
// Created by byron on 2020/1/22.
//
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
    vector<int> fish;
    int n,m;
    cin >> n >> m;
    bool pool[n][m];
    for (int i = 0; i < n; ++i) {
        string in;
        cin >> in;
        for (int j = 0; j < m; ++j) {
            pool[i][j] = in[j];
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if(pool[i][j] == 1){
                while(1){

                }
            }
        }
    }
}
