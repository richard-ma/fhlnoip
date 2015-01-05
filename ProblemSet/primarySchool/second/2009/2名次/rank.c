#include <stdio.h>

int main (int argc, char const* argv[])
{
    int n, m, ans, score;

    scanf("%d", &n);
    scanf("%d", &m); n--;
    ans = 1;
    while (n--) {
        scanf("%d", &score);
        if (score > m) {
            ans++;
        }
    }

    printf("%d\n", ans);

    return 0;
}
