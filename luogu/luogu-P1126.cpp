//
// Created by byron on 2020/2/13.
//
#include <iostream>
#include <queue>
#include <map>
using namespace std;
struct robot{
    int x, y, facing;
};
int main(){
    int n, m;
    cin >> n >> m;
    int mg[64][64];
    for (int i = 0; i < n ; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> mg[i][j];
        }
    }
    int robot_x, robot_y, target_x, target_y,robot_facing;
    char robot_facing1;
    cin >> robot_x >> robot_y >> target_x >> target_y >> robot_facing1;
    if (robot_facing1 == 'E')
        robot_facing = 0;
    else if (robot_facing1 == 'S')
        robot_facing = 1;
    else if (robot_facing1 == 'W')
        robot_facing = 2;
    else
        robot_facing = 3;
    queue<robot> robot_queue;
    map<robot, int> robot_map;
    robot start = {robot_x, robot_y, robot_facing};
    robot_queue.push(start);
    robot_map[start] = 0;
    while(!robot_queue.empty()){
        robot now = robot_queue.front();
        int now_x, now_y;
        now_x = now.x;
        now_y = now.y;
        robot_queue.pop();
        if (now_x < 0 || now_x >= n - 1 || now_y < 0 || now_y >= n - 1)
            continue;
        if (mg[now_x][now_y] || mg[now_x + 1][now_y] == 1|| mg[now_x][now_y + 1] == 1||
                mg[now_x + 1][now_y + 1] == 1)
            continue;

    }
}
