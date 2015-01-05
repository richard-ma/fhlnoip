#include <stdio.h>
#include <stdlib.h>

int main (int argc, char const* argv[])
{
    int a, b;

    while (scanf("%d %d", &a, &b) != EOF) {
        if (a == 0 && b == 0) break; // 检测输入是否为0
        printf("%d\n", a+b);
    }

    return 0;
}
