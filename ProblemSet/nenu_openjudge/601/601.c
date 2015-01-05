#include <stdio.h>
#include <string.h>

int main(int argc, const char *argv[]) {
    
    int adder1, adder2, ans, op;

    while (1) {
        scanf("%d %d", &adder1, &adder2);

        if (0 == adder1 && 0 == adder2) {
            break;
        } else {
            ans = 0;
            op = 0;
            while (0 != adder1 || 0 != adder2) {
                if (adder1 % 10 + adder2 % 10 + op >= 10) {
                    ans++; op = 1;
                } else {
                    op = 0;
                }

                adder1 /= 10; adder2 /= 10;
            }

            if (0 == ans) {
                printf("No");
            } else {
                printf("%d", ans);
            }
            printf(" carry operation");
            if (1 < ans) {
                printf("s");
            }
            printf(".\n");
        }

    }

    return 0;
}
