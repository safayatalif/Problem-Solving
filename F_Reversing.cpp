#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n ; i++){
        for(int j = 0; j < i; j++){
            swap(arr[i], arr[j]);
        }
    }
    cout << "Hello, World!" << endl;

    return 0;
}