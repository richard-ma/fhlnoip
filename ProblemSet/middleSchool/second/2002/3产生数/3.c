#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char const* argv[])
{
    int cnt[10];
    int i, k, s, d, ans;
    char buf[16];

    for (i = 0; i < 10; i++) {
        cnt[i] = 1;
    }

    scanf("%s %d", buf, &k);
    for (i = 0; i < k; i++) {
        scanf("%d %d", &s, &d);

        cnt[s]++;
    }

    ans = 1;
    for (i = 0; i < strlen(buf); i++) {
        ans *= cnt[buf[i] - '0'];
    }

    printf("%d\n", ans);

    return 0;
}
