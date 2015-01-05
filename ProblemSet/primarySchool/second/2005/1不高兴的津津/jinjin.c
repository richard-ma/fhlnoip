#include <stdio.h>
#include <stdlib.h>

int main (int argc, char const* argv[])
{
    int a1, a2, a3, print_flg, i, sum;

    print_flg = 0;
    for (i = 0; i < 7; i++) {
        scanf("%d %d %d", &a1, &a2, &a3);
        sum = a1 + a2 + a3;

        if (sum > 8) {
            printf("%d\n", i+1);
            print_flg = 1;
            break;
        }
    }

    if (!print_flg) {
        printf("0\n");
    }

    return 0;
}
