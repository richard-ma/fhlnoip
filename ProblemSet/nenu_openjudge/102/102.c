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

    int n;
    char source[4], dest[4];
    scanf("%d", &n);

    while (n--) {
        scanf("%s %s", source, dest);

        printf("%d ", king_ckeck(source, dest));
        printf("%d ", queen_check(source, dest));
        printf("%d ", rook_check(source, dest));

        if (bishop_arrive(source, dest)) {
            printf("%d\n", bishop_check(source, dest));
        } else {
            printf("Inf\n");
        }
    }
    
    return 0;
}
