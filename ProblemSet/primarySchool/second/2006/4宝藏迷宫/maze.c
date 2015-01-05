#include <stdio.h>
#include <stdlib.h>

#define MAX 64

int main (int argc, char const* argv[])
{
    int m, n, a[MAX][MAX], i, j;

    scanf("%d %d", &m, &n);
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 1; i < n; i++) {
        a[0][i] += a[0][i-1];
    }
    for (i = 1; i < m; i++) {
        a[i][0] += a[i-1][0];
    }

    for (i = 1; i < m; i++) {
        for (j = 1; j < n; j++) {
            a[i][j] += a[i-1][j] > a[i][j-1] ?
                a[i-1][j] : a[i][j-1];
        }
    }

    printf("%d\n", a[m-1][n-1]);

    return 0;
}
