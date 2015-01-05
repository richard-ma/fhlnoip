#include <stdio.h>

int main(int argc, const char *argv[]) {
    
    int l, m, i, s, e, ans, array[10001];

    scanf("%d %d", &l, &m);

    for (i = 0; i <= l; i++) {
        array[i] = 1;
    }

    while (m--) {
        scanf("%d %d", &s, &e);

        for (i = s; i <= e; i++) {
            array[i] = 0;
        }
    }

    ans = 0;
    for (i = 0; i <= l; i++) {
        if (array[i] == 1) {
            ans++;
        }
    }

    printf("%d\n", ans);

    return 0;
}
