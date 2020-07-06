#include<iostream>
using namespace std;
int n;
int a[20],c[20],red[40],green[40];
int ans=0;
void dfs(int k) {
    if (k >= n) {
        ans++;
        if (ans > 3) return;
        for (int i = 0; i < n; ++i) {
            cout << a[i];
            if (i != n - 1)
                cout << " ";
        }
        cout << endl;
        return;
    }
    for (int i = 1; i <= n; ++i)
        if (!c[i] && !red[k + i] && !green[k - i + n]) {

            c[i] = 1;
            red[k + i] = 1;
            green[k - i + n] = 1;
            a[k] = i;
            dfs(k + 1);
            c[i] = 0;
            red[k + i] = 0;
            green[k - i + n] = 0;
        }
}
int main(){
    cin >> n;
    dfs(0);
    cout << ans << endl;
    return 0;
}