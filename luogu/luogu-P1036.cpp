#include<iostream>
#include<cmath>
bool is_primer_number(int n);
void combination(int n,int k,int *xs,int start,
  int num_sum,int times);
using namespace std;
int sum = 0;
int main(){
  int n,k;
  cin >> n >> k;
  int xs[n];
  for (int i = 0; i < n; i++) {
    cin >> xs[i];
  }
  combination(n,k,xs,0,0,0);
  cout << sum << endl;
  return 0;
}
void combination(int n,int k,int *xs,int start,
  int num_sum,int times) {
  //cout << n << " " << k << " " << start << " " << num_sum
  //<< " " << times << " start"<<endl;
  if (times == k)//归递完成
  {
    //cout << "end" << '\n';
    if (is_primer_number(num_sum)) {sum += 1;
    //cout << "sum += 1" << '\n';
  }
    return;
  }
  if ((start + 0) > (k - times)) { // 队列结束
    //cout << "full" << '\n';
    //return;
  }
  for (int i = start; i < n; i++) {
    //cout << i << " next time"<< endl;
    combination(n,k,xs,i+1,num_sum+xs[i],times+1);
  }
}
bool is_primer_number(int n){
  if (n < 2) return false;
  for (int i = 2; i < int(sqrt(n)) + 1; i++) {
    if (n % i == 0) return false;
  }
  return true;
}
