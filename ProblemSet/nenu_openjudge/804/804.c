#include <stdio.h>
#include <stdlib.h>

int split_int (int m, int n)
{

    if (m == 0 || n == 1) {
        return 1;
    }
    
    if (m < 0) {
        return 0;
    }

    return split_int(m - n, n) + split_int(m, n - 1);
}

int main (int argc, char const* argv[])
{
    int T, m, n;

    scanf("%d", &T);

    while (T--) {
        scanf("%d %d", &m, &n);
        printf("%d\n", split_int(m, n));
    }

    return 0;
}
