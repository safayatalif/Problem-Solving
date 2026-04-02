#include <bits/stdc++.h>
using namespace std;

char arr[1005][1005];
int visited[1005][1005];
int n, m;
int cnt;

bool valid(int i, int j){
    if(i >= 0 && i < n && j >= 0 && j < m){
        return true;
    }
    return false;
}

void dfs(int si, int sj){
    visited[si][sj] = 1;
    cnt++;
    vector<pair<int,int>> dir = {{-1, 0},{1, 0}, {0, -1},{0, 1}};
    for(auto d : dir){
        int ni = si + d.first;
        int nj = sj + d.second;
        if(valid(ni, nj)){
            if(arr[ni][nj] == '.' && visited[ni][nj] == 0){
                dfs(ni, nj);
            }
        }
    }
}



int main() {
    cin >> n >> m;
    int minimum = INT_MAX;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            char c;
            cin >> c;
            arr[i][j] = c;
        }
    }
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(arr[i][j] == '.' && visited[i][j] == 0){
                cnt = 0;
                dfs(i, j);
                if(cnt < minimum){
                    minimum = cnt;
                }
            }
        }
    }
    if(minimum == INT_MAX){
        cout << -1 << endl;
    } else {
        cout << minimum << endl;
    }

    return 0;
}