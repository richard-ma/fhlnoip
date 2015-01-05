#include <stdio.h>
#include <stdlib.h>

int main (int argc, char const* argv[])
{
    int t, i, ans;
    int cash[] = {50, 20, 10, 5, 1};

    scanf("%d", &t);

    ans = 0;
    while (t) {
        for (i = 0; i < 5; i++) {
            if (t >= cash[i]) {
                t -= cash[i];
                ans++;
                break;
            }
        }
    }

    printf("%d\n", ans);

    return 0;
}
