#include <stdio.h>
void find_missing_number(int N)
{
    while (N--)
    {
        unsigned long long M;
        int A, B, C;
        scanf("%llu %d %d %d", &M, &A, &B, &C);
        unsigned long long multiplication = 1llu *  A * B * C;
        if (multiplication == 0)
        {
            if (M == 0)
            {
                printf("0\n"); 
            }
            else
            {
                printf("-1\n");
            }
        }
        else
        {
            if (M % multiplication == 0)
            {
                printf("%llu\n", M / multiplication);
            }
            else
            {
                printf("-1\n");
            }
        }
    }
}
int main()
{
    int N;
    scanf("%d", &N);
    find_missing_number(N);

    return 0;
}

