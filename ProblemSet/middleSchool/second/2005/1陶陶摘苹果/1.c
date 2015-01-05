#include <stdio.h>
#include <stdlib.h>

int main (int argc, char const* argv[])
{
    int a[10], t, ans, i;

    for (i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }
    scanf("%d", &t); t += 30;

    ans = 0;
    for (i = 0; i < 10; i++) {
        if (a[i] <= t) {
            ans++;
        }
    }

    printf("%d\n", ans);

    return 0;
}
