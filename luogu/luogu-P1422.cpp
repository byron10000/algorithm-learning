//
// Created by byron on 2020/2/10.
//
#include <iostream>
#include <cstdio>
using namespace std;
double main1(int n){
    double sum = 0;
    if (n > 150){
        sum += 150 * 0.4463;
        if (n > 400){
            sum += 250 * 0.4663;
            sum += (n - 400) * 0.5663;
        }
        else{
            sum += (n - 150) * 0.4663;
        }
    }
    else{
        sum += n * 0.4463;
    }
    return sum;
}
int main(){
    for (int i = 1; i < 10001; ++i) {
        printf("%.1f\n",main1(i));
    }
    return 0;
}
