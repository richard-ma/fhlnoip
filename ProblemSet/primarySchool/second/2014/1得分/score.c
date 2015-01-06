#include "stdio.h"
#include "stdlib.h"

int main(int argc, char *argv[])
{
    int m, n, i, sum, score;
    char buf[128];

    scanf("%d", &n);
    while(n > 0) {

        scanf("%d", &m);
        scanf("%s", buf);

        sum = 0;
        score = 1;

        for (i = 0; i < m; ++i) {
            if (buf[i] == 'Y') {
                if (i > 0 && buf[i-1] == 'Y') {
                    score++;
                } else {
                    score = 1;
                }

                sum = sum + score;
            }
        }
        
        printf("%d\n", sum);
        n--;
    }
    return 0;
}
