//
// Created by byron on 2019/12/8.
//

#include <iostream>
#include <string>
using namespace std;
int main() {
    int h,s;
    cin >> h >> s;
    //char ch;
    char ch[101];
    cin >> ch;
    for (int i = 0; i < 101; ++i) {
        char c = ch[i];
        if (c == '\0') break;
        if (c == 'u' && s > 0)
            s --;
        if (c == 'd' && s < h)
            s++;
    }
    cout << s << endl;
}