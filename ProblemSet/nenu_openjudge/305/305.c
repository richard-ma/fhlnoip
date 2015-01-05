#include <stdio.h>
#include <string.h>

int main(int argc, const char *argv[]) {
    
    int n, i, j, flg;
    char s1[128], s2[128], ch;

    scanf("%d", &n);
    gets(s1);
    
    while (n--) {

        gets(s1);
        gets(s2);

        i = 0; j = 0;
        flg = 1;
        while (i < strlen(s1) && j < strlen(s2)) {

            while (' ' == s1[i]) i++;
            while (' ' == s2[j]) j++;

            if (s1[i] >= 'A' && s1[i] <= 'Z') s1[i] = s1[i] + ('a' - 'A');
            if (s2[j] >= 'A' && s2[j] <= 'Z') s2[j] = s2[j] + ('a' - 'A');

            if (s1[i] != s2[j]) {
                flg = 0; break;
            }

            i++; j++;
        }

        if (flg) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }

        gets(s1);
    }

    return 0;
}
