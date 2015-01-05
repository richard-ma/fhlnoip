#include <stdio.h>
#include <string.h>

int main(int argc, const char *argv[]) {
    
    int i, j, len;
    long int ans, muti;
    char buf[1024];

    while (1) {
        scanf("%s", buf);

        if (0 == strcmp(buf, "0")) {
            break;
        }

        len = strlen(buf);
        ans = 0;
        for (i = 0; i < len; i++) {
            muti = 1;
            for (j = i; j < len; j++) {
                muti *= 2;
            }

            ans += (buf[i] - '0') * (muti - 1);
        }

        printf("%ld\n", ans);
    }

    return 0;
}
