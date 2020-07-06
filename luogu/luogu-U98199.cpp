//
// Created by byron on 2019/12/8.
//
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n ;
    cin >> n;
    int pay_for_fish[102];
    int pay_for_oil[102];
    int sum;
    int pay_list[102];
    for (int i = 0; i < n; ++i) {
        cin >> pay_for_fish[i] >> pay_for_oil[i];
    }
    for (int i = 0; i < n; i ++) {
        pay_list[0] = pay_for_fish[i];
        for (int j = 1; j < n; j ++) {
            pay_list[j] = 2147483647;
        }
        for (int j = i - 1; j > -1; j -- ) {
            pay_list[j + 1] = pay_for_fish[j];
            for (int k = i - 1 ; k > j - 1; k -- ) {
                pay_list[j + 1] += pay_for_oil[k];
            }
        }
        sort(pay_list,pay_list + n);
        sum += pay_list[0];
    }
    cout << sum << endl;
}
