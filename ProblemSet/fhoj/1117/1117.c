#include <stdio.h>
#include <stdlib.h>

int main (int argc, char const* argv[])
{
    int i;

    for (i = 0; i < 26; i++) {
        printf("%c\n", i + 'A');
    }

    return 0;
}
