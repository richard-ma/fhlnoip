#include <stdio.h>
#include <stdlib.h>

int main (int argc, char const* argv[])
{
    int n1, n2, t1, t2, t, ans, i;

    scanf("%d %d", &n1, &n2);
    t1 = 0;
    for (i = 0; i < n1; i++) {
        scanf("%d", &t);
        t1 += t;
    }

    t2 = 0;
    for (i = 0; i < n2; i++) {
        scanf("%d", &t);
        t2 += t;
    }

    if (t1 > t2) {
        ans = 1;
    } else if (t2 > t1) {
        ans = 2;
    } else {
        ans = 0;
    }

    printf("%d\n", ans);

    return 0;
}
