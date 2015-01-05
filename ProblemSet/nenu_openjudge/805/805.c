#include <stdio.h>
#include <stdlib.h>

int a[30][30], ans, nx, ny;

int seed_fill (int x, int y)
{

    if (a[x][y] == 0 &&
            x >= 0 && x < ny &&
            y >= 0 && y < nx) {
        ans++; a[x][y] = 1;
        seed_fill(x - 1, y);
        seed_fill(x + 1, y);
        seed_fill(x, y - 1);
        seed_fill(x, y + 1);
    }

    return 0;
}

int main (int argc, char const* argv[])
{

    int x, y, i, j;
    char buf[30];

    while (scanf("%d %d", &nx, &ny) && (nx || ny)) {        
        ans = 0;
        for (i = 0; i < ny; i++) {
            scanf("%s", buf);
            for (j = 0; j < nx; j++) {
                if (buf[j] == '.') {
                    a[i][j] = 0;
                } else if (buf[j] == '#') {
                    a[i][j] = 1;
                } else if (buf[j] == '@') { 
                    a[i][j] = 0;
                    x = i; y = j;
                }
            }
        }

        seed_fill(x, y);
        printf("%d\n", ans);
    }

    return 0;
}
