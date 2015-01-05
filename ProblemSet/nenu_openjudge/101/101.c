#include <stdio.h>

int main(int argc, const char *argv[]) {
    
    int hen, rabbit, ani, n, max, min;

    scanf("%d", &n);

    while (n--) {
        scanf("%d", &ani);

        if (0 != ani % 2) {
            printf("0 0\n");
        } else {
            rabbit = ani / 4;
            hen = (ani % 4) / 2;
            min = rabbit + hen;

            hen = ani / 2;
            max = hen;

            printf("%d %d\n", min, max);
        }
    }

    return 0;
}
