#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 10002

int main (int argc, char const* argv[])
{
    int map[MAX], l, m, start, end, i, j, ans;

    memset(map, 0, sizeof(int) * MAX);

    scanf("%d %d", &l, &m);
    for (i = 0; i < m; i++) {
        scanf("%d %d", &start, &end);

        for (j = start; j <= end; j++) {
            map[j] = 1;
        }
    }

    ans = 0;
    for (i = 0; i <= l; i++) {
        if (map[i] == 0) {
            ans++;
        }
    }

    printf("%d\n", ans);

    return 0;
}
