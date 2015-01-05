#include <stdio.h>
#include <stdlib.h>

int main (int argc, char const* argv[])
{
    int a[3][3];
    int i, j, sum, ans, p_y, p_x;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
            if (a[i][j] == -1) {
                p_y = i; p_x = j;
            }
        }
    }

    if (p_y == 0) {
        sum = a[1][0] + a[1][1] + a[1][2];
    } else {
        sum = a[0][0] + a[0][1] + a[0][2];
    }

    ans = sum - (a[p_y][0] + a[p_y][1] + a[p_y][2]) - 1;

    printf("%d\n", ans);

    return 0;
}
