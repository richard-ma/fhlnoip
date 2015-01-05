#include <stdio.h>

int main(int argc, const char *argv[]) {

    int p, e, i, d, cnt, ans;

    cnt = 1;
    while (1) {
        scanf("%d %d %d %d", &p, &e, &i, &d);
        if (-1 == p) {
            break;
        }

        ans = p * 5544 + e * 14421 + i * 1288 - d;

        while (ans > 21252) {
            ans -= 21252;
        }
        while (ans <= 0) {
            ans += 21252;
        }

        printf("Case %d: the next triple peak occurs in %d days.\n", cnt, ans);
        cnt++;
    }

    return 0;
}
