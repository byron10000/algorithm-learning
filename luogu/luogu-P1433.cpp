#include<iostream>
#include<cmath>
#include<cstdio>
#include <algorithm>
using namespace std;
int n,visited[1001];
double x[100];
double y[200];
struct k{
    double l;
    int i;
};
k dis[1001][1001];
double ans=1231234424.0;
bool cmp(k k1,k k2){
    return k1.l < k2.l;
}
void dfs(int step,int now,double length)
{
    if(length>=ans)
        return;
    if(step==n)
    {
        ans=min(ans,length);
        return;
    }
    int f;
    for(int j=1;j<=n;j++) {
        f = dis[now][j].i;
        if (!visited[f]) {
            visited[f] = 1;
            dfs(step + 1, f, length + dis[now][j].l);
            visited[f] = 0;
        }
    }
}
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>x[i]>>y[i];
    x[0]=0;y[0]=0;
    for(int i=0;i<=n;i++) {
        for (int j = 0; j <= n; j++) {
            k k1 = {sqrt((x[i] - x[j]) * (x[i] - x[j]) +
                         (y[i] - y[j]) * (y[i] - y[j])), j};
            dis[i][j] = k1;
        }
        sort(dis[i] + 1,dis[i] + n + 1,cmp);
    }
    dfs(0,0,0.0);
    printf("%.2f",ans);
    return 0;
}