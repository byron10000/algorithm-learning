#include <iostream>
#include <string>
using namespace std;
int main(){
    string a;
    string b;
    cin >> a;
    cin >> b;
    int an = 1,bn = 1;
    for (int i = 0; i < a.size(); ++i) {
        an *= (a[i] - 'A' + 1);
    }
    for (int i = 0; i < b.size(); ++i) {
        bn *= (b[i] - 'A' + 1);
    }
    if ((an % 47) == (bn % 47)){
        cout << "GO" << endl;
    }
    else{
        cout << "STAY" << endl;
    }
    return 0;
}
