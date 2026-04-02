#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> h(n);
        for (int i = 0; i < n; i++)
            cin >> h[i];

        int first = -1, second = -1; 

        for (int i = 0; i < n; i++)
        {
            if (first == -1 || h[i] > h[first])
            {
                second = first;
                first = i;
            }
            else if (second == -1 || h[i] > h[second])
            {
                second = i;
            }
        }

        if (first > second) swap(first, second);
        cout << first << " " << second << "\n";
    }

    return 0;
}