#include <stdio.h>
#include <string.h>
int main(int argc, const char *argv[]) {

    int i, j, array[26], max;
    char ch;

    for (i = 0; i < 26; i++) {
        array[i] = 0;
    }

    max = 0;
    while ((ch = getchar()) != EOF) {
        if ('A' <= ch && ch <= 'Z') {
            array[ch-'A']++;
            if (max < array[ch-'A']) {
                max = array[ch-'A'];
            }
        }
    }

    for (i = max; i >= 0; i--) {
        for (j = 0; j < 26; j++) {
            if (0 == i) {
                printf("%c ", 'A' + j);
            } else if (i == array[j]) {
                printf("* ");
                array[j]--;
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}
