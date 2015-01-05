#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int n, k, ans;
int a[20];
int b[20];

int cnt;

int check (int n)
{
    int i;

    for (i = 2; i < n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }

    return 1;
}

int search(int z, int total, int q)
{
    int i;


    if (q == k && check(total)) {
        ans++;
        return 0;
    }

    for (i = z+1; i < n; i++) {
        if (b[i] != 1) {
            b[i] = 1;
            search(i, total+a[i], q+1);
            b[i] = 0;
        }
    }

    return 0;
}

int main (int argc, char const* argv[])
{
    int i;
    ans = 0;
    
    cnt = 0;
    memset(b, 0, sizeof(int) * 20);

    scanf("%d %d", &n, &k);

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++) {
        b[i] = 1;
        search(i, a[i], 1);
        b[i] = 0;
    }

    printf("%d\n", ans);

    return 0;
}
