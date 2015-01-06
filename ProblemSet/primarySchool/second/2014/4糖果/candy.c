#include "stdio.h"
#include "stdlib.h"

int main(int argc, char *argv[])
{
    int T, n, a[1001], i, j, current, next, flg;

    scanf("%d %d", &T, &n);
    while (T--) {
        for (i = 0; i < n; ++i) {
            scanf("%d", &a[i]);
        }

        flg = 1;
        for (i = 0; i < n-1; ++i) {
            current = i;
            next = i + 1;
            for (j = i+2; j < n; ++j) {
                if (a[j] > a[next] && a[j] < a[current]) {
                    flg = 0; break;
                }
            }
            if (flg == 0) {
                printf("No\n"); break;
            }
        }

        if (flg == 1) {
            printf("Yes\n");
        }
    }

    return 0;
}
