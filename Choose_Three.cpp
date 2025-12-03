#include <bits/stdc++.h>
using namespace std;

bool sum_tree(int arr[], int N, int S)
{

    if (N < 3)
    {
        return false;
    }

    for (int i = 0; i < N - 2; i++)
    {
        for (int j = i + 1; j < N - 1; j++)
        {
            for (int k = j + 1; k < N; k++)
            {
                if (arr[i] + arr[j] + arr[k] == S)
                {
                    return true;
                }
            }
        }
    }
    return false;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, S;
        cin >> N >> S;
        int arr[N];
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }
        bool result = sum_tree(arr, N, S);
        if (result)
            cout << "YES";
        else
            cout << "NO";

        cout << endl;
    }

    return 0;
}