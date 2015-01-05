#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[]) {
    
    int n, i, ans, t1, t2, p;
    p = 2008;

    while (EOF !=scanf("%d", &n)) {
        t1 = 1; t2 = 2;

        if (n < 3) {
            printf("%d\n", n);
            continue;
        }

        for (i = 3; i <= n; i++) {
            ans = ((t1 % p) * (t2 % p)) % p;
            t1 = t2; t2 = ans;
        }

        printf("%d\n", ans);
    }

    return 0;
}
