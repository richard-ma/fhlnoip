#include <stdio.h>
#include <stdlib.h> 

int main (int argc, char const* argv[])
{
    int i, j, k, ans;

    ans = 0;
    for (i = 1; i <= 7; i++) {
        for (j = 1; j <= 7; j++) {
            for (k = 1; k <= 7; k++) {
                if ((i-j)*(j-k)*(k-i) != 0) {
                    ans++;
                }
            }
        }
    }

    printf("%d\n", ans);

    return 0;
}
