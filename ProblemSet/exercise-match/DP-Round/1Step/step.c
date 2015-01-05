/*
 * =============================================================================
 *
 *       Filename:  step.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  10/21/2010 11:11:46 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Richard Ma (richard_ma), richard.ma.19850509@gmail.com
 *        Company:  Feng Huli Primary School
 *
 * =============================================================================
 */

#include <stdio.h>

int main(int argc, char *argv[])
{
    int a[101], n, i;
    a[1] = 1; a[2] = 2;

    scanf("%d", &n);
    for (i=3; i<=n; i++) {
        a[i] = a[i-1] + a[i-2];
    }

    printf("%d\n", a[n]);

    return 0;
}

