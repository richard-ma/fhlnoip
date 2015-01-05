#include <stdio.h>

int main (int argc, char const* argv[])
{

    int x, y, nx, ax[10], i;

    scanf("%d %d", &x, &y);

    nx = 1; ax[0] = x;
    while (x > 1) {
        x /= 2;
        ax[nx] = x; nx++;
    }

    while (y > 1) {
        for (i = 0; i < nx; i++) {
            if (y == ax[i]) {
                printf("%d\n", y);
                return 0;
            }
        }
        y /= 2;
    }

    printf("1\n");
    return 0;
}
