#include <stdio.h>
#include <stdlib.h>

int main (int argc, char const* argv[])
{
    int n, s, j;

    scanf("%d %d %d", &n, &s, &j);

    if (s + j > n) {
        printf("double\n");
    } else {
        printf("pass\n");
    }

    return 0;
}
