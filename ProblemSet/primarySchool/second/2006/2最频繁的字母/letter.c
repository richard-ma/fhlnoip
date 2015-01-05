#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 26

int main (int argc, char const* argv[])
{
    int a[MAX], i, max;
    char buf[256];

    memset(a, 0, sizeof(int) * MAX);

    scanf("%s", buf);
    for (i = 0; i < strlen(buf); i++) {
        a[buf[i] - 'a']++;
    }

    max = 0;
    for (i = 0; i < MAX; i++) {
        if (max < a[i]) {
            max = a[i];
        }
    }

    for (i = 0; i < MAX; i++) {
        if (max == a[i]) {
            printf("%c", i + 'a');
        }
    }
    printf("\n");

    return 0;
}
