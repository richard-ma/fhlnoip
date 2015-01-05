#include <stdio.h>
#include <stdlib.h>

int main (int argc, char const* argv[])
{
    int i, j;

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 9; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
