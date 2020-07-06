//
// Created by byron on 2020/2/10.
//
#include <iostream>
#include <algorithm>
using namespace std;
int func(double n,double a){
    double k = n / a;
    if(k > int(k))
        return (int) k + 1;
    return (int)k;
}
int main(){
    int n;
    cin >> n;
    int an,am,bn,bm,cn,cm;
    cin >> an >> am >> bn >> bm >> cn >> cm;
    int ta = func(n,an) * am,tb = func(n,bn) * bm,tc = func(n,cn) * cm;
    cout << min(ta,min(tb,tc)) << endl;
    return 0;
}
