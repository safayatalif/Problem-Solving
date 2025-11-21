#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s[100001];
    while (cin.getline(s, 100001))
    {
        int sLen = strlen(s);
        sort(s, s + sLen);
        for (int i = 0; i < sLen; i++)
        {
            if (s[i] != ' ')
            {
                cout << s[i];
            }
        }
        cout << endl;
    }

    return 0;
}