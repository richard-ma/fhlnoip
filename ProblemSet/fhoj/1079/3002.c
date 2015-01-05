#include <stdio.h>
#include <stdlib.h>

int main (int argc, char const* argv[])
{
    int a, b, n;

    // 读入测试用例个数
    scanf("%d", &n);
    // 根据个数做循环，直到n为0
    while (n--) {
        scanf("%d %d", &a, &b);
        printf("%d\n", a+b);
    }

    return 0;
}
