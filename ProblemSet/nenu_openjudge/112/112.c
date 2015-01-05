#include <stdio.h>
#include <string.h>

int main(int argc, const char *argv[]) {
    
    int n, aver_score, class_score, paper_num, total, max, sum;
    char name[64], max_name[64], is_leader, is_westen;

    scanf("%d", &n);

    total = 0;
    max = 0;
    while (n--) {
        scanf("%s %d %d %c %c %d", name, &aver_score, &class_score, &is_leader, &is_westen, &paper_num);

        sum = 0;

        if (80 < aver_score && 0 < paper_num) {
            sum += 8000;
        }
        if (85 < aver_score && 80 < class_score) {
            sum += 4000;
        }
        if (90 < aver_score) {
            sum += 2000;
        }
        if (85 < aver_score && 'Y' == is_westen) {
            sum += 1000;
        }
        if (80 < class_score && 'Y' == is_leader) {
            sum += 850;
        }

        if (sum > max) {
            max = sum; strcpy(max_name, name);
        }

        total += sum;
    }

    printf("%s\n", max_name);
    printf("%d\n", max);
    printf("%d\n", total);

    return 0;
}
