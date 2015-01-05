#include <stdio.h>
#include <stdlib.h>

#define MAX 300

int main (int argc, char const* argv[])
{
    int i, j, n;
    int s_cn[MAX], t1, t2, s_total[MAX], s_id[MAX];

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d %d %d", &s_cn[i], &t1, &t2);
        s_id[i] = i+1;
        s_total[i] = t1 + t2 + s_cn[i];
    }

    for (i = 0; i < n-1; i++) {
        for (j = i+1; j < n; j++) {
            if ((s_total[j] > s_total[i]) ||
                    (s_total[j] == s_total[i] && s_cn[j] > s_cn[i]) ||
                    (s_cn[j] == s_cn[i] && s_id[j] < s_id[i])) {
                t1 = s_cn[i]; s_cn[i] = s_cn[j]; s_cn[j] = t1;
                t1 = s_total[i]; s_total[i] = s_total[j]; s_total[j] = t1;
                t1 = s_id[i]; s_id[i] = s_id[j]; s_id[j] = t1;
            }
        }
    }

    for (i = 0; i < 5; i++) {
        printf("%d %d\n", s_id[i], s_total[i]);
    }

    return 0;
}
