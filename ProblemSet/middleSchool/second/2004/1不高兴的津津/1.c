#include <stdio.h>
#include <stdlib.h>

int main (int argc, char const* argv[])
{
    int max, ans, i, a, b, s;

    max = 0; ans = 0;
    for (i = 0; i < 7; i++) {
        scanf("%d %d", &a, &b);
        s = a + b;
        if (max < s) {
            max = s;
            ans = i + 1;
        }
    }

    printf("%d\n", ans);

    return 0;
}
