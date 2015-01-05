#include <stdio.h>

int main(int argc, const char *argv[]) {
    
    int d, scale, a, c, i, o[64];

    scanf("%d", &d);
    scale = 8;

    for (i = 0; i < 64; i++) {
        o[i] = -1;
    }

    c = 0;
    while (0 != d) {
        a = d % scale;
        d = d / scale;
        o[c] = a;
        c++;
    }

    for (i = c-1; i >= 0; i--) {
        printf("%d", o[i]);
    }
    printf("\n");

    return 0;
}
