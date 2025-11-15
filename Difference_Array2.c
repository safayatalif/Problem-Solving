#include <stdlib.h>
#include <stdio.h>

int main() {

    int T;
    scanf("%d", &T);

    while (T--) {

        int n;
        scanf("%d", &n);

        int A[n], B[n];

        for (int i = 0; i < n; i++) {
            scanf("%d", &A[i]);
            B[i] = A[i];
        }

        for (int i = n - 1; i > 0; i--) {

            for (int j = 0; j < i; j++) {

                if (B[j] > B[j + 1]) {

                    int tmp = B[j];

                    B[j] = B[j + 1];

                    B[j + 1] = tmp;
                }
            }
        }

        for (int i = 0; i < n; i++) {
            int d = abs(A[i] - B[i]);
            printf("%d ", d);
        }

        printf("\n");
    }

    return 0;
}
