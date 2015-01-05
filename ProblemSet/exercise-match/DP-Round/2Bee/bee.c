/*
 * =============================================================================
 *
 *       Filename:  bee.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  11/05/2010 12:58:25 PM
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

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  main
 *  Description:  
 * =============================================================================
 */
    int
main ( int argc, char *argv[] )
{
    int n, a[101], i;

    scanf("%d", &n);

    a[1] = 1;
    a[2] = 1;

    for (i=3; i<=n; i++) {
        a[i] = a[i-1] + a[i-2];
    }

    printf("%d\n", a[n]);

    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

