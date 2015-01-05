#include <stdio.h>

int main(int argc, const char *argv[]) {
    
    int a, sum, i, t;

    scanf("%d", &a);

    sum = 0;
    for (i = 0; i < 5; i++) {
        scanf("%d", &t);
        if (t < a) {
            sum += t;
        }
    }

    printf("%d\n", sum);

    return 0;
}
