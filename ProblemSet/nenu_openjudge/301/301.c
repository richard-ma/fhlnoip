#include <stdio.h>
#include <string.h>

int main(int argc, const char *argv[]) {
    
    int n, count[26], i, max, len;
    char buf[1024], ch;

    scanf("%d", &n);

    while (n--) {
        scanf("%s", buf);

        for (i = 0; i < 26; i++) {
            count[i] = 0;
        }
        
        len = strlen(buf);
        for (i = 0; i < len; i++) {
            count[buf[i] - 'a']++;
        }

        max = count[0];
        ch = 'a';
        for (i = 1; i < 26; i++) {
            if (count[i] > max) {
                max = count[i];
                ch = i + 'a';
            }
        }

        printf("%c %d\n", ch, max);
    }

    return 0;
}
