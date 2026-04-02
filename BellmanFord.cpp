#include <iostream>
#include <vector>
#include <limits>
#include <cstdio>
using namespace std;
using ll = long long;
const ll INF = (ll)9e18;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    if(!(cin >> n >> m)) return 0;
    struct Edge { int u,v; ll w; };
    vector<Edge> edges;
    edges.reserve(m);
    for(int i=0;i<m;i++){
        int u,v; ll w; cin >> u >> v >> w;
        edges.push_back({u,v,w});
    }
    int src; cin >> src;
    int q; cin >> q;
    vector<int> queries(q);
    for(int i=0;i<q;i++) cin >> queries[i];

    vector<ll> dist(n+1, INF);
    dist[src] = 0;

    for(int iter=0; iter<n-1; ++iter){
        bool changed = false;
        for(auto &e: edges){
            if(dist[e.u] != INF && dist[e.u] + e.w < dist[e.v]){
                dist[e.v] = dist[e.u] + e.w;
                changed = true;
            }
        }
        if(!changed) break;
    }

    // check for negative cycle reachable from source
    for(auto &e: edges){
        if(dist[e.u] != INF && dist[e.u] + e.w < dist[e.v]){
            cout << "Negative Cycle Detected\n";
            return 0;
        }
    }

    for(int x: queries){
        if(dist[x] == INF) cout << "Not Possible\n";
        else cout << dist[x] << '\n';
    }

    return 0;
}
