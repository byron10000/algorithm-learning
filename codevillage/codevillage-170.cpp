#include <iostream>
using namespace std;
typedef long long ll;

ll n, m, result = 1, mod = 1000000007, f;

int main(){
    cin >> n >> m;
    if (m <= 2){
        cout << 0;
        return 0;
    }
    f = (m - 1) * (m - 2) * max(m - 3, (ll) 1);
    for (int i = 0; i < n; i ++){
        if (i == 0){
            result = result * m * (m - 1) * (m - 2) % mod;
        }
        else{
            result = result * f % mod;
        }
    }
    cout << result;
}