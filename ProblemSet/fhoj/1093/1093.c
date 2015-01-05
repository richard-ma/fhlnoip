#include <stdio.h>
#include <stdlib.h>

int main (int argc, char const* argv[])
{
    int a, b, c, ans;

    scanf("%d %d %d", &a, &b, &c);

    ans = 0;
    if (a + b > c && a + c > b && b + c > a) {
        ans = a + b + c;
    }

    if (ans == 0) {
        printf("Can't\n");
    } else {
        printf("%d\n", ans);
    }

    return 0;
}
