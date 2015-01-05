#include <stdio.h>
#include <stdlib.h>

int main (int argc, char const* argv[])
{
    long long n, f[500], i;

    scanf("%lld", &n);

    f[0] = 1;
    f[1] = 1;
    for (i = 2; i < n+1; i++) {
        f[i] = f[i-1] * (4*i - 2) / (i+1);
    }

    printf("%lld\n", f[n]);

    return 0;
}
