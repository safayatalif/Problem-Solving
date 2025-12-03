#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string S, X, result;
        cin >> S >> X;
        int i = 0;

        while (i < S.size())
        {
            if (S.substr(i, X.size()) == X)
            {
                result += '#';
                i += X.size();
            }
            else
            {
                result += S[i];
                i++;
            }

            // cout << i << " " << X.size() <<  " "<< S.substr(i, X.size()) << endl;
        }


        cout << result << endl;
    }

    return 0;
}