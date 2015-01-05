#include <stdio.h>

int main(int argc, const char *argv[]) {

    int c, i, j, t, tmp, ans, array[16];
    
    c = 0;
    for (i = 0; i < 16; i++) {
        array[i] = 0;
    }

    while (1) {
        scanf("%d", &t);
        if (t == -1) {
            break;
        } else {
            if (t == 0) {

                for (i = 0; i < c; i++) {
                    for (j = i+1; j <= c; j++) {
                        if (array[i] > array[j]) {
                            tmp = array[i];
                            array[i] = array[j];
                            array[j] = tmp;
                        }
                    }
                }

                ans = 0;
                for (i = 0; i < c; i++) {
                    for (j = i+1; j <= c; j++) {
                        if (array[j] == 2 * array[i]) {
                            ans++;
                        }
                    }
                }

                printf("%d\n", ans);

                c = 0;
                for (i = 0; i < 16; i++) {
                    array[i] = 0;
                }
            } else {
                array[c] = t;
                c++;
            }
        }
    }

    return 0;
}
