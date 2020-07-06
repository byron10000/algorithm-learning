#include<iostream>
using namespace std;

const int maxn=1000002;
const int mod=10000;

int f[maxn],g[maxn];

int main()
{
    int n;

    cin>>n;

    f[0]=1; //g[0]=0

    f[1]=g[1]=1;

    for(int i=2;i<=n;i++)
    {
        f[i]=((f[i-1]+f[i-2])%mod+2*g[i-2]%mod)%mod;

        g[i]=(g[i-1]+f[i-1])%mod;
    }

    cout<<f[n];

    return 0;
}