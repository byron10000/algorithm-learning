//
// Created by byron on 2020/1/28.
//
#include <iostream>
#include <vector>
using namespace std;
vector<char> tree[26];
void work(char s) {
    cout << s;
    if (!tree[s - 'A'].empty()) {
        if (tree[s - 'A'].size() > 1) {
            work(tree[s - 'A'][0]);
            work(tree[s - 'A'][1]);
        }
        else {
            work(tree[s - 'A'][0]);
        }
    }
}
int main() {
    int n;
    cin >> n;
    char s = '*';
    for (int i = 0; i < n; ++i) {
        char f,l,r;
        cin >> f >> l >> r;
        if (s == '*')
            s = f;
        if (l != '*')
            tree[f - 'A'].push_back(l);
        if (r != '*')
            tree[f - 'A'].push_back(r);
    }
    work(s);
}
