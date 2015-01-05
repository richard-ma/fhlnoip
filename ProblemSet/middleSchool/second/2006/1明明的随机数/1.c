#include <stdio.h>
#include <stdlib.h>

int main (int argc, char const* argv[])
{
    int n, t, i, j, a[100];

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    /* 选择排序 */
    for (i = 0; i < n-1; i++) {
        for (j = i+1; j < n; j++) {
            if (a[i] > a[j]) {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
        /* 如遇到和前一个重复的元素
         * 将最后一个元素覆盖当前第i个元素
         * i--
         * 重新进行第i个元素的选择
         */
        if (i > 0 && a[i] == a[i-1]) {
            a[i] = a[n-1];
            i--;
            n--;
        }
    }

    printf("%d\n", n);
    printf("%d", a[0]);
    for (i = 1; i < n; i++) {
        printf(" %d", a[i]);
    }
    printf("\n");

    return 0;
}
