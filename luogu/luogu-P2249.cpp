//
// Created by byron on 2020/4/11.
//
#include <iostream>
using namespace std;
long long nums[1000010];
int n, m;
int search(long long i){
    int l = 0, h = n;
    int mid = -1;
    while (l <= h) {
        mid = (h + l) / 2;
        if (nums[mid] > i){
            if (h == mid)
                break;
            h = mid;
        }else if(nums[mid] < i){
            if (l == mid)
                break;
            l = mid;
        }else{
            int j = mid;
            for (; nums[j] == i; --j) {}
            return j + 1;
        }
    }
    if (nums[mid] == i)
        return mid;
    return -2;
}


int main(){
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    for (int i = 0; i < m; ++i){
        int k;
        cin >> k;
        cout << search(k) + 1;
        if (i != m - 1)
            cout << " ";
        else
            cout << endl;
    }
}
