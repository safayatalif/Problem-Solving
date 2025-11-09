#include <stdio.h>

void recursion(int n){
    printf("%d", n);
    if(n==1){
        return;
    }
    printf(" ");
    recursion(n-1);

}
int main()
{
    int n;
    scanf("%d", &n);
    recursion(n);
    return 0;
}