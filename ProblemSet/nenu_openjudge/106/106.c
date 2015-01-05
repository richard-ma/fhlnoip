#include <stdio.h>

int main(int argc, const char *argv[]) {
    
    int i, n, t, sum;

    scanf("%d", &n);
    i = n;
    sum = 0;
    while (i--) {
        scanf("%d", &t);
        sum += t;
    }

    printf("%.2f\n", (float)(sum) / n);

    return 0;
}
