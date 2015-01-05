#include <stdio.h>

int main(int argc, const char *argv[]) {

    int m, n, s, i;
    
    while (1) {
        scanf("%d %d", &n, &m);
        if (n == 0) {
            break;
        }

        s = 0;
        for (i = 2; i <= n; i++) {
            s = (s + m) % i;
        }

        printf("%d\n", s + 1);
    }

    return 0;
}
