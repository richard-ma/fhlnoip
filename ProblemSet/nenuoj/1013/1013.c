#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[32];
    int score;
} STUD;

void swap (STUD *a, STUD *b)
{
    STUD t;

    t.score = a->score;     strcpy(t.name, a->name);
    a->score = b->score;    strcpy(a->name, b->name);
    b->score = t.score;     strcpy(b->name, t.name);

    return;
}		/* -----  end of function swap  ----- */

void quick_sort (STUD *array, int begin, int end) 
{
    int r = end;
    int k = begin + 1;

    if (begin >= end) return;

    while (k < r) {
        if (array[begin].score < array[k].score || 
                array[begin].score == array[k].score && strcmp(array[begin].name, array[k].name) > 0) {
            k++;
        } else {
            swap(&array[k], &array[r]);
            r--;
        }
    }

    if (array[k].score > array[begin].score ||
                array[k].score == array[begin].score && strcmp(array[k].name, array[begin].name) < 0) {
        swap(&array[k], &array[begin]);
        quick_sort(array, begin, k-1);
        quick_sort(array, r, end);
    } else {
        swap(&array[--k], &array[begin]);
        quick_sort(array, begin, k-1);
        quick_sort(array, r, end);
    }

    return;
}		/* -----  end of function quick_sort  ----- */

int main(int argc, const char *argv[]) {
    
    int n, ans, i;
    STUD stud_array[100000];

    while (EOF != scanf("%d", &n)) {
        for (i = 0; i < n; i++) {
            scanf("%s %d", stud_array[i].name, &stud_array[i].score);
        }
    
        quick_sort(stud_array, 0, n-1);

        for (i = 0; i < n; i++) {
            printf("%s %d\n", stud_array[i].name, stud_array[i].score);
        }

        printf("\n\n");
    }

    return 0;
}
