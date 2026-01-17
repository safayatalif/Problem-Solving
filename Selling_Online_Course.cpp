#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long x;
    cin >> x;

    if (x == 0)
    {
        cout << 0 << endl;
        return 0;
    }
    long long result = (x * 20) / 100;

    if(result == 0) {
        cout << -1 << endl;
        return 0;
    }
    if(result >= 100) {
        cout << 1 << endl;
        return 0;
    }

    long long finalAmount = (100 + result - 1) / result;
    cout << finalAmount << endl;

    return 0;
}