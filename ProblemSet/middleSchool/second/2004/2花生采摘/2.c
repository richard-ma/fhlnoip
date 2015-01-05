#include <stdio.h>
#include <stdlib.h>

#define MAX 400

int main (int argc, char const* argv[])
{
    int val[MAX], row[MAX], col[MAX];
    int m, n, k, idx, i, j, ans, t, pos_row, pos_col;

    scanf("%d %d %d", &m, &n, &k);
    idx = 0;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &t);
            if (t > 0) {
                val[idx] = t;
                row[idx] = i;
                col[idx] = j;
                idx++;
            }
        }
    }

    /* sort */
    for (i = 0; i < idx - 1; i++) {
        for (j = i + 1; j < idx; j++) {
            if (val[j] > val[i]) {
                t = val[j]; val[j] = val[i]; val[i] = t;
                t = row[j]; row[j] = row[i]; row[i] = t;
                t = col[j]; col[j] = col[i]; col[i] = t;
            }
        }
    }

    /* get ans */
    k -= 2;
    t = 0; ans = 0;
    pos_row = row[0]; pos_col = col[0];
    while (k && t < idx) {
        ans += val[t];
    }

    return 0;
}
