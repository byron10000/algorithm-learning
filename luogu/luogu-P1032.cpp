#include <iostream>
#include <string>
#include <queue>
#include <map>
#include <cstdio>
#define maxn 15
using namespace std;

string start, finished;
string orginal[maxn]; // 旧的
string translated[maxn]; // 新的
int n,ans;
map<string, int> used_strs;

string trans(const string &str,int i,int j){ // i 从第i为开始，使用第j条规则
    string ans;
    if (i + orginal[j].length() > str.length())
        return ans;

    for (int k = 0; k < orginal[j].length();k++) // 逐位匹配
        if (str[i + k] != orginal[j][k])
            return ans;

    ans = str.substr(0,i);
    ans += translated[j];
    ans += str.substr(i + orginal[j].length());
    return ans;
}

void bfs(){
    queue <string> q;
    q.push(start);
    used_strs[start] = 0;

    while (!q.empty()){
        string temp = q.front();
        q.pop();

        if (temp == finished){
            ans = used_strs[temp];
            break;
        }
        for (int i = 0; i < temp.length(); i++) //枚举当前串所有可能位置
            for (int j = 0; j < n; j++){ //枚举所有可能手段
                string new_temp = trans(temp,i,j);
                if (!new_temp.empty()){
                    if(used_strs[new_temp])
                        continue;
                    used_strs[new_temp] = used_strs[temp] + 1;
                    q.push(new_temp);
                }
            }
    }
    if (ans > 10 || ans == 0)
        cout << "NO ANSWER!" << endl;
    else
        cout << ans << endl;

}

int main(){
    cin >> start >> finished;
    while (cin >> orginal[n] >> translated[n])
        n++;
    bfs();
    //system("pause");
    return 0;
}