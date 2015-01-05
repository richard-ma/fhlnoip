#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char const* argv[])
{
    int pos, i, w_ans, l_ans, flg;
    char buf[1000000], ch;

    pos = 0;
    while ((ch = getchar()) != EOF) {
        if (ch == 'E') break;

        if (ch == 'W' || ch == 'L') {
            buf[pos++] = ch;
        }
    }

#ifdef DEBUG
    printf("%s\n", buf);
    printf("%d\n", pos);
#endif

    w_ans = l_ans = flg = 0;
    for (i = 0; i < pos; i++) {
        if (buf[i] == 'W') w_ans++;
        else if (buf[i] == 'L') l_ans++;

        if (w_ans == l_ans && w_ans == 10) {
            flg = 1;
        } else if ((w_ans == 11 && flg == 0) || (w_ans == l_ans + 2 && flg == 1)) {
            printf("%d:%d\n", w_ans, l_ans);
            w_ans = 0; l_ans = 0;
            flg = 0;
        } else if ((l_ans == 11 && flg == 0) || (l_ans == w_ans + 2 && flg == 1)) {
            printf("%d:%d\n", w_ans, l_ans);
            w_ans = 0; l_ans = 0;
            flg = 0;
        }
    }
    printf("%d:%d\n", w_ans, l_ans);

    printf("\n");

    w_ans = l_ans = flg = 0;
    for (i = 0; i < pos; i++) {
        if (buf[i] == 'W') w_ans++;
        else if (buf[i] == 'L') l_ans++;

        if (w_ans == l_ans && w_ans == 20) {
            flg = 1;
        } else if ((w_ans == 21 && flg == 0) || (w_ans == l_ans + 2 && flg == 1)) {
            printf("%d:%d\n", w_ans, l_ans);
            w_ans = 0; l_ans = 0;
            flg = 0;
        } else if ((l_ans == 21 && flg == 0) || (l_ans == w_ans + 2 && flg == 1)) {
            printf("%d:%d\n", w_ans, l_ans);
            w_ans = 0; l_ans = 0;
            flg = 0;
        }
    }
    printf("%d:%d\n", w_ans, l_ans);

    return 0;
}
