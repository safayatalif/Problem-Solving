#include <stdio.h>
#include <stdbool.h>
int main()
{
    int N, M;
    scanf("%d %d", &N, &M);
    int arr[N][M];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    bool jadu_matrix = true;

    if (N != M)
    {
        jadu_matrix = false;
    }
    else
    {
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < M; j++)
            {
                if (i == j || (i + j) == (N - 1))
                {
                    if (arr[i][j] != 1)
                    {
                        jadu_matrix = false;
                        break;
                    }
                }
                else
                {
                    if (arr[i][j] != 0)
                    {
                        jadu_matrix = false;
                        break;
                    }
                }
            }
        }
    }

    if (jadu_matrix)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}