#include <stdio.h>

int recursion(int arr[], int n){
    if(n == 0){
        return arr[n];
    }
    int max = recursion(arr , n-1);
    if(max < arr[n-1]){
        return arr[n-1];
    }
    return max;
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    int result = recursion(arr , n);
    printf("%d\n", result);
    return 0;
}