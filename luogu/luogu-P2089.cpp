//
// Created by byron on 2019/11/27.
//
#include <iostream>
#include <string>
using namespace std;
int main(){
    int n;
    cin >> n;
    int sum;
    string ans;
    for (int a1 = 1; a1 < 3; ++a1) {
        for (int a2 = 1; a2 < 3; ++a2) {
            for (int a3 = 1; a3 < 3; ++a3) {
                for (int a4 = 1; a4 < 3; ++a4) {
                    for (int a5 = 1; a5 < 3; ++a5) {
                        for (int a6 = 1; a6 < 3 ; ++a6) {
                            for (int a7 = 1; a7 < 3; ++a7) {
                                for (int a8 = 1; a8 < 3; ++a8) {
                                    for (int a9 = 1; a9 < 3; ++a9) {
                                        int a10 = n-(a1+a2+a3+a4+a5+a6+a7+a8+a9);
                                        if (a10 > 0 && a10 < 4)
                                            sum += 1;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    cout << sum << endl;
    for (int a1 = 1; a1 < 3; ++a1) {
        for (int a2 = 1; a2 < 3; ++a2) {
            for (int a3 = 1; a3 < 3; ++a3) {
                for (int a4 = 1; a4 < 3; ++a4) {
                    for (int a5 = 1; a5 < 3; ++a5) {
                        for (int a6 = 1; a6 < 3 ; ++a6) {
                            for (int a7 = 1; a7 < 3; ++a7) {
                                for (int a8 = 1; a8 < 3; ++a8) {
                                    for (int a9 = 1; a9 < 3; ++a9) {
                                        int a10 = n-(a1+a2+a3+a4+a5+a6+a7+a8+a9);
                                        if (a10 > 0 && a10 < 4)
                                            cout << a1 << " " << a2
                                                    << " " << a3 << " " << a4
                                                    << " " << a5 << " " << a6
                                                    << " " << a7 << " " << a8
                                                    << " " << a9 << " " << a10 << endl;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}
