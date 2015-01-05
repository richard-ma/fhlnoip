#include <stdio.h>
#include <stdlib.h>

int main (int argc, char const* argv[])
{
    int i, n, ans;

    scanf("%d", &n);

    ans = 0;
    for (i = n-1; i >= 1; i--) {
        ans += i;
    }

    printf("%d\n", ans);

    return 0;
}
