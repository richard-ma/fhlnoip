#include <stdio.h>
#include <string.h>

int main(int argc, const char *argv[]) {
    
    int i, j, flg, constant, len;
    char orig[128], passwd[128], ch;

    scanf("%s", passwd);
    scanf("%s", orig);

    len = strlen(orig);
    for (i = 0; i < len-1; i++) {
        for (j = i+1; j < len; j++) {
            if (orig[i] > orig[j]) {
                ch = orig[i]; orig[i] = orig[j]; orig[j] = ch;
            }
            if (passwd[i] > passwd[j]) {
                ch = passwd[i]; passwd[i] = passwd[j]; passwd[j] = ch;
            }
        }
    }

    flg = 1;
    constant = orig[0] - passwd[0];
    for (i = 1; i < len; i++) {
        if (orig[i] - passwd[i] != constant) {
            flg = 0; break;
        }
    }

    if (flg) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
