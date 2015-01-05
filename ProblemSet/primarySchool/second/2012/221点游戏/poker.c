#include <stdio.h>
#include <stdlib.h>

int main (int argc, char const* argv[])
{
    int a, b, c, m, n, i, t;

    scanf("%d", &c);
    while (c--) {
        scanf("%d %d", &m, &n);

        a = 0;
        for (i = 0; i < m; i++) {
            scanf("%d", &t);
            a += t;
        }
        if (a > 21) a = 0;

        b = 0;
        for (i = 0; i < n; i++) {
            scanf("%d", &t);    
            b += t;
        }
        if (b > 21) b = 0;

        if (a > b) {
            printf("Win\n");
        } else if (a == b) {
            printf("Draw\n");
        } else {
            printf("Lose\n");
        }
    }

    return 0;
}
