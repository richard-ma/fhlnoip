#include <stdio.h>
#include <string.h>

int main(int argc, const char *argv[]) {
    
    int n, i, j, max, offset[10000];
    char buf[10000][64];

    for (i = 0; i < 10000; i++) {
        offset[i] = 0;
    }

    scanf("%d", &n);

    max = 0;
    for (i = 0; i < n; i++) {
        scanf("%s", buf[i]);

        for (j = 0; j < strlen(buf[i]); j++) {
            if ('.' == buf[i][j]) {
                offset[i] = j; break;
            }
        }

        if (j > max) {
            max = j;
        }
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < max - offset[i]; j++) {
            printf(" ");
        }
        printf("%s\n", buf[i]);
    }

    return 0;
}
