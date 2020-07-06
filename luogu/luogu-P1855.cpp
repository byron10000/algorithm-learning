#include <iostream>
#define N 101
using namespace std;

int n, tim, mon;
int t[N], m[N];
int f[201][201];

inline int Max(int a, int b)
{
    return a > b ? a : b;
}

int main()
{
    cin >> n >> mon >> tim;
    for(int i = 1; i <= n; i++)
        cin >> m[i] >> t[i];
    for(int i = 1; i <= n; i++)
        for(int j = mon; j >= m[i]; j--)
            for(int k = tim; k >= t[i]; k--)
                f[j][k] = Max(f[j][k],
                        f[j - m[i]][k - t[i]] + 1);
    cout << f[mon][tim];

    return 0;
}