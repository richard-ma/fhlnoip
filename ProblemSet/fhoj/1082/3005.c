#include <stdio.h>
#include <stdlib.h>

int main (int argc, char const* argv[])
{
    int c, n, t, i, ans;

    scanf("%d", &c); // 计数输出
    while (c--) {
        scanf("%d", &n);

        ans = 0;
        for (i = 0; i < n; i++) {
            scanf("%d", &t);
            ans += t;
        }

        printf("%d\n", ans);
    }

    return 0;
}
