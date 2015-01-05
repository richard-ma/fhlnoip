#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[]) {
    
    int l, m, s, e, i, j, a[10001], ans;

    scanf("%d %d", &l, &m);

    for (i = 0; i <= l; i++) {
        a[i] = 1;
    }

    for (i = 0; i < m; i++) {
        scanf("%d %d", &s, &e);
        for (j = s; j <= e; j++) {
            a[j] = 0;
        }
    }

    ans = 0;
    for (i = 0; i <= l; i++) {
        ans += a[i];
    }

    printf("%d\n", ans);

    return 0;
}
