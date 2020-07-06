#include<iostream>
#include<map>
#include<queue>
#include<algorithm>
#define ll long long
using namespace std;
const ll dx[4] = {-1, 0, 0, 1}, dy[4] = {0, -1, 1, 0};
ll n;
int  main()
{
    cin >> n;
    queue<ll> q;
    q.push(n);
    map<ll, ll> m;
    m[n] = 0;
    while(!q.empty())
    {
        int f = q.front();
        int c[3][3], x = 0, y = 0, n = f;
        q.pop();
        if(f == 123804765)
            break;
        for(ll i = 2;i >= 0;i--)
            for(ll j = 2;j >= 0;j--)
            {
                c[i][j] = n%10, n/= 10;
                if(!c[i][j]){
                    x = i;
                    y = j;
                }
            }
        for(ll i = 0;i < 4;i++)
        {
            ll nx = x + dx[i], ny = y + dy[i], ns = 0;
            if(nx < 0 || ny < 0 || nx > 2 || ny > 2)
                continue;
            swap(c[nx][ny], c[x][y]);
            for(ll i = 0;i < 3;i++)
                for(ll j = 0;j < 3;j++)
                    ns = ns * 10 + c[i][j];
            if(!m.count(ns))
            {
                m[ns] = m[f]+1;
                q.push(ns);
            }
            swap(c[nx][ny], c[x][y]);
        }
    }
    cout << m[123804765] << endl;
    return 0;
}