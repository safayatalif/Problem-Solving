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
        // adj[v].push_back(u);
    }

 
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        bool connected = (x == y);
        if (!connected) {
            for (int i : adj[x]) {
                if (i == y) {
                    connected = true;
                    break;
                }
            }
        }
        if (connected)
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }

    return 0;
}