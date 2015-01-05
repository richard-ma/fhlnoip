#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int abs (int n)
{
    return n >= 0 ? n : -n;
}

int main (int argc, char const* argv[])
{
    int ruler[10], a[10];
    int i, j, t, total, sum, ans, temp;

    scanf("%d", &t);

    while (t--) {
        total = 0;
        for (i = 0; i < 10; i++) {
            scanf("%d", &a[i]);
            total += a[i];
        }
        ans = total;

        memset(ruler, 0, sizeof(int) * 10);
        for (i = 0; i < 1024; i++) {

            sum = 0;
            for (j = 0; j < 10; j++) {
                sum += a[j] * ruler[j];
            }
    
            temp = abs((total - sum) - sum);
            if (ans > temp) {
                ans = temp;
            }
    
            ruler[0]++;
            for (j = 0; j < 9; j++) {
                if (ruler[j] > 1) {
                    ruler[j] = 0; ruler[j+1]++;
                }
            }
        }

        printf("%d\n", ans);
    }


    return 0;
}
