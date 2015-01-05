#include <stdio.h>

int main(int argc, const char *argv[]) {

    int n, i, j, a[1000][1000], flg, ans, switch_flg;
    
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        flg = 0;
        for (j = 1; j < n; j++) {
            if (0 == a[i][j] && 0 == a[i][j-1] || 2 == a[i][j-1]) {
                a[i][j] = 2;
            }

            if (255 == a[i][j] && 0 == a[i][j-1]) {
                a[i][j] = 1; flg = 1;
            }

            if (1 == flg && 255 == a[i][j]) {
                a[i][j] = 1;
            }

            if (1 == a[i][j-1] && 0 == a[i][j]) {
                flg = 0; a[i][j] = 2;
            }
        }
    }

    ans = 0;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (1 == a[i][j]) {
                ans++;
            }
        }
    }

    printf("%d\n", ans);

    return 0;
}
