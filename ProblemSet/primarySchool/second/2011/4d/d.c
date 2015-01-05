#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char buf[128];

int check(int s, int e)
{
    while (s < e) {
        if (buf[s] != buf[e]) {
            return 0;
        } else {
            s++; e--;
        }
    }

    return 1;
}

int main (int argc, char const* argv[])
{
    int len, i, ans, ret;

    scanf("%s", buf);

    ans = len = strlen(buf);
    while (1) {
        ret = 0;
        for (i = 0; i + ans <= len; i++) {
            ret = check(i, i+ans-1);
            if (ret) break;
        }
        if (ret) break;
        ans--;
    }

    printf("%d\n", ans);

    return 0;
}
