#include <stdio.h>
#include <string.h>

int main(int argc, const char *argv[]) {
    
    float twbc, trbc, thgb, thct, tplt;
    int ans, n;
    char sex[16];

    scanf("%d", &n);
    while (n--) {
        scanf("%s %f %f %f %f %f", sex, &twbc, &trbc, &thgb, &thct, &tplt);

        ans = 0;
        if (twbc < 4.0 || twbc > 10.0) {
            ans++;
        }

        if (trbc < 3.5 || trbc > 5.5) {
            ans++;
        }

        if (tplt < 100 || tplt > 300) {
            ans++;
        }

        if (0 == strcmp("male", sex)) {
            if (thgb < 120 || thgb > 160) {
                ans++;
            }
            if (thct < 42 || thct > 48) {
                ans++;
            }
        } else {
            if (thgb < 110 || thgb > 150) {
                ans++;
            }
            if (thct < 36 || thct > 40) {
                ans++;
            }
        }

        if (0 == ans) {
            printf("normal\n");
        } else {
            printf("%d\n", ans);
        }
    }

    return 0;
}
