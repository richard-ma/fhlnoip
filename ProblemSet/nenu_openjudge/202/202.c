#include <stdio.h>
#include <string.h>

int power(const int base, const int exp) {

    int i, ans;

    ans = 1;
    for (i = 1; i <= exp ; i++) {
        ans *= base;
    }

    return ans;
}

int base2ten(char *s, int len, int base) {

    int ans, n, i, tmp;

    ans = 0;
    n = len - 1;
    for (i = 0; i < len; i++, n--) {
        tmp = s[i] - '0';
        tmp = tmp * power(base, n);
        ans += tmp;
    }

    return ans;
}

int main(int argc, const char *argv[]) {

    char p[16], q[16], r[16];
    int n, ip, iq, ir, lp, lq, lr, i, ans, sbase, tmp;

    scanf("%d", &n);
    while (n--) {
        scanf("%s", p);
        lp = strlen(p);
        scanf("%s", q);
        lq = strlen(q);
        scanf("%s", r);
        lr = strlen(r);

        sbase = 2;
        for (i = 0; i < lp; i++) {
            tmp = p[i] - '0';
            if (tmp >= sbase) {
                sbase = tmp + 1;
            }
        }

        for (i = 0; i < lq; i++) {
            tmp = q[i] - '0';
            if (tmp >= sbase) {
                sbase = tmp + 1;
            }
        }

        for (i = 0; i < lr; i++) {
            tmp = r[i] - '0';
            if (tmp >= sbase) {
                sbase = tmp + 1;
            }
        }

        ans = 0;
        for (i = sbase; i <= 16; i++) {
            ip = base2ten(p, lp, i);
            iq = base2ten(q, lq, i);
            ir = base2ten(r, lr, i);

            if (ip * iq == ir) {
                ans = i;
                break;
            }
        }
        printf("%d\n", ans);
    }

    return 0;
}
