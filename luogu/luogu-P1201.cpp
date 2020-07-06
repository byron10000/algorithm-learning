//
// Created by byron on 2020/3/6.
//
#include <iostream>
#include <string>
#include <map>
using namespace std;
int money[15];
string names[15];
map<string, int> name_map;
int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> names[i];
        name_map[names[i]] = i;
    }
    string g;
    int m, p;
    while (cin >> g >> m >> p){
        if (p == 0)
            continue;
        money[name_map[g]] -= m;
        for (int i = 0; i < p; ++i) {
            string k;
            cin >> k;
            money[name_map[k]] += m / p;
        }
        money[name_map[g]] += m - m / p * p;
    }
    for (int i = 0; i < n; ++i) {
        cout << names[i] << " " << money[i] << endl;
    }
}
