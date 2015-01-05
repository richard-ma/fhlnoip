/*
 * =================================================================
 *
 *       Filename:  maxSubsequenceSum_on.c
 *
 *    Description:  O n
 *
 *        Version:  1.0
 *        Created:  01/09/2011 10:10:11 PM
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
	int n, i, j, a[100], max, sum;

	scanf("%d", &n);
	for (i=0; i<n; i++) {
		scanf("%d", &a[i]);
	}

	max = 0;
   	sum = 0;
	for (i=0; i<n; i++) {
        /* Debug:
        printf("max: %d sum: %d a[i]: %d\n", max, sum, a[i]);
        */
		sum += a[i];
		if (sum > max) {
			max = sum;
		} else if (sum < 0) {
			sum = 0;
		}
	}

	printf("%d\n", max);

	return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

