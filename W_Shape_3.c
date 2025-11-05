#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int star = 1;
    int spece = n - 1;
    for (int i = 1; i <= n; i++) { 
        for (int s = spece; s >= 1; s--) {
            printf(" ");
        }
        for (int j = 1; j <= star; j++) {
            printf("*");
        }
        printf("\n");
        star = star + 2;
        spece--;
    }
    spece = 0;
    for (int i = 1; i <= n; i++) { 
        for (int s = spece; s >= 1; s--) {
            printf(" ");
        }
        for (int j = star-2; j >= 1; j--) {
            printf("*");
        }
        printf("\n");
        star = star - 2;
        spece++;
    }

    
    return 0;
}