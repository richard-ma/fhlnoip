#include <stdio.h>
#include <stdlib.h>

int main (int argc, char const* argv[])
{
    int i;

    for (i = 1; i <= 20; i++) {
        printf("%d\n", i * i);
    }

    return 0;
}
