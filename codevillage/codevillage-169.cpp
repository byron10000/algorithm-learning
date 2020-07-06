#include <iostream>
#include <string>
using namespace std;

string str;
int count = 0;
bool flag = true;
bool is_k = false;


int main(){
    cin >> str;
    for (int index = 0; index < str.length(); index ++){
        if (is_k){
            if (str[index] == 'D')
                count += 1;
            else if (flag){
                flag = false;
                count += 1;
                str[index] = 'D';
            }
        }
        else if (str[index] == 'D' && flag && index >= 1){
            flag = false;
            count += 1;
            str[index - 1] = 'K';
        }
        if (str[index] == 'K')
            is_k = true;
        else
            is_k = false;
    }
    
    cout << count << endl;
    cout << str << endl;
}