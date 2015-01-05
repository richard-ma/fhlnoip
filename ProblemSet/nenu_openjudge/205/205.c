#include <stdio.h>

int main(int argc, const char *argv[]) {

    int o, i, j, d[64], c, ans, scale, muti;

    scanf("%d", &o);
    scale = 8;

    for (i = 0; i < 64; i++) {
        d[i] = -1;
    }

    c = 0;
    while (0 != o) {
        d[c++] = o % 10;
        o = o / 10;
    }

    ans = 0;
    for (i = 0; i < c; i++) {
        muti = 1;
        for (j = 0; j < i; j++) {
            muti *= scale;
        }
        ans += muti * d[i];
    }

    printf("%d\n", ans);

    return 0;
}
