/*
 * =================================================================
 *
 *       Filename:  maxSubsequenceSum_on2.c
 *
 *    Description:  O n^2
 *
 *        Version:  1.0
 *        Created:  01/09/2011 06:57:17 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Richard Ma (richard_ma), richard.ma.19850509@gmail.com
 *        Company:  Feng Huli Primary School
 *
 * =================================================================
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
	int n, i, j, sum, max, a[100];

	scanf("%d", &n);
	for (i=0; i<n; i++) {
		scanf("%d", &a[i]);
	}

	max = 0;
	for (i=0; i<n; i++) {
		sum = 0;
		for (j=i; j<n; j++) {
			sum += a[j];

			if (sum > max) max = sum;
		}
	}

	printf("%d\n", max);

	return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

