#include <stdio.h>
#include <string.h>

int main(int argc, const char *argv[]) {

    int s_len, t_len, i, c, flg;
    char s[1024], t[1024];
    
    while (scanf("%s %s", s, t) != EOF) {

        s_len = strlen(s); t_len = strlen(t);

        flg = 0;
        for (i = 0, c = 0; i < t_len; i++) {
            if (s[c] == t[i]) {
                c++;
            }

            if (c == s_len) {
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
