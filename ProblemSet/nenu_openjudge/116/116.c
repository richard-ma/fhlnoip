#include <stdio.h>

int main(int argc, const char *argv[]) {

    int n, x, y, i, sum;

    scanf("%d", &n);
    while (n--) {
        scanf("%d %d", &x, &y);

        if (x != y && x != y + 2) {
            printf("No Number\n");
            continue;
        } else {
            if (x == y) {
                sum = 0;
            } else {
                sum = 2;

            }

            for (i = 1; i <= y; i++) {
                if (i % 2 == 0) {
                    sum += 3;
                } else {
                    sum += 1;
                }
            }
            printf("%d\n", sum);
        }
    }

    return 0;
}
