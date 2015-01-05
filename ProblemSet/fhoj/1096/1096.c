#include <stdio.h>
#include <stdlib.h>

int main (int argc, char const* argv[])
{
    float score;

    scanf("%f", &score);

    if (score >= 85) {
        printf("A\n");
    } else if (score < 85 && score >= 60) {
        printf("B\n");
    } else {
        printf("C\n");
    }

    return 0;
}
