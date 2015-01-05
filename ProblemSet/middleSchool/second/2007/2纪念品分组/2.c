#include <stdio.h>
#include <stdlib.h>

int a[300000];

int my_qsort(int l, int r)
{
    int t, i, j, p;

    t = a[l]; i = p = l; j = r;
    while (i < j) {
        while (p <= j && a[j] >= t) {
            j--;
        }

        if (p <= j) {
            a[p] = a[j];
            p = j;
        }

        while (p >= i && a[i] <= t) {
            i++;
        }

        if (p >= i) {
            a[p] = a[i];
            p = i;
        }
    }

    a[p] = t;

    if (p > l + 1) {
        my_qsort(l, p-1);
    }

    if (p < r - 1) {
        my_qsort(p + 1, r);
    }

    return 0;
}

int main (int argc, char const* argv[])
{
    int upbound, n, i, ans, s, e;

    scanf("%d %d", &upbound, &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    my_qsort(0, n-1);

    ans = 0; s = 0; e = n-1;
    while (s <= e) {
        if (s == e) {
            ans++; break;
        } else if (a[s] + a[e] > upbound) {
            ans++; e--;
        } else {
            ans++; s++; e--;
        }
    }

    printf("%d\n", ans);

    return 0;
}
