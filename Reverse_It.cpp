#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string nm;
    int cls;
    char s;
    int id;
};

int main()
{
    int T;
    cin >> T;
    Student arr[T];
    for (int i = 0; i < T; i++)
    {
        cin >> arr[i].nm >> arr[i].cls >> arr[i].s >> arr[i].id;
    }

    int left = 0, right = T - 1;
    while (left < right)
    {
        swap(arr[left].s, arr[right].s);
        left++;
        right--;
    }

    for (int i = 0; i < T; i++)
    {
        cout << arr[i].nm << " " << arr[i].cls << " " << arr[i].s << " " << arr[i].id << endl;
    }

    return 0;
}