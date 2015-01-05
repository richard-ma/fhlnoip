#include <stdio.h>
#include <stdlib.h>

int main (int argc, char const* argv[])
{
    int n, max, min, i, sum, ans1, ans2;
    int a[100];
    
    scanf("%d %d %d", &n, &min, &max);
    sum = 0;
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        sum += a[i];
    }

    if (sum > n * max || sum < n * min) {
        printf("-1\n");
    } else {
        ans1 = 0;
        for (i = 0; i < n; i++) {
            if (a[i] < min) {
                ans1 = ans1 + min - a[i];
            }
        }

        ans2 = 0;
        for (i = 0; i < n; i++) {
            if (a[i] > max) {
                ans2 = ans2 + a[i] - max;
            }
        }

        printf("%d\n", ans1 > ans2 ? ans1 : ans2);
    }

    return 0;
}
