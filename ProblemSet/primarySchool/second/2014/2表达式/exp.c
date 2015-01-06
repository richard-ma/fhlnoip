#include "stdio.h"
#include "stdlib.h"

int main(int argc, char *argv[])
{
    int ans[8], max, i, n, a, b, c;

    scanf("%d", &n);
    while(n--) {
        scanf("%d%d%d", &a, &b, &c);
        
        ans[0] = a + b + c;
        ans[1] = a * b + c;
        ans[2] = a * (b + c);
        ans[3] = a + b * c;
        ans[4] = (a + b) * c;
        ans[5] = a * b * c;

        max = ans[0];
        for (i = 0; i < 6; ++i) {
            if (max < ans[i]) {
                max = ans[i];
            }
        }

        printf("%d\n", max);
    }

    return 0;
}
