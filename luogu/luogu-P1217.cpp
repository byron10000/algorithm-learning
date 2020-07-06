#include<iostream>
#include<cmath>
bool is_primer_number(int n);
void get_primer_huiwen_numbers(int min,int max,int digit,
  int now_digit,int num);
int huiwei(int old,int new_num,int dight, bool
  need_double = true);
using namespace std;
int main(int argc, char const *argv[]) {
  const int digit = 2;
  for (int i = 1; i <= digit; i++) {
    get_primer_huiwen_numbers(5,500,i,0,0);
  }

  return 0;
}
void get_primer_huiwen_numbers(const int min,const int max,
  const int digit,const int now_digit,const int num) {
    std::cout << "call " << now_digit << " " << num<< '\n';
  if ((now_digit == digit-1) && (digit % 2 == 1)){ // 归递完成
    int new_num;
    for (int i = 0; i < 10; i++) {
      new_num = huiwei(num,i,now_digit,false);
      if (is_primer_number(new_num)&&(min < new_num < max))
        cout << new_num << '\n';
    }
    return;
  }
  if ((now_digit == digit-1) && (digit % 2 == 0)){ // 归递完成
      int new_num;
      for (int i = 0; i < 10; i++) {
        new_num = huiwei(num,i,now_digit,true);
        if (is_primer_number(new_num)&&(min < new_num < max))
          cout << new_num << '\n';
      }
      return;
  }
  for (int i = 0; i < 10 ; i++){
      std::cout << "next " << i<<'\n';
      get_primer_huiwen_numbers(min,max,digit,now_digit+1,
      num*pow(10,now_digit)+i);
  }

}
int huiwei(int old,int new_num,int dight, bool
  need_double ){
  int k = old;
  int back_old = 0;
  while(k!=0) {
    back_old=back_old*10+k%10;
    k=k/10;
  }
  if (need_double)
  {return old*pow(10,dight+2)+
    new_num*11*pow(10,dight) + back_old;}
  if (!need_double)
  {return old*pow(10,dight+1)+new_num*pow(10,dight)+
    back_old;}
}
bool is_primer_number(int n){
  if (n < 2) return false;
  for (int i = 2; i < int(sqrt(n)) + 1; i++) {
    if (n % i == 0) return false;
  }
  return true;
}
