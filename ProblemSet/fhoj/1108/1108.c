#include <stdio.h>
#include <stdlib.h>

int main (int argc, char const* argv[])
{
    int i;

    for (i = 100; i <= 200; i++) {
        if (i % 2 == 1) {
            printf("%d\n", i);
        }
    }

    return 0;
}
