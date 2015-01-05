/*
 * =============================================================================
 *
 *       Filename:  stone.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  11/06/2010 05:08:48 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Richard Ma (richard_ma), richard.ma.19850509@gmail.com
 *        Company:  Feng Huli Primary School
 *
 * =============================================================================
 */


#include	<stdlib.h>
#include	<stdio.h>

#define FIRST_TURE 1
#define FIRST_FALSE 0

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  main
 *  Description:  
 * =============================================================================
 */
    int
main ( int argc, char *argv[] )
{
    char ch1, ch2;
    int n, a[1001], i;

    scanf("%d %c", &n, &ch1);

    if (ch1 == 'M') ch2 = 'L';
    else ch2 = 'M';

    a[1] = FIRST_TURE;
    a[2] = FIRST_TURE;

    for (i=3; i<=n; i++) {
        if (a[i-1] == FIRST_TURE && a[i-2] == FIRST_TURE) {
            a[i] = FIRST_FALSE;
        } else {
            a[i] = FIRST_TURE;
        }
    }

    if (a[n] == FIRST_TURE) printf("%c\n", ch1);
    else printf("%c\n", ch2);

    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

