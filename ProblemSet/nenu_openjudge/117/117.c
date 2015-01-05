#include <stdio.h>

int main(int argc, const char *argv[]) {

    int n, i;
    double t, sum;

    printf("Cards  Overhang\n");
    while (scanf("%d", &n) != EOF) {

        sum = 0;
        for (i = 1; i <= n; i++) {
            t = (double)i;
            sum += 1 / (t * 2);
        }

        printf("%5d  %8.3f\n", n, sum);
    }

    return 0;
}
