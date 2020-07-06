//
// Created by byron on 2020/2/22.
//
#include <iostream>
#include <string>
#include <set>
using namespace std;
char old_num[16];
char new_num[16];
int n = 0;
set<string> str_set;
void dfs(const string& now){
    if (str_set.find(now) != str_set.end())
        return;
    str_set.insert(now);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < now.size(); ++j) {
            if (now[j] == old_num[i]){
                now[j] = new_num[i];
            }
        }
    }
}
