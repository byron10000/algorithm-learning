//
// Created by byron on 2020/2/2.
//
#include <iostream>
#include <algorithm>
#define N 10001
using namespace std;
int n,k;
int free_time[N];// free_time[i] -> i - n 的空余时间
int searched = 0;// searched -> 搜索过的任务
struct task{
    int start = -1;
    int elapsed = -1;
} tasks[N];
bool cmp(task a,task b) {
    return a.start > b.start;
}
int sum_task[N]; // sum_task[i] -> task.start = i 的总数
int main(){
    cin >> n >> k;
    for (int i = 0; i < k; ++i) {
        cin >> tasks[i].start >> tasks[i].elapsed;
        sum_task[tasks[i].start] ++ ;
    }
    sort(tasks,tasks + n,cmp);
    for (int i = n; i > 0; --i) {
        if (sum_task[i] == 0)
            free_time[i] = free_time[i + 1] + 1;
        else
            for (int j = 0; j < sum_task[i]; ++j) {
                if (free_time[i + tasks[searched].elapsed] >
                        free_time[i])
                    free_time[i] = free_time[i + tasks[searched]
                                             .elapsed];
                searched ++;
            }
    }
    cout << free_time[1] << endl;
}
