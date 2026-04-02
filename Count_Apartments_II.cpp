#include <bits/stdc++.h>
using namespace std;

char arr[1005][1005];
bool visited[1005][1005];
int n, m;

vector<pair<int,int>> dir = { {-1, 0}, {1, 0}, {0, -1}, {0, 1}};

int dfs(int x, int y) {
    visited[x][y] = true;
    int room = 1;

    for (auto d : dir) {
        int nx = x + d.first;
        int ny = y + d.second;

        if (nx >= 0 && nx < n && ny >= 0 && ny < m) {

            if (!visited[nx][ny] && arr[nx][ny] == '.')
                    room += dfs(nx, ny);
        }
    }
    return room;
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    vector<int> apts;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] == '.' && !visited[i][j]) 
                    apts.push_back(dfs(i, j));
        }
    }

    if (apts.empty()) {
        cout << 0 << endl;
        return 0;
    }

    sort(apts.begin(), apts.end());

    for (int x : apts) cout << x << " ";
    cout << endl;

    return 0;
}
