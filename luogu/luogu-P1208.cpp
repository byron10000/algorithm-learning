//
// Created by byron on 2020/1/12.
//
#include <iostream>
#include <algorithm>
using namespace std;
struct farmer{
    int unit_price;
    int number;
};
bool cmp(farmer a,farmer b) {
    return a.unit_price < b.unit_price;
}
int main(){
    int n,m;
    cin >> n >> m;
    farmer farmers[m];
    for (int i = 0; i < m; ++i) {
        cin >> farmers[i].unit_price >> farmers[i].number;
    }
    sort(farmers,farmers + m,cmp);
    int sum = 0;
    int i = 0;
    while (n > 0){
        if (n >= farmers[i].number) {
            n-= farmers[i].number;
            sum += farmers[i].number * farmers[i].unit_price;
        }
        else {
            sum += n * farmers[i].unit_price;
            n = 0;
        }
        i ++;
    }
    cout << sum << endl;
}
