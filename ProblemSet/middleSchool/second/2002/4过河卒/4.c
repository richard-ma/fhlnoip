#include <stdio.h>
#include <stdlib.h>

long long ma_x, ma_y;

long long check(long long x, long long y)
{
    long long a = ma_x - x;
    long long b = ma_y - y;

    if ((a * a + b * b == 5 && x != ma_x && y != ma_y) ||
            (x == ma_x && y == ma_y)) {
        return 1;
    }

    return 0;
}

int main (int argc, char const* argv[])
{
    long long m, n, i, j, map[21][21], val;

    scanf("%lld %lld %lld %lld", &m, &n, &ma_x, &ma_y);

    val = 1;
    for (i = 0; i <= m; i++) {
        if (check(i, 0)) {
            val = 0;
        }
        map[i][0] = val;
    }

    val = 1;
    for (i = 0; i <= n; i++) {
        if (check(0, i)) {
            val = 0;
        }
        map[0][i] = val;
    }

    for (i = 1; i <= m; i++) {
        for (j = 1; j <= n; j++) {
            if (check(i, j)) {
                map[i][j] = 0;
            } else {
                map[i][j] = map[i-1][j] + map[i][j-1];
            }
        }
    }

    /* debug
    for (i = 0; i <= m; i++) {
        for (j = 0; j <= n; j++) {
            printf("%4lld ", map[i][j]);
        }
        printf("\n");
    }
    */

    printf("%lld\n", map[m][n]);

    return 0;
}
