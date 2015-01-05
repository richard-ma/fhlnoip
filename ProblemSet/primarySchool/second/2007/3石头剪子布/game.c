#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char const* argv[])
{
    int n, i, ans_a, ans_b;
    char buf_a[32], buf_b[32];

    scanf("%d", &n);
    scanf("%s", buf_a);
    scanf("%s", buf_b);

    ans_a = ans_b = 0;
    for (i = 0; i < n; i++) {
        if (buf_a[i] == buf_b[i]) {
            ans_a++;
            ans_b++;
        } else if (buf_a[i] == 'R' && buf_b[i] == 'S' ||
                buf_a[i] == 'S' && buf_b[i] == 'P' ||
                buf_a[i] == 'P' && buf_b[i] == 'R') {
            ans_a += 2;
        } else {
            ans_b += 2;
        }
    }

    if (ans_a > ans_b) {
        printf("A ");
    } else if (ans_a < ans_b) {
        printf("B ");
    } else {
        printf("TIE ");
    }

    printf("%d\n", ans_a > ans_b ? ans_a : ans_b);

    return 0;
}
