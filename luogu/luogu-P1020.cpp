//
// Created by byron on 2020/1/28.
//
#include <iostream>
#include <algorithm>
#include <cstdio>
#define N 100001
typedef unsigned short num;
using namespace std;
int main(){
    int n = 0;
    num nums[N];
    while(cin >> nums[n]) n ++;
    num d1[N],d2[N];
    d1[0] = nums[0];
    d2[0] = nums[0];
    //cout << n << endl;
    int l1 = 0;
    int l2 = 0;
    for (int i = 1; i < n; ++i) {
        if (d1[l1] >= nums[i])
            d1[++l1] = nums[i];
        else
            *upper_bound(d1,d1 + l1,nums[i],
                    greater<num>()) = nums[i];
    }
    for (int i = 0; i < n; ++i) {
        if (d2[l2] < nums[i])
            d2[++l2] = nums[i];
        else
            *lower_bound(d2,d2 + l2,nums[i]) = nums[i];
    }
    printf("%d\n%d",l1 + 1,l2 + 1);
    return 0;
}
