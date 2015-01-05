#include <stdio.h>
#include <string.h>

#define  MAX 500

int init_array(int *array) {
    
    int i;
    for (i = 0; i < MAX; i++) {
        array[i] = 0;
    }

    return 0;
}

int to_array(char *buf, int len, int *array) {

    int i;
    for (i = 0; i < len; i++) {
        array[len - 1 - i] = buf[i] - '0';
    }

    return 0;
}

int print(int *array) {
    
    int i, flg;
    flg = 0;
    for (i = MAX - 1; i >= 0; i--) {
        if (flg) {
            printf("%d", array[i]);
        } else {
            if (array[i] > 0 || 0 == i) { /* if array is "0". */
                printf("%d", array[i]);
                flg = 1;
            }
        }
    }
    printf("\n");

    return 0;
}

int hmul(int *a1, int l1, int *a2, int l2, int *ans) {

    int i, j;
    for (i = 0; i < l1; i++) {
        for (j = 0; j < l2; j++) {
            ans[i+j] = a1[i] * a2[j] + ans[i+j];
            if (10 <= ans[i+j]) {
                ans[i+j+1] += ans[i+j] / 10;
                ans[i+j] = ans[i+j] % 10;
            }
        }
    }

    return 0;
}

int main(int argc, const char *argv[]) {
    
    int adder1[MAX], adder2[MAX], ans[MAX], len1, len2;
    char buf[MAX];

    init_array(adder1); init_array(adder2); init_array(ans);

    scanf("%s", buf);
    len1 = strlen(buf);
    to_array(buf, len1, adder1);

    scanf("%s", buf);
    len2 = strlen(buf);
    to_array(buf, len2, adder2);

    hmul(adder1, len1, adder2, len2, ans);
    print(ans);

    return 0;
}
