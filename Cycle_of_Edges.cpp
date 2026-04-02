#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    if (!(cin >> n >> m))
        return 0;

    struct DSU
    {
        int n;
        vector<int> p, sz;
        DSU(int n = 0) : n(n), p(n + 1), sz(n + 1, 1)
        {
            for (int i = 1; i <= n; ++i)
                p[i] = i;
        }
        int find(int a)
        {
            return p[a] == a ? a : p[a] = find(p[a]);
        }
        bool dsu_union(int a, int b)
        {
            a = find(a);
            b = find(b);
            if (a == b)
                return false;
            if (sz[a] < sz[b])
                swap(a, b);
            p[b] = a;
            sz[a] += sz[b];
            return true;
        }
    } dsu(n);

    int cycle_edges = 0;
    for (int i = 0; i < m; ++i)
    {
        int u, v;
        cin >> u >> v;
        if (!dsu.dsu_union(u, v))
            ++cycle_edges;
    }

    cout << cycle_edges << '\n';
    return 0;
}
