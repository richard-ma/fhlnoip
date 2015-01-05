/*
 * =============================================================================
 *
 *       Filename:  way.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  11/05/2010 04:06:03 PM
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
    int a[21][21];
    int m, n, i, j;

    scanf("%d,%d", &m, &n);

    for (i=1; i<=m; i++) a[i][1] = 1;
    for (i=1; i<=n; i++) a[1][i] = 1;

    for (i=2; i<=m; i++) {
        for (j=2; j<=n; j++) {
            a[i][j] = a[i-1][j] + a[i][j-1];
        }
    }

    printf("%d\n", a[m][n]);

    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

