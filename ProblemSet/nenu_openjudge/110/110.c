#include <stdio.h>

int main(int argc, const char *argv[]) {
    
    int n, i, j, area, edge_in, t, a[100][100];

    scanf("%d", &n);

    area = 0;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &t);

            if (50 >= t) {
                a[i][j] = 1; area++;
            } else {
                a[i][j] = 0;
            }
        }
    }
    printf("%d ", area);

    edge_in = 0;
    for (i = 1; i < n-1; i++) {
        for (j = 1; j < n-1; j++) {
            if ( 1 == a[i-1][j] &&
                 1 == a[i+1][j] &&
                 1 == a[i][j-1] &&
                 1 == a[i][j+1]) {
                edge_in++;
            }
        }
    }
    printf("%d\n", area - edge_in);

    return 0;
}
