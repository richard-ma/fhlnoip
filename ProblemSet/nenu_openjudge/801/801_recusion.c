#include <stdio.h>
#include <stdlib.h>

/** Biref Description
 * Description
 * @param 
 * @see 
 * @return 
 */

int fib (int cnt)
{

    if (cnt < 3) {
        return 1;
    } else {
        return fib(cnt - 1) + fib(cnt - 2);
    }
}

int main (int argc, char const* argv[])
{

    int cnt, n;

    scanf("%d", &cnt);

    while (cnt--) {
        scanf("%d", &n);

        printf("%d\n", fib(n));
    }

    return 0;
}
