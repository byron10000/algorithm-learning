//
// Created by byron on 2020/1/22.
//
#include <iostream>
#include <string>
using namespace std;
int lr[360],lb[360],rr[360],rb[360];
int n;
inline int func1(int x){
    return (x + n) % n;
}
int main(){
    cin >> n;
    string in;
    cin >> in;
    for (int i = 0; i < n; ++i) {
        if (in[i] == 'w' || in[i] == 'r'){
            lr[i] = 1;
            int k = func1(i - 1);
            char l = in[k];
            if (l == 'w' || l == 'r'){
                if (k > i){
                    lr[i] ++;
                    for (int j = k - 1; j >= 0; --j) {
                        char c = in[j];
                        if (c == 'w' || c == 'r'){
                            lr[i] ++;
                        }
                        else{
                            break;
                        }
                    }
                }
                else{
                    lr[i] += lr[k];
                }
            }
            else{
                lr[i] = 1;
            }
        }
        if (in[i] == 'w' || in[i] == 'b'){
            lb[i] = 1;
            int k = func1(i - 1);
            char l = in[k];
            if (l == 'w' || l == 'b'){
                if (k > i){
                    lb[i] ++;
                    for (int j = k - 1; j >= 0; --j) {
                        char c = in[j];
                        if (c == 'w' || c == 'r'){
                            lb[i] ++;
                        }
                        else{
                            break;
                        }
                    }
                }
                else{
                    lb[i] += lb[k];
                }
            }
            else{
                lb[i] = 1;
            }
        }
    }
    for (int i = n - 1; i >= 0; --i) {
        if (in[i] == 'w' || in[i] == 'r'){
            rr[i] = 1;
            int k = func1(i + 1);
            char l = in[k];
            if (l == 'w' || l == 'r'){
                if (k < i){
                    rr[i] ++;
                    for (int j = 1; j < n; ++j) {
                        char c = in[j];
                        if (c == 'w' || c == 'r'){
                            rr[i] ++;
                        }
                        else{
                            break;
                        }
                    }
                }
                else{
                    rr[i] += rr[k];
                }
            }
            else{
                rr[i] = 1;
            }
        }
        if (in[i] == 'w' || in[i] == 'b'){
            rb[i] = 1;
            int k = func1(i + 1);
            char l = in[k];
            if (l == 'w' || l == 'b'){
                if (k < i){
                    rb[i] ++;
                    for (int j = 0; j < n; ++j) {
                        char c = in[j];
                        if (c == 'w' || c == 'r'){
                            rb[i] ++;
                        }
                        else{
                            break;
                        }
                    }
                }
                else{
                    rb[i] += rb[k];
                }
            }
            else{
                rb[i] = 1;
            }
        }
    }
    int ans = 0;
    for (int i = 0; i < n; ++i) {
        int f = max(lb[i],lr[i]) +
                max(lb[func1(i + 1)],lb[func1(i + 1)]);
        if (f > ans) ans = f;
    }
    cout << ans;
}
