#include <stdio.h>
#include <stdlib.h>

int main (int argc, char const* argv[])
{
    int n, i, p, c, ans;

    scanf("%d", &n);

    ans = 0;
    for (i = 0; i < n; i++) {
        scanf("%d %d", &p, &c);

        ans += p * c;
    }

    printf("%d\n", ans);

    return 0;
}
