#include <iostream>
using namespace std;
int n;
int nums[15][2] = {{16384,14},{8192,13},{4096,12},{2048,11},
                 {1024,10},{512,9},{256,8},{128,7},{64,6},
                 {32,5},{16,4},{8,3},{4,2},{2,1},{1,0}};
void cut(int x,bool first)
{
    if (!first)
        cout << "+";
    if (x == 0)
        cout << "0";
    else if (x == 1)
        cout << "2(0)";
    else if (x == 2)
        cout << "2";
    else{
        for (int i = 0; i < 15; ++i) {
            if (nums[i][0] <= x){
                cout << "2" << "(" ;
                cut(nums[i][1],true);
                cout << ")";
                x = x - nums[i][0];
                if (x != 0)
                    cut(x,false);
                break;
            }
        }
    }
}
int main()
{
    cin>>n;
    cut(n,true);
    return 0;
}