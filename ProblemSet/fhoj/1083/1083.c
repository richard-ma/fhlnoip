#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char const* argv[])
{
    int i, j, flg;
    char buf[256];

    scanf("%s", buf);

    flg = 1;
    i = 0; j = strlen(buf)-1;
    while (i < j) {
        if (buf[i] != buf[j]) {
            flg = 0; break;
        }

        i++; j--;
    }

    if (flg) {
        printf("yes\n");
    } else {
        printf("no\n");
    }

    return 0;
}
