#include <stdio.h>

int main (int argc, char const* argv[])
{
    int a, b, n, sum, tmp;

    scanf("%d", &n);
    sum = 0;
    while (n--) {
        scanf("%d", &tmp);
        sum += tmp;
    }
    scanf("%d %d", &a, &b);

    printf("%d\n", a + sum - b);

    return 0;
}
