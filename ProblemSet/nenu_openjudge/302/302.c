#include <stdio.h>
#include <string.h>

int power(int base, int exp) {

    int i, ans;

    ans = 1;
    for (i = 0; i < exp; i++) {
        ans *= base;
    }

    return ans;
}

int main(int argc, const char *argv[]) {
    
    int n, i, j, sum, len;
//    int hash[10000000];
    int ruler[] = {2, 2, 2, 3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 0, 7, 7, 8, 8, 8, 9, 9, 9, 0};
    char buf[64];

printf("hello\n");
    scanf("%d", &n);
    while (n--) {
        scanf("%s", buf);
/*
        len = strlen(buf);
        sum = 0; j = 6;
        for (i = 0; i < len; i++) {
            if ('A' <= buf[i] && 'Z' >= buf[i]) {
                buf[i] = ruler[buf[i] - 'A'];
            } else if ('0' <= buf[i] && '9' >= buf[i]) {
                buf[i] -= '0';
            }

            if (0 <= buf[i] && 9 >= buf[i]) {
                sum += buf[i] * power(10, j);
                j--;
            }
        }
*/
        printf("%d\n", sum);
    }

    return 0;
}
