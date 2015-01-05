#include <stdio.h>
#include <stdlib.h>

/** @def MAX 8
 * Description
 */
#ifndef MAX
#define MAX 8
#endif /* END OF MAX */

int queen[MAX], sum, flg;

int show (void)
{

    int i;

    if (sum == 0) {
        for (i = 0; i < MAX; i++) {
            printf("%d", queen[i]+1);
        }
        printf("\n");
        flg = 1;
    } else {
        sum--;
    }

    return 0;
}

int check (int n)
{

    int i;
    for (i = 0; i < n; i++) {
        if (queen[i] == queen[n] ||
                abs(queen[i] - queen[n]) == (n - i)) {
            return 1;
        }
    }

    return 0;
}

int put (int n)
{

    int i;
    for (i = 0; i < MAX; i++) {
        if (flg == 1) {
            break;
        }
        queen[n] = i;

        if (!check(n)) {
            if (n == MAX - 1) {
                show(); 
            } else {
                put(n+1);
            }
        }
    }

    return 1;
}

int main (int argc, char const* argv[])
{

    int T;

    scanf("%d", &T);
    while (T--) {
        flg = 0;
        scanf("%d", &sum); sum--;
        put(0);
    }

    return 0;
}
