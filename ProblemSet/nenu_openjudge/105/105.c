#include <stdio.h>

int main(int argc, const char *argv[]) {

    int cc[] = {0, 5, 3, 1};
    int a, b, c, d, e, f, aa, bb, ans;
    
    while (scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f)) {
        if (0 == a && 0 == b && 0 == c && 0 == d && 0 == e && 0 == f) break;

        ans = d + e + f + (c+3)/4;
        bb = 5 * d + cc[c%4];

        if (b > bb) {
            ans += (b - bb + 8) / 9;
        }

        aa = ans * 36 - f * 36 - e * 25 - d * 16 - c * 9 - b * 4;
        if (a > aa) {
            ans += (a - aa + 35) / 36;
        }

        printf("%d\n", ans);
    }

    return 0;
}
