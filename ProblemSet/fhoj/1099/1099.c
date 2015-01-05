#include <stdio.h>
#include <stdlib.h>

int main (int argc, char const* argv[])
{
    int i;

    for (i = 30; i <= 60; i++) {
        if (i % 2 == 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}
