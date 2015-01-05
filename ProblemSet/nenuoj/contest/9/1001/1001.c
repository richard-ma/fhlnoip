#include <stdio.h>
#include <stdio.h>

int main(int argc, const char *argv[]) {
    int n, i, ans, h, t, o;

    while (EOF != scanf("%d", &n)) {
        if (0 == n) {
            break;
        }

        for (i = 100; i <= n; i++) {
            h = (i / 100) % 10;
            t = (i /  10) % 10;
            o = (i /   1) % 10;
            ans = h*h*h + t*t*t + o*o*o;
            if (i == ans) {
                printf("%d\n", ans);
            }
        }

    }

    return 0;
}
