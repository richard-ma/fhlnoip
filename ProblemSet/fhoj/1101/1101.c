#include <stdio.h>
#include <stdlib.h>

int main (int argc, char const* argv[])
{
    int i, a, b, x, y;

    for (i = 10; i < 100; i++) {
        x = i;
        a = x / 10;
        b = x % 10;

        y = b * 10 + a;
        if (y - x == 36) {
            printf("%d\n", x);
        }
    }

    return 0;
}
