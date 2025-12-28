#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    vector<long long> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    

    while (q--)
    {
        long long target;
        cin >> target;
        int left = 0, right = n - 1;
        int ans = -1;
        while (left <= right)
        {

            int mid = left + (right - left) / 2;
            // int mid = (left + right) / 2;
            

            if (arr[mid] == target)
            {
                ans = mid;
                break;
            }
            else if (arr[mid] < target)
            {
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }
        if (ans != -1)
        {
            
            cout << "found" << endl;
        }
        else
        {
            cout << "not found" << endl;
        }
    }

    return 0;
}