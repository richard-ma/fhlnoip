#include <stdio.h>
#include <stdlib.h>

int main (int argc, char const* argv[])
{
    int x, i, a[10];

    for (i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }
    scanf("%d", &x);

    printf("%d\n", a[x-1]);

    return 0;
}
