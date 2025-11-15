#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int a[n][m];
    for (int r = 0; r < n; r++) {
        for (int c = 0; c < m; c++) {
            scanf("%d", &a[r][c]);
        }
    }

    if (n != m) {
        printf("NO\n");
        return 0;
    }

    int is_jadu = 1;

    for (int r = 0; r < n && is_jadu; r++) {
        for (int c = 0; c < m; c++) {

            int is_main_diag = (r == c);
            int is_anti_diag = (r + c == n - 1);

            if (is_main_diag || is_anti_diag) {
                if (a[r][c] != 1) {
                    is_jadu = 0;
                    break;
                }
            } else {
                if (a[r][c] != 0) {
                    is_jadu = 0;
                    break;
                }
            }
        }
    }

    printf(is_jadu ? "YES\n" : "NO\n");
    return 0;
}
