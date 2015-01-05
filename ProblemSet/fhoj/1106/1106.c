#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (int argc, char const* argv[])
{
    int n, flg, i;

    scanf("%d", &n);

    flg = 1;
    for (i = 2; i <= (int)(sqrt(n)); i++) {
        if (n % i == 0) {
            flg = 0; break;
        }
    }

    if (flg) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
