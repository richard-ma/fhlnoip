#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

#define true 1
#define false 0

int r, c, map[30][30];
int dire[4][2] = {
    {1, 0},
    {0, 1},
    {1, 1},
    {1, -1}
};

int check_pos(int x, int y)
{
    if (x >= 0 && x < r &&
        y >= 0 && y < c) {
        return true;
    } else {
        return false;
    }
}

int check (int x, int y)
{
    int i, cnt, cc;

    for (i = 0; i < 4; i++) {
        cnt = 0;
        cc = 1;
        while (check_pos(x+cc*dire[i][0], y+cc*dire[i][1]) && 
                map[x+cc*dire[i][0]][y+cc*dire[i][1]] == map[x][y]) {
            cc++;
            cnt++;
        }
        cc = 1;
        while (check_pos(x-cc*dire[i][0], y-cc*dire[i][1]) && 
                map[x-cc*dire[i][0]][y-cc*dire[i][1]] == map[x][y]) {
            cc++;
            cnt++;
        }

        if (cnt == 4) {
            return true;
        }
    }

    return false;
}

int main (int argc, char const* argv[])
{
    int k, i, x, y, flg;

    scanf("%d %d %d", &r, &c, &k);
    flg = 0;
    memset(map, 0, sizeof(map));
    for (i = 0; i < k; i++) {
        scanf("%d %d", &x, &y);

        map[x][y] = i % 2 + 1; // 1 for black; 2 for white
        if (check(x, y)) {
            flg = 1;
            if (i % 2 == 0) {
                printf("%d Win\n", i / 2 + 1);
                break;
            } else {
                printf("%d Lose\n", i / 2 + 1);
                break;
            }
        }
    }

    if (!flg) {
        printf("Draw\n");
    }
        
    return 0;
}
