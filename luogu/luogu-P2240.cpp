#include<iostream>
#include<algorithm>

using namespace std;

struct money
{
    int w, v;
};

int n;
money moneys[110];
int t;
int sum;


bool cmp(money a, money b){
    return double(a.v) / double(a.w) > double(b.v) / double(b.w);
}


int main(){
    cin >> n >> t;
    for (int i = 0; i < n; i++)
    {
        cin >> moneys[i].w >> moneys[i].v;
    }
    sort(moneys, moneys + n, cmp);
    while (t > 0)
}