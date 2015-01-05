#include <stdio.h>
#include <stdlib.h>

int main (int argc, char const* argv[])
{
    int a, b, t, lcm;

    scanf("%d %d", &a, &b);
    if (a > b ) {
        t = a; a = b; b = t;
    }

    lcm = a;
    while (lcm % b != 0) {
        lcm += a;
    }

    printf("%d\n", lcm);

    return 0;
}
