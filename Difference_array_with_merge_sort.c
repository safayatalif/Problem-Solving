#include <stdio.h>
#include <stdlib.h>
void merge(int arr[], int left, int mid, int right){
    int i , j, k;
    int n1 = mid - left + 1;
    int n2 = right - mid;
    int L[n1], R[n2];
    for(i = 0; i < n1; i++){
        L[i] = arr[left + i];
    }
    for(j = 0; j < n2; j++){
        R[j] = arr[mid + 1 + j];
    }
    i = 0;
    j = 0;
    k = left;
    while(i < n1 && j < n2){
        if(L[i] <= R[j]){
            arr[k] = L[i];
            i++;
        }
        else{
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while(i < n1){
        arr[k] = L[i];
        i++;
        k++;
    }
    while(j < n2){
        arr[k] = R[j];
        j++;
        k++;
    }

    
}

void mergeSort(int arr[], int left, int right){
    
    if(left < right){
    int mid = left + (right - left) / 2;
    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);
    merge(arr, left, mid, right);
    
    }
}

int main()
{
    int T;
    scanf("%d", &T);
    for (int t = 0; t < T; t++)
    {
        int N;
        scanf("%d", &N);
        int A[N];
        int B[N];
        int C[N];
        for (int i = 0; i < N; i++)
        {
            scanf("%d", &A[i]);
            B[i] = A[i];
        }
        // ascending order using merge sort
        mergeSort(B, 0, N - 1);

        // for (int i = 0; i < N; i++)
        // {
        //     for (int j = 0; j < N - i - 1; j++)
        //     {
        //         if (B[j] > B[j + 1])
        //         {
        //             int temp = B[j];
        //             B[j] = B[j + 1];
        //             B[j + 1] = temp;
        //         }
        //     }
        // }
        for (int i = 0; i < N; i++)
        {
            C[i] = abs(A[i] - B[i]);
            printf("%d ", C[i]);
        }
        printf("\n");
    }

    return 0;
}