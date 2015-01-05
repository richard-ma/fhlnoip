#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char const* argv[])
{
    int n, len, flg, i;
    char origin[5000], fact[5000];

    scanf("%d\n", &n);
    while (n--) {
        gets(origin);
        gets(fact);

        len = strlen(fact);
        // gets() will get the last return ASCII(13), remove it!!
        if (fact[len-1] == 13) {
            len--;
        }

        flg = 1;
        for (i = 0; i < len; i++) {
            if (origin[i] != fact[i] &&
                (i == 0 || i == len-1 ||
                ((i > 0) && (fact[i-1] == ' ')) || 
                ((i < len-1) && (fact[i+1] == ' ')))) {
                flg = 0;
                break;
            }
        }

        if (flg) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }

    return 0;
}
