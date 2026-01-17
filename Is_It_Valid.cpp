#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        queue<char> q;
        for (char c : s)
        {
            if (q.empty())
            {
                q.push(c);
            }
            else
            {
                if (q.front() == c)
                {
                    q.push(c);
                }
                else
                {
                    q.pop();
                }
            }
        }
        if (q.empty())
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