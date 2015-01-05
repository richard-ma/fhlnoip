#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int map[200][200];
int n;

int flood_fill (int x, int y)
{

    if (x < n && y < n && x >= 0 && y >= 0 &&
            map[x][y] == 0) {
        map[x][y] = 2;
        flood_fill(x - 1, y);
        flood_fill(x + 1, y);
        flood_fill(x, y - 1);
        flood_fill(x, y + 1);
    }
    
    return 0;
}

int main (int argc, char const* argv[])
{
    int T, sx, sy, dx, dy, i, j;
    char buf[200];

    scanf("%d", &T);
    while (T--) {
        scanf("%d", &n);
        for (i = 0; i < n; i++) {
            scanf("%s", buf);
            for (j = 0; j < strlen(buf); j++) {
                if (buf[j] == '.') {
                    map[i][j] = 0;
                } else {
                    map[i][j] = 1;
                }
            }
        }

        scanf("%d %d %d %d", &sx, &sy, &dx, &dy);
        flood_fill(sx, sy);

        if (map[dx][dy] == 2) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
