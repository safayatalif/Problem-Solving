#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int loop = n + 10;
    int star = 1;

    while (loop > 0)
    {
        for (int j = 0; j < (loop / 2); j++)
        {
            printf(" ");
        }
        for (int i = 0; i < star; i++)
        {
            printf("*");
        }
        printf("\n");
        star += 2;
        loop -= 2;
    }

    for (int j = 0; j < 5; j++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf(" ");
        }
        for (int i = 0; i < n; i++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}