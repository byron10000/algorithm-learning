//
//create by byron on 2020/02/13
//
#include <iostream>
#include <queue>
using namespace std;
int mg[32][32];
int size;
int ways[4][2] = {{1, 0}, {0, -1}, {-1, 0}, {0, 1}};
int main(){
    cin >> size;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            cin >> mg[i][j];
        }
    }
    queue<int> x_queue;
    queue<int> y_queue;
    for (int i = 0; i < size; ++i) {
        x_queue.push(i);
        y_queue.push(0);
        x_queue.push(i);
        y_queue.push(size - 1);
        x_queue.push(0);
        y_queue.push(i);
        x_queue.push(size - 1);
        y_queue.push(i);
    }
    while (!(x_queue.empty() && y_queue.empty())){
        int now_x = x_queue.front();
        int now_y = y_queue.front();
        x_queue.pop();
        y_queue.pop();
        if (now_x >= size || now_x < 0 || now_y >= size || now_y < 0)
            continue;
        if (mg[now_x][now_y] != 0)
            continue;
        mg[now_x][now_y] = 2;
        for (int i = 0; i < 4; ++i) {
            x_queue.push(now_x + ways[i][0]);
            y_queue.push(now_y + ways[i][1]);
        }
    }
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if (mg[i][j] == 0)
                cout << 2;
            else if (mg[i][j] == 1)
                cout << 1;
            else
                cout << 0;
            if (j != size - 1)
                cout << " ";
            else
                cout << endl;
        }
    }
}