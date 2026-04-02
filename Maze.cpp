#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    if (!(cin >> n >> m)) return 0;

    vector<pair<int, int>> dir = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

    vector<string> maze(n);
    pair<int, int> start, target;

    for (int i = 0; i < n; i++) {
        cin >> maze[i];
        for (int j = 0; j < m; j++) {
            if (maze[i][j] == 'R') start = {i, j};
            if (maze[i][j] == 'D') target = {i, j};
        }
    }

    vector<vector<bool>> visited(n, vector<bool>(m, false));
    vector<vector<pair<int, int>>> parent(n, vector<pair<int, int>>(m, {-1, -1}));

    queue<pair<int, int>> q;
    q.push(start);
    visited[start.first][start.second] = true;

    bool found = false;
    while (!q.empty()) {
        pair<int, int> curr = q.front();
        q.pop();

        if (curr == target) {
            found = true;
            break;
        }

        for (auto d : dir) {
            int nx = curr.first + d.first;
            int ny = curr.second + d.second;

            if (nx >= 0 && nx < n && ny >= 0 && ny < m && 
                maze[nx][ny] != '#' && !visited[nx][ny]) {
                
                visited[nx][ny] = true;
                parent[nx][ny] = curr;
                q.push({nx, ny});
            }
        }
    }

    if (found) {
        pair<int, int> path_step = parent[target.first][target.second];
        
        while (path_step != start && path_step.first != -1) {
            maze[path_step.first][path_step.second] = 'X';
            path_step = parent[path_step.first][path_step.second];
        }
    }

    for (int i = 0; i < n; i++) {
        cout << maze[i] << "\n";
    }

    return 0;
}