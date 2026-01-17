#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    long long m;
    cin >> s >> m;
    long long length = 0;
    for (int i = 0; i < s.size(); i++) {
        if (isalpha(s[i])) {
            long long repet = 1;

            if (i + 1 < s.size() && isdigit(s[i + 1])) {
                repet = s[i + 1] - '0';
                i++;
            }

            if (length + repet >= m) {
                cout << s[i - (repet > 1)] << endl;
                return 0;
            }

            length += repet;
        }
    }

    return 0;
}
