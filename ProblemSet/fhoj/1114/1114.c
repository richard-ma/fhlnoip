#include <stdio.h>
#include <stdlib.h>

int main (int argc, char const* argv[])
{
    long a, b, i, ans;

    a = 0;
    b = 1;

    for (i = 3; i < 31; i++) {
        ans = a + b;
        a = b;
        b = ans;
    }

    printf("%ld\n", ans);

    return 0;
}
