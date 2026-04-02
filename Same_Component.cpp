#include <bits/stdc++.h>
using namespace std;

char arr[1005][1005];
int visited[1005][1005];
int n, m;

bool valid(int i, int j){
    if(i >= 0 && i < n && j >= 0 && j < m){
        return true;
    }
    return false;
}

void dfs(int si, int sj){
    visited[si][sj] = 1;
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


    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            char c;
            cin >> c;
            arr[i][j] = c;
        }
    }
    int si , sj;
    cin >> si >> sj;
    int di , dj;
    cin >> di >> dj;
    dfs(si, sj);
    if(visited[di][dj] == 1){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}