#include <stdio.h>
#include <stdlib.h>

int main (int argc, char const* argv[])
{
    int a, b, n;

    scanf("%d %d", &a, &b);

    while (a % b != 0) {
        n = a;
        a = b;
        b = n % b;
    }

    printf("%d\n", b);

    return 0;
}
