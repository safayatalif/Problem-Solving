#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    vector<pair<int, int>> dir = {{2, 1}, {2, -1}, {-2, 1}, {-2, -1}, {1, 2}, {1, -2}, {-1, 2}, {-1, -2}};

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        int kx, ky, qx, qy;
        cin >> kx >> ky;
        cin >> qx >> qy;

        bool visited[105][105] = {false};

        queue<pair<pair<int, int>, int>> q;
        q.push({{kx, ky}, 0});
        visited[kx][ky] = true;

        int ans = -1;

        while (!q.empty())
        {
            auto cur = q.front();
            q.pop();

            int x = cur.first.first;

            int y = cur.first.second;
            int dist = cur.second;
            

            if (x == qx && y == qy)
            {
                ans = dist;
                break;
            }

            for (auto d : dir)
            {
                int nx = x + d.first;
                int ny = y + d.second;

                if (nx >= 0 && nx < n &&
                    ny >= 0 && ny < m &&
                    !visited[nx][ny])
                {
                    visited[nx][ny] = true;
                    q.push({{nx, ny}, dist + 1});
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}