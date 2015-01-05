#include <stdio.h>

int main (int argc, char const* argv[])
{
    int a, b, s, i, n, t;

    scanf("%d", &n);

    while (n--) {
        a = 1; b = 1;
        scanf("%d", &s);

        for (i = 0; i < s - 2; i++) {
            a += b;
            t = b; b = a; a = t;
        }
    
        printf("%d\n", b);
    }

    return 0;
}
