#include <stdio.h>
#include <string.h>

int main(int argc, const char *argv[]) {
    
    int len_s, len_t, i, j, flg;
    char s[100001], t[100001];

    while (scanf("%s %s", s, t) != EOF) {
        len_s = strlen(s); len_t = strlen(t);

        flg = 0;
        for (i = 0, j = 0; i < len_t; i++) {
            if (t[i] == s[j]) { j++; }

            if (j == len_s) {
                flg = 1; break;
            }
        }

        if (flg) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }

    return 0;
}
