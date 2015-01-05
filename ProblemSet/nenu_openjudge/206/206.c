#include <stdio.h>

int main(int argc, const char *argv[]) {

    int n, d[10000], i, j, k, c, offset, ans[10000], tmp, sum, muti;
    char ch;
    
    scanf("%d", &n);
    getchar();
    
    while (n--) {
        for (i = 0; i < 10000; i++) {
            d[i] = 0;
        }

        c = 0;
        while (ch = getchar()) {
            if (ch == '\n') {
                break;
            }
            d[c++] = ch - '0';
        }

        for (i = 0; i < c / 2; i++) {
            tmp = d[i];
            d[i] = d[c-1 - i];
            d[c-1 - i] = tmp;
        }

        for (i = 0; i < 10000; i++) {
            ans[i] = -1;
        }
        offset = 0; k = 0;
        while (offset < c) {
            sum = 0;
            for (i = 0; i < 4; i++) {
                muti = 1;
                for (j = 0; j < i; j++) {
                    muti *= 2;
                }
                sum += d[i+offset] * muti;
            }

            ans[k++] = sum;

            offset += 4;
        }

        
        for (i = k-1; i >= 0; i--) {
            printf("%c", ans[i] >= 10 ? ans[i] - 10 + 'A' : ans[i] + '0');
        }

        printf("\n");
    }

    return 0;
}
