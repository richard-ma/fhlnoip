#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 64

int main (int argc, char const* argv[])
{
    int n, i, t, max, repeat, ans, v[MAX];

    scanf("%d", &n);
    memset(v, 0, sizeof(int) * MAX);
    for (i = 0; i < n; i++) {
        scanf("%d", &t);
        v[t-1]++;
    }

    max = 0; repeat = 0;
    for (i = 0; i < n; i++) {
        if (max == v[i]) {
            repeat++;
        }
        if (max < v[i]) {
            max = v[i]; ans = i+1; repeat = 0;
        } 
    }

    printf("%d\n", repeat == 0 ? ans : 0);

    return 0;
}
