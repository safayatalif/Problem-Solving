#include<bits/stdc++.h>
using namespace std;

int arr[50];

int tetra(int n) {
    if (n == 0) return 0;
    if (n == 1 || n == 2) return 1;
    if (n == 3) return 2;
    
    if (arr[n] != -1)
        return arr[n];
    
    arr[n] = tetra(n-1) + tetra(n-2) + tetra(n-3) + tetra(n-4);
    return arr[n];
}

int main() {
    int n;

    cin >> n;
    memset(arr, -1, sizeof(arr));
    
    cout << tetra(n) << endl;
    
    return 0;
}