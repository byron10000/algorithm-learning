//
// Created by byron on 2019/12/10.
//
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string str1;
    cin >> str1;
    int max = 0;
    for (int i = 0; i < str1.size(); ++i) {
        for (int j = i ; j < str1.size(); ++j) {
            if (count(&str1[i],&str1[j],'G') == count(&str1[i],&str1[j],'R'))
                if ((j - i + 1) > max) max = j - i;
        }
    }
    cout << max << endl;
    return 0 ;
}
