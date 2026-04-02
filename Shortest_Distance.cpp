#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    if (!(cin >> n >> m))
        return 0;

    const long long INF = (long long)4e15;

    vector<vector<long long>> dist(n + 1, vector<long long>(n + 1, INF));

    for (int i = 1; i <= n; ++i)
        dist[i][i] = 0;

    for (int i = 0; i < m; ++i)
    {
        int u, v;
        long long w;
        cin >> u >> v >> w;
        dist[u][v] = min(dist[u][v], w);
    }

    for (int k = 1; k <= n; ++k)
    {
        for (int i = 1; i <= n; ++i)
        {
            if (dist[i][k] == INF)
                continue;
            for (int j = 1; j <= n; ++j)
            {
                if (dist[k][j] == INF)
                    continue;
                long long nd = dist[i][k] + dist[k][j];
                if (nd < dist[i][j])
                    dist[i][j] = nd;
            }
        }
    }

    int q;
    cin >> q;
    while (q--)
    {
        int s, t;
        cin >> s >> t;
        if (dist[s][t] >= INF)
            cout << -1 << '\n';
        else
            cout << dist[s][t] << '\n';
    }

    return 0;
}
