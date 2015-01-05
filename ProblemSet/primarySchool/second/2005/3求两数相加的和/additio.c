#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 128

int main (int argc, char const* argv[])
{
    int len, len1, len2, i;
    int op1[MAX], op2[MAX], result[MAX];
    char buf[MAX];

    memset(op1, 0, sizeof(int) * MAX);
    memset(op2, 0, sizeof(int) * MAX);
    memset(result, 0, sizeof(int) * MAX);

    scanf("%s", buf);
    len1 = strlen(buf);
    for (i = 0; i < len1; i++) {
        op1[len1 - i - 1] = buf[i] - '0';
    }
    scanf("%s", buf);
    len2 = strlen(buf);
    for (i = 0; i < len2; i++) {
        op2[len2 - i - 1] = buf[i] - '0';
    }

    /*
    for (i = 0; i < len1; i++) {
        printf("%d", op1[i]);
    }
    printf("\n");
    for (i = 0; i < len2; i++) {
        printf("%d", op2[i]);
    }
    printf("\n");
    */

    len = len1 > len2 ? len1 : len2;
    for (i = 0; i < len; i++) {
        result[i] = op1[i] + op2[i] + result[i];
        if (result[i] >= 10) {
            result[i] %= 10;
            result[i+1] += 1; // 进位
        }
    }

    if (result[len] > 0) printf("%d", result[len]); // 最高位进位
    for (i = 0; i < len; i++) {
        printf("%d", result[len - i - 1]);
    }
    printf("\n");

    return 0;
}
