#include <stdio.h>
#include <stdlib.h>

int main (int argc, char const* argv[])
{
    int i, ans;

    ans = 0;
    for (i = 1; i <= 100; i++) {
        ans += i;
    }

    printf("%d\n", ans);

    return 0;
}
