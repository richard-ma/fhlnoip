#include <stdio.h>
#include <stdlib.h>

int main (int argc, char const* argv[])
{
    int x, a, sum;

    scanf("%d", &x);

    sum = 0;
    while (x > 0) {
        a = x % 10;
        x = x / 10;
        sum += a;
    }

    if (sum % 7 == 0) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
