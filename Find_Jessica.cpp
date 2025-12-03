#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    getline(cin, S);
    stringstream ss(S);
    string word;
    int found = 0;
    while (ss >> word) {
        // cout << word << endl; 

        if (word == "Jessica") {
            cout << "YES" << endl;
            found = 1;
            return 0;
        }

    }
    if (!found) {
        cout << "NO" << endl;
    }

    return 0;
}