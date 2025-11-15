#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int gap = n + 10;     
    int stars = 1;      

    while (gap > 0) {

        int i = 0;
        while (i < gap / 2) {
            printf(" ");
            i++;
        }

        i = 0;
        while (i < stars) {
            printf("*");
            i++;
        }

        printf("\n");

        stars += 2;   
        gap -= 2;    
    }

    int row = 0;
    while (row < 5) {

        int i = 0;
        while (i < 5) {
            printf(" ");
            i++;
        }

        i = 0;
        while (i < n) {
            printf("*");
            i++;
        }

        printf("\n");
        row++;
    }

    return 0;
}
