#include "stdio.h"
#include "stdlib.h"

int main(int argc, char *argv[])
{
    int n, m, s, ans;

    scanf("%d %d", &n, &m);

    s = n + m - 1;

    ans = (1+(s-1)) * (s-1) / 2;

    if (s % 2 != 0) {
        ans += m;
    } else {
        ans += n;
    }

    printf("%d\n", ans);

    return 0;
}
