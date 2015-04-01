#include "stdio.h"
#include "stdlib.h"
#include "math.h"

int max(int a, int b)
{
    return a > b ? a : b;
}

int min(int a, int b)
{
    return a < b ? a : b;
}

int diagonal(int x1, int y1, int x2, int y2)
{
    return abs(x1 - x2) == abs(y1 - y2) ? 1 : 2;
}

int grid(int x1, int y1, int x2, int y2)
{
    return x1 == x2 || y1 == y2 ? 1 : 2;
}

int rook(int x1, int y1, int x2, int y2)
{
    return grid(x1, y1, x2, y2);
}

int bishop(int x1, int y1, int x2, int y2)
{
    return (x1 + y1) % 2 == (x2 + y2) % 2 ? diagonal(x1, y1, x2, y2) : -1;
}

int king(int x1, int y1, int x2, int y2)
{
    return max(abs(x1 - x2), abs(y1 - y2));
}

int queen(int x1, int y1, int x2, int y2)
{
    int diag;

    diag = bishop(x1, y1, x2, y2);
    if (diag == -1) diag = 10; // max steps is 8: bigger than max steps
    return min(diag, grid(x1, y1, x2, y2));
}

int main(int argc, char *argv[])
{
    char x1, y1, x2, y2, t;
    int n, bish;

    scanf("%d", &n);
    while (n--) {
        scanf("%c%c%c%c%c%c", &t, &x1, &y1, &t, &x2, &y2);
        /*printf("%c:%d %c:%d %c:%d %c:%d\n", x1, x1, y1, y1, x2, x2, y2, y2);*/
        if ((x1 == x2) && (y1 == y2)) {
            printf("0 0 0 0\n");
            continue;
        }

        printf("%d ", king(x1, y1, x2, y2));
        printf("%d ", queen(x1, y1, x2, y2));
        printf("%d ", rook(x1, y1, x2, y2));
        bish = bishop(x1, y1, x2, y2);
        if (bish == -1) 
            printf("Inf");
        else
            printf("%d", bish);
        printf("\n");
    }
    
    return 0;
}
