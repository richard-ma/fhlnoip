#include <stdio.h>
#include <stdlib.h>

int main (int argc, char const* argv[])
{
    int n, i, ans, a[4], t;

    scanf("%d", &n);

    for (i = 0; i < 3; i++) {
        a[i] = n % 10;
        n = n / 10;
    }

    if (a[0] < a[1]) { t = a[0]; a[0] = a[1]; a[1] = t; } 
    if (a[0] < a[2]) { t = a[0]; a[0] = a[2]; a[2] = t; } 
    if (a[1] < a[2]) { t = a[1]; a[1] = a[2]; a[2] = t; } 

    ans = 0;
    for (i = 0; i < 3; i++) {
        ans = ans * 10 + a[i];
    }

    printf("%d\n", ans);

    return 0;
}
