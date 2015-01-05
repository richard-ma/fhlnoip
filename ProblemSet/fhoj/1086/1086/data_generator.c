#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main (int argc, char const* argv[])
{
    int i, j, c, type, top;
    char bit_value[64];
    char stack[100];

    for (i = 0; i < 26; i++) {
        bit_value[i*2] = i + 'a';
        bit_value[i*2+1] = i + 'A';
    }
    for (i = 0; i < 10; i++) {
        bit_value[i+52] = i + '0';
    }

    srand((unsigned)time(NULL));


    printf("1\n");
    for (i = 0; i < 1; i++) {
        type = rand() % 2;
        if (type) {
            /* huiwen */
            top = 0;
            for (j = 0; j < 100; j++) {
                c = rand() % 62;
                printf("%c", bit_value[c]);
                stack[top] = bit_value[c];
                top++;
            }
            for (j = 0; j < 100; j++) {
                top--;
                printf("%c", stack[top]);
            }
        } else {
            /* not huiwen */
            for (j = 0; j < 200; j++) {
                c = rand() % 62;
                printf("%c", bit_value[c]);
            }
        }
        printf("\n");
    }

    return 0;
}
