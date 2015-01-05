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
    int i, n;

    scanf("%d", &n);

    i = 0;
    while (pow2(i) < n) {
        i++;
    }

    printf("%d\n", i);

    return 0;
}
