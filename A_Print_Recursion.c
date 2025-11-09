#include <stdio.h>

void printRecursion(int n){
    if(n==0){
        return;
    }
    printf("I love Recursion\n");
    printRecursion(n-1);
}
int main()
{
    int n;
    scanf("%d", &n);
    printRecursion(n);
    return 0;
}