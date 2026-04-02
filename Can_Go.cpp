#include <bits/stdc++.h>
using namespace std;

char arr[1005][1005];
bool visited[1005][1005];

int main() {
    int n, m;
    cin >> n >> m;

    int sx = -1, sy = -1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
            if (arr[i][j] == 'A') {
                sx = i;
                sy = j;
            }
        }
    }

    vector<pair<int,int>> dir = {{-1, 0},{1, 0}, {0, -1},{0, 1}};

    queue<pair<int,int>> q;
    q.push({sx, sy});
    visited[sx][sy] = true;

    while (!q.empty()) {
        pair<int,int> cur = q.front();
        q.pop();

        int x = cur.first;
        int y = cur.second;

        for (pair<int,int> d : dir) {
            int nx = x + d.first;
            int ny = y + d.second;

            if (nx >= 0 && nx < n && ny >= 0 && ny < m) {
                if (!visited[nx][ny] && arr[nx][ny] != '#') {

                    if (arr[nx][ny] == 'B') {
                        cout << "YES\n";
                        return 0;
                    }

                    visited[nx][ny] = true;
                    q.push({nx, ny});
                }
            }
        }
    }

    cout << "NO\n";
    return 0;
}
