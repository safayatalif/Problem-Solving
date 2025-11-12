#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n ; i ++){
        scanf("%d", &arr[i]);
    }
    int  minimumElement = arr[0];

    for(int i = 0; i < n ; i ++){
        if(minimumElement > arr[i]){
            minimumElement = arr[i];
        } 
    }

    int frequency = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == minimumElement){
            frequency++;
        }
    }


    if(frequency % 2 != 0 ){
        printf("Lucky\n");
    }
    else if(frequency % 2 == 0){
        printf("Unlucky\n");
    }

    
    return 0;
}