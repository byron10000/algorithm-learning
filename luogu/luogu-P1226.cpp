//
// Created by byron on 2020/1/21.
//
#include <iostream>
#include <cstdio>
using namespace std;
int k,b,p;
int ans(){
    if (p == 0) return 1 % k;
    if (b % k == 0) return 0;
    int zq[100000];
    int i = b;
    int f = 0;
    int j = 0;
    while(f != 1){
        //cout << i << " " << f << " " << j << endl;
        f = i % k;
        zq[j] = f;
        i = f * b;
        j ++;
    }
    f = p % (j + 1);
    return zq[f];
}

int main(){
    cin >> b >> p >> k;
    int l = ans();
    printf("%d^%d mod %d=%d",b,p,k,l);
}
