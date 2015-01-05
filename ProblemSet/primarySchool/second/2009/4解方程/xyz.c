#include <stdio.h>
#include <stdlib.h>

int main (int argc, char const* argv[])
{
    int r, s[33], i, j, k, cnt;

    scanf("%d", &r);

    for (i = 0; i < 33; i++) {
        s[i] = i * i;
    }

    cnt = 0;
    for (i = 0; i < 33; i++) {
        for (j = 0; j < 33; j++) {
            for (k = 0; k < 33; k++) {
                if (s[i] + s[j] + s[k] == r) {
                    cnt++;
                }
            }
        }
    }

    printf("%d\n", cnt);

    return 0;
}
