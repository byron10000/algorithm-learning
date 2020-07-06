//
// Created by byron on 2020/2/22.
//
#include <iostream>
#include <set>
using namespace std;
int main(){
    int m, n, k, l, d;
    cin >> m >> n >> k >> l >> d;
    set<int> ans1, ans2;
    for (int i = 0; i < d; ++i) {
        int x, y, p, q;
        cin >> x >> y >> p >> q;
        if (x == p)
            ans2.insert(min(y, q));
        else
            ans1.insert(min(x, p));
    }
    int l1 = 0;
    for(auto it = ans1.begin ();it != ans1.end (); ++it)
    {
        cout << *it;
        l1 ++;
        if (l1 < ans1.size())
            cout << " ";
        else
            cout << endl;
    }
    int l2 = 0;
    for(auto it = ans2.begin ();it != ans2.end (); ++it)
    {
        cout << *it;
        l2 ++;
        if (l2 < ans2.size())
            cout << " ";
        else
            cout << endl;
    }
}
