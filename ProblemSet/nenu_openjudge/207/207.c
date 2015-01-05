#include <stdio.h>
#include <string.h>

int main(int argc, const char *argv[]) {

    char buf[32];
    long double ans, weight;
    int len, flg, c, i, j, t;
    
    while (scanf("%s", buf) != EOF) {

        len = strlen(buf);
        flg = 1;
        ans = 0;
        for (i = 0; i < len; i++) {
            if (buf[i] == '.') {
                flg = 0;
                c = 1;
                continue;
            }

            if (flg) {
                continue;
            }

            t = buf[i] - '0';

            weight = 1;
            for (j = 0; j < c; j++) {
                weight = weight / 8;
            }
            
            ans += t * weight;
            c++;
        }

        printf("%s [8] = %.80Lg [10]\n", buf, ans);
    }

    return 0;
}
