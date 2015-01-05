#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char const* argv[])
{
    int n, flg, len, i;
    char buf[128];

    scanf("%d", &n);
    while (n--) {
        scanf("%s", buf);
        len = strlen(buf);

        flg = 1;
        for (i = 0; i < len / 2 + 1; i++) {
            if (buf[i] != buf[len-1-i]) {
                flg = 0;
                break;
            }
        }

        if (flg) {
            printf("yes\n");
        } else {
            printf("no\n");
        }
    }

    return 0;
}
