#include <stdio.h>
#include <string.h>

int main(int argc, const char *argv[]) {

    int len, i;
    char buf[256];
    char dict[] = 
    {'V', 'W', 'X', 'Y', 'Z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U'};
    
    while (1) {
        gets(buf);
        if (0 == strcmp(buf, "ENDOFINPUT")) {
            break;
        }
        if (0 == strcmp(buf, "START") || 0 == strcmp(buf, "END")) {
            continue;
        }
        len = strlen(buf);
        for (i = 0; i < len; i++) {
            if (buf[i] >= 'A' && buf[i] <= 'Z') {
                putchar(dict[buf[i] - 'A']);
            } else {
                putchar(buf[i]);
            }
        }
        putchar('\n');
    }

    return 0;
}
