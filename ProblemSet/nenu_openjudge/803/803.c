#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double revp (char op)
{
    char buffer[32];
    double on1, on2, res;

    scanf("%s", buffer);
    if (
            buffer[0] == '+' ||
            buffer[0] == '-' ||
            buffer[0] == '*' ||
            buffer[0] == '/') {
        on1 = revp(buffer[0]);
    } else {
        on1 = atof(buffer);
    }

    scanf("%s", buffer);
    if (
            buffer[0] == '+' ||
            buffer[0] == '-' ||
            buffer[0] == '*' ||
            buffer[0] == '/') {
        on2 = revp(buffer[0]);
    } else {
        on2 = atof(buffer);
    }

    switch (op) {
        case '+':
            res = on1 + on2;
            break; 
        case '-':
            res = on1 - on2;
            break; 
        case '*':
            res = on1 * on2;
            break; 
        case '/':
            res = on1 / on2;
            break; 
    }

    return res;
}

int main (int argc, char const* argv[])
{

    char buffer[2], op;

    scanf("%s", buffer);
    op = buffer[0];

    printf("%f\n", revp(op));

    return 0;
}
