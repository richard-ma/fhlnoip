#include <stdio.h>
#include <stdlib.h>

int main (int argc, char const* argv[])
{
    int i, n, t1, t2, ans;

    scanf("%d", &n);

    if (1 == n) ans = 1;
    if (2 == n) ans = 2;
    t1 = 1; t2 = 2;
    for (i = 3; i <= n; i++) {
        ans = t1 + t2;
        t1 = t2;
        t2 = ans;
    }

    printf("%d\n", ans);

    return 0;
}
