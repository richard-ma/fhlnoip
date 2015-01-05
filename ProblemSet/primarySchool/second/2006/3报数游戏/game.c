#include <stdio.h>
#include <stdlib.h>

int pow2 (int k)
{
    int n, i;
    
    n = 1;
    for (i = 0; i < k; i++) {
        n *= 2;
    }

    return n;
}

int main (int argc, char const* argv[])
{
    int n, i, ans, s;

    scanf("%d", &n);

    i = 0;
    while (pow2(i) <= n) {
        i++;
    }

    s = n - pow2(i - 1);

    ans = 1;
    for (i = 1; i <= s; i++) {
        ans += 2;
    }

    printf("%d\n", ans);

    return 0;
}
