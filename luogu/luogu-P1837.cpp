#include <cstdio>
#include <cmath>
using namespace std;

int trees_height[1000010];
int n, m;

bool pass(int value){
    int sum_number = 0;
    for (int i = 0; i < n; i++){
        sum_number += trees_height[i] - value;
        if (sum_number >= m)
            return true;
    }
    return false;
}


int binary_search(int high, int low){
    if (high <= low)
        return low;
    int middle = (high + low) / 2 + rand() % 2;
    if (pass(middle))
        return binary_search(middle, low);
    else
        return binary_search(high, middle);
}

int main(){
    scanf("%d%d", &n, &m);
    int max_number = 0;
    for (int i = 0; i < n; i++){
        scanf("%d", &trees_height[i]);
        max_number = trees_height[i] > max_number ? trees_height[i] : max_number;
    }
    printf("%d", binary_search(max_number, 0));
    scanf("%d", &m);
}