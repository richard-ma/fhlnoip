#include <stdio.h>
#include <stdlib.h>

int main (int argc, char const* argv[])
{
    int x;
    float ans;

    scanf("%d", &x);

    x = x / 1000;
    switch (x) {
        case 0: ans = 0; break;
        case 1:
        case 2:
        case 3:
        case 4: ans = x * 0.02; break;
        case 5:
        case 6:
        case 7:
        case 8:
        case 9: ans = x * 0.03; break;
        case 10: ans = x * 0.05; break;
    }

    printf("%.2f\n", ans);

    return 0;
}
