#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    cin >> s;
    int arr[26] = {0};
    for (char c : s)
    {
        // cout << c << " ";
        arr[c - 'a']++;
    }
    bool found = false;
    for (char c : s)
    {
        if (arr[c - 'a'] == 1)
        {
            cout << c << endl;
            found = true;
            break;
        }
    }
    if (!found)
    {
        cout << -1 << endl;
    }
    

    return 0;
}