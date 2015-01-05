#include <stdio.h>

int base_sum(int c, int base) {
    int sum;

    sum = 0;
    while (c != 0) {
        sum += c % base;
        c = c / base;
    }

    return sum;
}

int main(int argc, const char *argv[]) {

    int i, sum1, sum2, sum3;
    
    for (i = 2992; i < 10000; i++) {
        sum1 = base_sum(i, 10);
        sum2 = base_sum(i, 12);
        sum3 = base_sum(i, 16);

        if (sum1 == sum2 && sum2 == sum3) {
            printf("%d\n", i);
        }
    }


    return 0;
}
