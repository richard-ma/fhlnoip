#include <stdio.h>
#include <stdlib.h>

int main (int argc, char const* argv[])
{
    int i, j;

    for (i = 1; i < 10; i++) {
        for (j = 1; j <= i; j++) {
            if (j != 1) printf(" ");
            printf("%d*%d=%d", i, j, i*j);
        }
        printf("\n");
    }

    return 0;
}
