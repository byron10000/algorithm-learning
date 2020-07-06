//
// Created by byron on 2019/12/14.
//
#include <iostream>
#include <string>
using namespace std;
int le1(int q,int l){
    if(q > 80 && l >= 1){
        return 8000;
    }
    return 0;
}
int le2(int q,int b){
    if(q > 85 && b >= 80){
        return 4000;
    }
    return 0;
}
int le3(int q){
    if(q > 90){
        return 2000;
    }
    return 0;
}
int le4(int q,bool w){
    if (q > 85 && w) {
        return 1000;
    }
    return 0;
}
int le5(int b,int g){
    if (b > 80 && g){
        return 850;
    }
    return 0;
}
int main(){
    int n;
    cin >> n;
    int sum = 0;
    string max_name;
    int max_money = 0;
    for (int i = 0; i < n; ++i) {
        int q,b,l,money = 0;
        bool g,w;
        string g1,w1;
        string name;
        cin >> name >> q >> b >> g1 >> w1 >> l ;
        g = (g1=="Y")?true:false;
        w = (w1=="Y")?true:false;
        money += le1(q,l);
        money += le2(q,b);
        money += le3(q);
        money += le4(q,w);
        money += le5(b,g);
        if (money > max_money){
            max_money = money;
            max_name = name;
        }
        sum += money;
    }
    cout << max_name << endl << max_money << endl << sum;
    return 0;
}
