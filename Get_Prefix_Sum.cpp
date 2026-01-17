#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long int> A(n);
    for(int i = 0; i < n; i++) {
        long long int x;
        cin >> x;
        A[i] = x;
    }
    
    vector<long long int> prefixSum(n);
    prefixSum[0] = A[0];
    for(int i = 1; i < n; i++) {
        prefixSum[i] = prefixSum[i-1] + A[i];
    }
    reverse(prefixSum.begin(), prefixSum.end());
    for(int i = 0; i < n; i++) {
        cout << prefixSum[i] << " ";
    }
    cout << endl;

    return 0;
}