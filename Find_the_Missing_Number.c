#include <stdio.h>
void find_missing_number(int arr[], unsigned long long m)
{
    unsigned long long int multiplication = 1llu;
    for (int i = 0; i < 3; i++)
    {
        multiplication = multiplication * arr[i];
    }

    if (multiplication == 0)
    {
        if (m == 0)
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
        if (m % multiplication == 0)
        {
            printf("%llu\n", m / multiplication);
        }
        else
        {
            printf("-1\n");
        }
    }

}
int main()
{
    int n;
    unsigned long long int m;
    scanf("%d", &n);
    int arr[3];
    for (int i = 0; i < n; i++)
    {
        scanf("%llu ", &m);
        for (int i = 0; i < 3; i++)
        {
            scanf("%d ", &arr[i]);
        }
        find_missing_number(arr, m);
    }

    return 0;
}