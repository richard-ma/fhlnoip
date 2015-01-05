#include <stdio.h>
#include <stdlib.h>

int main (int argc, char const* argv[])
{
    int i, x, a, b;

    for (i = 32; i < 100; i++) {
        x = i * i;
        a = x % 100;
        b = x / 100;

        if (a + b == i) {
            printf("%d\n", x);
        }
    }

    return 0;
}
