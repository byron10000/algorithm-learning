#include <iostream>
using namespace std;
int nums[1001];
int func(int n) {
    if (n == 1)
        return 1;
    if (nums[n] == 0) {
        int ans = 1;
        for (int i = 1; i < n / 2 + 1; ++i) {
            ans += func(i);
        }
        nums[n] = ans;
        return ans;
    }
    else{
        return nums[n];
    }
}
int main(){
    int n;
    cin >> n;
    cout << func(n) << endl;
}
