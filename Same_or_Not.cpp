#include <bits/stdc++.h>
using namespace std;

int main() {
    stack<int> s;
    queue<int> q;
    int n,m;
    cin >> n >> m;
    if(n != m ){
        cout << "NO\n";
        return 0;
    }
    for (int i = 0; i < n; i++) {
       int x;
       cin >> x;
        s.push(x);
    }
    for(int i = 0; i < m; i++) {
       int y;
       cin >> y;
        q.push(y);
    }

    while(!s.empty() && !q.empty()) {
        if(s.top() != q.front()) {
            cout << "NO\n";
            return 0;
        }
        s.pop();
        q.pop();
    }

    if(s.empty() && q.empty()) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}