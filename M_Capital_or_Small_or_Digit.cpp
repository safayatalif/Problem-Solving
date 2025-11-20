#include <bits/stdc++.h>
using namespace std;

int main() {
    char X;
    cin >> X;
    
    if('0' <= X && X <= '9'){
        cout << "IS DIGIT" << endl;
    }
    else{
        cout << "ALPHA" << endl;
        if('A' <= X && X <= 'Z'){
            cout << "IS CAPITAL" << endl;
        }
        else if('a' <= X && X <= 'z'){
            cout << "IS SMALL" << endl;
        }
    }
    return 0;
}