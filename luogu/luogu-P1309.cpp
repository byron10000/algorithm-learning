//
// Created by byron on 2020/1/9.
//
#include <iostream>
#include <algorithm>
using namespace std;
struct player{
    int id;
    int fra;
    int strength;
};
bool cmp(player a, player b){
    if (a.fra > b.fra) return 1;
    if (a.fra < b.fra) return 0;
    if (a.id < b.id) return 1;
    return 0;

}
int main(){
    int n,r,q;
    cin >> n >> r >> q;
    n *= 2;
    player players[n];
    for (int i = 0; i < n; ++i) {
        players[i].id = i + 1;
        cin >> players[i].fra;
    }
    for (int i = 0; i < n; ++i){
        cin >> players[i].strength;
    }
    sort(players,players + n,cmp);
    for (int i = 0; i < r; ++i){
        for (int j = 0; j < n / 2; ++j) {
            if (players[j].strength > players[j + 1].strength)
                players[j].fra ++;
            else players[j + 1].fra ++;
        }
        sort(players,players + n,cmp);
    }
    int out = players[q - 1].id;
    cout << out << endl;
    return 0;
}
