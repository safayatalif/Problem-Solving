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
    bool foundDuplicate = false;
    for(int i = 0; i < A.size(); i++)
    {
        for(int j = i + 1; j < A.size(); j++)
        {
            if(A[i] == A[j])
            {
                foundDuplicate = true;
                break;
            }
        }
        if(foundDuplicate)
        {
            break;
        }
    }
    if(foundDuplicate)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}