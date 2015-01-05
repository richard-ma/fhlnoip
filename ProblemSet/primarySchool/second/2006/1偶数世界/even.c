#include <stdio.h>
#include <stdlib.h>

int main (int argc, char const* argv[])
{
    int i, j, k, n, t, a[16], ans, flg;

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    ans = -1;
    for (i = 0; i < n-1; i++) {
        for (j = i+1; j < n; j++) {
            t = a[i] + a[j];
            flg = 1;
            for (k = 2; k < t; k += 2) {
                if (t % (k * 2) == 0) {
                    flg = 0;
                    break;
                }
            }
            if (flg && t > ans) {
                ans = t;
            }
        }
    }

    printf("%d\n", ans);

    return 0;
}
