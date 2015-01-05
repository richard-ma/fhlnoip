#include <stdio.h>
#include <string.h>

int main(int argc, const char *argv[]) {
    
    int i, sum, tmp, tsum, len;
    char buf[1024];

    while (1) {
        scanf("%s", buf);

        if (0 == strcmp(buf, "0")) {
            break;
        }
        len = strlen(buf);
        sum = 0;
        for (i = 0; i < len; i++) {
            sum += buf[i] - '0';
        }

        while (0 != sum / 10) {
            tmp = sum;
            tsum = 0;
            while (0 != tmp) {
                tsum += tmp % 10;
                tmp = tmp / 10;
            }
            sum = tsum;
        }
        printf("%d\n", sum);
    }

    return 0;
}
