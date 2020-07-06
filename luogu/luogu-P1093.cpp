//
// Created by byron on 2020/1/9.
//
#include <iostream>
#include <algorithm>
using namespace std;
struct student{
    int id;
    int chi;
    int mat;
    int enl;
};
bool cmp(student a,student b){
    int ret = -1;
    if ((a.chi + a.mat + a.enl) > (b.chi + b.mat + b.enl))
        ret = 1;
    else if ((a.chi + a.mat + a.enl) < (b.chi + b.mat + b.enl))
        ret = 0;
    if (ret != -1) return ret;
    if (a.chi > b.chi) ret = 1;
    else if (a.chi < b.chi) ret = 0;
    if (ret != -1) return ret;
    if (a.id < b.id) ret = 1;
    else ret = 0;
    return ret;
}
int main(){
    int n;
    cin >> n;
    student students[310];
    for (int i = 1; i <= n; ++i) {
        int chi,mat,enl;
        cin >> chi >> mat >> enl;
        student stu = {i,chi,mat,enl};
        students[i] = stu;
    }
    sort(students + 1,students + n + 1,cmp);
    for (int i = 0; i < 5; ++i) {
        int hol;
        student stu;
        stu = students[i + 1];
        hol = stu.chi + stu.mat + stu.enl;
        cout << stu.id << " " << hol << endl;
    }
}
