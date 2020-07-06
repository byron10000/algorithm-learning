#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
bool have_solve = 0;
bool Proportionate(int a , int b , int c , int na , int nb , int nc);
int main() {
  int a,b,c;
  cin >> a >> b >> c;
  int na,nb,nc;
  int num[9] = {1,2,3,4,5,6,7,8,9};
  while (next_permutation(num,num+9)){
      na = num[0] * 100 + num[1] * 10 + num[2] * 1;
      nb = num[3] * 100 + num[4] * 10 + num[5] * 1;
      nc = num[6] * 100 + num[7] * 10 + num[8] * 1;
      if(na / a == nb / b == nc / c)
          cout << na << " " << nb << " " << nc << endl;
  }
  return 0;

  //cout << Proportionate(1,2,3,192,384,576);
  return 0;
}

