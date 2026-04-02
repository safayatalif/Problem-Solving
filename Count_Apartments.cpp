#include <bits/stdc++.h>
using namespace std;

char arr[1005][1005];
bool visited[1001][1001];
int n, m;

vector<pair<int,int>> dir = {{-1, 0},{1, 0}, {0, -1},{0, 1}};

void dfs(int x, int y) {
    visited[x][y] = true;

    for (auto d : dir) {
        int nx = x + d.first;
        int ny = y + d.second;
        // cout << "nx: " << nx << " ny: " << ny << endl;

        if (nx >= 0 && nx < n && ny >= 0 && ny < m) {
            if (!visited[nx][ny] && arr[nx][ny] == '.') {
                dfs(nx, ny);
            }
        }
    }
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    int count = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] == '.' && !visited[i][j]) {
                count++;
                dfs(i, j);
            }
        }
    }

    cout << count << endl;
    return 0;
}
