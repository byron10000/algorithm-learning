//
// Created by byron on 2019/12/8.
//
#include <iostream>
using namespace std;
int main() {
    int s,e;
    int sum;
    cin >> s >> e;
    for (int i = s; i <= e ; ++i) {
        int n = i;
        while (n > 0) {
            if (n % 10 == 2)
                sum ++ ;
            n /= 10;
        }
    }
    cout << sum << endl;
}
