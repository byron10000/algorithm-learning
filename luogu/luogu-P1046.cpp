//
// Created by byron on 2020/2/10.
//
#include <iostream>
using namespace std;
int main(){
    int high[10];
    for (int i = 0; i < 10; ++i) {
        cin >> high[i];
    }
    int h;
    cin >> h;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        if(high[i] <= h + 30)
            sum ++;
    }
    cout << sum << endl;
}
