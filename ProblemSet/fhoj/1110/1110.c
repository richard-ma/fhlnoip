#include <stdio.h>
#include <stdlib.h>

int main (int argc, char const* argv[])
{
    int x, yes;

    x = 0;
    do {
        yes = 1; x += 7;

        if (x % 2 != 1) yes = 0;
        if (x % 3 != 1) yes = 0;
        if (x % 4 != 1) yes = 0;
        if (x % 5 != 1) yes = 0;
        if (x % 6 != 1) yes = 0;

    } while (!yes);

    printf("%d\n", x);

    return 0;
}
