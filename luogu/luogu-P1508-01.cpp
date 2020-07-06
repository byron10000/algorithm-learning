//
// Created by byron on 2020/2/2.
//
#include<iostream>
#include<cstring>
#include <algorithm>
using namespace std;
int n,m,a[201][201],f[201][201]={0},x,y;
int main()
{
    cin >> n >>m;
    x = n;
    y = m / 2 + 1;
    memset(a,-9999,sizeof(a));
    for(int i = 1;i <= n;++i)
    {
        for(int j = 1;j <= m;++j)
        {
            cin >> a[i][j];
        }
    }
    for(int i = 1;i <= n;++i)
    {
        for(int j = 1;j <= m;++j)
        {
            f[i][j] = max(max(f[i - 1][j],
                f[i - 1][j - 1]),f[i - 1][j + 1]) + a[i][j];         //动态方程
        }
    }
    cout << max(max(f[x][y],f[x][y - 1]),f[x][y + 1]) << endl;       //因为最大值只可能在李大水牛的前方、左前方、右前方，所以只要找这三个的最大就行了
    return 0;
}