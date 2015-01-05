#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100000

int main (int argc, char const* argv[])
{
    int type, s, e, i, j;
    int arr[MAX];
    char str[32];

    scanf("%d", &type);
    if (type == 1) {
    /* type 1 */
        scanf("%s %d %d", str, &s, &e);
    
        for (i = s + e - 2; i >= s - 1; i--) {
            printf("%c", str[i]);
        }
        printf("\n");
    } else {
    /* type 2 */
        scanf("%d %d", &s, &e);
        memset(arr, 0, sizeof(arr));
        arr[0] = 1;
        arr[1] = 1;
        for (i = 2; i <= e; i++) {
            for (j = i * 2; j <= e; j += i) {
                arr[j] = 1;
            }
        }

        for (i = s; i <= e; i++) {
            if (arr[i] == 0) {
                printf("%d", i);
            }
        }
        printf("\n");
    }

    return 0;
}
