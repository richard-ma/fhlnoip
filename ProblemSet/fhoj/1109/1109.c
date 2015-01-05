#include <stdio.h>
#include <stdlib.h>

int main (int argc, char const* argv[])
{
    int m, n, s;

    scanf("%d %d", &m, &n);

    s = m > n ? n : m;
    s++;
    do {
        s--;
    } while (m % s != 0 || n % s != 0);

    printf("%d\n", s);

    return 0;
}
