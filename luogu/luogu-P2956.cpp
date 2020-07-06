//
// Created by byron on 2019/12/8.
//
#include <iostream>
using namespace std;
int main() {
    int lx,ly,n;
    cin >> lx >> ly >> n;
    int fild[lx][ly];
    for (int i = 0; i < lx; ++i) {
        for (int j = 0; j < ly; ++j) {
            fild[i][j] = 0;
        }
    }
    for (int i = 0; i < n; ++i) {
        int xl,yl,xr,yr;
        cin >> xl >> yl >> xr >> yr;
        for (int j = xl; j <= xr; ++j) {
            for (int k = yl; k <= yr; ++k) {
                fild[j-1][k-1] = 1;
            }
        }
    }
    int sum = 0;
    for (int i = 0; i < lx; ++i) {
        for (int j = 0; j < ly; ++j) {
            if ((fild[i][j]) != 0) {
                sum ++;
            }
        }
    }
    cout << sum << endl;
}
