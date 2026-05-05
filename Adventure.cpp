#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, W;
        cin >> n >> W;
        
        vector<int> w(n), v(n);
        
        for (int i = 0; i < n; i++) cin >> w[i];
        for (int i = 0; i < n; i++) cin >> v[i];
        
        vector<long long> dp(W + 1, 0);
        
        for (int i = 0; i < n; i++) {
            for (int j = W; j >= w[i]; j--) {
                dp[j] = max(dp[j], dp[j - w[i]] + v[i]);
            }
        }
        
        cout << dp[W] << "\n";
    }
    
    return 0;
}