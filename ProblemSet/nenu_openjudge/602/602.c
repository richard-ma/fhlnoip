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

int hadd(int *a1, int *a2, int *ans) {

    int i;
    for (i = 0; i < MAX; i++) {
        ans[i] += a1[i] + a2[i];
        if (10 <= ans[i]) {
            ans[i] = ans[i] % 10;
            ans[i+1] += 1;
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

    hadd(adder1, adder2, ans);
    print(ans);

    return 0;
}
