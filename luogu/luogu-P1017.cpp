//
// Created by byron on 2020/3/6.
//
#include <iostream>
using namespace std;
int ans[20];
int main(){
    int n, r;
    cin >> n >> r;
    n = abs(n);
    int k = 0;
    while (n){
        cout << abs(n % 2);
        n /= (k % 2 == 0)? 2: -2;
    }
}
