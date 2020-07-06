//
// Created by byron on 2020/1/17.
//
#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int sum = 0;
string s = "b";
string *start = &s;
string word[21];
int used[21];
int n;
int can_splicing(string w){
    for (int i = 0; i < min(w.size(),start -> size()) - 1; ++i) {
        if (w.substr(0,i + 1) == start -> substr(
                start -> size() - 1 - i,start -> size() - i))
            return i + 1;
    }
    return -1;
}
void work(int lenght,string q){
    if(lenght > sum) sum = lenght;
    for (int i = 0; i < n; ++i) {
        if (used[i] == 0)continue;
        int k = can_splicing(word[i]);
        if (k != -1){
            string *os = start;
            used[i]--;
            start = &(word[i]);
            work(lenght + word[i].size() - k,q+word[i]);
            start = os;
            used[i]++;

        }
    }
}
int main(){
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> word[i];
    }
    for (int i = 0; i < n; ++i) {
        used[i] = 2;
    }
    string s;
    cin >> s;
    *start += s;
    s = "";
    work(1,s);
    cout << sum << endl;
    return 0;
}
