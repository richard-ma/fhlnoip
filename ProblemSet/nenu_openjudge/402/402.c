#include <stdio.h>

int main(int argc, const char *argv[]) {
    
    int day_of_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    long unsigned int base;
    int n, s_mon, s_day, t_mon, t_day, day_count, i;

    scanf("%d", &n);

    while (n--) {
        scanf("%d %d %ld %d %d", &s_mon, &s_day, &base, &t_mon, &t_day);

        day_count = 0;
        if (s_mon != t_mon) {
            for (i = s_mon + 1; i < t_mon; i++) {
                day_count += day_of_month[i];
            }
            day_count += t_day;
            day_count += day_of_month[s_mon] - s_day;
        } else {
            day_count = t_day - s_day;
        }

        for (i = 0; i < day_count; i++) {
            base *= 2;
        }

        printf("%ld\n", base);
    }

    return 0;
}
