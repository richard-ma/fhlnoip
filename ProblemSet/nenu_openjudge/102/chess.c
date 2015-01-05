#include <stdio.h>
#include <string.h>

int abs(int a) {
    
    return a > 0 ? a : -a;
}

int bishop_arrive(char *s, char *d) {

    if ((s[0] + s[1]) % 2 == (d[0] + d[1]) % 2) {
        return 1;
    } else {
        return 0;
    }
}

int bishop_check(char *s, char *d) {

    if (abs(s[0] - d[0]) == abs(s[1] - d[1])) {
        if (0 == abs(s[1] - d[1])) {
            return 0;
        } else {
            return 1;
        }
    } else {
        return 2;
    }
}

int rook_check(char *s, char *d) {

    if (s[0] == d[0] && s[1] == d[1]) {
        return 0;
    } else if (s[0] == d[0] || s[1] == d[1]) {
        return 1;
    } else {
        return 2;
    }
}

int king_ckeck(char *s, char *d) {

    int row, col;

    row = abs(s[1] - d[1]);
    col = abs(s[0] - d[0]);

    return row > col ? row : col;
}

int queen_check(char *s, char *d) {

    int r, b;
    r = rook_check(s, d);
    b = bishop_check(s, d);

    return r < b ? r : b;
}

int main(int argc, const char *argv[]) {

    int i, j, p, q, ans, type;
    char s[4], d[4];

    /* Setting source point.  */
    strcpy(s, argv[1]);

    type = 0;
    if (0 == strcmp(argv[2], "king")) {
        type = 0;
    } else if (0 == strcmp(argv[2], "rook")) {
        type = 1;
    } else if (0 == strcmp(argv[2], "bishop")) {
        type = 2;
    } else if (0 == strcmp(argv[2], "queen")) {
        type = 3;
    } 

    printf("%s[%d]: %c%c --> all points \n", argv[2], type, s[0], s[1]);

    for (i = '1'; i <= '8'; i++) {
        for (j = 'a'; j <= 'h'; j++) {
            d[0] = j; d[1] = i;
            
            ans = -2;
            if (0 == type) {
                ans = king_ckeck(s, d);
            } else if (1 == type) {
                ans = rook_check(s, d);
            } else if (2 == type) {
                if (bishop_arrive(s, d)) {
                    ans = bishop_check(s, d);
                } else {
                    ans = '#';
                }
            } else if (3 == type) {
                ans = queen_check(s, d);
            }

            if (0 <= ans && 9 >= ans) {
                printf("%2d ", ans);
            } else {
                printf("%2c ", ans);
            }
        }
        printf(" *%c\n", i);
    }
    for (j = 'a'; j <= 'h'; j++) {
        printf("*%c ", j);
    }
    printf("\n");

    return 0;
}
