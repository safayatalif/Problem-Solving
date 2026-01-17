#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<vector<long long>> a(n, vector<long long>(m));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    bool hasFixedRow = false;
    long long tSum = LLONG_MIN;

    for (int i = 0; i < n; i++)
    {
        bool hasZero = false;
        long long sum = 0;

        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == 0)
            {
                hasZero = true;
            }

            else
            {
                sum += a[i][j];
            }
        }

        if (!hasZero)
        {

            if (!hasFixedRow)
            {
                tSum = sum;
                hasFixedRow = true;
            }
            else
            {
                if (sum != tSum)
                {
                    cout << "NO\n";
                    return 0;
                }
            }
        }
    }
    cout << "YES\n";
    return 0;
}
