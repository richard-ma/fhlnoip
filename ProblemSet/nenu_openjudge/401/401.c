#include <stdio.h>

int main(int argc, const char *argv[]) {

    int y;
    
    scanf("%d", &y);

    if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0) {
        printf("Y\n");
    } else {
        printf("N\n");
    }

    return 0;
}
