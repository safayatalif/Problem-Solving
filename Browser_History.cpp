#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<string> myList;
    string s;

    while (cin >> s && s != "end")
    {
        myList.push_back(s);
    }

    int t;
    cin >> t;
    auto current = myList.end();
    while (t--)
    {
        string q, c;
        cin >> q;
        if (q == "visit")
        {
            cin >> c;
            auto it = find(myList.begin(), myList.end(), c);

            if (it != myList.end())
            {
                current = it;
                cout << *it << "\n";
            }
            else
            {
                cout << "Not Available\n";
            }
        }
        else if (q == "prev")
        {
            if (current == myList.begin())
            {
                cout << "Not Available\n";
            }
            else
            {
                --current;
                cout << *current << "\n";
            }
        }
        else if (q == "next")
        {
            auto nextIt = current;
            ++nextIt;
            if (nextIt == myList.end())
            {
                cout << "Not Available\n";
            }
            else
            {
                current = nextIt;
                cout << *current << "\n";
            }
        }
    }

    

    return 0;
}