//
// Created by byron on 2020/1/28.
//
#include <iostream>
#include <string>
using namespace std;
void work(string,string);
int main() {
    string zh,hh;
    cin >> zh >> hh;
    work(zh, hh);
}

void work(string zh,string hh) {
    if (zh.empty())
        return;
    if (zh.size() == 1) {
        cout << zh;
        return;
    }
    for (int i = hh.size() - 1; i > -1; --i) {
        int mid = zh.find(hh[i]);
        if (mid != -1) {
            cout << zh[mid];
            work(string(zh.substr(0, mid)),hh);
            work(string(zh.substr(mid + 1, zh.length() - mid)),hh);
            break;
        }
    }
}
