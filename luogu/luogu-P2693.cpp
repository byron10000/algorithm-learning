//
// Created by byron on 209/2/9.
//
#include <iostream>
#include <set>
using namespace std;
int main() {
    int n;
    cin >> n;
    int na1,nb1,nc1;
    set<int> ans;
    cin >> na1>>nb1>>nc1;
    int a1,b1,c1;
    for (int a = na1 - 2; a < na1 + 3; ++a) {
        for (int b = nb1 - 2; b < nb1 + 3; ++b) {
            for (int c = nc1 - 2; c < nc1 + 3; ++c) {
                a1 = (a+n) % n;
                b1 = (b+n) % n;
                c1 = (c+n) % n;
                ans.insert(a1*10000+b1*100+c1);
            }
        }
    }
    cin >> na1>>nb1>>nc1;
    //int a1,b1,c1;
    for (int a = na1 - 2; a < na1 + 3; ++a) {
        for (int b = nb1 - 2; b < nb1 + 3; ++b) {
            for (int c = nc1 - 2; c < nc1 + 3; ++c) {
                a1 = (a+n) % n;
                b1 = (b+n) % n;
                c1 = (c+n) % n;
                ans.insert(a1*10000+b1*100+c1);
            }
        }
    }
    cout << ans.size() << endl;
}
