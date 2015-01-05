#include <stdio.h>
#include <stdlib.h>

int main (int argc, char const* argv[])
{
    int n, t, i, ans;

    while (scanf("%d", &n) != EOF) {
        if (n == 0) break; // n如果为0则停止

        ans = 0;
        for (i = 0; i < n; i++) {
            scanf("%d", &t);    
            ans += t;
        }

        printf("%d\n", ans);
    }

    return 0;
}
