#include <bits/stdc++.h>
using namespace std;

bool canReach(long long n)
{
    while (n > 1)
    {
        if (n % 2 == 0)
        {
            n = n / 2;
        }
        else if (n >= 4 && (n - 3) >= 1)
        {

            n = n - 3;
        }
        else
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        if (canReach(n))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}