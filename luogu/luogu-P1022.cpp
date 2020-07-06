//
// Created by byron on 2020/2/21.
//
#include <iostream>
#include <string>
#include <cstdio>
using namespace std;
int main(){
    string equation;
    cin >> equation;
    double a = 0, b = 0; // ax = b; x = b / -a
    double coe1 = 1; // 在等号左边或右边
    double coe2 = 1;
    double read = 0;
    char unknown_num = 'x';
    bool with_unknown_num = false;
    equation += '=';
    for (double i = 0; i < equation.size(); ++i) {
        char now = equation[i];
        if (now > '9' || now < '0') {
            if (now > 'z' || now < 'a') {
                if (with_unknown_num) {
                    if (read == 0)
                        a += 1 * coe1 * coe2;
                    else
                        a += read * coe1 * coe2;
                }
                else {
                    b += read * coe1 * -1 * coe2;
                }
                if (now == '=')
                    coe1 *= -1;
                if (now == '-')
                    coe2 = -1;
                else
                    coe2 = 1;
                with_unknown_num = false;
                read = 0;
            }
            else{
                with_unknown_num = true;
                unknown_num = now;
            }
        }
        else{
            read = read * 10 + (now - '0');
        }
    }
    double ans = b / a;
    if (ans == 0)
        ans = 0;
    printf("%c=%.3f", unknown_num, ans);
    return 0;
}
