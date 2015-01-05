#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char const* argv[])
{
    int n, i, j, flg;
    char s[200];

    scanf("%d", &n);

    while (n--) {
        scanf("%s", s);

        flg = 1;
        i = 0; j = strlen(s)-1;
        while (i < j) {
            if (s[i] != s[j]) {
                flg = 0; break;
            }
            i++; j--;
        }

        if (flg) {
            printf("%s\n", s);
        }
    }

    return 0;
}
