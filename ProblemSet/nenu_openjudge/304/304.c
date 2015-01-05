#include <stdio.h>
#include <string.h>

int main(int argc, const char *argv[]) {
    
    int i, len;
    char buf[256];

    while (gets(buf) != NULL) {
        if (0 == strcmp(buf, "ENDOFINPUT")) break;

        gets(buf);
        len = strlen(buf);

        for (i = 0; i < len; i++) {
            if ('A' <= buf[i] && 'Z' >= buf[i]) {
                buf[i] -= 'A';
                buf[i] += 21;
                buf[i] = buf[i] % 26;
                buf[i] += 'A';
            }
        }
        puts(buf);

        gets(buf);
    }

    return 0;
}
