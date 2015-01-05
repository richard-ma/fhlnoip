#include <stdio.h>
#include <stdlib.h>

int main (int argc, char const* argv[])
{
    int m, n, i, j;
    int a[32][32];

    scanf("%d %d", &m, &n);

    for (i = 0; i < m; i++) {
        a[i][0] = 1;
    }

    for (i = 0; i < n; i++) {
        a[0][i] = 1;
    }

    for (i = 1; i < m; i++) {
        for (j = 1; j < n; j++) {
            a[i][j] = a[i-1][j] + a[i][j-1];
        }
    }

    printf("%d\n", a[m-1][n-1]);

    return 0;
}
