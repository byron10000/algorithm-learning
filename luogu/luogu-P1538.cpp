//
// Created by byron on 2020/1/20.
//
#include <iostream>
#include <string>
using namespace std;
void out_times(char c,int k){
    for (int i = 0; i < k; ++i) {
        cout << c;
    }
}
void out(char c = '|') {
    cout << c;
}
void out_space(){
    cout << " ";
}
int main(){
    int k;
    cin >> k;
    string nums;
    cin >> nums;
    for (int i = 0; i < nums.size(); ++i) {
        int n = nums[i] - '0';
        switch (n){
            case (0):
                out_space();
                out_times('-',k);
                out_space();
                if (i != nums.size() - 1)
                    out_space();
                break;
            case (1):
                out_space();
                out_times(' ',k);
                out_space();
                if (i != nums.size() - 1)
                    out_space();
                break;
            case(2) :
                out_space();
                out_times('-',k);
                out_space();
                if (i != nums.size() - 1)
                    out_space();
                break;
            case(3) :
                out_space();
                out_times('-',k);
                out_space();
                if (i != nums.size() - 1)
                    out_space();
                break;
            case(4) :
                out_space();
                out_times(' ',k);
                out_space();
                if (i != nums.size() - 1)
                    out_space();
                break;
            case (5):
                out_space();
                out_times('-',k);
                out_space();
                if (i != nums.size() - 1)
                    out_space();
                break;
            case (6):
                out_space();
                out_times('-',k);
                out_space();
                if (i != nums.size() - 1)
                    out_space();
                break;
            case (7):
                out_space();
                out_times('-',k);
                out_space();
                if (i != nums.size() - 1)
                    out_space();
                break;
            case (8):
                out_space();
                out_times('-',k);
                out_space();
                if (i != nums.size() - 1)
                    out_space();
                break;
            case (9):
                out_space();
                out_times('-',k);
                out_space();
                if (i != nums.size() - 1)
                    out_space();
                break;
        }
    }
    cout << endl;
    for (int j = 0; j < k; ++j) {
        for (int i = 0; i < nums.size(); ++i) {
            int n = nums[i] - '0';
            switch (n){
                case (0):
                    out();
                    out_times(' ',k);
                    out();
                    if (i != nums.size() - 1)
                        out_space();
                    break;
                case (1):
                    out_space();
                    out_times(' ',k);
                    out();
                    if (i != nums.size() - 1)
                        out_space();
                    break;
                case(2) :
                    out_space();
                    out_times(' ',k);
                    out();
                    if (i != nums.size() - 1)
                        out_space();
                    break;
                case(3) :
                    out_space();
                    out_times(' ',k);
                    out();
                    if (i != nums.size() - 1)
                        out_space();
                    break;
                case(4) :
                    out();
                    out_times(' ',k);
                    out();
                    if (i != nums.size() - 1)
                        out_space();
                    break;
                case (5):
                    out();
                    out_times(' ',k);
                    out_space();
                    if (i != nums.size() - 1)
                        out_space();
                    break;
                case (6):
                    out();
                    out_times(' ',k);
                    out_space();
                    if (i != nums.size() - 1)
                        out_space();
                    break;
                case (7):
                    out_space();
                    out_times(' ',k);
                    out();
                    if (i != nums.size() - 1)
                        out_space();
                    break;
                case (8):
                    out();
                    out_times(' ',k);
                    out();
                    if (i != nums.size() - 1)
                        out_space();
                    break;
                case (9):
                    out();
                    out_times(' ',k);
                    out();
                    if (i != nums.size() - 1)
                        out_space();
                    break;
            }
        }
        cout << endl;
    }
    for (int i = 0; i < nums.size(); ++i) {
        int n = nums[i] - '0';
        switch (n){
            case (0):
                out_space();
                out_times('-',k);
                out_space();
                if (i != nums.size() - 1)
                    out_space();
                break;
            case (1):
                out_space();
                out_times(' ',k);
                out_space();
                if (i != nums.size() - 1)
                    out_space();
                break;
            case(2) :
                out_space();
                out_times('-',k);
                out_space();
                if (i != nums.size() - 1)
                    out_space();
                break;
            case(3) :
                out_space();
                out_times('-',k);
                out_space();
                if (i != nums.size() - 1)
                    out_space();
                break;
            case(4) :
                out_space();
                out_times('-',k);
                out_space();
                if (i != nums.size() - 1)
                    out_space();
                break;
            case (5):
                out_space();
                out_times('-',k);
                out_space();
                if (i != nums.size() - 1)
                    out_space();
                break;
            case (6):
                out_space();
                out_times('-',k);
                out_space();
                if (i != nums.size() - 1)
                    out_space();
                break;
            case (7):
                out_space();
                out_times(' ',k);
                out_space();
                if (i != nums.size() - 1)
                    out_space();
                break;
            case (8):
                out_space();
                out_times('-',k);
                out_space();
                if (i != nums.size() - 1)
                    out_space();
                break;
            case (9):
                out_space();
                out_times('-',k);
                out_space();
                if (i != nums.size() - 1)
                    out_space();
                break;
        }
    }
    cout << endl;
    for (int j = 0; j < k; ++j) {
        for (int i = 0; i < nums.size(); ++i) {
            int n = nums[i] - '0';
            switch (n){
                case (0):
                    out();
                    out_times(' ',k);
                    out();
                    if (i != nums.size() - 1)
                        out_space();
                    break;
                case (1):
                    out_space();
                    out_times(' ',k);
                    out();
                    if (i != nums.size() - 1)
                        out_space();
                    break;
                case(2) :
                    out();
                    out_times(' ',k);
                    out_space();
                    if (i != nums.size() - 1)
                        out_space();
                    break;
                case(3) :
                    out_space();
                    out_times(' ',k);
                    out();
                    if (i != nums.size() - 1)
                        out_space();
                    break;
                case(4) :
                    out_space();
                    out_times(' ',k);
                    out();
                    if (i != nums.size() - 1)
                        out_space();
                    break;
                case (5):
                    out_space();
                    out_times(' ',k);
                    out();
                    if (i != nums.size() - 1)
                        out_space();
                    break;
                case (6):
                    out();
                    out_times(' ',k);
                    out();
                    if (i != nums.size() - 1)
                        out_space();
                    break;
                case (7):
                    out_space();
                    out_times(' ',k);
                    out();
                    if (i != nums.size() - 1)
                        out_space();
                    break;
                case (8):
                    out();
                    out_times(' ',k);
                    out();
                    if (i != nums.size() - 1)
                        out_space();
                    break;
                case (9):
                    out_space();
                    out_times(' ',k);
                    out();
                    if (i != nums.size() - 1)
                        out_space();
                    break;
            }
        }
        cout << endl;
    }
    for (int i = 0; i < nums.size(); ++i) {
        int n = nums[i] - '0';
        switch (n){
            case (0):
                out_space();
                out_times('-',k);
                out_space();
                if (i != nums.size() - 1)
                    out_space();
                break;
            case (1):
                out_space();
                out_times(' ',k);
                out_space();
                if (i != nums.size() - 1)
                    out_space();
                break;
            case(2) :
                out_space();
                out_times('-',k);
                out_space();
                if (i != nums.size() - 1)
                    out_space();
                break;
            case(3) :
                out_space();
                out_times('-',k);
                out_space();
                if (i != nums.size() - 1)
                    out_space();
                break;
            case(4) :
                out_space();
                out_times(' ',k);
                out_space();
                if (i != nums.size() - 1)
                    out_space();
                break;
            case (5):
                out_space();
                out_times('-',k);
                out_space();
                if (i != nums.size() - 1)
                    out_space();
                break;
            case (6):
                out_space();
                out_times('-',k);
                out_space();
                if (i != nums.size() - 1)
                    out_space();
                break;
            case (7):
                out_space();
                out_times(' ',k);
                out_space();
                if (i != nums.size() - 1)
                    out_space();
                break;
            case (8):
                out_space();
                out_times('-',k);
                out_space();
                if (i != nums.size() - 1)
                    out_space();
                break;
            case (9):
                out_space();
                out_times('-',k);
                out_space();
                if (i != nums.size() - 1)
                    out_space();
                break;
        }
    }
}
