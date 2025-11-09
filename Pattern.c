// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int symbol = 1;
//     int line = 0;

//     for (int i = 1; i < n; i++)
//     {
//         for(int j = 0; j < n-i; j++)
//         {
//             printf(" ");
//         }
//         for (int j = 1; j <= symbol; j++)
//         {
//             if (line % 2 == 0)
//             {
//                 printf("#");
//             }
//             else
//             {
//                 printf("-");
//             }
//         }
//         printf("\n");
//         symbol = symbol + 2;
//         line++;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         for(int j = 0; j < i; j++)
//         {
//             printf(" ");
//         }
//         for (int j = 1; j <= symbol; j++)
//         {
//             if (line % 2 == 0)
//             {
//                 printf("#");
//             }
//             else
//             {
//                 printf("-");
//             }
//         }
//         printf("\n");
//         symbol = symbol - 2;
//         line++;
//     }
//     return 0;
// }

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int symbol = 1;
    int line = n * 2 - 1;
    int space = n - 1;
    for (int i = 1; i <= line; i++)
    {
        for (int s = 0; s < space; s++)
        {
            printf(" ");
        }
        for (int j = 0; j < symbol; j++)
        {
            if (i % 2 != 0)
            {
                printf("#");
            }
            else
            {
                printf("-");
            }
        }
        if (i < n)
        {
            symbol = symbol + 2;
            space--;
        }
        else if (i >= n)
        {
            symbol = symbol - 2;
            space++;
        }
        printf("\n");
    }

    return 0;
}