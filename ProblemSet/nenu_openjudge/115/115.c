#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int main(int argc, char *argv[])
{
    char s[16], c;

    fgets(s, 256, stdin); // START OR ENDOFINPUT
    while (strcmp(s, "START\n") == 0) {
        while ((c = getchar()) != '\n') {
            if (c >= 'A' && c <= 'Z') {
                c = (c - 18) % 26 + 'A';
            }

            printf("%c", c);
        }
        printf("\n");

        fgets(s, 256, stdin); // END
        fgets(s, 256, stdin); // START OR ENDOFINPUT
    }

    return 0;
}
