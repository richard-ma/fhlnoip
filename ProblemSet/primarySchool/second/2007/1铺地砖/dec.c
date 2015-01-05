#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char const* argv[])
{
    int m, n, i, j, rcnt, vcnt, flg, map[50][50];
    char buf[64];

    scanf("%d %d", &m, &n);
    for (i = 0; i < m; i++) {
        scanf("%s", buf);   
        for (j = 0; j < n; j++) {
            map[i][j] = buf[j];
        }
    }

    rcnt = 0;
    for (i = 0; i < m; i++) {
        flg = 0;
        for (j = 0; j < n; j++) {
            if ('-' == map[i][j]) {
                flg = 1;
            } else {
                if (flg == 1) {
                    rcnt++;
                    flg = 0;
                }
            }
        }

        if (flg == 1) {
            rcnt++;
        }
    }

    vcnt = 0;
    for (i = 0; i < n; i++) {
        flg = 0;
        for (j = 0; j < m; j++) {
            if ('|' == map[j][i]) {
                flg = 1;
            } else {
                if (flg == 1) {
                    vcnt++;
                    flg = 0;
                }
            }
        }

        if (flg == 1) {
            vcnt++;
        }
    }

    printf("%d %d\n", rcnt, vcnt);

    return 0;
}
