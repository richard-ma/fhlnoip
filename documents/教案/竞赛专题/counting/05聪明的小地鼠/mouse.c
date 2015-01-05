#include <stdio.h>
#include <stdlib.h>

int main (int argc, char const* argv[])
{
    int n, i, j;
    int a[5001];
    for (i = 1; i <= 5000; i++) {
        a[i] = 1;
    }

    scanf("%d", &n);

    a[1] = 0;
    for (i = 2; i <= n; i++) {
        if (a[i] == 0) {
            continue;
        } else {
            for (j = i * 2; j <= n; j += i) {
                a[j] = 0;
            }
        }
    }

    for (i = 1; i <= n; i++) {
        if (a[i] == 1) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
