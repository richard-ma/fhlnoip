#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char const* argv[])
{
    int r, c, i, j, t, k, w;
    char map[64][64], cmd[64], buf[64];

    scanf("%d %d", &r, &c); 
    for (i = 0; i < r; i++) {
        scanf("%s", buf);
        for (j = 0; j < c; j++) {
            map[i][j] = buf[j];
            if (map[i][j] == '*') {
                t = i; k = j;
            }
        }
    }

    scanf("%s", cmd);
    w = strlen(cmd);

    for (i = 0; i < w; i++) {
        if (cmd[i] == 'N' && map[t-1][k] != '#') {
            t--;
        } else if (cmd[i] == 'S' && map[t+1][k] != '#') {
            t++;
        } else if (cmd[i] == 'E' && map[t][k+1] != '#') {
            k++;
        } else if (cmd[i] == 'W' && map[t][k-1] != '#') {
            k--;
        }
    }

    printf("%d\n%d\n", t+1, k+1);

    return 0;
}
