#include <stdio.h>

int main(int argc, const char *argv[]) {
    
    int weekday, i;
    int day_of_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; /* Jan to Dec */

    scanf("%d", &weekday);
    weekday--;

    weekday += 12;
    for (i = 0; i < 12; i++) {
        if (4 == weekday % 7) {
            printf("%d\n", i+1);
        }

        weekday += day_of_month[i];
    }

    return 0;
}
