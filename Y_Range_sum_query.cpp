#include <bits/stdc++.h>
using namespace std;

int main() {
    int n , q;
    cin >> n >> q;
    vector<long long> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    vector<long long> prefix_sum(n + 1, 0);
    for(int i = 1; i <= n; i++){
        prefix_sum[i] = prefix_sum[i - 1] + arr[i - 1];
    } 

    while(q--){
        int l, r;
        cin >> l >> r;
        long long result = prefix_sum[r] - prefix_sum[l - 1];
        cout << result << endl;
    }
    return 0;
}