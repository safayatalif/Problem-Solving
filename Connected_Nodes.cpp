#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> adj(n);
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    // print adjacency list
    // for (int i = 0; i < n; i++) {
    //     cout << i << ": ";
    //     for (int j : adj[i]) {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }

    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        if (adj[x].empty()) {
            cout << -1;
        } else {
            auto vec = adj[x];
            sort(vec.begin(), vec.end(), greater<int>());
            for (int v : vec) cout << v << " ";
        }
        cout << endl;
    }

    return 0;
}