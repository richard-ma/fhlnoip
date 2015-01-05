#include <stdio.h>
#include <stdlib.h>

int main (int argc, char const* argv[])
{
    int k, n;
    double sn;

    scanf("%d", &k);

    sn = 0;
    n = 0;
    while (sn <= k) {
        n++;
        sn += 1.0/n;
    }

    printf("%d\n", n);

    return 0;
}
