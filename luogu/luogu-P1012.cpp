//
// Created by byron on 2020/1/12.
//
#include <iostream>
#include <string>
#include <algorithm>
#include <functional>
using namespace std;
bool cmp(string a,string b){
    return a + b > b + a;
}
string work(string nums[],int n){
    sort(nums,nums+n,cmp);
    string ans;
    for (int i = 0; i < n; ++i) {
        ans += nums[i];
    }
    return ans;
}
int main(){
    int n;
    cin >> n;
    string nums[n];
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    cout << work(nums,n) << endl;
}
