#include <stdio.h>
#include <stdlib.h>

int main (int argc, char const* argv[])
{
    int n, i, s, a[10];

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    scanf("%d", &s);

    for (i = 0; i < n; i++) {
        if (a[i] >= s) {
            printf("%d\n", i+1);
        }
    }

    return 0;
}
